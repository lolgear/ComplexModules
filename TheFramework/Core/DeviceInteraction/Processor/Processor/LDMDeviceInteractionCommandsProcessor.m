//
//  LDMDeviceInteractionCommandsProcessor.m
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import "LDMDeviceInteractionCommandsProcessor.h"
#import "LDMDeviceInteractionSessionStorage.h"

@interface LDMDeviceInteractionCommandsProcessor ()
@property (strong, nonatomic, readonly) LDMDeviceInteractionSessionStorage *sessionStorage;
@end

@implementation LDMDeviceInteractionCommandsProcessor
- (void)sendCommand:(id)command {}
@end
