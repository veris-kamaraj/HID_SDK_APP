//
//  OrigoNAOGeofencingHandler.h
//  OrigoNAOSDK
//
//

#import <Foundation/Foundation.h>
#import <OrigoNAOSDK/OrigoNAOLocationHandleDelegate.h>
#import <OrigoNAOSDK/OrigoNAOServiceHandle.h>

NS_ASSUME_NONNULL_BEGIN

@interface OrigoNAOGeofencingHandle : OrigoNAOServiceHandle

-(instancetype _Nonnull) init __attribute__((unavailable("init not available, please use initWithKey: delegate:")));

- (id _Nonnull)initWithKey:(NSString * _Nonnull)key delegate:(id<OrigoNAOLocationHandleDelegate> _Nonnull)delegate;

@end

NS_ASSUME_NONNULL_END
