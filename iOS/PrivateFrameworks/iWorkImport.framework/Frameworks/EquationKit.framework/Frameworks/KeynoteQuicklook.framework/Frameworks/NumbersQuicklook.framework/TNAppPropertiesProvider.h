//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSApplication/TSAApplicationPropertiesProvider.h>

@class NSArray;

@interface TNAppPropertiesProvider : TSAApplicationPropertiesProvider
{
}

- (id)bladerunnerContainerIdentifier;
- (id)cloudKitSyncContainerIdentifier;
- (id)cloudKitContainerIdentifier;
@property(readonly, copy, nonatomic) NSArray *excelDocumentTypes;
- (id)importableDocumentTypes;
- (id)nativeSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)templateSFFDocumentType;
- (id)templateDocumentType;
- (id)nativeDocumentType;
- (id)templateTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)documentTypeDisplayName;
- (unsigned long long)applicationType;
- (id)applicationDisplayName;
- (id)applicationName;

@end

