//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol TUICandidateViewStyle;

@protocol TUICandidateViewState <NSObject>
@property(readonly, nonatomic) unsigned long long borders;
@property(readonly, nonatomic) struct CGPoint arrowButtonOffset;
@property(readonly, nonatomic) double additionalHeight;
@property(readonly, nonatomic) double yOffset;
@property(readonly, nonatomic) _Bool candidateNumberEnabled;
@property(readonly, nonatomic) _Bool hasBackdrop;
@property(readonly, nonatomic) long long arrowButtonDirection;
@property(readonly, nonatomic) long long arrowButtonPosition;
@property(readonly, nonatomic) long long inlineTextViewPosition;
@property(readonly, nonatomic) long long sortControlPosition;
@property(readonly, nonatomic) long long disambiguationGridPosition;
@property(readonly, nonatomic) long long disambiguationGridRowType;
@property(readonly, nonatomic) long long primaryGridRowType;
@property(readonly, nonatomic) id <TUICandidateViewStyle> disambiguationStyle;
@property(readonly, nonatomic) id <TUICandidateViewStyle> style;
@end

