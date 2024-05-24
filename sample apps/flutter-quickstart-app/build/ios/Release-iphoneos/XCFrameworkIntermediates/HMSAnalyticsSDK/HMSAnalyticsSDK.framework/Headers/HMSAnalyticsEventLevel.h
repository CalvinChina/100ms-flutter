//
//  HMSEventLevel.h
//  HMSAnalyticsSDK
//
//  Created by Pawan Dixit on 13/02/2023.
//  Copyright © 2023 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, HMSAnalyticsEventLevel) {
    kHMSAnalyticsEventLevelOff,
    kHMSAnalyticsEventLevelError,
    kHMSAnalyticsEventLevelInfo,
    kHMSAnalyticsEventLevelVerbose
};
