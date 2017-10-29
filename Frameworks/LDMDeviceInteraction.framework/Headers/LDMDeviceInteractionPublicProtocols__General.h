//
//  LDMDeviceInteractionPublicProtocols__General.h
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LDMDeviceInteractionPublicProtocols__General : NSObject

@end

@protocol LDMDeviceInteractionPublicProtocol__General__DebugInformation <NSObject>
@property (copy, nonatomic, readonly) NSDictionary *debugInformation;
@end
