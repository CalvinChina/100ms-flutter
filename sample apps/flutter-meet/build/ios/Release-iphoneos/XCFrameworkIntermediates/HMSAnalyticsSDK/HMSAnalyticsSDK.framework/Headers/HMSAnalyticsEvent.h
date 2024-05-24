//
//  HMSAnalyticsEvent.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 01.02.2021.
//  Copyright © 2021 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HMSAnalyticsSDK/HMSAnalyticsEventLevel.h>

NS_ASSUME_NONNULL_BEGIN

@protocol HMSAnalyticsEvent <NSObject>
- (NSString *)name;
- (NSDate *)timestamp;
- (HMSAnalyticsEventLevel)level;
- (BOOL)includesPII;
- (NSDictionary * _Nullable)properties;
- (NSDictionary * _Nullable)peer;
- (NSString *)token;
- (NSString *)agent;
- (NSString *)deviceID;
- (NSString *)eventID;
- (NSString *)endpoint;
- (NSString *)websocketEndpoint;

- (NSDictionary *)JSONDictionary;

@end

NS_ASSUME_NONNULL_END
