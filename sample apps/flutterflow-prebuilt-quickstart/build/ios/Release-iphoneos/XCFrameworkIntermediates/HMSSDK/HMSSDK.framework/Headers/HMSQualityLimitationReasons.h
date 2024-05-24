//
//  HMSQualityLimitationReasons.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 29.12.2022.
//  Copyright © 2022 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, HMSQualityLimitationReason) {
    kHMSQualityLimitationReasonCPU,
    kHMSQualityLimitationReasonBandwidth,
    kHMSQualityLimitationReasonNone,
    kHMSQualityLimitationReasonOther,
    kHMSQualityLimitationReasonUnkown
};

@interface HMSQualityLimitationReasons : NSObject
@property (nonatomic) double bandwidth;
@property (nonatomic) double cpu;
@property (nonatomic) double none;
@property (nonatomic) double other;
@property (nonatomic) int qualityLimitationResolutionChanges;
@property (nonatomic) HMSQualityLimitationReason reason;

@end

NS_ASSUME_NONNULL_END
