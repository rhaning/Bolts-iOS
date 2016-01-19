/*
 *  Copyright (c) 2014, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#import <Bolts/Common/BoltsVersion.h>
#import <Bolts/Common/BFCancellationToken.h>
#import <Bolts/Common/BFCancellationTokenRegistration.h>
#import <Bolts/Common/BFCancellationTokenSource.h>
#import <Bolts/Common/BFDefines.h>
#import <Bolts/Common/BFExecutor.h>
#import <Bolts/Common/BFTask.h>
#import <Bolts/Common/BFTaskCompletionSource.h>

#if __has_include(<Bolts/BFAppLink.h>) && TARGET_OS_IPHONE && !TARGET_OS_WATCH && !TARGET_OS_TV
#import <Bolts/BFAppLink.h>
#import <Bolts/BFAppLinkNavigation.h>
#import <Bolts/BFAppLinkResolving.h>
#import <Bolts/BFAppLinkReturnToRefererController.h>
#import <Bolts/BFAppLinkReturnToRefererView.h>
#import <Bolts/BFAppLinkTarget.h>
#import <Bolts/BFMeasurementEvent.h>
#import <Bolts/BFURL.h>
#import <Bolts/BFWebViewAppLinkResolver.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/*! @abstract 80175001: There were multiple errors. */
extern NSInteger const kBFMultipleErrorsError;

@interface Bolts : NSObject

/*!
 Returns the version of the Bolts Framework as an NSString.
 @returns The NSString representation of the current version.
 */
+ (NSString *)version;

@end

NS_ASSUME_NONNULL_END
