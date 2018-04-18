///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGMemberRequestsChangePolicyDetails;
@class DBTEAMLOGMemberRequestsPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MemberRequestsChangePolicyDetails` struct.
///
/// Changed whether users can find team when not invited.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGMemberRequestsChangePolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New member change requests policy.
@property (nonatomic, readonly) DBTEAMLOGMemberRequestsPolicy *dNewValue;

/// Previous member change requests policy. Might be missing due to historical
/// data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGMemberRequestsPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New member change requests policy.
/// @param previousValue Previous member change requests policy. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGMemberRequestsPolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGMemberRequestsPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New member change requests policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGMemberRequestsPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MemberRequestsChangePolicyDetails` struct.
///
@interface DBTEAMLOGMemberRequestsChangePolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGMemberRequestsChangePolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGMemberRequestsChangePolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGMemberRequestsChangePolicyDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGMemberRequestsChangePolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGMemberRequestsChangePolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGMemberRequestsChangePolicyDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGMemberRequestsChangePolicyDetails`
/// object.
///
+ (DBTEAMLOGMemberRequestsChangePolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
