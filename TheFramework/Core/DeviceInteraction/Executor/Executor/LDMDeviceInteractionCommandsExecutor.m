//
//  LDMDeviceInteractionCommandsExecutor.m
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import "LDMDeviceInteractionCommandsExecutor.h"
#import "LDMDeviceInteractionCommandsProcessor.h"
@interface LDMDeviceInteractionCommandsExecutor ()
@property (strong, nonatomic, readwrite) LDMDeviceInteractionCommandsProcessor *processor;
@end

@implementation LDMDeviceInteractionCommandsExecutor
- (LDMDeviceInteractionCommandsProcessor *)processor {
    return _processor ?: (_processor = [LDMDeviceInteractionCommandsProcessor new]);
}
@end

@implementation LDMDeviceInteractionCommandsExecutor (Execution)
- (void)executeCommand:(id<LDMDeviceInteractionPublicProtocol__Command>)command {
    // do something with command and execute it.
    NSLog(@"%s -> command: %@", __PRETTY_FUNCTION__, [command debugDescription]);
}
@end
