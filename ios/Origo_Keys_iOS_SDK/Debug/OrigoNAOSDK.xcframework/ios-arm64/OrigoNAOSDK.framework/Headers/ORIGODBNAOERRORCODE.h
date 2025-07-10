//
//  ORIGODBNAOERRORCODE.h
//  OrigoNAOSDK
//
//


#import <Foundation/Foundation.h>

/**
 *--objc-type-prefix DB
 * Error codes
 */
typedef NS_ENUM(NSInteger, ORIGODBNAOERRORCODE)
{
    /** Invalid API key : inconsistent key accross services or key does not match PDB: check for typo in your key, check your site details on Origo Cloud and contact HID Origo Team. */
    ORIGO_DBNAOERRORCODE_INVALID_API_KEY,
    /** Problem occured during a service instantiation / termination */
    ORIGO_DBNAOERRORCODE_SERVICE_LIFECYCLE,
    /** Unable to synchronize data for your site: problem with the connection or missing inputs */
    ORIGO_DBNAOERRORCODE_DATA_SYNCHRO,
    /** Unsupported OS */
    ORIGO_DBNAOERRORCODE_UNSUPPORTED_OS,
    /** for internal use, you should not see those. */
    ORIGO_DBNAOERRORCODE_INTERNAL_ERROR,
    /** generic error code */
    ORIGO_DBNAOERRORCODE_GENERIC_ERROR,
};
