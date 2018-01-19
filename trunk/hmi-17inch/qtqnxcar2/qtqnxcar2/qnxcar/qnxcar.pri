DEPENDPATH += $$PWD
INCLUDEPATH += $$PWD

SOURCES += \
	$$PWD/AddressbookModel.cpp \
	$$PWD/ApplicationFilterModel.cpp \
	$$PWD/ApplicationListModel.cpp \
	$$PWD/DatabaseManager.cpp \
	$$PWD/Hvac.cpp \
	$$PWD/Launcher.cpp \
	$$PWD/Location.cpp \
	$$PWD/LocationCategoryFilterModel.cpp \
	$$PWD/LocationCategoryModel.cpp \
	$$PWD/LocationModel.cpp \
	$$PWD/LocationObject.cpp \
	$$PWD/ManeuversModel.cpp \
	$$PWD/MessagesModel.cpp \
	$$PWD/MessagesFilterModel.cpp \
	$$PWD/Navigation.cpp \
	$$PWD/NavigationHistoryModel.cpp \
	$$PWD/PlaylistModel.cpp \
	$$PWD/ProfileDetailsObject.cpp \
	$$PWD/ProfileManager.cpp \
	$$PWD/ProfileModel.cpp \
	$$PWD/Radio.cpp \
	$$PWD/Sensors.cpp \
	$$PWD/Settings.cpp \
	$$PWD/SettingsModels.cpp \
	$$PWD/SourcesModel.cpp \
	$$PWD/SqlQueryModel.cpp \
	$$PWD/SqlTableModel.cpp \
	$$PWD/Theme.cpp \
	$$PWD/User.cpp \
	$$PWD/VideosModel.cpp \
	$$PWD/FavouriteModel.cpp \
	$$PWD/AddressbookSearchModel.cpp \
	$$PWD/NavigationSettingsModel.cpp \
	$$PWD/CallerIDObject.cpp \
	$$PWD/mediaplayer/MediaNode.cpp \
	$$PWD/mediaplayer/MediaSource.cpp \
	$$PWD/mediaplayer/TypeConverter.cpp \
	qnxcar/mediaplayer/MediaNodeModel.cpp \
	qnxcar/mediaplayer/BrowseModel.cpp \
	qnxcar/mediaplayer/Metadata.cpp \
	qnxcar/mediaplayer/Track.cpp \
	qnxcar/mediaplayer/CurrentTrack.cpp \
	qnxcar/mediaplayer/CurrentState.cpp \
	qnxcar/mediaplayer/PlayerState.cpp \
	qnxcar/mediaplayer/SearchSourcesModel.cpp \
	qnxcar/mediaplayer/SearchModel.cpp \
	qnxcar/mediaplayer/TrackSessionModel.cpp \
	qnxcar/mediaplayer/PagedMediaNodeModel.cpp \
	qnxcar/mediaplayer/UnifiedSourcesModel.cpp \
	$$PWD/LampStatus.cpp \
	$$PWD/SmartDevice.cpp \
	$$PWD/MusicControl.cpp \
	$$PWD/SeatControl.cpp \
	$$PWD/DoorControl.cpp \
        qnxcar/AppStatus.cpp \
        qnxcar/CameraControl.cpp \
	qnxcar/Geolocation.cpp \
	qnxcar/ThemeControl.cpp

HEADERS += \
	$$PWD/AddressbookModel.h \
	$$PWD/ApplicationFilterModel.h \
	$$PWD/ApplicationListModel.h \
	$$PWD/DatabaseManager.h \
	$$PWD/Hvac.h \
	$$PWD/Hvac_p.h \
	$$PWD/Launcher.h \
	$$PWD/Launcher_p.h \
	$$PWD/Location.h \
	$$PWD/LocationCategories_p.h \
	$$PWD/LocationCategoryFilterModel.h \
	$$PWD/LocationCategoryModel.h \
	$$PWD/LocationModel.h \
	$$PWD/LocationObject.h \
	$$PWD/Maneuver_p.h \
	$$PWD/ManeuversModel.h \
	$$PWD/MessagesModel.h \
	$$PWD/MessagesModel_p.h \
	$$PWD/MessagesFilterModel.h \
	$$PWD/Navigation.h \
	$$PWD/NavigationHistoryModel.h \
	$$PWD/NavigationHistoryModel_p.h \
	$$PWD/Navigation_p.h \
	$$PWD/PlaylistModel.h \
	$$PWD/PlaylistModel_p.h \
	$$PWD/ProfileData_p.h \
	$$PWD/ProfileDetailsObject.h \
	$$PWD/ProfileManager.h \
	$$PWD/ProfileModel.h \
	$$PWD/Radio.h \
	$$PWD/Radio_p.h \
	$$PWD/Sensors.h \
	$$PWD/Sensors_p.h \
	$$PWD/Settings.h \
	$$PWD/SettingsModels.h \
	$$PWD/Settings_p.h \
	$$PWD/SourcesModel.h \
	$$PWD/SqlQueryModel.h \
	$$PWD/SqlQueryModel_p.h \
	$$PWD/SqlTableModel.h \
	$$PWD/SqlTableModel_p.h \
	$$PWD/Theme.h \
	$$PWD/Theme_p.h \
	$$PWD/User.h \
	$$PWD/User_p.h \
	$$PWD/VideosModel.h \
	$$PWD/FavouriteModel.h \
	$$PWD/FavouriteModel_p.h \
	$$PWD/AddressbookSearchModel.h \
	$$PWD/NavigationSettingsModel.h \
	$$PWD/NavigationSettingsModel_p.h \
	$$PWD/CallerIDObject.h \
	$$PWD/CallerID_p.h \
	$$PWD/mediaplayer/MediaNode.h \
	$$PWD/mediaplayer/MediaNodeType.h \
	$$PWD/mediaplayer/MediaSource.h \
	$$PWD/mediaplayer/MediaSourceCapability.h \
	$$PWD/mediaplayer/MediaSourceType.h \
	$$PWD/mediaplayer/TypeConverter.h \
	qnxcar/mediaplayer/MediaNodeModel.h \
	qnxcar/mediaplayer/BrowseModel.h \
	qnxcar/mediaplayer/Metadata.h \
	qnxcar/mediaplayer/Track.h \
	qnxcar/mediaplayer/CurrentTrack.h \
	qnxcar/mediaplayer/CurrentState.h \
	qnxcar/mediaplayer/PlayerState.h \
	qnxcar/mediaplayer/ShuffleMode.h \
	qnxcar/mediaplayer/RepeatMode.h \
	qnxcar/mediaplayer/PlayerStatus.h \
	qnxcar/mediaplayer/SearchSourcesModel.h \
	qnxcar/mediaplayer/SearchModel.h \
	qnxcar/mediaplayer/TrackSessionModel.h \
	qnxcar/mediaplayer/PagedMediaNodeModel.h \
	qnxcar/mediaplayer/UnifiedSourcesModel.h \
	$$PWD/LampStatus.h \
	$$PWD/LampStatus_p.h \
	$$PWD/SmartDevice.h \
	$$PWD/SmartDevice_p.h \
	$$PWD/MusicControl.h \
	$$PWD/MusicControl_p.h \
	$$PWD/SeatControl.h \
	$$PWD/SeatControl_p.h \
	$$PWD/DoorControl.h \
	$$PWD/DoorControl_p.h \
	qnxcar/AppStatus.h \
        qnxcar/AppStatus_p.h \
        qnxcar/CameraControl.h \
        qnxcar/CameraControl_p.h \
	qnxcar/Geolocation.h \
	qnxcar/Geolocation_p.h \
	qnxcar/ThemeControl.h \
	qnxcar/ThemeControl_p.h
