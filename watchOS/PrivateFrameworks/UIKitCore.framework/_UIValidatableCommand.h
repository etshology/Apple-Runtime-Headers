//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICommand.h>

@class UICommandAlternate;

__attribute__((visibility("hidden")))
@interface _UIValidatableCommand : UICommand
{
    UICommand *_command;
    UICommandAlternate *_alternate;
}

- (void).cxx_destruct;
- (void)useCommand:(id)arg1 alternate:(id)arg2;
- (id)init;
- (id)alternates;
- (id)propertyList;
- (SEL)action;

@end

