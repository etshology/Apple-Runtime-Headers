//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVPlayback/NSCopying-Protocol.h>
#import <TVPlayback/NSObject-Protocol.h>

@class UIImage;

@protocol TVPMusicNowPlayingImage <NSObject, NSCopying>
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(nonatomic) struct CGSize desiredImageSize;
- (void)loadWithCompletionHandler:(void (^)(id <TVPMusicNowPlayingImage>, UIImage *, NSError *))arg1;
@end

