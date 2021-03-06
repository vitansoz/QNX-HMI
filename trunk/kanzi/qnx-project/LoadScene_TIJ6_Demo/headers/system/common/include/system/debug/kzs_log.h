/**
 * \file
 * Logging.
 * 
 * Copyright 2008-2014 by Rightware. All rights reserved.
 */
#ifndef KZS_LOG_H
#define KZS_LOG_H


#include <system/kzs_types.h>
#include <system/debug/kzs_error.h>
#include <system/kzs_header.h>


KZ_HEADER_BEGIN


/** If defined, log functions can be safely called from multiple threads. */
#if 0
#define KZS_LOG_MULTITHREADING_ENABLED
#endif


/** Log level type definition. */
typedef kzUint KzsLogLevel;


#define KZS_LOG_LEVEL_ERROR (KzsLogLevel)10 /**< Error log level. Not to be used outside internal error generator macros. */
#define KZS_LOG_LEVEL_USER_WARNING (KzsLogLevel)50 /**< Warning log level, which is important enough to show for end-user also. */
#define KZS_LOG_LEVEL_WARNING (KzsLogLevel)100 /**< Warning log level. */
#define KZS_LOG_LEVEL_INFO (KzsLogLevel)1000 /**< Information log level. */
#define KZS_LOG_LEVEL_DEBUG (KzsLogLevel)5000 /**< Debug log level. */
#define KZS_LOG_LEVEL_DETAIL (KzsLogLevel)10000 /**< Detailed information log level. */

/** Threshold for which log levels are enabled. */
#ifdef _DEBUG
#define KZS_LOG_LEVEL_CONTEXT_INFO_THRESHOLD KZS_LOG_LEVEL_DEBUG
#else
#define KZS_LOG_LEVEL_CONTEXT_INFO_THRESHOLD KZS_LOG_LEVEL_INFO
#endif

/** Log handler function type. */
typedef kzsError (*KzsLogFunction)(KzsLogLevel level, kzsError errorCode, kzString message, kzString file, kzUint line, void* userData);


/** Initialize logging. */
kzsError kzsLogInitialize(void);

/** Uninitialize logging. */
kzsError kzsLogUninitialize(void);

/** Initializes logging for thread. */
kzsError kzsLogInitializeThread(void);

/** De-initializes logging for thread. */
kzsError kzsLogDeinitializeThread(void);

/** Register log handler. */
kzsError kzsLogRegisterHandler(KzsLogFunction logFunction, void* userData);

/** Unregister log handler. */
void kzsLogUnregisterHandler(KzsLogFunction logFunction);

/** Creates a log entry of given level with the message. Users should not use KZS_LOG_LEVEL_ERROR as it is reserved for internal usage. */
#define kzsLog(level, message) kzsLog_private(level, KZS_SUCCESS, message, "", 0)

/** 
 * \see kzsLogFormat 
 * formatArgs is the collection of format string and format arguments in parentheses, 
 * i.e. kzsLogFormat(KZS_LOG_LEVEL_WARNING, ("Trying to get integer value from setting \'%s\' which is not a number.", settingName));
 */
#define kzsLogFormat(level, formatArgs) KZ_MULTILINE_MACRO \
    kzString logMessage_var = kzsLogMessageFormat_private formatArgs; \
    kzsLog_private(level, KZS_SUCCESS, logMessage_var, "", 0); \
KZ_MULTILINE_MACRO_END

/** \see kzsLog */
void kzsLog_private(KzsLogLevel level, kzsError errorCode, kzString message, kzString file, kzUint line);

/** Formats and results log string. */
kzString kzsLogMessageFormat_private(kzString format, ...);

/** Basic logger handler. */
kzsError kzsLogBasicLogger(KzsLogLevel level, kzsError errorCode, kzString message, kzString file, kzUint line, void* userData);

/** Creates default loggers. */
kzsError kzsLogCreateDefaultLoggers(void);


KZ_HEADER_END


#endif
