//
//  HMSAnalyticsEventTransport.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 01.02.2021.
//  Copyright © 2021 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^HMSOperationStatusHandler)(BOOL isSuccess, NSError* _Nullable error);

@class HMSAnalyticsEventTransport;

@protocol HMSAnalyticsEventTransport <NSObject>
- (void)sendEvent:(NSObject<HMSAnalyticsEvent> *)event nextTransports:(NSArray<NSObject<HMSAnalyticsEventTransport> *> *)transports completion:(HMSOperationStatusHandler)completion;
@end

NS_ASSUME_NONNULL_END
