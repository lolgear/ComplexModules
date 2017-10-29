//
//  LDMDeviceInteractionSecurityKit.m
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import "LDMDeviceInteractionSecurityKit.h"

@implementation LDMDeviceInteractionSecurityKit
+ (NSData *)extractStringData:(NSString *)string {
    return [string dataUsingEncoding:NSUTF8StringEncoding];
}
@end
