//
//  HMSHLSPlaybackError.h
//  HMSSDK
//
//  Created by Pawan Dixit on 16/02/2023.
//  Copyright © 2023 100ms. All rights reserved.
//

#ifndef HMSHLSPlaybackError_h
#define HMSHLSPlaybackError_h

#import <Foundation/Foundation.h>
extern NSString *const HMSHLSIsTerminalUserInfoKey;

extern NSErrorDomain const HMSHLSErrorDomain;
typedef NS_ERROR_ENUM(HMSHLSErrorDomain, HMSHLSError) {
    
    /// Generic SDK error. Some unforeseen exception happened.
    HMSHLSErrorUnknown = 1000,
    
};


#endif /* HMSHLSPlaybackError_h */
