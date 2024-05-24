//
//  HMSRemoteVideoStats.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 14.01.2022.
//  Copyright © 2022 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HMSReceiverStats.h"
#import "HMSCommonDefs.h"

NS_ASSUME_NONNULL_BEGIN

@interface HMSRemoteVideoStats : HMSReceiverStats
@property (nonatomic) HMSVideoResolution resolution;
@property (nonatomic) double frameRate;

@property (nonatomic) double avg_frames_received_per_sec;
@property (nonatomic) double avg_frames_dropped_per_sec;
@property (nonatomic) double avg_frames_decoded_per_sec;

@property (nonatomic) unsigned long long total_pli_count;
@property (nonatomic) unsigned long long total_nack_count;
@property (nonatomic) long long estimatedPlayoutTimestamp;
@property (nonatomic) unsigned long long frame_width;
@property (nonatomic) unsigned long long frame_height;
@property (nonatomic) unsigned long long pause_count;

@property (nonatomic) double pause_duration_seconds;
@property (nonatomic) unsigned long long freeze_count;
@property (nonatomic) double freeze_duration_seconds;
@property (nonatomic) double jitter_buffer_delay;

@end

NS_ASSUME_NONNULL_END
