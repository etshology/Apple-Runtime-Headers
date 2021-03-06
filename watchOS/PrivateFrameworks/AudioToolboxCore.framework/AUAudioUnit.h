//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AUAudioUnitBusArray, AUAudioUnitPreset, AUParameterTree, NSArray, NSDictionary, NSMutableArray, NSString, UIViewController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AUAudioUnit : NSObject
{
    struct OpaqueAudioComponent *_component;
    NSString *_componentName;
    unsigned int _componentVersion;
    UIViewController *_cachedViewController;
    unsigned int _maximumFramesToRender;
    int _MIDIOutputBufferSizeHint;
    struct RealtimeState _realtimeState;
    AUParameterTree *_parameterTree;
    NSMutableArray *_userPresets;
    _Bool _isLoadedInProcess;
    NSObject<OS_dispatch_queue> *_presetMonitoringQueue;
    NSObject<OS_dispatch_source> *_presetFolderWatcher;
    _Bool _renderResourcesAllocated;
    _Bool _allParameterValues;
    _Bool _supportsUserPresets;
    _Bool _shouldBypassEffect;
    _Bool _canProcessInPlace;
    _Bool _renderingOffline;
    _Bool _supportsMPE;
    NSString *_audioUnitShortName;
    int _virtualMIDICableCount;
    CDUnknownBlockType _MIDIOutputEventBlock;
    NSArray *_factoryPresets;
    AUAudioUnitPreset *_currentPreset;
    int _renderQuality;
    CDUnknownBlockType _musicalContextBlock;
    CDUnknownBlockType _transportStateBlock;
    NSString *_contextName;
    NSArray *_channelMap;
    CDUnknownBlockType _profileChangedBlock;
    double _latency;
    double _tailTime;
    struct AudioComponentDescription _componentDescription;
}

+ (id)keyPathsForValuesAffectingAllParameterValues;
+ (id)auAudioUnitForAudioUnit:(struct OpaqueAudioComponentInstance *)arg1;
+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)_monitorUserPresets:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)_loadUserPresets:(id)arg1 error:(id *)arg2;
+ (id)_presetStateFor:(id)arg1 error:(id *)arg2;
+ (_Bool)_deleteUserPreset:(id)arg1 error:(id *)arg2;
+ (_Bool)_saveUserPreset:(id)arg1 state:(id)arg2 error:(id *)arg3;
+ (id)__userPresetPath:(id)arg1 error:(id *)arg2;
+ (void)__sanitizePresetNumber:(id)arg1;
+ (id)__sanitizeFileName:(id)arg1;
+ (id)__presetFromPath:(id)arg1;
+ (void)registerSubclass:(Class)arg1 asComponentDescription:(struct AudioComponentDescription)arg2 name:(id)arg3 version:(unsigned long)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType profileChangedBlock; // @synthesize profileChangedBlock=_profileChangedBlock;
@property(copy, nonatomic) NSArray *channelMap; // @synthesize channelMap=_channelMap;
@property(readonly, nonatomic) _Bool supportsMPE; // @synthesize supportsMPE=_supportsMPE;
@property(copy, nonatomic) NSString *contextName; // @synthesize contextName=_contextName;
@property(copy, nonatomic) CDUnknownBlockType transportStateBlock; // @synthesize transportStateBlock=_transportStateBlock;
@property(copy, nonatomic) CDUnknownBlockType musicalContextBlock; // @synthesize musicalContextBlock=_musicalContextBlock;
@property(nonatomic, getter=isRenderingOffline) _Bool renderingOffline; // @synthesize renderingOffline=_renderingOffline;
@property(readonly, nonatomic) _Bool canProcessInPlace; // @synthesize canProcessInPlace=_canProcessInPlace;
@property(nonatomic) _Bool shouldBypassEffect; // @synthesize shouldBypassEffect=_shouldBypassEffect;
@property(nonatomic) int renderQuality; // @synthesize renderQuality=_renderQuality;
@property(readonly, nonatomic) double tailTime; // @synthesize tailTime=_tailTime;
@property(readonly, nonatomic) double latency; // @synthesize latency=_latency;
@property(retain, nonatomic) AUAudioUnitPreset *currentPreset; // @synthesize currentPreset=_currentPreset;
@property(readonly, nonatomic) _Bool supportsUserPresets; // @synthesize supportsUserPresets=_supportsUserPresets;
@property(readonly, copy, nonatomic) NSArray *factoryPresets; // @synthesize factoryPresets=_factoryPresets;
@property(copy, nonatomic) CDUnknownBlockType MIDIOutputEventBlock; // @synthesize MIDIOutputEventBlock=_MIDIOutputEventBlock;
@property(readonly, nonatomic) int virtualMIDICableCount; // @synthesize virtualMIDICableCount=_virtualMIDICableCount;
@property(readonly, nonatomic) _Bool allParameterValues; // @synthesize allParameterValues=_allParameterValues;
@property(readonly, nonatomic) _Bool renderResourcesAllocated; // @synthesize renderResourcesAllocated=_renderResourcesAllocated;
@property(readonly, copy, nonatomic) NSString *audioUnitShortName; // @synthesize audioUnitShortName=_audioUnitShortName;
@property(readonly, nonatomic) struct AudioComponentDescription componentDescription; // @synthesize componentDescription=_componentDescription;
@property(readonly, nonatomic) _Bool isLoadedInProcess;
@property(readonly, copy, nonatomic) NSArray *userPresets;
- (void)startUserPresetFolderMonitoring;
- (_Bool)deleteUserPreset:(id)arg1 error:(id *)arg2;
- (id)presetStateFor:(id)arg1 error:(id *)arg2;
- (_Bool)saveUserPreset:(id)arg1 error:(id *)arg2;
- (void)tearDownExtension;
- (_Bool)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;
- (_Bool)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;
- (id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2;
- (void)selectViewConfiguration:(id)arg1;
- (id)supportedViewConfigurations:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
@property(nonatomic) int MIDIOutputBufferSizeHint;
@property(nonatomic) unsigned int maximumFramesToRender;
@property(readonly, nonatomic) _Bool providesUserInterface;
- (void)requestViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setCachedViewController:(id)arg1;
- (id)cachedViewController;
@property(copy, nonatomic) NSDictionary *fullStateForDocument;
@property(copy, nonatomic) NSDictionary *fullState;
@property(readonly, nonatomic) AUAudioUnitBusArray *outputBusses;
@property(readonly, nonatomic) AUAudioUnitBusArray *inputBusses;
@property(readonly, copy, nonatomic) NSArray *channelCapabilities;
- (void)reset;
- (id)parametersForOverviewWithCount:(int)arg1;
@property(retain, nonatomic) AUParameterTree *parameterTree;
- (void)deallocateRenderResources;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (void)removeRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;
- (void)addRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;
- (void)removeRenderObserver:(int)arg1;
- (int)tokenByAddingRenderObserver:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *MIDIOutputNames;
@property(readonly, nonatomic) CDUnknownBlockType scheduleMIDIEventBlock;
@property(readonly, nonatomic, getter=isMusicDeviceOrEffect) _Bool musicDeviceOrEffect;
@property(readonly, nonatomic) CDUnknownBlockType scheduleParameterBlock;
@property(readonly, nonatomic) CDUnknownBlockType internalRenderBlock;
@property(readonly, nonatomic) CDUnknownBlockType renderBlock;
- (struct AUEventSchedule *)eventSchedule;
@property(readonly, nonatomic) unsigned int componentVersion;
@property(readonly, copy, nonatomic) NSString *manufacturerName;
@property(readonly, copy, nonatomic) NSString *audioUnitName;
@property(readonly, copy, nonatomic) NSString *componentName;
@property(readonly, nonatomic) struct OpaqueAudioComponent *component;
- (void)invalidateAudioUnit;
- (void)dealloc;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 error:(id *)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned long)arg2 error:(id *)arg3;
- (id)init;
- (void)setRenderResourcesAllocated:(_Bool)arg1;
- (_Bool)shouldChangeToFormat:(id)arg1 forBus:(id)arg2;

@end

