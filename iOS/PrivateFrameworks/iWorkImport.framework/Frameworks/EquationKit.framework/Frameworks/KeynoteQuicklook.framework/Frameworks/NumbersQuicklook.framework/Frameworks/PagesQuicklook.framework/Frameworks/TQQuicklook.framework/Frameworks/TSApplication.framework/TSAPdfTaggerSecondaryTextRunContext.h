//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSApplication/TSAPdfTaggerContext.h>

@interface TSAPdfTaggerSecondaryTextRunContext : TSAPdfTaggerContext
{
    struct _NSRange _charRange;
    struct _NSRange _baseTextRange;
}

@property(readonly, nonatomic) struct _NSRange baseTextRange; // @synthesize baseTextRange=_baseTextRange;
@property(readonly, nonatomic) struct _NSRange charRange; // @synthesize charRange=_charRange;
- (id)initWithStateOfTagger:(id)arg1 charRange:(struct _NSRange)arg2 baseTextRange:(struct _NSRange)arg3;

@end

