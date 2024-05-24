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
@end

NS_ASSUME_NONNULL_END
