//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKMessagePartChatItem.h>

@class CKMediaObject, NSString, UITraitCollection;

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem
{
    UITraitCollection *_transcriptTraitCollection;
    CKMediaObject *_mediaObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (id)transcriptTraitCollection;
@property(readonly, copy, nonatomic) NSString *transferGUID;
- (id)pasteboardItems;
- (_Bool)shouldCacheSize;
- (unsigned int)balloonCorners;
- (Class)balloonViewClass;
- (void)setTranscriptTraitCollection:(id)arg1;
- (_Bool)stickersSnapToPoint;
- (_Bool)canExport;
- (_Bool)canForward;
- (_Bool)canCopy;
- (struct CGSize)_transcoderGeneratedSizeFittingSize:(struct CGSize)arg1 sizeExists:(_Bool *)arg2;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(float)arg2;
- (id)description;
- (id)composition;

@end

