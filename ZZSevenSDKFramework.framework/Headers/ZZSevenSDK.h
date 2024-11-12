//
//  ZZSevenSDK.h
//  ZZSevenSDKFramework
//
//  Created by 司墨网络 on 2023/6/1.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import <ZZSevenSDKFramework/ZZSevenSDKLoginBlockModel.h>
#import <ZZSevenSDKFramework/ZZSevenSDKCreateRoleModel.h>

#import <ZZSevenSDKFramework/ZZSevenSDKLogoutModel.h>
#import <ZZSevenSDKFramework/ZZSevenSDKPayInfoModel.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ZZSevenSDKDelegate <NSObject>

@required
- (void)SDKInitSuccess;
- (void)SDKInitFailWithErrorMsg:(NSString *)errorMsg;
- (void)logoutWithResult:(ZZSevenSDKLogoutModel *)logoutModel;

@end

@interface ZZSevenSDK : NSObject

+ (id)sharedInstance;
- (void)initSDKWithDelegate:(id)delegate;
- (void)loginWithSuccessBlock:(void(^)(ZZSevenSDKLoginBlockModel *loginModel))successBlock
                    failBlock:(void(^)(ZZSevenSDKLoginBlockModel *loginModel))failBlock;
- (void)roleCreateWithUserInfo:(ZZSevenSDKCreateRoleModel *)createRoleModel;
- (void)setGameAccountWithUserInfo:(ZZSevenSDKCreateRoleModel *)createRoleModel;
- (void)upLevelWithUserInfo:(ZZSevenSDKCreateRoleModel *)createRoleModel;

- (void)payWithPayInfoModel:(ZZSevenSDKPayInfoModel *)payInfoModel
               successBlock:(void(^)(void))successBlock
                  failBlock:(void(^)(NSInteger code, NSString *errorMsg))failBlock;
- (void)exitWithSuccessBlock:(void(^)(void))successBlock
                   failBlock:(void(^)(void))failBlock;

- (void)initLogoutListenerWithDelegate:(id)logoutDelegate;
- (void)logout;

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url;
- (void)applicationWillResignActive:(UIApplication *)application;
- (void)applicationDidEnterBackground:(UIApplication *)application;
- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo;
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;
- (void)applicationWillEnterForeground:(UIApplication *)application;
- (void)applicationDidBecomeActive:(UIApplication *)application;
- (void)applicationWillTerminate:(UIApplication *)application;
- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void(^)(NSArray * restorableObjects))restorationHandler;
- (void)applicationDidReceiveMemoryWarning:(UIApplication *)application;
- (void)applicationSignificantTimeChange:(UIApplication *)application;
- (void)applicationDidFinishLaunching:(UIApplication *)application;
- (UIInterfaceOrientationMask)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window;

@end

NS_ASSUME_NONNULL_END
