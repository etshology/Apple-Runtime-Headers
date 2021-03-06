//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ENXMLDTD : NSObject
{
    struct _xmlDtd *_dtd;
    NSString *_docTypeDeclaration;
}

+ (id)specialDTD;
+ (id)symbolDTD;
+ (id)lat1DTD;
+ (id)enml2dtd;
+ (id)enexDTD;
+ (id)dtdWithBundleResource:(id)arg1 ofType:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *docTypeDeclaration; // @synthesize docTypeDeclaration=_docTypeDeclaration;
- (_Bool)isAttributeLegal:(id)arg1 inElement:(id)arg2;
- (id)sanitizedAttributes:(id)arg1 forElement:(id)arg2;
- (_Bool)isElementLegal:(id)arg1;
- (struct _xmlElement *)xmlElementNamed:(id)arg1;
- (struct _xmlEntity *)xmlEntityNamed:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1;

@end

