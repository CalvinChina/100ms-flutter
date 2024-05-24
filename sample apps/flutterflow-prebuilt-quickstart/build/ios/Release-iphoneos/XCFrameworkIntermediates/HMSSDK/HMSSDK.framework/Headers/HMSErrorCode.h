//
//  HMSErrorCode.h
//  HMSSDK
//
//  Created by codegen
//  Copyright © 2021 100ms. All rights reserved.
//

#import <Foundation/Foundation.h>
extern NSString *const HMSIsTerminalUserInfoKey;
extern NSString *const HMSCanRetryUserInfoKey;

extern NSErrorDomain const HMSErrorDomain;
typedef NS_ERROR_ENUM(HMSErrorDomain, HMSError) {
	/// Lost signalling connection to 100ms server 
    HMSErrorWebsocketConnectionLost = 1003,
    
	/// Custom endpoint url is malformed 
    HMSErrorInvalidEndpointUrl = 2002,
    
	/// Endpoint is not responding 
    HMSErrorEndpointUnreachable = 2003,
    
	/// Token is not in proper JWT format 
    HMSErrorInvalidTokenFormat = 2004,
    
	/// Unknown error during track creation. Check error message for more info. 
    HMSErrorGenericTrack = 3000,
    
	/// User denied permission to access capture device 
    HMSErrorCantAccessCaptureDevice = 3001,
    
	/// Audio and video publishing is disabled. Check the room template settings in the dashboard. 
    HMSErrorNothingToReturn = 3005,
    
	/// Codec change is not permitted during a call 
    HMSErrorCodecChangeNotPermitted = 3007,
    
	///  Audio/Video subsystem Failure 
    HMSErrorAudiovideoSubsystemFailure = 3008,
    
	/// Unable to capture audio from mic 
    HMSErrorMicCaptureFailed = 3011,
    
	/// Failed to establish audio/video stream connection to 100ms server 
    HMSErrorCreateOfferFailed = 4001,
    
	/// Failed to establish audio/video stream connection to 100ms server 
    HMSErrorCreateAnswerFailed = 4002,
    
	/// Failed to establish audio/video stream connection to 100ms server 
    HMSErrorSetLocalDescriptionFailed = 4003,
    
	/// Failed to establish audio/video stream connection to 100ms server 
    HMSErrorSetRemoteDescriptionFailed = 4004,
    
	/// Lost audio/video stream connection to 100ms server 
    HMSErrorIceFailure = 4005,
    
	/// Lost audio/video stream connection to 100ms server 
    HMSErrorIceDisconnected = 4006,
    
	/// Already joined 
    HMSErrorAlreadyJoined = 5001,
    
	/// Not connected 
    HMSErrorNotConnected = 6000,
    
	/// Generic SDK error. Some unforseen exception happened. 
    HMSErrorUnknown = 6002,
    
	/// Failed to parse JSON message 
    HMSErrorJsonParsingFailed = 6004,
    
	/// Track metadata missing 
    HMSErrorTrackMetadataMissing = 6005,
    
	/// RTC Track is missing 
    HMSErrorRtcTrackMissing = 6006,
    
	/// Peer metadata missing 
    HMSErrorPeerMetadataMissing = 6007,
    
};

