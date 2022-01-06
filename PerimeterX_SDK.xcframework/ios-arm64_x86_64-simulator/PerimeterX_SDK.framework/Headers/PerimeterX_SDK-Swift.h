#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
#ifndef PERIMETERX_SDK_SWIFT_H
#define PERIMETERX_SDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PerimeterX_SDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif





@class NSString;
@class NSNumber;
enum PXPolicyChallengeType : NSInteger;

/// The policy that defines the behaviour of the SDK.
SWIFT_CLASS("_TtC14PerimeterX_SDK8PXPolicy")
@interface PXPolicy : NSObject <NSCopying>
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
/// Set of domains that should be intercepted. Empty set means that all domains will be intercepted. Default is an empty set.
@property (nonatomic, copy) NSSet<NSString *> * _Nonnull domains;
/// Indication that requests should be intercepted automatically. Specify false for manual requests handling. Default is true.
@property (nonatomic) BOOL requestsInterceptedAutomaticallyEnabled;
/// Challenge type. Default is <code>PXPolicyChallengeType/webView</code>.
@property (nonatomic) enum PXPolicyChallengeType challengeType;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// Challenge type.
typedef SWIFT_ENUM(NSInteger, PXPolicyChallengeType, open) {
/// WebView challenge.
  PXPolicyChallengeTypeWebView = 0,
};

@protocol PerimeterXDelegate;
@class NSData;
@class NSURLResponse;

/// PerimeterX main class.
/// You should interact with it in order to setup and start the SDK.
/// PerimeterX can intercept those types of requests:
/// <ol>
///   <li>
///     URLSession.
///   </li>
///   <li>
///     WKWebView.
///   </li>
///   <li>
///     3rd party libraries like Alamofire.
///     Notice that the SDK cannot intercept requests in SFSafariViewController.
///   </li>
/// </ol>
SWIFT_CLASS("_TtC14PerimeterX_SDK10PerimeterX")
@interface PerimeterX : NSObject
/// Start the PerimeterX SDK.
/// The expected behaviour will be started only after the completion callback is called without an error. If you need to be notified that the PerimeterX SDK is ready in other places in your code, you can use <code>addInitializationFinishedCallback(forAppId:callback:)</code> function. This function requires active network connection to be able to start the PerimeterX SDK. If it failed, you should call this function again. You can enable the The Doctor App feature - a tool that helps verify the SDK integration by simulating a typical user flow in the application.
/// \param appId The AppID of your account.
///
/// \param delegate A delegate object that conform to <code>PerimeterXDelegate</code> protocol.
///
/// \param enableDoctorCheck Should start the Doctor App feature. Default is false.
///
/// \param completion A completion block. Returns true if the initialization finished successfully, otherwise returns false and an error.
///
+ (void)startWithAppId:(NSString * _Nonnull)appId delegate:(id <PerimeterXDelegate> _Nullable)delegate enableDoctorCheck:(BOOL)enableDoctorCheck completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// Add a callback for the start flow.
/// Use this function to get notified when the PerimeterX SDK is ready for the given AppID. If it’s already ready, the callback will be called immediately. You should call this function only after you have already called the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function for the given AppID.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
/// \param callback A callback block. Called when the PerimeterX is ready.
///
+ (void)addInitializationFinishedCallbackForAppId:(NSString * _Nullable)appId callback:(void (^ _Nonnull)(void))callback;
/// Set policy for given AppID.
/// You must call the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function before calling this function.
/// \param policy The policy.
///
/// \param appId The AppID to associate the policy with. Ignore this param if you use only one AppID.
///
/// \param completion A completion block. Called after the new policy was set.
///
+ (void)setPolicyWithPolicy:(PXPolicy * _Nonnull)policy forAppId:(NSString * _Nullable)appId completion:(void (^ _Nullable)(void))completion;
/// Set custom parameters for given AppID.
/// You must call the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function before calling this function.
/// \param parameters Custom parameters. Each key must be in the following format: “custom_param[x]” where [x] is a number between 1-10.
///
/// \param appId The AppID to associate the custom parameters with. Ignore this param if you use only one AppID.
///
/// \param completion A completion block. Called after custom parameters were set.
///
+ (void)setCustomParametersWithParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)parameters forAppId:(NSString * _Nullable)appId completion:(void (^ _Nullable)(void))completion;
/// Get the VID for given AppID.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
+ (NSString * _Nullable)vidForAppId:(NSString * _Nullable)appId SWIFT_WARN_UNUSED_RESULT;
/// Register a callback that will be called after a request was blocked.
/// Returns the registration ID. Use it to unregister with <code>unregisterCallbackForRequestBlockedEvent(forAppId:registrationId:)</code> function.
/// This function returns nil on failure.
/// You must call the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function before calling this function.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
/// \param callback The callback to register.
///
+ (NSString * _Nullable)registerCallbackForRequestBlockedEventForAppId:(NSString * _Nullable)appId callback:(void (^ _Nonnull)(void))callback SWIFT_WARN_UNUSED_RESULT;
/// Unregister the callback for request blocked that is associated with the given registration ID.
/// Registration ID is provided from the <code>registerCallbackForRequestBlockedEvent(forAppId:callback:)</code> function.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
/// \param registrationId The registration ID.
///
+ (void)unregisterCallbackForRequestBlockedEventForAppId:(NSString * _Nullable)appId registrationId:(NSString * _Nonnull)registrationId;
/// Register a callback that will be called after the user solved the challenge.
/// Returns the registration ID. Use it to unregister with <code>unregisterCallbackForChallengeSolvedEvent(forAppId:registrationId:)</code> function.
/// This function returns nil on failure.
/// You must call the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function before calling this function.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
/// \param callback The callback to register.
///
+ (NSString * _Nullable)registerCallbackForChallengeSolvedEventForAppId:(NSString * _Nullable)appId callback:(void (^ _Nonnull)(void))callback SWIFT_WARN_UNUSED_RESULT;
/// Unregister the callback for challenge solved that is associated with the given registration ID.
/// Registration ID is provided from the <code>registerCallbackForRequestBlockedEvent(forAppId:callback:)</code> function.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
/// \param registrationId The registration ID.
///
+ (void)unregisterCallbackForChallengeSolvedEventForAppId:(NSString * _Nullable)appId registrationId:(NSString * _Nonnull)registrationId;
/// Returns HTTP headers that should be added to the URL request.
/// This function should be used only when the <code>PXPolicy/requestsInterceptedAutomaticallyEnabled</code> is set to false in the policy.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
+ (NSDictionary<NSString *, NSString *> * _Nonnull)headersForURLRequestForAppId:(NSString * _Nullable)appId SWIFT_WARN_UNUSED_RESULT;
/// This function handles the URL request’s response and presents the block screen, if necessary.
/// Returns true if the PerimeterX’s payload in the response was handled by the SDK. This function should be used only when the <code>PXPolicy/requestsInterceptedAutomaticallyEnabled</code> is set to false in the policy.
/// You must call the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function and wait until it’s done before calling this function.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
/// \param data The data that was received from the URL request.
///
/// \param response The response that was received from the URL request.
///
+ (BOOL)handleResponseForAppId:(NSString * _Nullable)appId data:(NSData * _Nonnull)data response:(NSURLResponse * _Nonnull)response SWIFT_WARN_UNUSED_RESULT;
/// Returns true if the error is <code>PerimeterXErrorCode/requestWasBlocked</code> error.
/// This kind error should returned when the <code>PXPolicy/requestsInterceptedAutomaticallyEnabled</code> is set to true.
/// \param error The error to check
///
+ (BOOL)isRequestBlockedErrorWithError:(NSError * _Nonnull)error SWIFT_WARN_UNUSED_RESULT;
/// Calling this method with non-null userId will start the Account Defender feature.
/// You must call the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function and wait until it’s done before calling this function.
/// \param userId The user ID. You may provide nil in case the user is not logged in anymore.
///
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
+ (void)setUserIdWithUserId:(NSString * _Nullable)userId forAppId:(NSString * _Nullable)appId;
/// Provide outgoing URL request to the Account Defender feature.
/// You must call the <code>setUserId(userId:forAppId:)</code> function before calling this function. If you are using the automatic interceptor you should not need to use this function (it will be called automatically by the interceptor).
/// \param url The URL.
///
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
+ (void)registerOutgoingUrlRequestWithUrl:(NSString * _Nonnull)url forAppId:(NSString * _Nullable)appId;
/// Returns the PerimeterX SDK version.
+ (NSString * _Nonnull)sdkVersion SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




/// PerimeterX protocol
SWIFT_PROTOCOL("_TtP14PerimeterX_SDK18PerimeterXDelegate_")
@protocol PerimeterXDelegate <NSObject>
/// Called when a request was blocked.
/// \param appId The AppID that related to the event.
///
- (void)perimeterxDidRequestBlockedForAppId:(NSString * _Nonnull)appId;
/// Called when the challenge was solved.
/// \param appId The AppID that related to the event.
///
- (void)perimeterxDidChallengeSolvedForAppId:(NSString * _Nonnull)appId;
@end










#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
#ifndef PERIMETERX_SDK_SWIFT_H
#define PERIMETERX_SDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PerimeterX_SDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif





@class NSString;
@class NSNumber;
enum PXPolicyChallengeType : NSInteger;

/// The policy that defines the behaviour of the SDK.
SWIFT_CLASS("_TtC14PerimeterX_SDK8PXPolicy")
@interface PXPolicy : NSObject <NSCopying>
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
/// Set of domains that should be intercepted. Empty set means that all domains will be intercepted. Default is an empty set.
@property (nonatomic, copy) NSSet<NSString *> * _Nonnull domains;
/// Indication that requests should be intercepted automatically. Specify false for manual requests handling. Default is true.
@property (nonatomic) BOOL requestsInterceptedAutomaticallyEnabled;
/// Challenge type. Default is <code>PXPolicyChallengeType/webView</code>.
@property (nonatomic) enum PXPolicyChallengeType challengeType;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// Challenge type.
typedef SWIFT_ENUM(NSInteger, PXPolicyChallengeType, open) {
/// WebView challenge.
  PXPolicyChallengeTypeWebView = 0,
};

@protocol PerimeterXDelegate;
@class NSData;
@class NSURLResponse;

/// PerimeterX main class.
/// You should interact with it in order to setup and start the SDK.
/// PerimeterX can intercept those types of requests:
/// <ol>
///   <li>
///     URLSession.
///   </li>
///   <li>
///     WKWebView.
///   </li>
///   <li>
///     3rd party libraries like Alamofire.
///     Notice that the SDK cannot intercept requests in SFSafariViewController.
///   </li>
/// </ol>
SWIFT_CLASS("_TtC14PerimeterX_SDK10PerimeterX")
@interface PerimeterX : NSObject
/// Start the PerimeterX SDK.
/// The expected behaviour will be started only after the completion callback is called without an error. If you need to be notified that the PerimeterX SDK is ready in other places in your code, you can use <code>addInitializationFinishedCallback(forAppId:callback:)</code> function. This function requires active network connection to be able to start the PerimeterX SDK. If it failed, you should call this function again. You can enable the The Doctor App feature - a tool that helps verify the SDK integration by simulating a typical user flow in the application.
/// \param appId The AppID of your account.
///
/// \param delegate A delegate object that conform to <code>PerimeterXDelegate</code> protocol.
///
/// \param enableDoctorCheck Should start the Doctor App feature. Default is false.
///
/// \param completion A completion block. Returns true if the initialization finished successfully, otherwise returns false and an error.
///
+ (void)startWithAppId:(NSString * _Nonnull)appId delegate:(id <PerimeterXDelegate> _Nullable)delegate enableDoctorCheck:(BOOL)enableDoctorCheck completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// Add a callback for the start flow.
/// Use this function to get notified when the PerimeterX SDK is ready for the given AppID. If it’s already ready, the callback will be called immediately. You should call this function only after you have already called the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function for the given AppID.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
/// \param callback A callback block. Called when the PerimeterX is ready.
///
+ (void)addInitializationFinishedCallbackForAppId:(NSString * _Nullable)appId callback:(void (^ _Nonnull)(void))callback;
/// Set policy for given AppID.
/// You must call the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function before calling this function.
/// \param policy The policy.
///
/// \param appId The AppID to associate the policy with. Ignore this param if you use only one AppID.
///
/// \param completion A completion block. Called after the new policy was set.
///
+ (void)setPolicyWithPolicy:(PXPolicy * _Nonnull)policy forAppId:(NSString * _Nullable)appId completion:(void (^ _Nullable)(void))completion;
/// Set custom parameters for given AppID.
/// You must call the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function before calling this function.
/// \param parameters Custom parameters. Each key must be in the following format: “custom_param[x]” where [x] is a number between 1-10.
///
/// \param appId The AppID to associate the custom parameters with. Ignore this param if you use only one AppID.
///
/// \param completion A completion block. Called after custom parameters were set.
///
+ (void)setCustomParametersWithParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)parameters forAppId:(NSString * _Nullable)appId completion:(void (^ _Nullable)(void))completion;
/// Get the VID for given AppID.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
+ (NSString * _Nullable)vidForAppId:(NSString * _Nullable)appId SWIFT_WARN_UNUSED_RESULT;
/// Register a callback that will be called after a request was blocked.
/// Returns the registration ID. Use it to unregister with <code>unregisterCallbackForRequestBlockedEvent(forAppId:registrationId:)</code> function.
/// This function returns nil on failure.
/// You must call the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function before calling this function.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
/// \param callback The callback to register.
///
+ (NSString * _Nullable)registerCallbackForRequestBlockedEventForAppId:(NSString * _Nullable)appId callback:(void (^ _Nonnull)(void))callback SWIFT_WARN_UNUSED_RESULT;
/// Unregister the callback for request blocked that is associated with the given registration ID.
/// Registration ID is provided from the <code>registerCallbackForRequestBlockedEvent(forAppId:callback:)</code> function.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
/// \param registrationId The registration ID.
///
+ (void)unregisterCallbackForRequestBlockedEventForAppId:(NSString * _Nullable)appId registrationId:(NSString * _Nonnull)registrationId;
/// Register a callback that will be called after the user solved the challenge.
/// Returns the registration ID. Use it to unregister with <code>unregisterCallbackForChallengeSolvedEvent(forAppId:registrationId:)</code> function.
/// This function returns nil on failure.
/// You must call the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function before calling this function.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
/// \param callback The callback to register.
///
+ (NSString * _Nullable)registerCallbackForChallengeSolvedEventForAppId:(NSString * _Nullable)appId callback:(void (^ _Nonnull)(void))callback SWIFT_WARN_UNUSED_RESULT;
/// Unregister the callback for challenge solved that is associated with the given registration ID.
/// Registration ID is provided from the <code>registerCallbackForRequestBlockedEvent(forAppId:callback:)</code> function.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
/// \param registrationId The registration ID.
///
+ (void)unregisterCallbackForChallengeSolvedEventForAppId:(NSString * _Nullable)appId registrationId:(NSString * _Nonnull)registrationId;
/// Returns HTTP headers that should be added to the URL request.
/// This function should be used only when the <code>PXPolicy/requestsInterceptedAutomaticallyEnabled</code> is set to false in the policy.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
+ (NSDictionary<NSString *, NSString *> * _Nonnull)headersForURLRequestForAppId:(NSString * _Nullable)appId SWIFT_WARN_UNUSED_RESULT;
/// This function handles the URL request’s response and presents the block screen, if necessary.
/// Returns true if the PerimeterX’s payload in the response was handled by the SDK. This function should be used only when the <code>PXPolicy/requestsInterceptedAutomaticallyEnabled</code> is set to false in the policy.
/// You must call the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function and wait until it’s done before calling this function.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
/// \param data The data that was received from the URL request.
///
/// \param response The response that was received from the URL request.
///
+ (BOOL)handleResponseForAppId:(NSString * _Nullable)appId data:(NSData * _Nonnull)data response:(NSURLResponse * _Nonnull)response SWIFT_WARN_UNUSED_RESULT;
/// Returns true if the error is <code>PerimeterXErrorCode/requestWasBlocked</code> error.
/// This kind error should returned when the <code>PXPolicy/requestsInterceptedAutomaticallyEnabled</code> is set to true.
/// \param error The error to check
///
+ (BOOL)isRequestBlockedErrorWithError:(NSError * _Nonnull)error SWIFT_WARN_UNUSED_RESULT;
/// Calling this method with non-null userId will start the Account Defender feature.
/// You must call the <code>start(appId:delegate:enableDoctorCheck:completion:)</code> function and wait until it’s done before calling this function.
/// \param userId The user ID. You may provide nil in case the user is not logged in anymore.
///
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
+ (void)setUserIdWithUserId:(NSString * _Nullable)userId forAppId:(NSString * _Nullable)appId;
/// Provide outgoing URL request to the Account Defender feature.
/// You must call the <code>setUserId(userId:forAppId:)</code> function before calling this function. If you are using the automatic interceptor you should not need to use this function (it will be called automatically by the interceptor).
/// \param url The URL.
///
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
+ (void)registerOutgoingUrlRequestWithUrl:(NSString * _Nonnull)url forAppId:(NSString * _Nullable)appId;
/// Returns the PerimeterX SDK version.
+ (NSString * _Nonnull)sdkVersion SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




/// PerimeterX protocol
SWIFT_PROTOCOL("_TtP14PerimeterX_SDK18PerimeterXDelegate_")
@protocol PerimeterXDelegate <NSObject>
/// Called when a request was blocked.
/// \param appId The AppID that related to the event.
///
- (void)perimeterxDidRequestBlockedForAppId:(NSString * _Nonnull)appId;
/// Called when the challenge was solved.
/// \param appId The AppID that related to the event.
///
- (void)perimeterxDidChallengeSolvedForAppId:(NSString * _Nonnull)appId;
@end










#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif