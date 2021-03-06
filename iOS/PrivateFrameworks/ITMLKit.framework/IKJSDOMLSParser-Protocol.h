//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMDocument, IKDOMLSInput, IKDOMNode;

@protocol IKJSDOMLSParser <JSExport>
@property(readonly, getter=replaceAction) long long ACTION_REPLACE;
@property(readonly, getter=insertAfterAction) long long ACTION_INSERT_AFTER;
@property(readonly, getter=insertBeforeAction) long long ACTION_INSERT_BEFORE;
@property(readonly, getter=replaceChildrenAction) long long ACTION_REPLACE_CHILDREN;
@property(readonly, getter=appendAsChildrenAction) long long ACTION_APPEND_AS_CHILDREN;
- (IKDOMNode *)parseWithContext:(IKDOMLSInput *)arg1:(IKDOMNode *)arg2:(long long)arg3;
- (IKDOMDocument *)parse:(IKDOMLSInput *)arg1;
@end

