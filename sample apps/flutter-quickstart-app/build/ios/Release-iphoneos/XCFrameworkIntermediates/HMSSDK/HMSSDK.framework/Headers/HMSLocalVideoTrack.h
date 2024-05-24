//
//  HMSLocalVideoTrack.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 23.03.2021.
//  Copyright © 2021 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HMSVideoTrack.h"
#import "HMSCommonDefs.h"
#import <AVFoundation/AVFoundation.h>

@class HMSVideoTrackSettings;

NS_ASSUME_NONNULL_BEGIN

@interface HMSLocalVideoTrack : HMSVideoTrack
@property (nonatomic, copy) HMSVideoTrackSettings *settings;

- (void)setMute:(BOOL)mute;

- (void)switchCamera;
- (void)switchCamera:(nullable void (^)(NSError *_Nullable))completion;
- (void)setFocus:(CGPoint)point;
- (void)modifyCaptureDeviceUsingBlock:(void (NS_NOESCAPE ^)(AVCaptureDevice *__nullable device))block;
- (void)captureImageAtMaxSupportedResolutionWithFlash:(BOOL)flashEnabled completion:(void (^)(UIImage *__nullable image))completion;

@end

NS_ASSUME_NONNULL_END
