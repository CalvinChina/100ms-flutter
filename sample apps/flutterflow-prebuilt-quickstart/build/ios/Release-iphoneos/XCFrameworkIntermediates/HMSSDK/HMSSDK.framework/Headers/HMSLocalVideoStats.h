//
//  HMSLocalVideoStats.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 14.01.2022.
//  Copyright © 2022 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HMSSenderStats.h"
#import "HMSCommonDefs.h"

NS_ASSUME_NONNULL_BEGIN

@class HMSQualityLimitationReasons;

@interface HMSLocalVideoStats : HMSSenderStats
@property (nonatomic, strong, nullable) NSNumber *simulcastLayerId;
@property (nonatomic) HMSVideoResolution resolution;
@property (nonatomic) double frameRate;
@property (nonatomic) HMSQualityLimitationReasons *qualityLimitations;
@end

NS_ASSUME_NONNULL_END
