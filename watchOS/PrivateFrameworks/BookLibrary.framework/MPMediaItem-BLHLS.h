//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaItem.h>

@interface MPMediaItem (BLHLS)
- (void)bl_clearPersistHLSOfflinePlaybackKeys;
- (void)bl_removePersistHLSOfflinePlaybackKeyForUri:(id)arg1;
- (void)bl_addPersistHLSOfflinePlaybackKey:(id)arg1 forUri:(id)arg2;
@property(nonatomic) unsigned int bl_bitrate;
- (id)bl_hlsOfflinePlaybackKeys;
@end

