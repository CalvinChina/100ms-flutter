//
//  HMSTrackSettings.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 30.03.2021.
//  Copyright © 2021 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "HMSCommonDefs.h"
NS_ASSUME_NONNULL_BEGIN

@class HMSVideoPlugin;
@class HMSAudioSource;

@interface HMSSimulcastLayerSettings : NSObject <NSCopying>
@property (nonatomic, assign, readonly) NSInteger maxBitrate;
@property (nonatomic, assign, readonly) NSInteger maxFrameRate;
@property (nonatomic, assign, readonly) double scaleResolutionDownBy;
@property (nonatomic, copy, readonly) NSString *rid;

- (instancetype)initWitRID:(NSString *)rid maxBitrate:(NSInteger)maxBitrate maxFrameRate:(NSInteger)maxFrameRate scaleResolutionDownBy:(double)scaleResolutionDownBy;
@end

@interface HMSVideoTrackSettingsBuilder : NSObject
@property (nonatomic, assign) HMSCameraFacing cameraFacing;
@property (nonatomic, assign) HMSTrackMuteState initialMuteState;
@property (nonatomic, assign) HMSCameraFocusMode cameraFocusMode;
@property (nonatomic, assign) UIInterfaceOrientationMask cameraOrientationLock;
@property (nonatomic, copy, nullable) NSString *trackDescription;
@property (nonatomic, strong, nullable) NSArray<HMSVideoPlugin *> *videoPlugins;

- (instancetype)init;
@end

@interface HMSVideoTrackSettings : NSObject <NSCopying>
@property (nonatomic, assign, readonly) HMSCodec codec;
@property (nonatomic, assign, readonly) HMSVideoResolution resolution;
@property (nonatomic, assign, readonly) NSInteger maxBitrate;
@property (nonatomic, assign, readonly) NSInteger maxFrameRate;
@property (nonatomic, assign, readonly) HMSCameraFacing cameraFacing;
@property (nonatomic, assign, readonly) HMSTrackMuteState initialMuteState;
@property (nonatomic, assign) HMSCameraFocusMode cameraFocusMode;
@property (nonatomic, assign) UIInterfaceOrientationMask cameraOrientationLock;
@property (nonatomic, copy, readonly, nullable) NSString *trackDescription;
@property (nonatomic, copy, readonly, nullable) NSArray<HMSSimulcastLayerSettings *> *simulcastSettings;
@property (nonatomic, copy, readonly, nullable) NSArray<HMSVideoPlugin *> *videoPlugins;

+ (instancetype)build:(void (^)(HMSVideoTrackSettingsBuilder *))builderBlock;
- (instancetype)initWithBuilder:(HMSVideoTrackSettingsBuilder *)builder;

- (instancetype)initWithCodec:(HMSCodec)codec resolution:(HMSVideoResolution)resolution maxBitrate:(NSInteger)maxBitrate maxFrameRate:(NSInteger)maxFrameRate cameraFacing:(HMSCameraFacing)cameraFacing trackDescription:(NSString *__nullable)trackDescription videoPlugins:(NSArray<HMSVideoPlugin *> *__nullable)videoPlugins;

- (instancetype)initWithCodec:(HMSCodec)codec resolution:(HMSVideoResolution)resolution maxBitrate:(NSInteger)maxBitrate maxFrameRate:(NSInteger)maxFrameRate cameraFacing:(HMSCameraFacing)cameraFacing simulcastSettings:(NSArray<HMSSimulcastLayerSettings *> *__nullable)simulcastSettings trackDescription:(NSString *__nullable)trackDescription videoPlugins:(NSArray<HMSVideoPlugin *> *__nullable)videoPlugins;

- (instancetype)initWithCodec:(HMSCodec)codec resolution:(HMSVideoResolution)resolution maxBitrate:(NSInteger)maxBitrate maxFrameRate:(NSInteger)maxFrameRate cameraFacing:(HMSCameraFacing)cameraFacing simulcastSettings:(NSArray<HMSSimulcastLayerSettings *> *__nullable)simulcastSettings trackDescription:(NSString *__nullable)trackDescription initialMuteState:(HMSTrackMuteState)initialMuteState videoPlugins:(NSArray<HMSVideoPlugin *> *__nullable)videoPlugins;

- (instancetype)initWithCodec:(HMSCodec)codec resolution:(HMSVideoResolution)resolution maxBitrate:(NSInteger)maxBitrate maxFrameRate:(NSInteger)maxFrameRate cameraFacing:(HMSCameraFacing)cameraFacing simulcastSettings:(NSArray<HMSSimulcastLayerSettings *> *__nullable)simulcastSettings trackDescription:(NSString *__nullable)trackDescription initialMuteState:(HMSTrackMuteState)initialMuteState cameraFocusMode:(HMSCameraFocusMode)cameraFocusMode videoPlugins:(NSArray<HMSVideoPlugin *> *__nullable)videoPlugins;

- (instancetype)initWithCodec:(HMSCodec)codec resolution:(HMSVideoResolution)resolution maxBitrate:(NSInteger)maxBitrate maxFrameRate:(NSInteger)maxFrameRate cameraFacing:(HMSCameraFacing)cameraFacing simulcastSettings:(NSArray<HMSSimulcastLayerSettings *> *__nullable)simulcastSettings trackDescription:(NSString *__nullable)trackDescription initialMuteState:(HMSTrackMuteState)initialMuteState cameraFocusMode:(HMSCameraFocusMode)cameraFocusMode cameraOrientationLock:(UIInterfaceOrientationMask)cameraOrientationLock videoPlugins:(NSArray<HMSVideoPlugin *> *__nullable)videoPlugins;


- (instancetype)init;

@end

@interface HMSAudioTrackSettingsBuilder : NSObject
@property (nonatomic, assign) HMSTrackMuteState initialMuteState;
@property (nonatomic, copy, nullable) NSString *trackDescription;
@property (nonatomic, strong, nullable) HMSAudioSource *audioSource;
@property (nonatomic, assign) HMSAudioMode audioMode;

- (instancetype)init;
@end

@interface HMSAudioTrackSettings : NSObject <NSCopying>
@property (nonatomic, assign, readonly) NSInteger maxBitrate;
@property (nonatomic, assign, readonly) HMSTrackMuteState initialMuteState;
@property (nonatomic, copy, readonly, nullable) NSString *trackDescription;
@property (nonatomic, copy, readonly, nullable) HMSAudioSource *audioSource;
@property (nonatomic, assign, readonly) HMSAudioMode audioMode;

+ (instancetype)build:(void (^)(HMSAudioTrackSettingsBuilder *))builderBlock;
- (instancetype)initWithBuilder:(HMSAudioTrackSettingsBuilder *)builder;

- (instancetype)initWithMaxBitrate:(NSInteger)maxBitrate trackDescription:(NSString *__nullable)trackDescription;
- (instancetype)initWithMaxBitrate:(NSInteger)maxBitrate trackDescription:(NSString *__nullable)trackDescription audioSource:(HMSAudioSource *__nullable)audioSource;
- (instancetype)initWithMaxBitrate:(NSInteger)maxBitrate trackDescription:(NSString *__nullable)trackDescription initialMuteState:(HMSTrackMuteState)initialMuteState audioSource:(HMSAudioSource *__nullable)audioSource;
- (instancetype)initWithMaxBitrate:(NSInteger)maxBitrate trackDescription:(NSString *__nullable)trackDescription initialMuteState:(HMSTrackMuteState)initialMuteState audioMode:(HMSAudioMode)audioMode audioSource:(HMSAudioSource *__nullable)audioSource;
- (instancetype)init;

@end

@interface HMSTrackSettings : NSObject <NSCopying>
@property (nonatomic, strong, readonly, nullable) HMSVideoTrackSettings *video;
@property (nonatomic, strong, readonly, nullable) HMSAudioTrackSettings *audio;

+ (instancetype)build:(void (^)(HMSVideoTrackSettingsBuilder *, HMSAudioTrackSettingsBuilder *))builderBlock;

- (instancetype)initWithVideoSettings:(HMSVideoTrackSettings *_Nullable)videoSettings audioSettings:(HMSAudioTrackSettings *_Nullable)audioSettings;
- (instancetype)init;


@end

NS_ASSUME_NONNULL_END
