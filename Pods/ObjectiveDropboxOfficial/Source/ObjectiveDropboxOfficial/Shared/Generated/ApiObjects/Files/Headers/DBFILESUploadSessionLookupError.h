///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESUploadSessionLookupError;
@class DBFILESUploadSessionOffsetError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UploadSessionLookupError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESUploadSessionLookupError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESUploadSessionLookupErrorTag` enum type represents the possible
/// tag states with which the `DBFILESUploadSessionLookupError` union can exist.
typedef NS_ENUM(NSInteger, DBFILESUploadSessionLookupErrorTag) {
  /// The upload session ID was not found or has expired. Upload sessions are
  /// valid for 48 hours.
  DBFILESUploadSessionLookupErrorNotFound,

  /// The specified offset was incorrect. See the value for the correct
  /// offset. This error may occur when a previous request was received and
  /// processed successfully but the client did not receive the response, e.g.
  /// due to a network error.
  DBFILESUploadSessionLookupErrorIncorrectOffset,

  /// You are attempting to append data to an upload session that has alread
  /// been closed (i.e. committed).
  DBFILESUploadSessionLookupErrorClosed,

  /// The session must be closed before calling upload_session/finish_batch.
  DBFILESUploadSessionLookupErrorNotClosed,

  /// You can not append to the upload session because the size of a file
  /// should not reach the max file size limit (i.e. 350GB).
  DBFILESUploadSessionLookupErrorTooLarge,

  /// (no description).
  DBFILESUploadSessionLookupErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESUploadSessionLookupErrorTag tag;

/// The specified offset was incorrect. See the value for the correct offset.
/// This error may occur when a previous request was received and processed
/// successfully but the client did not receive the response, e.g. due to a
/// network error. @note Ensure the `isIncorrectOffset` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESUploadSessionOffsetError *incorrectOffset;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "not_found".
///
/// Description of the "not_found" tag state: The upload session ID was not
/// found or has expired. Upload sessions are valid for 48 hours.
///
/// @return An initialized instance.
///
- (instancetype)initWithNotFound;

///
/// Initializes union class with tag state of "incorrect_offset".
///
/// Description of the "incorrect_offset" tag state: The specified offset was
/// incorrect. See the value for the correct offset. This error may occur when a
/// previous request was received and processed successfully but the client did
/// not receive the response, e.g. due to a network error.
///
/// @param incorrectOffset The specified offset was incorrect. See the value for
/// the correct offset. This error may occur when a previous request was
/// received and processed successfully but the client did not receive the
/// response, e.g. due to a network error.
///
/// @return An initialized instance.
///
- (instancetype)initWithIncorrectOffset:(DBFILESUploadSessionOffsetError *)incorrectOffset;

///
/// Initializes union class with tag state of "closed".
///
/// Description of the "closed" tag state: You are attempting to append data to
/// an upload session that has alread been closed (i.e. committed).
///
/// @return An initialized instance.
///
- (instancetype)initWithClosed;

///
/// Initializes union class with tag state of "not_closed".
///
/// Description of the "not_closed" tag state: The session must be closed before
/// calling upload_session/finish_batch.
///
/// @return An initialized instance.
///
- (instancetype)initWithNotClosed;

///
/// Initializes union class with tag state of "too_large".
///
/// Description of the "too_large" tag state: You can not append to the upload
/// session because the size of a file should not reach the max file size limit
/// (i.e. 350GB).
///
/// @return An initialized instance.
///
- (instancetype)initWithTooLarge;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "not_found".
///
/// @return Whether the union's current tag state has value "not_found".
///
- (BOOL)isNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "incorrect_offset".
///
/// @note Call this method and ensure it returns true before accessing the
/// `incorrectOffset` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "incorrect_offset".
///
- (BOOL)isIncorrectOffset;

///
/// Retrieves whether the union's current tag state has value "closed".
///
/// @return Whether the union's current tag state has value "closed".
///
- (BOOL)isClosed;

///
/// Retrieves whether the union's current tag state has value "not_closed".
///
/// @return Whether the union's current tag state has value "not_closed".
///
- (BOOL)isNotClosed;

///
/// Retrieves whether the union's current tag state has value "too_large".
///
/// @return Whether the union's current tag state has value "too_large".
///
- (BOOL)isTooLarge;

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
/// The serialization class for the `DBFILESUploadSessionLookupError` union.
///
@interface DBFILESUploadSessionLookupErrorSerializer : NSObject

///
/// Serializes `DBFILESUploadSessionLookupError` instances.
///
/// @param instance An instance of the `DBFILESUploadSessionLookupError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESUploadSessionLookupError` API object.
///
+ (nullable NSDictionary *)serialize:(DBFILESUploadSessionLookupError *)instance;

///
/// Deserializes `DBFILESUploadSessionLookupError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESUploadSessionLookupError` API object.
///
/// @return An instantiation of the `DBFILESUploadSessionLookupError` object.
///
+ (DBFILESUploadSessionLookupError *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
