//
//  LDMDeviceInteractionCommandsExecutor.h
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

@import Foundation;

#import <LDMDeviceInteraction/LDMDeviceInteractionPublicProtocols__Command.h>

@interface LDMDeviceInteractionCommandsExecutor : NSObject
@end

@interface LDMDeviceInteractionCommandsExecutor (Execution)
- (void)executeCommand:(id<LDMDeviceInteractionPublicProtocol__Command>)command;
@end
