//
//  LDMDeviceInteractionSession.h
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LDMDeviceInteractionSession : NSObject
@property (copy, nonatomic, readwrite) id<NSCopying>sessionId;
@end

@interface LDMDeviceInteractionSession (States)
@property (assign, nonatomic, readonly) BOOL started;
@property (assign, nonatomic, readonly) BOOL opened;
@property (assign, nonatomic, readonly) BOOL expired;
@end
