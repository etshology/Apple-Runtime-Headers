//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase;

@interface WFCloudKitWebServiceRequest : NSObject
{
    CKContainer *_container;
    CKDatabase *_database;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void)parseRecord:(id)arg1 intoItem:(id)arg2 allKeys:(_Bool)arg3;
- (id)extractRecordDictFromRecordIfNecessary:(id)arg1 recordType:(id)arg2;
- (id)recordsFromQueryResponse:(id)arg1;
- (id)urlForType:(unsigned int)arg1 parameters:(id)arg2;
- (id)cloudKitAPIToken;
- (id)cloudKitEnvironment;
- (id)pathComponentsForType:(unsigned int)arg1 parameters:(id)arg2;
- (unsigned int)webServiceForRequestType:(unsigned int)arg1;
- (id)databaseName;
- (id)getJSONFromURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)postJSON:(id)arg1 toURL:(id)arg2 cacheKey:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)queryWithItemType:(Class)arg1 filter:(id)arg2;
- (id)fetchProxiedRecordWithIdentifier:(id)arg1 possibleItemTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)fetchRecordsWithItemType:(Class)arg1 filter:(id)arg2 cacheKey:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithContainer:(id)arg1 database:(id)arg2;

@end

