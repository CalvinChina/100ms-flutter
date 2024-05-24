//
//  HMSRTCStats.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 02.03.2021.
//  Copyright © 2021 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HMSRTCStats : NSObject
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) unsigned long long bytesReceived;

@property (nonatomic) unsigned long long packetsReceived;
@property (nonatomic) unsigned long long packetsLost;
  
@property (nonatomic) double bitrateSent;
@property (nonatomic) double bitrateReceived;
  
@property (nonatomic) double roundTripTime;
@end

NS_ASSUME_NONNULL_END
