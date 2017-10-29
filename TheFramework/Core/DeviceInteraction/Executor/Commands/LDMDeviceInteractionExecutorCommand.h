//
//  LDMDeviceInteractionExecutorCommand.h
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LDMDeviceInteractionPublicProtocols__Command.h"
#import "LDMDeviceInteractionPublicProtocols__General.h"

@interface LDMDeviceInteractionExecutorCommand : NSObject

@end

@interface LDMDeviceInteractionExecutorCommand__Base : NSObject @end

@interface LDMDeviceInteractionExecutorCommand__Base (LDMDeviceInteractionPublicProtocol__Command) <LDMDeviceInteractionPublicProtocol__Command>
@end

@interface LDMDeviceInteractionExecutorCommand__Base (LDMDeviceInteractionPublicProtocol__General__DebugInformation) <LDMDeviceInteractionPublicProtocol__General__DebugInformation>
@end

@interface LDMDeviceInteractionExecutorCommand__Concrete : LDMDeviceInteractionExecutorCommand__Base @end
