///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGAccessLevel;
@class DBTEAMLOGSharedContentRemoveMemberDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedContentRemoveMemberDetails` struct.
///
/// Removed user/group from shared file/folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedContentRemoveMemberDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Shared content access level.
@property (nonatomic, readonly, nullable) DBSHARINGAccessLevel *sharedContentAccessLevel;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sharedContentAccessLevel Shared content access level.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedContentAccessLevel:(nullable DBSHARINGAccessLevel *)sharedContentAccessLevel;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedContentRemoveMemberDetails` struct.
///
@interface DBTEAMLOGSharedContentRemoveMemberDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedContentRemoveMemberDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedContentRemoveMemberDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentRemoveMemberDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSharedContentRemoveMemberDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedContentRemoveMemberDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentRemoveMemberDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSharedContentRemoveMemberDetails`
/// object.
///
+ (DBTEAMLOGSharedContentRemoveMemberDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END