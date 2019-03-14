
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SVProgressHUDExtManage : NSObject

+ (void)SVProgressHUDExtStart;

+ (void)SVProgressHUDExtWithMessage:(NSString *)message;

+ (void)SVProgressHUDExtend:(UIView *)view;

+ (NSString *)SVProgressHUDExtEncode:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
