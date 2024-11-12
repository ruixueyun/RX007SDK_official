//
//  ZZSevenSDKPayInfoModel.h
//  ZZSevenSDKFramework
//
//  Created by 司墨网络 on 2023/6/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZZSevenSDKPayInfoModel : NSObject

// 订单号
@property (nonatomic, strong) NSString *cpOrderId;
// 商品编号
@property (nonatomic, strong) NSString *productId;
// 商品名字
@property (nonatomic, strong) NSString *productName;
// 商品金额 单位分 1元传100
@property (nonatomic, strong) NSString *money;

@end

NS_ASSUME_NONNULL_END
