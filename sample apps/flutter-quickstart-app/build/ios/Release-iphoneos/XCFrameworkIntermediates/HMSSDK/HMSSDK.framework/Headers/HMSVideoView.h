//
//  HMSSDKView.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 14.09.2020.
//  Copyright © 2020 100ms. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class HMSVideoTrack;

@interface HMSVideoView : UIView
@property (nonatomic) UIViewContentMode videoContentMode;
@property (nonatomic) BOOL disableAutoSimulcastLayerSelect;
@property (nonatomic) BOOL mirror;
@property (nonatomic) BOOL isZoomAndPanEnabled;

- (HMSVideoTrack *)videoTrack;
- (void)setVideoTrack:(HMSVideoTrack * __nullable)track;

// Capture a snapshot of the current video frame
- (UIImage * __nullable)captureSnapshot;
@end

NS_ASSUME_NONNULL_END
