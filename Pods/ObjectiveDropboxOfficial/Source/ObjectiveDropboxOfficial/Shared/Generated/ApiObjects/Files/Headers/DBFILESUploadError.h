///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEPROPERTIESInvalidPropertyGroupError;
@class DBFILESUploadError;
@class DBFILESUploadWriteFailed;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UploadError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESUploadError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESUploadErrorTag` enum type represents the possible tag states
/// with which the `DBFILESUploadError` union can exist.
typedef NS_ENUM(NSInteger, DBFILESUploadErrorTag) {
  /// Unable to save the uploaded contents to a file.
  DBFILESUploadErrorPath,

  /// The supplied property group is invalid.
  DBFILESUploadErrorPropertiesError,

  /// (no description).
  DBFILESUploadErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESUploadErrorTag tag;

/// Unable to save the uploaded contents to a file. @note Ensure the `isPath`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) DBFILESUploadWriteFailed *path;

/// The supplied property group is invalid. @note Ensure the `isPropertiesError`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) DBFILEPROPERTIESInvalidPropertyGroupError *propertiesError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path".
///
/// Description of the "path" tag state: Unable to save the uploaded contents to
/// a file.
///
/// @param path Unable to save the uploaded contents to a file.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(DBFILESUploadWriteFailed *)path;

///
/// Initializes union class with tag state of "properties_error".
///
/// Description of the "properties_error" tag state: The supplied property group
/// is invalid.
///
/// @param propertiesError The supplied property group is invalid.
///
/// @return An initialized instance.
///
- (instancetype)initWithPropertiesError:(DBFILEPROPERTIESInvalidPropertyGroupError *)propertiesError;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "path".
///
/// @note Call this method and ensure it returns true before accessing the
/// `path` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path".
///
- (BOOL)isPath;

///
/// Retrieves whether the union's current tag state has value
/// "properties_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `propertiesError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "properties_error".
///
- (BOOL)isPropertiesError;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESUploadError` union.
///
@interface DBFILESUploadErrorSerializer : NSObject

///
/// Serializes `DBFILESUploadError` instances.
///
/// @param instance An instance of the `DBFILESUploadError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESUploadError` API object.
///
+ (nullable NSDictionary *)serialize:(DBFILESUploadError *)instance;

///
/// Deserializes `DBFILESUploadError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESUploadError` API object.
///
/// @return An instantiation of the `DBFILESUploadError` object.
///
+ (DBFILESUploadError *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
