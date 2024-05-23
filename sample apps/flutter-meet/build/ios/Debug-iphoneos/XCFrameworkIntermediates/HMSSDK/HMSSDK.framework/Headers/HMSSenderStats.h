//
//  HMSSenderStats.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 14.01.2022.
//  Copyright © 2022 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HMSSenderStats: NSObject

@property (nonatomic) NSString *trackId;
@property (nonatomic) NSString *ssrc;
@property (nonatomic) NSString *source;

@property (nonatomic) double roundTripTime;
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) double bitrate;

@property (nonatomic) double jitter;
@property (nonatomic) unsigned long long packetsLost;
@property (nonatomic) double availableBitrate;
@property (nonatomic) unsigned long long packetsSent;
@property (nonatomic) double packetsSentDelay;
@end


NS_ASSUME_NONNULL_END
