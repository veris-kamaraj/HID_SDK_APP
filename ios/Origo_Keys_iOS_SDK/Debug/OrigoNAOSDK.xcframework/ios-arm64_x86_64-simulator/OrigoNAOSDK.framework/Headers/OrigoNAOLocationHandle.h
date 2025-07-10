//
//  OrigoNAOLocationHandle.h
//  OrigoNAOSDK
//
//

#import <Foundation/Foundation.h>
#import <OrigoNAOSDK/OrigoNAOLocationHandleDelegate.h>
#import <OrigoNAOSDK/OrigoNAOServiceHandle.h>

NS_ASSUME_NONNULL_BEGIN

@interface OrigoNAOLocationHandle : OrigoNAOServiceHandle

-(instancetype _Nonnull) init __attribute__((unavailable("init not available, please use initWithKey: delegate: sensorsDelegate:")));

- (id _Nonnull)initWithKey:(NSString * _Nonnull)key delegate:(id<OrigoNAOLocationHandleDelegate> _Nonnull)delegate;

- (void)uploadNAOLogInfo:(NSString *)uniqueKey;
@end

NS_ASSUME_NONNULL_END
