//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICacheCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SKUIReviewList : NSObject <SKUICacheCoding>
{
    NSDictionary *_dictionary;
    NSMutableArray *_reviews;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *reviews; // @synthesize reviews=_reviews;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
@property(readonly, nonatomic) NSURL *writeReviewURL;
@property(readonly, nonatomic) float userRating;
@property(readonly, nonatomic) long long twoStarRatingCount;
@property(readonly, nonatomic) long long threeStarRatingCount;
@property(readonly, nonatomic) long long ratingCount;
@property(readonly, nonatomic) long long oneStarRatingCount;
@property(readonly, nonatomic) long long numberOfPages;
@property(readonly, nonatomic) long long fourStarRatingCount;
@property(readonly, nonatomic) long long fiveStarRatingCount;
- (void)addReviews:(id)arg1;
- (id)initWithReviewListDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

