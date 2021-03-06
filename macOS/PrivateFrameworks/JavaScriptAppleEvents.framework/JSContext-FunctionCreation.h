//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JavaScriptCore/JSContext.h>

@class NSMutableDictionary, NSProgress, NSString;

@interface JSContext (FunctionCreation)
- (id)valueWithNewFunctionWithArgumentNames:(id)arg1 body:(id)arg2;
- (id)valueWithJSValueRef:(struct OpaqueJSValue *)arg1;
- (id)valueWithUndefined;
- (id)valueWithNull;
- (id)valueWithNewErrorFromMessage:(id)arg1;
- (id)valueWithNewRegularExpressionFromPattern:(id)arg1 flags:(id)arg2;
- (id)valueWithNewArray;
- (id)valueWithNewObject;
- (id)valueWithUInt32:(unsigned int)arg1;
- (id)valueWithInt32:(int)arg1;
- (id)valueWithDouble:(double)arg1;
- (id)valueWithBool:(BOOL)arg1;
- (id)valueWithObject:(id)arg1;
- (id)bridgeSupport;
- (void)setupJSAE;
- (id)parameterNameForCode:(unsigned int)arg1 inHandler:(id)arg2;
- (id)handlerNameForEventWithClass:(unsigned int)arg1 andID:(unsigned int)arg2;
- (void)addHandlerDetails:(id)arg1;
@property(readonly) NSMutableDictionary *librariesForIdentifiers;
@property(readonly) NSMutableDictionary *appsForIdentifiers;
- (void)runActiveProc;
- (void)setActiveProc:(CDUnknownFunctionPointerType)arg1 withRefCon:(void *)arg2;
- (void)setSendProc:(CDUnknownFunctionPointerType)arg1 withRefCon:(void *)arg2;
@property unsigned int scriptID;
@property struct ComponentInstanceRecord *componentInstance;
@property(retain) NSProgress *progress;
@property(retain) NSString *defaultTarget;
- (id)valueWithObjCValue:(void *)arg1 type:(id)arg2;
- (id)valueWithNewObjectOfJSClassRef:(struct OpaqueJSClass *)arg1;
@end

