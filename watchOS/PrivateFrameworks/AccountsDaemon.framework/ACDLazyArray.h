//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface ACDLazyArray : NSArray
{
    struct os_unfair_lock_s _initializationLock;
    CDUnknownBlockType _initializationBlock;
    NSArray *_underlyingArray;
}

- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)initWithObjects:(const id *)arg1 count:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitializer:(CDUnknownBlockType)arg1;
- (id)init;

@end

