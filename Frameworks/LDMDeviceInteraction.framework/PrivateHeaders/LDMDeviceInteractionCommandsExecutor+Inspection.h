//
//  LDMDeviceInteractionCommandsExecutor+Inspection.h
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import <LDMDeviceInteraction/LDMDeviceInteraction.h>

@interface LDMDeviceInteractionCommandsExecutor (Inspection)
- (void)inspectCommand:(id)command;
@end

@interface LDMDeviceInteractionCommandsExecutor (Processor)
@property (strong, nonatomic, readonly) id processor;
@end
