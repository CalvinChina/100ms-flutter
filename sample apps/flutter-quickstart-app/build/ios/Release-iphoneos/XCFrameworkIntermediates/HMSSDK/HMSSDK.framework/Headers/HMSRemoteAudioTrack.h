//
//  HMSRemoteAudioTrack.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 23.03.2021.
//  Copyright © 2021 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HMSAudioTrack.h"

NS_ASSUME_NONNULL_BEGIN

@interface HMSRemoteAudioTrack : HMSAudioTrack
- (BOOL)isPlaybackAllowed;
- (void)setPlaybackAllowed:(BOOL)playbackAllowed;

// Volume is a gain value in the range [0, 10].
- (void)setVolume:(double)volume;

@end

NS_ASSUME_NONNULL_END
