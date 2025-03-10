/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.115Release
// Tag = production/release/21.115.00-0-gfe0a7f8
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>
#include <string>

#import "FITTypes.h"

typedef std::wstring FIT_WSTRING;   // Returned by message/field "Get" APIs and required by "Set" APIs. Encoding defined in fit_config.hpp.
typedef const FIT_WSTRING * FIT_CONST_WSTRING_PTR;
#define FIT_WSTRING_INVALID   (FIT_WSTRING())


NS_ASSUME_NONNULL_BEGIN

@interface FITString : NSObject

+ (FIT_WSTRING) fitStringWithString: (NSString *) string;
+ (NSString *) stringWithFITString: (FIT_WSTRING) string;
@end

NS_INLINE FIT_WSTRING FITStringFromString(NSString * string) {
    return [FITString fitStringWithString:string];
}

NS_INLINE NSString * StringFromFITString(FIT_WSTRING string) {
    return [FITString stringWithFITString:string];
}

NS_ASSUME_NONNULL_END
