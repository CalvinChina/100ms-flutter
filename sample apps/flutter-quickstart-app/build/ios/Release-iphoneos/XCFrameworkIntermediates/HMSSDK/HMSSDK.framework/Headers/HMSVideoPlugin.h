//
//  HMSVideoPlugin.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 21.04.2022.
//  Copyright © 2022 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>

NS_ASSUME_NONNULL_BEGIN


@interface HMSVideoPlugin : NSObject
- (void)activate;
- (void)deactivate;

- (CVPixelBufferRef)process:(CVPixelBufferRef)frame CF_RETURNS_RETAINED;

- (dispatch_queue_t)frameProcessingQueue;
@end

NS_ASSUME_NONNULL_END
