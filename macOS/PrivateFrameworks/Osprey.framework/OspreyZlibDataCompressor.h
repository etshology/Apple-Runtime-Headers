//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OspreyZlibDataCompressor : NSObject
{
    struct z_stream_s _deflateStream;
    unsigned char _deflateBuffer[8192];
}

- (id)compressedDataForData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithOptions:(long long)arg1;
- (id)init;

@end

