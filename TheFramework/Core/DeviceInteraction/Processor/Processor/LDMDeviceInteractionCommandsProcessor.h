//
//  LDMDeviceInteractionCommandsProcessor.h
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LDMDeviceInteractionCommandsProcessor : NSObject
- (void)sendCommand:(id)command;
@end
