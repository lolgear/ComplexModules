//
//  LDMDeprecationsAndDefines.h
//  ComplexModules
//
//  Created by Lobanov Dmitry on 28.10.2017.
//  Copyright © 2017 Lobanov Dmitry. All rights reserved.
//

#ifndef LDMDeprecationsAndDefines_h
#define LDMDeprecationsAndDefines_h

#define STR(str) #str

#pragma mark - Versions
#define LDMDeviceInteraction_VERSION_0_1 0.1

#pragma mark - Deprecations

// add custom prefix for define to prevent occurring of collisions.
#define ldmdi__deprecated_msg_at_version(version) __deprecated_msg("Deprecated. Could be removed in next version" STR(version))

#pragma mark - Warnings

#define LDMDeviceInteraction_HACK
#define LDMDeviceInteraction_HACK_Description
#define __warning__name_and_msg(name, msg, description) ("Warning "STR(name)" occurred. Try to refactoring code later. "STR(msg) "Possible solution: "STR(description))

#endif /* LDMDeprecationsAndDefines_h */
