//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSIndexPath, NSIndexSet, PXSearchResultsSectionedDataSource, PXSearchResultsValue, PXSearchTopAssetsResult;

@protocol PXSearchResultsSectionedDataSourceChangeObserver <NSObject>
- (void)searchResultsDataSource:(PXSearchResultsSectionedDataSource *)arg1 didChangeThumbnailAssetsForSearchResult:(PXSearchTopAssetsResult *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)searchResultsDataSource:(PXSearchResultsSectionedDataSource *)arg1 didChangeThumbnailAssetsForSearchResult:(PXSearchTopAssetsResult *)arg2 topAssetsSectionExists:(_Bool)arg3;
- (void)searchResultsDataSource:(PXSearchResultsSectionedDataSource *)arg1 didFetchAssetsForSearchResult:(PXSearchResultsValue *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)searchResultsDataSourceHasPendingChanges:(PXSearchResultsSectionedDataSource *)arg1 shouldMergePendingChanges:(_Bool)arg2;
@end

