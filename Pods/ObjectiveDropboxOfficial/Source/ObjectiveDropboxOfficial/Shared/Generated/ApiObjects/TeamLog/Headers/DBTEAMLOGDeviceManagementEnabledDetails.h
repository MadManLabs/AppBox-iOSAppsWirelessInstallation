///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDeviceManagementEnabledDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeviceManagementEnabledDetails` struct.
///
/// Enabled device management.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDeviceManagementEnabledDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DeviceManagementEnabledDetails` struct.
///
@interface DBTEAMLOGDeviceManagementEnabledDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGDeviceManagementEnabledDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGDeviceManagementEnabledDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceManagementEnabledDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGDeviceManagementEnabledDetails *)instance;

///
/// Deserializes `DBTEAMLOGDeviceManagementEnabledDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceManagementEnabledDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGDeviceManagementEnabledDetails`
/// object.
///
+ (DBTEAMLOGDeviceManagementEnabledDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
