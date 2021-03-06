//
//  ChatHelpr.h
//  CDChatList
//
//  Created by chdo on 2017/11/17.
//

#import <Foundation/Foundation.h>
#import "ChatConfiguration.h"

@interface ChatHelpr : NSObject

#pragma mark 组件配置相关
+(ChatConfiguration *)defaultConfiguration;
+(void)setDefaultConfiguration:(ChatConfiguration *)config;


#pragma mark  表情相关
/**
 表情字典
 */
+(void)setDefaultEmoticonDic:(NSDictionary<NSString *,UIImage *> *)dic;

#pragma mark 图片资源
+(NSDictionary<NSString *,UIImage *> *)defaultImageDic;
+(void)setDefaultImageDic:(NSDictionary<NSString *,UIImage *> *)dic;




@end
