//
//  LDMDeviceInteractionRandomString.m
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import "LDMDeviceInteractionRandomString.h"

@implementation LDMDeviceInteractionRandomString
+ (NSString *)generateUUID {
    return [NSUUID UUID].UUIDString;
}
@end
