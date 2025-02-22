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

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITCameraEventMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// TimestampMs 
- (BOOL)isTimestampMsValid;
- (FITUInt16)getTimestampMs;
- (void)setTimestampMs:(FITUInt16)timestampMs;
// CameraEventType 
- (BOOL)isCameraEventTypeValid;
- (FITCameraEventType)getCameraEventType;
- (void)setCameraEventType:(FITCameraEventType)cameraEventType;
// CameraFileUuid 
- (BOOL)isCameraFileUuidValid;
- (NSString *)getCameraFileUuid;
- (void)setCameraFileUuid:(NSString *)cameraFileUuid;
// CameraOrientation 
- (BOOL)isCameraOrientationValid;
- (FITCameraOrientationType)getCameraOrientation;
- (void)setCameraOrientation:(FITCameraOrientationType)cameraOrientation;

@end

NS_ASSUME_NONNULL_END
