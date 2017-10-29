//
//  LDMDeviceInteractionCommandsExecutor+Inspection.m
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import "LDMDeviceInteractionCommandsExecutor+Inspection.h"

@implementation LDMDeviceInteractionCommandsExecutor (Inspection)
- (void)inspectCommand:(id)command {
    NSLog(@"%@ %@ command: %@", self.debugDescription, NSStringFromSelector(_cmd), command);
}
@end

@implementation LDMDeviceInteractionCommandsExecutor (Processor)
@dynamic processor;
@end
