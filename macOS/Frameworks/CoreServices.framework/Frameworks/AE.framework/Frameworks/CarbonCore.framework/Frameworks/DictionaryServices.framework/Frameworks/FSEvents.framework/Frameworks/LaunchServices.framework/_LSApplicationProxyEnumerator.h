//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LaunchServices/_LSDBEnumerator.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _LSApplicationProxyEnumerator : _LSDBEnumerator
{
    NSURL *_volumeURL;
    unsigned long long _options;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> _bundleIdentifiers;
    unsigned int _container;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;
- (BOOL)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;
- (id)initWithVolumeURL:(id)arg1 options:(unsigned long long)arg2;
- (id)_applicationProxyWithContext:(struct LSContext *)arg1 bundleIdentifier:(unsigned int)arg2;
- (BOOL)_evaluateBundleNoIO:(unsigned int)arg1 data:(const struct LSBundleData *)arg2 context:(struct LSContext *)arg3;
- (BOOL)_getContainer:(unsigned int *)arg1 context:(struct LSContext *)arg2 error:(id *)arg3;

@end

