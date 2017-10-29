//
//  LDMDeviceInteractionExecutorCommand.m
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import "LDMDeviceInteractionExecutorCommand.h"

@implementation LDMDeviceInteractionExecutorCommand

@end

@implementation LDMDeviceInteractionExecutorCommand__Base
- (NSString *)debugDescription {
    return [[self debugInformation] debugDescription];
}
@end
@implementation LDMDeviceInteractionExecutorCommand__Base (LDMDeviceInteractionPublicProtocol__Command)
- (NSString *)name {
    return NSStringFromClass(self.class);
}
@end
@implementation LDMDeviceInteractionExecutorCommand__Base (LDMDeviceInteractionPublicProtocol__General__DebugInformation)
- (NSDictionary *)debugInformation {
    return @{
             @"debugDescription": [super debugDescription] ?: [NSNull null],
             @"name": self.name ?: [NSNull null]
             };
}
@end

@implementation LDMDeviceInteractionExecutorCommand__Concrete @end
