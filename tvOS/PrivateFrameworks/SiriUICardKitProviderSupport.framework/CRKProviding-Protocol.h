//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUICardKitProviderSupport/CRKCardViewControllerProviding-Protocol.h>

@protocol CRCard, CRKCardSectionViewProviderDelegate;

@protocol CRKProviding <CRKCardViewControllerProviding>

@optional
- (void)requestCardSectionViewProviderForCard:(id <CRCard>)arg1 delegate:(id <CRKCardSectionViewProviderDelegate>)arg2 reply:(void (^)(NSError *, id <CRKCardSectionViewProviding>))arg3;
@end

