//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNumber.h>

#import <EmailFoundation/EFSQLBindable-Protocol.h>
#import <EmailFoundation/EFSQLExpressable-Protocol.h>
#import <EmailFoundation/EFSQLNumericValueExpressable-Protocol.h>

@class EFSQLBinding, NSString;

@interface NSNumber (EFSQLBindable) <EFSQLBindable, EFSQLExpressable, EFSQLNumericValueExpressable>
@property(readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end

