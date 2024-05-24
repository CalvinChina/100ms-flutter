//
//  HMSDefaultAnalyticsService.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 01.02.2021.
//  Copyright © 2021 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HMSAnalyticsSDK/HMSAnalyticsService.h>

@protocol HMSAnalyticsEventTransport;

NS_ASSUME_NONNULL_BEGIN

@interface HMSDefaultAnalyticsService : NSObject <HMSAnalyticsService>
@property (nonatomic) HMSAnalyticsEventLevel level;
@property (nonatomic) BOOL shouldSkipPIIEvents;
@property (nonatomic, weak, nullable) NSObject<HMSLogger> *logger;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
