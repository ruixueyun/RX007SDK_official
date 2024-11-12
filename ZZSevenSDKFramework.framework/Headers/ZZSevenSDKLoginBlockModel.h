//
//  ZZSevenSDKLoginBlockModel.h
//  ZZSevenSDKFramework
//
//  Created by 司墨网络 on 2023/6/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZZSevenSDKLoginBlockModel : NSObject

@property (nonatomic, strong) NSString *errorMsg;
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *ageStatus;
@property (nonatomic, strong) NSString *token;
@property (nonatomic, strong) NSString *auth;

@end


NS_ASSUME_NONNULL_END
