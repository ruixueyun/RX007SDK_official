//
//  ZZSevenSDKCreateRoleModel.h
//  ZZSevenSDKFramework
//
//  Created by 司墨网络 on 2023/6/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/*
 {
   "token": "NzU5NDNmNWJhYTc3YjI3N2YyZjNiZTE4MzBlMTE3N2MjMTM3ODQxNA==",
   "auth": "OGMyZjA1NjNkODM4MmRhMDkyMTczYzkxZDFhYTZhYzcjMTQwOTQ5Mg==",
   "uid": 1409492,
   "appId": 3180,
   "aid": 0,
   "user_id": "1409492",
   "game_appid": "9DE1084180557499D",
   "server_id": 1050506,
   "server_name": "乐逍遥506服",
   "role_id": "1050506000664",
   "role_name": "司霖寒",
   "role_level": 1,
   "combat_number": "",
   "channelExt": "",
   "timestamp": 1686019030,
   "sign": "a",
   "type": 2,
   "idfv": "unknown",
   "idfa": "unknown",
   "imei": "unknown",
   "oaid": "unknown",
   "androidid": "unknown",
   "deviceId": "unknown",
   "network": "other",
   "op": "unknown",
   "sdk_version": 111,
   "device_type": "unknown",
   "os": "pc",
   "os_version": "unknown",
   "micro": 0,
   "bind_phone": 0,
   "notice_switch": 0
 }
 */

/*
 map.put("server_id", "123"); //区服IDd
 map.put("server_name", "测试1区"); //区服名称
 map.put("role_id", "651324"); //角色ID
 map.put("role_name", "老道"); //角色名称
 map.put("role_level", "59"); //角色等级
 map.put("extra", "{other:\"other\"}"); //额外参数
 map.put("combat_number", "8000"); //默认传0
 */
@interface ZZSevenSDKCreateRoleModel : NSObject

@property (nonatomic, strong) NSString *server_id;
@property (nonatomic, strong) NSString *server_name;
@property (nonatomic, strong) NSString *role_id;
@property (nonatomic, strong) NSString *role_name;
@property (nonatomic, strong) NSString *role_level;
@property (nonatomic, strong) NSString *extra;
@property (nonatomic, strong) NSString *combat_number;

@end

NS_ASSUME_NONNULL_END
