//
//  LDMDeviceInteractionSecurityKit+DigestSHA.h
//  LDMDeviceInteraction
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#import "LDMDeviceInteractionSecurityKit.h"

@interface LDMDeviceInteractionSecurityKit (DigestSHA)
+ (NSString *)SHA1StringWithString:(NSString *)string;
@end
