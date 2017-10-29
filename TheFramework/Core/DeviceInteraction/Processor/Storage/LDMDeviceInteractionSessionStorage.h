//
//  LDMDeviceInteractionSessionStorage.h
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LDMDeviceInteractionSession.h"

@interface LDMDeviceInteractionSessionStorage : NSObject
@end

@interface LDMDeviceInteractionSessionStorage (Access)
- (LDMDeviceInteractionSession *)removeSessionById:(id)sessionId;
- (LDMDeviceInteractionSession *)sessionById:(id)sessionId;
@end
