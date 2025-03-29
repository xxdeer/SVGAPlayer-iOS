#import <Foundation/Foundation.h>

#if __has_attribute(swift_private)
#define AC_SWIFT_PRIVATE __attribute__((swift_private))
#else
#define AC_SWIFT_PRIVATE
#endif

/// The "begin" asset catalog image resource.
static NSString * const ACImageNameBegin AC_SWIFT_PRIVATE = @"begin";

/// The "purse" asset catalog image resource.
static NSString * const ACImageNamePurse AC_SWIFT_PRIVATE = @"purse";

#undef AC_SWIFT_PRIVATE
