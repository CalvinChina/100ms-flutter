//
//  HMSScreenRenderer.h
//  HMSSDK
//
//  Created by Pawan Dixit on 09/05/22.
//  Copyright © 2022 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>
#import <Replaykit/ReplayKit.h>

@class HMSScreenRendererError;

NS_ASSUME_NONNULL_BEGIN

@interface HMSScreenRenderer : NSObject
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithAppGroup:(NSString *)name;
- (void)invalidate;
- (HMSScreenRendererError *_Nullable)process:(CMSampleBufferRef)samplebuffer;
@end

NS_ASSUME_NONNULL_END
