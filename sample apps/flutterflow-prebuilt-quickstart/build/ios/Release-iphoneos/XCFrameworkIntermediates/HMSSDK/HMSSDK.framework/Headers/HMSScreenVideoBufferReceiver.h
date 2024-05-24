//
//  HMSScreenVideoBufferReceiver.h
//  HMSSDK
//
//  Created by Dmitry Fedoseyev on 04.10.2022.
//  Copyright © 2022 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol HMSScreenVideoBufferReceiver <NSObject>
- (void)didReceiveVideoData:(NSData *)data API_AVAILABLE(ios(16.0));
@end


NS_ASSUME_NONNULL_END
