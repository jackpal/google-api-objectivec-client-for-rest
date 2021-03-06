// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   URL Shortener API (urlshortener/v1)
// Description:
//   Lets you create, inspect, and manage goo.gl short URLs
// Documentation:
//   https://developers.google.com/url-shortener/v1/getting_started

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRURLShortener_Url;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// projection

/** Value: "ANALYTICS_CLICKS" */
GTLR_EXTERN NSString * const kGTLRURLShortenerProjectionAnalyticsClicks;
/**
 *  Returns only top string counts.
 *
 *  Value: "ANALYTICS_TOP_STRINGS"
 */
GTLR_EXTERN NSString * const kGTLRURLShortenerProjectionAnalyticsTopStrings;
/** Value: "FULL" */
GTLR_EXTERN NSString * const kGTLRURLShortenerProjectionFull;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other URLShortener query classes.
 */
@interface GTLRURLShortenerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Expands a short URL or gets creation time and analytics.
 *
 *  Method: urlshortener.url.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeURLShortener
 */
@interface GTLRURLShortenerQuery_UrlGet : GTLRURLShortenerQuery
// Previous library name was
//   +[GTLQueryURLShortener queryForUrlGetWithshortUrl:]

/**
 *  Additional information to return.
 *
 *  Likely values:
 *    @arg @c kGTLRURLShortenerProjectionAnalyticsClicks Returns only click
 *        counts. (Value: "ANALYTICS_CLICKS")
 *    @arg @c kGTLRURLShortenerProjectionAnalyticsTopStrings Returns only top
 *        string counts. (Value: "ANALYTICS_TOP_STRINGS")
 *    @arg @c kGTLRURLShortenerProjectionFull Returns the creation timestamp and
 *        all available analytics. (Value: "FULL")
 */
@property(nonatomic, copy, nullable) NSString *projection;

/** The short URL, including the protocol. */
@property(nonatomic, copy, nullable) NSString *shortUrl;

/**
 *  Fetches a @c GTLRURLShortener_Url.
 *
 *  Expands a short URL or gets creation time and analytics.
 *
 *  @param shortUrl The short URL, including the protocol.
 *
 *  @returns GTLRURLShortenerQuery_UrlGet
 */
+ (instancetype)queryWithShortUrl:(NSString *)shortUrl;

@end

/**
 *  Creates a new short URL.
 *
 *  Method: urlshortener.url.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeURLShortener
 */
@interface GTLRURLShortenerQuery_UrlInsert : GTLRURLShortenerQuery
// Previous library name was
//   +[GTLQueryURLShortener queryForUrlInsertWithObject:]

/**
 *  Fetches a @c GTLRURLShortener_Url.
 *
 *  Creates a new short URL.
 *
 *  @param object The @c GTLRURLShortener_Url to include in the query.
 *
 *  @returns GTLRURLShortenerQuery_UrlInsert
 */
+ (instancetype)queryWithObject:(GTLRURLShortener_Url *)object;

@end

/**
 *  Retrieves a list of URLs shortened by a user.
 *
 *  Method: urlshortener.url.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeURLShortener
 */
@interface GTLRURLShortenerQuery_UrlList : GTLRURLShortenerQuery
// Previous library name was
//   +[GTLQueryURLShortener queryForUrlList]

/**
 *  Additional information to return.
 *
 *  Likely values:
 *    @arg @c kGTLRURLShortenerProjectionAnalyticsClicks Returns short URL click
 *        counts. (Value: "ANALYTICS_CLICKS")
 *    @arg @c kGTLRURLShortenerProjectionFull Returns short URL click counts.
 *        (Value: "FULL")
 */
@property(nonatomic, copy, nullable) NSString *projection;

/** Token for requesting successive pages of results. */
@property(nonatomic, copy, nullable) NSString *startToken;

/**
 *  Fetches a @c GTLRURLShortener_UrlHistory.
 *
 *  Retrieves a list of URLs shortened by a user.
 *
 *  @returns GTLRURLShortenerQuery_UrlList
 */
+ (instancetype)query;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
