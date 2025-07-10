//
//  ORIGODBTNAOFIXSTATUS.h
//  OrigoNAOSDK
//
//

#import <Foundation/Foundation.h>

/**
 *--objc-type-prefix DB
 * Location service status
 */
typedef NS_ENUM(NSInteger, ORIGODBTNAOFIXSTATUS)
{
    /** A critical error has occurred: location is not available; details about the error are returned by onError callback. */
    ORIGO_DBTNAOFIXSTATUS_NAO_OUT_OF_SERVICE,
    /** Location is unavailable for lack of sensor input: sensors could have been turned off or device might be going off-site. */
    ORIGO_DBTNAOFIXSTATUS_NAO_TEMPORARY_UNAVAILABLE,
    /** Location fixes are being produced at a normal rate. */
    ORIGO_DBTNAOFIXSTATUS_NAO_FIX_AVAILABLE,
    /** Location is unavailable as device is off-site. */
    ORIGO_DBTNAOFIXSTATUS_NAO_FIX_UNAVAILABLE,
    /** Location is available, but is not computed according to mobile site data (mobile site only) */
    ORIGO_DBTNAOFIXSTATUS_NAO_COARSE_LOCATION,
};
