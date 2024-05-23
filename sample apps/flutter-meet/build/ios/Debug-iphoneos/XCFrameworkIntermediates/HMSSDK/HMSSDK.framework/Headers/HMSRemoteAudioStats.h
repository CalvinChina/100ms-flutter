//
//  HMSRemoteAudioStats.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 14.01.2022.
//  Copyright © 2022 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HMSReceiverStats.h"

NS_ASSUME_NONNULL_BEGIN

@interface HMSRemoteAudioStats : HMSReceiverStats

// Remote audio stats
@property (nonatomic) double audio_level;
@property (nonatomic) unsigned long long audio_concealed_samples;
@property (nonatomic) unsigned long long audio_total_samples_received;
@property (nonatomic) unsigned long long audio_concealment_events;
@property (nonatomic) unsigned long long fec_packets_discarded;
@property (nonatomic) unsigned long long fec_packets_received;
@property (nonatomic) double total_samples_duration;
@property (nonatomic) double jitter_buffer_delay;
@property (nonatomic) long long estimatedPlayoutTimestamp;

@end

NS_ASSUME_NONNULL_END
