//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardHome/SBRootFolderPageStateProviding-Protocol.h>

@class NSString;
@protocol SBRootFolderPageTransition;

@protocol SBRootFolderPageStateTransitioning <SBRootFolderPageStateProviding>
@property(readonly, nonatomic) long long destinationPageState;
@property(readonly, nonatomic, getter=isTransitioningPageState) _Bool transitioningPageState;
- (id <SBRootFolderPageTransition>)beginPageStateTransitionToState:(long long)arg1 reason:(NSString *)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (void)performPageStateTransitionToState:(long long)arg1 reason:(NSString *)arg2 animated:(_Bool)arg3 completionHandler:(void (^)(void))arg4;
- (_Bool)canTransitionPageStateToState:(long long)arg1;
@end

