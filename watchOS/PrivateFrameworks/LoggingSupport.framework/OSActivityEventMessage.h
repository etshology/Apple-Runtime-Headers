//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LoggingSupport/OSActivityEvent.h>

@class NSData, NSMutableArray, NSString;

@interface OSActivityEventMessage : OSActivityEvent
{
    NSData *_bufferPrivateData;
    NSData *_bufferData;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *format;
@property(readonly, nonatomic) NSMutableArray *arguments;
- (void)fillEventData:(const char *)arg1 length:(unsigned long)arg2 privateBuffer:(const char *)arg3 length:(unsigned long)arg4;

@end

