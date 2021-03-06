//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchKit/NSCopying-Protocol.h>
#import <WatchKit/NSSecureCoding-Protocol.h>

@class NSData, NSString, UIImage;

@interface WKImage : NSObject <NSCopying, NSSecureCoding>
{
    UIImage *_image;
    NSData *_imageData;
    NSString *_imageName;
}

+ (_Bool)supportsSecureCoding;
+ (id)imageWithImageName:(id)arg1;
+ (id)imageWithImageData:(id)arg1;
+ (id)imageWithImage:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain) UIImage *image; // @synthesize image=_image;
- (id)_init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

