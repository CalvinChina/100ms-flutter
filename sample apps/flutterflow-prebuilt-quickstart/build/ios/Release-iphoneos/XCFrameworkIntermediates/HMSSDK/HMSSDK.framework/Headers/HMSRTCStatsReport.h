//
//  HMSRTCStatsReport.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 14.01.2022.
//  Copyright © 2022 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class HMSRTCStats;

@interface HMSRTCStatsReport : NSObject
@property (nonatomic, strong, readonly) HMSRTCStats *combined;
@property (nonatomic, strong, readonly) HMSRTCStats *audio;
@property (nonatomic, strong, readonly) HMSRTCStats *video;
@end


NS_ASSUME_NONNULL_END
