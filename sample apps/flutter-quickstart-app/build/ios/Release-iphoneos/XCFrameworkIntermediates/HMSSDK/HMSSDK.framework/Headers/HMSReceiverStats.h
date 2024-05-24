//
//  HMSReceiverStats.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 14.01.2022.
//  Copyright © 2022 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HMSReceiverStats : NSObject
@property (nonatomic) double jitter;
@property (nonatomic) unsigned long long bytesReceived;
@property (nonatomic) double bitrate;
@property (nonatomic) unsigned long long packetsReceived;
@property (nonatomic) unsigned long long packetsLost;
@end

NS_ASSUME_NONNULL_END
