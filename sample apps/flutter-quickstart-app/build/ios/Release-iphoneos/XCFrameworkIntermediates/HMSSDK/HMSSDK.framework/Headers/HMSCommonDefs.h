//
//  HMSCommonDefs.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 10.09.2020.
//  Copyright © 2020 100ms. All rights reserved.
//

#ifndef HMSCommonDefs_h
#define HMSCommonDefs_h
#import <CoreGraphics/CGGeometry.h>
#import <Foundation/Foundation.h>


typedef void (^HMSOperationStatusHandler)(BOOL isSuccess, NSError* _Nullable error);
typedef void (^HMSRequestCompletionHandler)(id _Nullable result, NSError * _Nullable error);

typedef NS_ENUM(NSUInteger, HMSCodec) {
    kHMSCodecH264,
    kHMSCodecVP8
};

typedef NS_ENUM(NSUInteger, HMSSimulcastLayer) {
    kHMSSimulcastLayerHigh,
    kHMSSimulcastLayerMid,
    kHMSSimulcastLayerLow
};

typedef NS_ENUM(NSUInteger, HMSCameraFacing) {
    kHMSCameraFacingFront,
    kHMSCameraFacingBack
};

typedef NS_ENUM(NSUInteger, HMSTrackMuteState) {
    kHMSTrackMuteStateUnmute,
    kHMSTrackMuteStateMute
};

typedef NS_ENUM(NSUInteger, HMSCameraFocusMode) {
    kHMSFocusModeAuto,
    kHMSFocusModeTapToAutoFocus,
    kHMSFocusModeTapToLockFocus
};

typedef NS_ENUM(NSUInteger, HMSAudioMode) {
    kHMSAudioModeVoice,
    kHMSAudioModeMusic
};

typedef struct CGSize HMSVideoResolution;

typedef NS_ENUM(NSUInteger, HMSVideoConnectionState) {
    kHMSVideoConnectionStateReady,
    kHMSVideoConnectionStateConnecting,
    kHMSVideoConnectionStateConnected,
    kHMSVideoConnectionStateDisconnected,
    kHMSVideoConnectionStateFailed
};

#endif /* HMSCommonDefs_h */
