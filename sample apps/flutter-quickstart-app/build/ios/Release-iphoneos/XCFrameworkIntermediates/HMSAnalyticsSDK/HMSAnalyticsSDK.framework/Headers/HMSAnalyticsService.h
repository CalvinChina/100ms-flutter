//
//  HMSAnalyticsService.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 01.02.2021.
//  Copyright © 2021 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HMSAnalyticsSDK/HMSAnalyticsEvent.h>

@protocol HMSLogger;
@protocol HMSAnalyticsEventTransport;

NS_ASSUME_NONNULL_BEGIN

@protocol HMSAnalyticsService <NSObject>
@property (nonatomic) HMSAnalyticsEventLevel level;
@property (nonatomic) BOOL shouldSkipPIIEvents;
@property (nonatomic, weak, nullable) NSObject<HMSLogger> *logger;

- (void)addTransport:(NSObject<HMSAnalyticsEventTransport> *)transport;
- (void)removeTransport:(NSObject<HMSAnalyticsEventTransport> *)transport;

- (void)queueEvent:(NSObject<HMSAnalyticsEvent> *)event;
- (void)flush;
@end

NS_ASSUME_NONNULL_END
