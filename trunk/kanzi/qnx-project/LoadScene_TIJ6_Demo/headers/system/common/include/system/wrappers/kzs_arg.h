/**
* \file
* Variable argument list wrapper
* 
* Copyright 2008-2014 by Rightware. All rights reserved.
*/
#ifndef KZS_ARG_H
#define KZS_ARG_H


#include <system/kzs_types.h> /*lint -efile(766,system/kzs_types.h) This file is referenced inside macros. */
#include <system/kzs_header.h>

#include <stdarg.h> /*lint -efile(766,stdarg.h) This file is referenced inside macros. */


KZ_HEADER_BEGIN


/**
 * Variable argument iterator type. kzArgList may not be passed by value
 * to a function nor copied without using kzArgListCopy().
 */
typedef va_list kzArgList; /*lint -etype(818,kzArgList) */

/**
 * Variable argument iterator constant modifier.
 */
#if defined __GNUC__ && defined __LP64__
#define KZ_CONST_ARGLIST /* 64-bit GCC doesn't allow passing kzArgList as const pointer. */
#else
#define KZ_CONST_ARGLIST const
#endif

/** Makes a copy of a variable argument list. */
void kzArgListCopy(kzArgList* target, KZ_CONST_ARGLIST kzArgList* source);
/** Deletes a copy of a variable argument list. Must be called once for every kzArgListCopy(). */
void kzArgListEnd(kzArgList* list);

/* In major implementations, when passed through the variable argument
 list '...' - construct, chars are promoted to ints and floats to doubles*/

/** Reads a float from variable argument iterator. */
#define KZ_READ_FLOAT_FROM_ARGLIST(list_param) /*lint -e(662,826)*/ (kzFloat)va_arg((list_param), double)
/** Reads an integer from variable argument iterator. */
#define KZ_READ_INT_FROM_ARGLIST(list_param) /*lint -e(662,826)*/ (kzInt)va_arg((list_param), int)
/** Reads an unsigned integer from variable argument iterator. */
#define KZ_READ_UINT_FROM_ARGLIST(list_param) /*lint -e(662,826)*/ (kzUint)va_arg((list_param), unsigned int)
/** Reads a boolean from variable argument iterator. */
#define KZ_READ_BOOL_FROM_ARGLIST(list_param) /*lint -e(662,826)*/ (kzBool)va_arg((list_param), int)
/** Reads a character from variable argument iterator. */
#define KZ_READ_CHAR_FROM_ARGLIST(list_param) /*lint -e(662,826)*/ (kzChar)va_arg((list_param), int)
/** Reads a string from variable argument iterator. */
#define KZ_READ_STRING_FROM_ARGLIST(list_param) /*lint -e(662,826)*/ (kzString)va_arg((list_param), char*)
/** Reads a pointer from variable argument iterator. */
#define KZ_READ_POINTER_FROM_FROM_ARGLIST(list_param) /*lint -e(662,826)*/ (void*)va_arg((list_param), void*)


KZ_HEADER_END


#endif
