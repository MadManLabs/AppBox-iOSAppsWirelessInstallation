///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedFolderChangeMembersInheritancePolicyType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedFolderChangeMembersInheritancePolicyType` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedFolderChangeMembersInheritancePolicyType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly, copy) NSString *description_;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param description_ (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithDescription_:(NSString *)description_;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the
/// `SharedFolderChangeMembersInheritancePolicyType` struct.
///
@interface DBTEAMLOGSharedFolderChangeMembersInheritancePolicyTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedFolderChangeMembersInheritancePolicyType`
/// instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedFolderChangeMembersInheritancePolicyType` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderChangeMembersInheritancePolicyType` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSharedFolderChangeMembersInheritancePolicyType *)instance;

///
/// Deserializes `DBTEAMLOGSharedFolderChangeMembersInheritancePolicyType`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderChangeMembersInheritancePolicyType` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedFolderChangeMembersInheritancePolicyType` object.
///
+ (DBTEAMLOGSharedFolderChangeMembersInheritancePolicyType *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
