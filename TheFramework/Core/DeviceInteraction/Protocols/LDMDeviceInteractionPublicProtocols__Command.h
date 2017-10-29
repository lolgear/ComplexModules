//
//  LDMDeviceInteractionPublicProtocols__Command.h
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import <Foundation/Foundation.h>

// leave it for refactoring
@interface LDMDeviceInteractionPublicProtocols__Command : NSObject

@end

@protocol LDMDeviceInteractionPublicProtocol__Command <NSObject>
@property (copy, nonatomic, readonly) NSString *name;
@end
