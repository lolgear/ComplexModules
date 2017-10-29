//
//  ImportExample__For__Private.m
//  TheApp
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import "ImportExample__For__Private.h"
//@import LDMDeviceInteraction;
//@import LDMDeviceInteraction.Core;
//@import LDMDeviceInteraction.SecurityKit;
//@import LDMDeviceInteraction.Random;
@import LDMDeviceInteraction;
@import LDMDeviceInteraction.Private;
//@import LDMDeviceInteraction.Core;

@implementation ImportExample__For__Private
- (void)example {
    [[LDMDeviceInteractionCommandsExecutor new] inspectCommand:nil];
}
@end
