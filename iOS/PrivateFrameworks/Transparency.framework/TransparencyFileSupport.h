//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TransparencyFileSupport : NSObject
{
}

+ (_Bool)deleteFile:(id)arg1 error:(id *)arg2;
+ (_Bool)writeDictionaryToFile:(id)arg1 fileName:(id)arg2 error:(id *)arg3;
+ (id)readDataFromFile:(id)arg1 error:(id *)arg2;
+ (id)readDictionaryFromFile:(id)arg1 error:(id *)arg2;
+ (long long)directorySizeInKB:(id *)arg1;
+ (id)appSupportPath:(id *)arg1;
+ (_Bool)setProtectionToClassDForURL:(id)arg1 error:(id *)arg2;

@end

