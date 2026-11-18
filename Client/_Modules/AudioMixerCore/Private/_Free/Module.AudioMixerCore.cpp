// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerCore
// Functions: 106

// `dynamic_initializer_for_'AudioChannelReg'' @ 140f8ce20

void __cdecl _dynamic_initializer_for__AudioChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&AudioChannelObject,"AudioChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'AudioMixerChannelReg'' @ 140f8ce50

void __cdecl _dynamic_initializer_for__AudioMixerChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&AudioMixerChannelObject,"AudioMixerChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'CVarAudioMixerDebugForceDroppedHardwareCallback'' @ 140f8ce80

void __cdecl _dynamic_initializer_for__CVarAudioMixerDebugForceDroppedHardwareCallback__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAudioMixerDebugForceDroppedHardwareCallback,
             L"au.debug.ForceDroppedHardwareCallback",
             &AudioMixerDebugForceDroppedHardwareCallbackCVar,
             L"Will drop the next N hardware callbacks\nN == 0 off, N < 0 (will drop all callbacks), N > 0 will drop (will drop N callbacks)"
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarAudioMixerDebugForceDroppedHardwareCallback__);
  return;
}

// `dynamic_initializer_for_'CVarFadeoutTimeout'' @ 140f8ced0

void __cdecl _dynamic_initializer_for__CVarFadeoutTimeout__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFadeoutTimeout,L"au.FadeOutTimeoutMSec",&FadeoutTimeoutCVar,
             L"Amount of time to wait for the FadeOut Event to fire. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarFadeoutTimeout__);
  return;
}

// `dynamic_initializer_for_'CVarLogRenderTimes'' @ 140f8cf20

void __cdecl _dynamic_initializer_for__CVarLogRenderTimes__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogRenderTimes,L"au.LogRenderTimes",&LogRenderTimesCVar,
             L"Logs Audio Render Times.\n0: Not Log, 1: Log",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogRenderTimes__);
  return;
}

// `dynamic_initializer_for_'CVarMinTimeBetweenUnderrunWarningsMs'' @ 140f8cf70

void __cdecl _dynamic_initializer_for__CVarMinTimeBetweenUnderrunWarningsMs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinTimeBetweenUnderrunWarningsMs,L"au.MinLogTimeBetweenUnderrunWarnings",
             &MinTimeBetweenUnderrunWarningsMs,
             L"Min time between underrun warnings (globally) in MS\nSet the time between each subsequent underrun log warning globaly (defaults to 10secs)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMinTimeBetweenUnderrunWarningsMs__);
  return;
}

// `dynamic_initializer_for_'CVarOverrunTimeout'' @ 140f8cfc0

void __cdecl _dynamic_initializer_for__CVarOverrunTimeout__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOverrunTimeout,L"au.OverrunTimeoutMSec",&OverrunTimeoutCVar,
             L"Amount of time to wait for the render thread to time out before swapping to the null device. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarOverrunTimeout__);
  return;
}

// `dynamic_initializer_for_'CVarRecycleThreads'' @ 140f8d010

void __cdecl _dynamic_initializer_for__CVarRecycleThreads__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRecycleThreads,L"au.RecycleThreads",&bRecycleThreadsCVar,
             L"Keeps threads to reuse instead of create/destroying them0 off, 1 on",0);
  atexit(_dynamic_atexit_destructor_for__CVarRecycleThreads__);
  return;
}

// `dynamic_initializer_for_'CVarRenderThreadAffinity'' @ 140f8d060

void __cdecl _dynamic_initializer_for__CVarRenderThreadAffinity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRenderThreadAffinity,L"au.RenderThreadAffinity",&SetRenderThreadAffinityCVar,
             L"Override audio render thread affinity.\n0: Disabled (Default), otherwise overriden thread affinity."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderThreadAffinity__);
  return;
}

// `dynamic_initializer_for_'CVarSetRenderThreadPriority'' @ 140f8d0b0

void __cdecl _dynamic_initializer_for__CVarSetRenderThreadPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSetRenderThreadPriority,L"au.RenderThreadPriority",&SetRenderThreadPriorityCVar,
             L"Sets audio render thread priority. Defaults to 3.\n0: Normal, 1: Above Normal, 2: Below Normal, 3: Highest, 4: Lowest, 5: Slightly Below Normal, 6: Time Critical"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSetRenderThreadPriority__);
  return;
}

// `dynamic_initializer_for_'CVarUnderrunTimeout'' @ 140f8d100

void __cdecl _dynamic_initializer_for__CVarUnderrunTimeout__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUnderrunTimeout,L"au.UnderrunTimeoutMSec",&UnderrunTimeoutCVar,
             L"Amount of time to wait for the render thread to generate the next buffer before submitting an underrun buffer. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUnderrunTimeout__);
  return;
}

// `dynamic_initializer_for_'CVarUseAudioDeviceInfoCache'' @ 140f8d150

void __cdecl _dynamic_initializer_for__CVarUseAudioDeviceInfoCache__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseAudioDeviceInfoCache,L"au.UseCachedDeviceInfoCache",
             &bUseAudioDeviceInfoCacheCVar,
             L"Uses a Cache of the DeviceCache instead of asking the OS0 off, 1 on",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseAudioDeviceInfoCache__);
  return;
}

// `dynamic_initializer_for_'CVarUseThreadedDeviceSwap'' @ 140f8d1a0

void __cdecl _dynamic_initializer_for__CVarUseThreadedDeviceSwap__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseThreadedDeviceSwap,L"au.UseThreadedDeviceSwap",&bUseThreadedDeviceSwapCVar,
             L"Lets Device Swap go wide.0 off, 1 on",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseThreadedDeviceSwap__);
  return;
}

// `dynamic_initializer_for_'ExtraAudioMixerDeviceLogging'' @ 140f8d1f0

void __cdecl _dynamic_initializer_for__ExtraAudioMixerDeviceLogging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&ExtraAudioMixerDeviceLogging,L"au.ExtraAudioMixerDeviceLogging",
             &ExtraAudioMixerDeviceLoggingCVar,
             L"Enables extra logging for audio mixer device running \n0: no logging, 1: logging every 500 callbacks \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__ExtraAudioMixerDeviceLogging__);
  return;
}

// `dynamic_initializer_for_'FlushAudioDeviceRequested'' @ 140f8d240

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__FlushAudioDeviceRequested__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",
                    L"EventLogTraceMessage_FlushAudioDeviceRequested",L"Flush Audio Device");
  pFVar1 = FText::ToString(this);
  FlushAudioDeviceRequested.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FlushAudioDeviceRequested.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)FlushAudioDeviceRequested.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (FlushAudioDeviceRequested.Data.ArrayNum == 0) {
    FlushAudioDeviceRequested.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FlushAudioDeviceRequested.Data.ArrayNum,0,
               (ForAnyElementType *)&FlushAudioDeviceRequested,
               FlushAudioDeviceRequested.Data.ArrayNum,&FlushAudioDeviceRequested.Data.ArrayMax);
    memcpy(FlushAudioDeviceRequested.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__FlushAudioDeviceRequested__);
  return;
}

// `dynamic_initializer_for_'LinearGainScalarForFinalOutut'' @ 140f8d310

void __cdecl _dynamic_initializer_for__LinearGainScalarForFinalOutut__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&LinearGainScalarForFinalOutut,L"au.LinearGainScalarForFinalOutut",
             &LinearGainScalarForFinalOututCVar,
             L"Linear gain scalar applied to the final float buffer to allow for hotfixable mitigation of clipping \nDefault is 1.0f \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__LinearGainScalarForFinalOutut__);
  return;
}

// `dynamic_initializer_for_'LogAudioMixer'' @ 140f8d360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioMixer__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAudioMixer,L"LogAudioMixer",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioMixer__);
  return;
}

// `dynamic_initializer_for_'LogAudioMixerDebug'' @ 140f8d3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioMixerDebug__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioMixerDebug,L"LogAudioMixerDebug",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioMixerDebug__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioMixerCore'' @ 140f8d3e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioMixerCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioMixerCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioMixerCore",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAudioMixerCoreModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 140f8d430

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 140f8d450

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 140f8d470

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 140f8d490

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 140f8d4b0

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 140f8d4d0

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 140f8d4f0

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 140f8d510

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'PauseSoundRequested'' @ 140f8d530

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__PauseSoundRequested__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",L"EventLogTraceMessage_PauseSoundRequested",
                    L"Paused");
  pFVar1 = FText::ToString(this);
  PauseSoundRequested.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  PauseSoundRequested.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)PauseSoundRequested.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (PauseSoundRequested.Data.ArrayNum == 0) {
    PauseSoundRequested.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PauseSoundRequested.Data.ArrayNum,0,(ForAnyElementType *)&PauseSoundRequested,
               PauseSoundRequested.Data.ArrayNum,&PauseSoundRequested.Data.ArrayMax);
    memcpy(PauseSoundRequested.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__PauseSoundRequested__);
  return;
}

// `dynamic_initializer_for_'PlayFailedConcurrency'' @ 140f8d600

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__PlayFailedConcurrency__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",L"EventLogTraceMessage_PlayFailedConcurrency"
                    ,L"Play Failed : Concurrency");
  pFVar1 = FText::ToString(this);
  PlayFailedConcurrency.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  PlayFailedConcurrency.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)PlayFailedConcurrency.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (PlayFailedConcurrency.Data.ArrayNum == 0) {
    PlayFailedConcurrency.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PlayFailedConcurrency.Data.ArrayNum,0,(ForAnyElementType *)&PlayFailedConcurrency
               ,PlayFailedConcurrency.Data.ArrayNum,&PlayFailedConcurrency.Data.ArrayMax);
    memcpy(PlayFailedConcurrency.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__PlayFailedConcurrency__);
  return;
}

// `dynamic_initializer_for_'PlayFailedDebugFiltered'' @ 140f8d6d0

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__PlayFailedDebugFiltered__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",
                    L"EventLogTraceMessage_PlayFailedDebugFiltered",L"Play Failed : Debug filtered")
  ;
  pFVar1 = FText::ToString(this);
  PlayFailedDebugFiltered.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  PlayFailedDebugFiltered.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)PlayFailedDebugFiltered.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (PlayFailedDebugFiltered.Data.ArrayNum == 0) {
    PlayFailedDebugFiltered.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PlayFailedDebugFiltered.Data.ArrayNum,0,
               (ForAnyElementType *)&PlayFailedDebugFiltered,PlayFailedDebugFiltered.Data.ArrayNum,
               &PlayFailedDebugFiltered.Data.ArrayMax);
    memcpy(PlayFailedDebugFiltered.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__PlayFailedDebugFiltered__);
  return;
}

// `dynamic_initializer_for_'PlayFailedNotPlayable'' @ 140f8d7a0

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__PlayFailedNotPlayable__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",L"EventLogTraceMessage_PlayFailedNotPlayable"
                    ,L"Play Failed : Not playable");
  pFVar1 = FText::ToString(this);
  PlayFailedNotPlayable.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  PlayFailedNotPlayable.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)PlayFailedNotPlayable.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (PlayFailedNotPlayable.Data.ArrayNum == 0) {
    PlayFailedNotPlayable.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PlayFailedNotPlayable.Data.ArrayNum,0,(ForAnyElementType *)&PlayFailedNotPlayable
               ,PlayFailedNotPlayable.Data.ArrayNum,&PlayFailedNotPlayable.Data.ArrayMax);
    memcpy(PlayFailedNotPlayable.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__PlayFailedNotPlayable__);
  return;
}

// `dynamic_initializer_for_'PlayFailedOutOfRange'' @ 140f8d870

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__PlayFailedOutOfRange__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",L"EventLogTraceMessage_PlayFailedOutOfRange",
                    L"Play Failed : Out of range");
  pFVar1 = FText::ToString(this);
  PlayFailedOutOfRange.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  PlayFailedOutOfRange.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)PlayFailedOutOfRange.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (PlayFailedOutOfRange.Data.ArrayNum == 0) {
    PlayFailedOutOfRange.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PlayFailedOutOfRange.Data.ArrayNum,0,(ForAnyElementType *)&PlayFailedOutOfRange,
               PlayFailedOutOfRange.Data.ArrayNum,&PlayFailedOutOfRange.Data.ArrayMax);
    memcpy(PlayFailedOutOfRange.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__PlayFailedOutOfRange__);
  return;
}

// `dynamic_initializer_for_'PlayRequestAudioComponent'' @ 140f8d940

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__PlayRequestAudioComponent__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",
                    L"EventLogTraceMessage_PlayRequestedAudioComponent",
                    L"Play Request : Audio Component");
  pFVar1 = FText::ToString(this);
  PlayRequestAudioComponent.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  PlayRequestAudioComponent.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)PlayRequestAudioComponent.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (PlayRequestAudioComponent.Data.ArrayNum == 0) {
    PlayRequestAudioComponent.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PlayRequestAudioComponent.Data.ArrayNum,0,
               (ForAnyElementType *)&PlayRequestAudioComponent,
               PlayRequestAudioComponent.Data.ArrayNum,&PlayRequestAudioComponent.Data.ArrayMax);
    memcpy(PlayRequestAudioComponent.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__PlayRequestAudioComponent__);
  return;
}

// `dynamic_initializer_for_'PlayRequestOneShot'' @ 140f8da10

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__PlayRequestOneShot__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",L"EventLogTraceMessage_PlayRequestedOneShot",
                    L"Play Request : One shot");
  pFVar1 = FText::ToString(this);
  PlayRequestOneShot.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  PlayRequestOneShot.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)PlayRequestOneShot.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (PlayRequestOneShot.Data.ArrayNum == 0) {
    PlayRequestOneShot.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PlayRequestOneShot.Data.ArrayNum,0,(ForAnyElementType *)&PlayRequestOneShot,
               PlayRequestOneShot.Data.ArrayNum,&PlayRequestOneShot.Data.ArrayMax);
    memcpy(PlayRequestOneShot.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__PlayRequestOneShot__);
  return;
}

// `dynamic_initializer_for_'PlayRequestSlateSound'' @ 140f8dae0

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__PlayRequestSlateSound__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",
                    L"EventLogTraceMessage_PlayRequestedSlateSound",L"Play Request : Slate Sound");
  pFVar1 = FText::ToString(this);
  PlayRequestSlateSound.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  PlayRequestSlateSound.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)PlayRequestSlateSound.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (PlayRequestSlateSound.Data.ArrayNum == 0) {
    PlayRequestSlateSound.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PlayRequestSlateSound.Data.ArrayNum,0,(ForAnyElementType *)&PlayRequestSlateSound
               ,PlayRequestSlateSound.Data.ArrayNum,&PlayRequestSlateSound.Data.ArrayMax);
    memcpy(PlayRequestSlateSound.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__PlayRequestSlateSound__);
  return;
}

// `dynamic_initializer_for_'PlayRequestSound2D'' @ 140f8dbb0

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__PlayRequestSound2D__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",L"EventLogTraceMessage_PlayRequested2DSound",
                    L"Play Request : Play Sound 2D");
  pFVar1 = FText::ToString(this);
  PlayRequestSound2D.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  PlayRequestSound2D.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)PlayRequestSound2D.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (PlayRequestSound2D.Data.ArrayNum == 0) {
    PlayRequestSound2D.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PlayRequestSound2D.Data.ArrayNum,0,(ForAnyElementType *)&PlayRequestSound2D,
               PlayRequestSound2D.Data.ArrayNum,&PlayRequestSound2D.Data.ArrayMax);
    memcpy(PlayRequestSound2D.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__PlayRequestSound2D__);
  return;
}

// `dynamic_initializer_for_'PlayRequestSoundAtLocation'' @ 140f8dc80

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_initializer_for__PlayRequestSoundAtLocation__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",
                    L"EventLogTraceMessage_PlayRequestedSoundAtLocation",
                    L"Play Request : Sound at location");
  pFVar1 = FText::ToString(this);
  PlayRequestSoundAtLocation.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  PlayRequestSoundAtLocation.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)PlayRequestSoundAtLocation.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (PlayRequestSoundAtLocation.Data.ArrayNum == 0) {
    PlayRequestSoundAtLocation.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PlayRequestSoundAtLocation.Data.ArrayNum,0,
               (ForAnyElementType *)&PlayRequestSoundAtLocation,
               PlayRequestSoundAtLocation.Data.ArrayNum,&PlayRequestSoundAtLocation.Data.ArrayMax);
    memcpy(PlayRequestSoundAtLocation.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__PlayRequestSoundAtLocation__);
  return;
}

// `dynamic_initializer_for_'PlayRequestSoundHandle'' @ 140f8dd50

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__PlayRequestSoundHandle__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",
                    L"EventLogTraceMessage_PlayRequestedSoundHandle",L"Play Request : Sound Handle")
  ;
  pFVar1 = FText::ToString(this);
  PlayRequestSoundHandle.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  PlayRequestSoundHandle.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)PlayRequestSoundHandle.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (PlayRequestSoundHandle.Data.ArrayNum == 0) {
    PlayRequestSoundHandle.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PlayRequestSoundHandle.Data.ArrayNum,0,
               (ForAnyElementType *)&PlayRequestSoundHandle,PlayRequestSoundHandle.Data.ArrayNum,
               &PlayRequestSoundHandle.Data.ArrayMax);
    memcpy(PlayRequestSoundHandle.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__PlayRequestSoundHandle__);
  return;
}

// `dynamic_initializer_for_'ResumeSoundRequested'' @ 140f8de20

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__ResumeSoundRequested__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",L"EventLogTraceMessage_ResumeSoundRequested",
                    L"Resumed");
  pFVar1 = FText::ToString(this);
  ResumeSoundRequested.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ResumeSoundRequested.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)ResumeSoundRequested.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (ResumeSoundRequested.Data.ArrayNum == 0) {
    ResumeSoundRequested.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,ResumeSoundRequested.Data.ArrayNum,0,(ForAnyElementType *)&ResumeSoundRequested,
               ResumeSoundRequested.Data.ArrayNum,&ResumeSoundRequested.Data.ArrayMax);
    memcpy(ResumeSoundRequested.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__ResumeSoundRequested__);
  return;
}

// `dynamic_initializer_for_'SoundRealized'' @ 140f8def0

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__SoundRealized__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",L"EventLogTraceMessage_Realize",L"Realized");
  pFVar1 = FText::ToString(this);
  SoundRealized.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  SoundRealized.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)SoundRealized.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (SoundRealized.Data.ArrayNum == 0) {
    SoundRealized.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,SoundRealized.Data.ArrayNum,0,(ForAnyElementType *)&SoundRealized,
               SoundRealized.Data.ArrayNum,&SoundRealized.Data.ArrayMax);
    memcpy(SoundRealized.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__SoundRealized__);
  return;
}

// `dynamic_initializer_for_'SoundStart'' @ 140f8dfc0

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__SoundStart__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",L"EventLogTraceMessage_Playing",L"Playing");
  pFVar1 = FText::ToString(this);
  SoundStart.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  SoundStart.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)SoundStart.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (SoundStart.Data.ArrayNum == 0) {
    SoundStart.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,SoundStart.Data.ArrayNum,0,(ForAnyElementType *)&SoundStart,
               SoundStart.Data.ArrayNum,&SoundStart.Data.ArrayMax);
    memcpy(SoundStart.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__SoundStart__);
  return;
}

// `dynamic_initializer_for_'SoundStop'' @ 140f8e090

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__SoundStop__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",L"EventLogTraceMessage_Stopped",L"Stopped");
  pFVar1 = FText::ToString(this);
  SoundStop.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  SoundStop.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)SoundStop.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (SoundStop.Data.ArrayNum == 0) {
    SoundStop.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,SoundStop.Data.ArrayNum,0,(ForAnyElementType *)&SoundStop,SoundStop.Data.ArrayNum
               ,&SoundStop.Data.ArrayMax);
    memcpy(SoundStop.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__SoundStop__);
  return;
}

// `dynamic_initializer_for_'SoundVirtualized'' @ 140f8e160

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__SoundVirtualized__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",L"EventLogTraceMessage_Virtualize",
                    L"Virtualized");
  pFVar1 = FText::ToString(this);
  SoundVirtualized.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  SoundVirtualized.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)SoundVirtualized.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (SoundVirtualized.Data.ArrayNum == 0) {
    SoundVirtualized.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,SoundVirtualized.Data.ArrayNum,0,(ForAnyElementType *)&SoundVirtualized,
               SoundVirtualized.Data.ArrayNum,&SoundVirtualized.Data.ArrayMax);
    memcpy(SoundVirtualized.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__SoundVirtualized__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerRenderAudio'' @ 140f8e230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerRenderAudio__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerRenderAudio ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerRenderAudio>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerRenderAudio");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerRenderAudio,*pFVar1,
               L"Render Audio","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StopAllRequested'' @ 140f8e2c0

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__StopAllRequested__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",L"EventLogTraceMessage_StopAllRequested",
                    L"Stop All");
  pFVar1 = FText::ToString(this);
  StopAllRequested.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  StopAllRequested.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)StopAllRequested.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (StopAllRequested.Data.ArrayNum == 0) {
    StopAllRequested.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,StopAllRequested.Data.ArrayNum,0,(ForAnyElementType *)&StopAllRequested,
               StopAllRequested.Data.ArrayNum,&StopAllRequested.Data.ArrayMax);
    memcpy(StopAllRequested.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__StopAllRequested__);
  return;
}

// `dynamic_initializer_for_'StopRequestActiveSound'' @ 140f8e390

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__StopRequestActiveSound__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",
                    L"EventLogTraceMessage_StopRequestedActiveSound",L"Stop Request : Active Sound")
  ;
  pFVar1 = FText::ToString(this);
  StopRequestActiveSound.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  StopRequestActiveSound.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)StopRequestActiveSound.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (StopRequestActiveSound.Data.ArrayNum == 0) {
    StopRequestActiveSound.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,StopRequestActiveSound.Data.ArrayNum,0,
               (ForAnyElementType *)&StopRequestActiveSound,StopRequestActiveSound.Data.ArrayNum,
               &StopRequestActiveSound.Data.ArrayMax);
    memcpy(StopRequestActiveSound.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__StopRequestActiveSound__);
  return;
}

// `dynamic_initializer_for_'StopRequestAudioComponent'' @ 140f8e460

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__StopRequestAudioComponent__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",
                    L"EventLogTraceMessage_StopRequestedAudioComponent",
                    L"Stop Request : Audio Component");
  pFVar1 = FText::ToString(this);
  StopRequestAudioComponent.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  StopRequestAudioComponent.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)StopRequestAudioComponent.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (StopRequestAudioComponent.Data.ArrayNum == 0) {
    StopRequestAudioComponent.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,StopRequestAudioComponent.Data.ArrayNum,0,
               (ForAnyElementType *)&StopRequestAudioComponent,
               StopRequestAudioComponent.Data.ArrayNum,&StopRequestAudioComponent.Data.ArrayMax);
    memcpy(StopRequestAudioComponent.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__StopRequestAudioComponent__);
  return;
}

// `dynamic_initializer_for_'StopRequestConcurrency'' @ 140f8e530

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__StopRequestConcurrency__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",
                    L"EventLogTraceMessage_StopRequestedConcurrency",L"Stop Request : Concurrency");
  pFVar1 = FText::ToString(this);
  StopRequestConcurrency.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  StopRequestConcurrency.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)StopRequestConcurrency.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (StopRequestConcurrency.Data.ArrayNum == 0) {
    StopRequestConcurrency.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,StopRequestConcurrency.Data.ArrayNum,0,
               (ForAnyElementType *)&StopRequestConcurrency,StopRequestConcurrency.Data.ArrayNum,
               &StopRequestConcurrency.Data.ArrayMax);
    memcpy(StopRequestConcurrency.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__StopRequestConcurrency__);
  return;
}

// `dynamic_initializer_for_'StopRequestSoundsUsingResource'' @ 140f8e600

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_initializer_for__StopRequestSoundsUsingResource__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",
                    L"EventLogTraceMessage_StopRequestedSoundsUsingResource",
                    L"Stop Request : Sounds using resource");
  pFVar1 = FText::ToString(this);
  StopRequestSoundsUsingResource.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  StopRequestSoundsUsingResource.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)StopRequestSoundsUsingResource.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (StopRequestSoundsUsingResource.Data.ArrayNum == 0) {
    StopRequestSoundsUsingResource.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,StopRequestSoundsUsingResource.Data.ArrayNum,0,
               (ForAnyElementType *)&StopRequestSoundsUsingResource,
               StopRequestSoundsUsingResource.Data.ArrayNum,
               &StopRequestSoundsUsingResource.Data.ArrayMax);
    memcpy(StopRequestSoundsUsingResource.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__StopRequestSoundsUsingResource__);
  return;
}

// `dynamic_initializer_for_'StopRequestedSoundHandle'' @ 140f8e6d0

void __cdecl Audio::Trace::EventLog::ID::_dynamic_initializer_for__StopRequestedSoundHandle__(void)

{
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar1;
  longlong lVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"AudioInsightsEventLog",
                    L"EventLogTraceMessage_StopRequestedSoundHandle",L"Stop Request : Sound Handle")
  ;
  pFVar1 = FText::ToString(this);
  StopRequestedSoundHandle.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  StopRequestedSoundHandle.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)StopRequestedSoundHandle.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (StopRequestedSoundHandle.Data.ArrayNum == 0) {
    StopRequestedSoundHandle.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,StopRequestedSoundHandle.Data.ArrayNum,0,
               (ForAnyElementType *)&StopRequestedSoundHandle,StopRequestedSoundHandle.Data.ArrayNum
               ,&StopRequestedSoundHandle.Data.ArrayMax);
    memcpy(StopRequestedSoundHandle.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__StopRequestedSoundHandle__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Audio'' @ 140f8e7a0

void __cdecl _dynamic_initializer_for___GCsvCategory_Audio__(void)

{
  FString::operator=(&_GCsvCategory_Audio.Name,L"Audio");
  _GCsvCategory_Audio.Index = FCsvProfiler::RegisterCategory(&_GCsvCategory_Audio.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Audio__);
  return;
}

// `scalar_deleting_destructor' @ 144525b40

void * __thiscall
FAudioMixerCoreModule::_scalar_deleting_destructor_(FAudioMixerCoreModule *this,uint param_1)

{
  *this = (FAudioMixerCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_Audio::EAudioOutputStreamState::Type>_> @ 144526100

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_Audio::EAudioOutputStreamState::Type>_>
          (_Atomic_padded<Audio::EAudioOutputStreamState::Type> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_Audio::EAudioOutputStreamState::Type>_> @ 144526110

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_Audio::EAudioOutputStreamState::Type>_>
          (_Atomic_padded<Audio::EAudioOutputStreamState::Type> *param_1)

{
  return (int *)param_1;
}

// _Atomic_reinterpret_as<int,enum_Audio::EAudioOutputStreamState::Type> @ 144526120

int __cdecl
std::_Atomic_reinterpret_as<int,enum_Audio::EAudioOutputStreamState::Type>(Type *param_1)

{
  return *param_1;
}

// ~TFunction_OwnedObject<`Audio::IAudioMixerPlatformInterface::StartRunningNullDevice'::__l2::<lambda_1>,0,0> @ 1445265e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::IAudioMixerPlatformInterface::StartRunningNullDevice'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Audio::IAudioMixerPlatformInterface::StartRunningNullDevice_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::IAudioMixerPlatformInterface::StartRunningNullDevice'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1445267f4

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FAudioMixerPlatformSwappable::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FAudioMixerPlatformSwappable::_vector_deleting_destructor__adjustor_8__
          (FAudioMixerPlatformSwappable *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAudioMixerPlatformSwappable *)&this[-1].LastDeviceSwapTime,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 144526804

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FAudioMixerPlatformSwappable::`vector
   deleting destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FAudioMixerPlatformSwappable::_vector_deleting_destructor__adjustor_16__
          (FAudioMixerPlatformSwappable *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAudioMixerPlatformSwappable *)&this[-1].ActiveDeviceSwap.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 144526814

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::IAudioMixerPlatformInterface::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Audio::IAudioMixerPlatformInterface::_vector_deleting_destructor__adjustor_8__
          (IAudioMixerPlatformInterface *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((IAudioMixerPlatformInterface *)&this[-1].bIsListeningForDeviceEvents,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 144526824

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::IAudioMixerPlatformInterface::`vector
   deleting destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
Audio::IAudioMixerPlatformInterface::_vector_deleting_destructor__adjustor_16__
          (IAudioMixerPlatformInterface *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((IAudioMixerPlatformInterface *)&this[-1].NullDeviceCallback,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 144526840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::IAudioMixerPlatformInterface::StartRunningNullDevice'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::IAudioMixerPlatformInterface::StartRunningNullDevice'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144526880

void * __thiscall
Audio::FAudioMixerPlatformSwappable::_scalar_deleting_destructor_
          (FAudioMixerPlatformSwappable *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->ActiveDeviceSwap).field_0x8);
  pFVar1 = (this->OriginalAudioDeviceId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface((IAudioMixerPlatformInterface *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445268e0

void * __thiscall
Audio::FMixerNullCallback::_scalar_deleting_destructor_(FMixerNullCallback *this,uint param_1)

{
  FRunnableThread *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->CallbackThread).Ptr;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  if (*(longlong *)&this->Callback != 0) {
    plVar2 = *(longlong **)&(this->Callback).field_0x28;
    plVar3 = (longlong *)&(this->Callback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144526950

void * __thiscall
Audio::IAudioMixerDeviceChangedListener::_scalar_deleting_destructor_
          (IAudioMixerDeviceChangedListener *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144526980

void * __thiscall
Audio::IAudioMixerPlatformInterface::_scalar_deleting_destructor_
          (IAudioMixerPlatformInterface *this,uint param_1)

{
  ~IAudioMixerPlatformInterface(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// InitializeDefaultChannelOrder @ 144527f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Audio::InitializeDefaultChannelOrder(void)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  Type *pTVar6;
  wchar_t *pwVar7;
  undefined1 auStackY_98 [32];
  uint local_68 [2];
  Type local_60 [10];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (!::bInitialized) {
    pTVar6 = DefaultChannelOrder;
    bVar1 = false;
    uVar4 = 0;
    ::bInitialized = true;
    DefaultChannelOrder._0_8_ = __xmm_00000003000000020000000100000000;
    DefaultChannelOrder._8_8_ = _UNK_150631e08;
    DefaultChannelOrder._16_8_ = ___xmm_00000005000000040000000a00000009;
    DefaultChannelOrder._24_8_ = _UNK_150d5eb38;
    local_60._0_8_ = __xmm_00000003000000020000000100000000;
    local_60._8_8_ = _UNK_150631e08;
    local_60._16_8_ = ___xmm_00000005000000040000000a00000009;
    local_60._24_8_ = _UNK_150d5eb38;
    do {
      local_68[0] = 0;
      switch(*pTVar6) {
      case DefaultChannel:
        pwVar7 = L"FrontLeft";
        break;
      case FrontRight:
        pwVar7 = L"FrontRight";
        break;
      case FrontCenter:
        pwVar7 = L"FrontCenter";
        break;
      case LowFrequency:
        pwVar7 = L"LowFrequency";
        break;
      case BackLeft:
        pwVar7 = L"BackLeft";
        break;
      case BackRight:
        pwVar7 = L"BackRight";
        break;
      case FrontLeftOfCenter:
        pwVar7 = L"FrontLeftOfCenter";
        break;
      case FrontRightOfCenter:
        pwVar7 = L"FrontRightOfCenter";
        break;
      case BackCenter:
        pwVar7 = L"BackCenter";
        break;
      case SideLeft:
        pwVar7 = L"SideLeft";
        break;
      case SideRight:
        pwVar7 = L"SideRight";
        break;
      case TopCenter:
        pwVar7 = L"TopCenter";
        break;
      case TopFrontLeft:
        pwVar7 = L"TopFrontLeft";
        break;
      case TopFrontCenter:
        pwVar7 = L"TopFrontCenter";
        break;
      case TopFrontRight:
        pwVar7 = L"TopFrontRight";
        break;
      case TopBackLeft:
        pwVar7 = L"TopBackLeft";
        break;
      case TopBackCenter:
        pwVar7 = L"TopBackCenter";
        break;
      case TopBackRight:
        pwVar7 = L"TopBackRight";
        break;
      case Unknown:
        pwVar7 = L"Unknown";
        break;
      default:
        pwVar7 = L"UNSUPPORTED";
      }
      bVar2 = FConfigCacheIni::GetInt
                        (GConfig,L"AudioDefaultChannelOrder",pwVar7,(int *)local_68,&GEngineIni);
      if (bVar2) {
        if (7 < local_68[0]) {
          if ((byte)LogAudioMixer._0_1_ < 2) {
            return;
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          return;
        }
        bVar1 = true;
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
        local_60[(int)local_68[0]] = *pTVar6;
      }
      pTVar6 = pTVar6 + 1;
    } while ((longlong)pTVar6 < 0x15507e7b8);
    if (bVar1) {
      bVar1 = true;
      uVar3 = uVar4;
      do {
        if ((uVar3 != 0) && (local_60[uVar3] == local_60[0])) {
          bVar1 = false;
          break;
        }
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < 8);
      uVar3 = uVar4;
      uVar5 = uVar4;
      do {
        if (((int)uVar5 != 1) && (local_60[uVar3] == local_60[1])) {
          bVar1 = false;
          break;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < 8);
      uVar3 = uVar4;
      uVar5 = uVar4;
      do {
        if (((int)uVar5 != 2) && (local_60[uVar3] == local_60[2])) {
          bVar1 = false;
          break;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < 8);
      uVar3 = uVar4;
      uVar5 = uVar4;
      do {
        if (((int)uVar5 != 3) && (local_60[uVar3] == local_60[3])) {
          bVar1 = false;
          break;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < 8);
      uVar3 = uVar4;
      uVar5 = uVar4;
      do {
        if (((int)uVar5 != 4) && (local_60[uVar3] == local_60[4])) {
          bVar1 = false;
          break;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < 8);
      uVar3 = uVar4;
      uVar5 = uVar4;
      do {
        if (((int)uVar5 != 5) && (local_60[uVar3] == local_60[5])) {
          bVar1 = false;
          break;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < 8);
      uVar3 = uVar4;
      uVar5 = uVar4;
      do {
        if (((int)uVar5 != 6) && (local_60[uVar3] == local_60[6])) {
          bVar1 = false;
          break;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < 8);
      uVar3 = uVar4;
      do {
        if (((int)uVar3 != 7) && (local_60[uVar4] == local_60[7])) goto LAB_14452821a;
        uVar3 = (ulonglong)((int)uVar3 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < 8);
      if (bVar1) {
        DefaultChannelOrder[0] = local_60[0];
        DefaultChannelOrder[1] = local_60[1];
        DefaultChannelOrder[2] = local_60[2];
        DefaultChannelOrder[3] = local_60[3];
        DefaultChannelOrder[4] = local_60[4];
        DefaultChannelOrder[5] = local_60[5];
        DefaultChannelOrder[6] = local_60[6];
        DefaultChannelOrder[7] = local_60[7];
      }
      else {
LAB_14452821a:
        if (1 < (byte)LogAudioMixer._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
      }
    }
  }
  return;
}

// IMPLEMENT_MODULE_AudioMixerCore @ 14452a200

void __cdecl IMPLEMENT_MODULE_AudioMixerCore(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarAudioMixerDebugForceDroppedHardwareCallback'' @ 15036c0d0

void __cdecl _dynamic_atexit_destructor_for__CVarAudioMixerDebugForceDroppedHardwareCallback__(void)

{
  CVarAudioMixerDebugForceDroppedHardwareCallback._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAudioMixerDebugForceDroppedHardwareCallback);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFadeoutTimeout'' @ 15036c0f0

void __cdecl _dynamic_atexit_destructor_for__CVarFadeoutTimeout__(void)

{
  CVarFadeoutTimeout._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFadeoutTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogRenderTimes'' @ 15036c110

void __cdecl _dynamic_atexit_destructor_for__CVarLogRenderTimes__(void)

{
  CVarLogRenderTimes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogRenderTimes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinTimeBetweenUnderrunWarningsMs'' @ 15036c130

void __cdecl _dynamic_atexit_destructor_for__CVarMinTimeBetweenUnderrunWarningsMs__(void)

{
  CVarMinTimeBetweenUnderrunWarningsMs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMinTimeBetweenUnderrunWarningsMs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOverrunTimeout'' @ 15036c150

void __cdecl _dynamic_atexit_destructor_for__CVarOverrunTimeout__(void)

{
  CVarOverrunTimeout._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOverrunTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRecycleThreads'' @ 15036c170

void __cdecl _dynamic_atexit_destructor_for__CVarRecycleThreads__(void)

{
  CVarRecycleThreads._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRecycleThreads);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderThreadAffinity'' @ 15036c190

void __cdecl _dynamic_atexit_destructor_for__CVarRenderThreadAffinity__(void)

{
  CVarRenderThreadAffinity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderThreadAffinity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSetRenderThreadPriority'' @ 15036c1b0

void __cdecl _dynamic_atexit_destructor_for__CVarSetRenderThreadPriority__(void)

{
  CVarSetRenderThreadPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSetRenderThreadPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUnderrunTimeout'' @ 15036c1d0

void __cdecl _dynamic_atexit_destructor_for__CVarUnderrunTimeout__(void)

{
  CVarUnderrunTimeout._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUnderrunTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseAudioDeviceInfoCache'' @ 15036c1f0

void __cdecl _dynamic_atexit_destructor_for__CVarUseAudioDeviceInfoCache__(void)

{
  CVarUseAudioDeviceInfoCache._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseAudioDeviceInfoCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseThreadedDeviceSwap'' @ 15036c210

void __cdecl _dynamic_atexit_destructor_for__CVarUseThreadedDeviceSwap__(void)

{
  CVarUseThreadedDeviceSwap._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseThreadedDeviceSwap);
  return;
}

// `dynamic_atexit_destructor_for_'ExtraAudioMixerDeviceLogging'' @ 15036c230

void __cdecl _dynamic_atexit_destructor_for__ExtraAudioMixerDeviceLogging__(void)

{
  ExtraAudioMixerDeviceLogging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ExtraAudioMixerDeviceLogging);
  return;
}

// `dynamic_atexit_destructor_for_'FlushAudioDeviceRequested'' @ 15036c250

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__FlushAudioDeviceRequested__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FlushAudioDeviceRequested.Data.AllocatorInstance.Data;
  if (FlushAudioDeviceRequested.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FlushAudioDeviceRequested.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LinearGainScalarForFinalOutut'' @ 15036c270

void __cdecl _dynamic_atexit_destructor_for__LinearGainScalarForFinalOutut__(void)

{
  LinearGainScalarForFinalOutut._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&LinearGainScalarForFinalOutut);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioMixer'' @ 15036c290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioMixer__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioMixer);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioMixerDebug'' @ 15036c2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioMixerDebug__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioMixerDebug);
  return;
}

// `dynamic_atexit_destructor_for_'PauseSoundRequested'' @ 15036c2d0

void __cdecl Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__PauseSoundRequested__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PauseSoundRequested.Data.AllocatorInstance.Data;
  if (PauseSoundRequested.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PauseSoundRequested.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PlayFailedConcurrency'' @ 15036c2f0

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__PlayFailedConcurrency__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlayFailedConcurrency.Data.AllocatorInstance.Data;
  if (PlayFailedConcurrency.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlayFailedConcurrency.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PlayFailedDebugFiltered'' @ 15036c310

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__PlayFailedDebugFiltered__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlayFailedDebugFiltered.Data.AllocatorInstance.Data;
  if (PlayFailedDebugFiltered.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlayFailedDebugFiltered.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PlayFailedNotPlayable'' @ 15036c330

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__PlayFailedNotPlayable__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlayFailedNotPlayable.Data.AllocatorInstance.Data;
  if (PlayFailedNotPlayable.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlayFailedNotPlayable.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PlayFailedOutOfRange'' @ 15036c350

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__PlayFailedOutOfRange__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlayFailedOutOfRange.Data.AllocatorInstance.Data;
  if (PlayFailedOutOfRange.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlayFailedOutOfRange.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PlayRequestAudioComponent'' @ 15036c370

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__PlayRequestAudioComponent__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlayRequestAudioComponent.Data.AllocatorInstance.Data;
  if (PlayRequestAudioComponent.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlayRequestAudioComponent.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PlayRequestOneShot'' @ 15036c390

void __cdecl Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__PlayRequestOneShot__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlayRequestOneShot.Data.AllocatorInstance.Data;
  if (PlayRequestOneShot.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlayRequestOneShot.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PlayRequestSlateSound'' @ 15036c3b0

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__PlayRequestSlateSound__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlayRequestSlateSound.Data.AllocatorInstance.Data;
  if (PlayRequestSlateSound.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlayRequestSlateSound.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PlayRequestSound2D'' @ 15036c3d0

void __cdecl Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__PlayRequestSound2D__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlayRequestSound2D.Data.AllocatorInstance.Data;
  if (PlayRequestSound2D.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlayRequestSound2D.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PlayRequestSoundAtLocation'' @ 15036c3f0

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__PlayRequestSoundAtLocation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlayRequestSoundAtLocation.Data.AllocatorInstance.Data;
  if (PlayRequestSoundAtLocation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlayRequestSoundAtLocation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PlayRequestSoundHandle'' @ 15036c410

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__PlayRequestSoundHandle__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlayRequestSoundHandle.Data.AllocatorInstance.Data;
  if (PlayRequestSoundHandle.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlayRequestSoundHandle.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ResumeSoundRequested'' @ 15036c430

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__ResumeSoundRequested__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ResumeSoundRequested.Data.AllocatorInstance.Data;
  if (ResumeSoundRequested.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ResumeSoundRequested.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SoundRealized'' @ 15036c450

void __cdecl Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__SoundRealized__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SoundRealized.Data.AllocatorInstance.Data;
  if (SoundRealized.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SoundRealized.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SoundStart'' @ 15036c470

void __cdecl Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__SoundStart__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SoundStart.Data.AllocatorInstance.Data;
  if (SoundStart.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SoundStart.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SoundStop'' @ 15036c490

void __cdecl Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__SoundStop__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SoundStop.Data.AllocatorInstance.Data;
  if (SoundStop.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SoundStop.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SoundVirtualized'' @ 15036c4b0

void __cdecl Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__SoundVirtualized__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SoundVirtualized.Data.AllocatorInstance.Data;
  if (SoundVirtualized.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SoundVirtualized.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StopAllRequested'' @ 15036c4d0

void __cdecl Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__StopAllRequested__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = StopAllRequested.Data.AllocatorInstance.Data;
  if (StopAllRequested.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (StopAllRequested.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StopRequestActiveSound'' @ 15036c4f0

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__StopRequestActiveSound__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = StopRequestActiveSound.Data.AllocatorInstance.Data;
  if (StopRequestActiveSound.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (StopRequestActiveSound.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StopRequestAudioComponent'' @ 15036c510

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__StopRequestAudioComponent__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = StopRequestAudioComponent.Data.AllocatorInstance.Data;
  if (StopRequestAudioComponent.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (StopRequestAudioComponent.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StopRequestConcurrency'' @ 15036c530

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__StopRequestConcurrency__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = StopRequestConcurrency.Data.AllocatorInstance.Data;
  if (StopRequestConcurrency.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (StopRequestConcurrency.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StopRequestSoundsUsingResource'' @ 15036c550

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__StopRequestSoundsUsingResource__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = StopRequestSoundsUsingResource.Data.AllocatorInstance.Data;
  if (StopRequestSoundsUsingResource.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (StopRequestSoundsUsingResource.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StopRequestedSoundHandle'' @ 15036c570

void __cdecl
Audio::Trace::EventLog::ID::_dynamic_atexit_destructor_for__StopRequestedSoundHandle__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = StopRequestedSoundHandle.Data.AllocatorInstance.Data;
  if (StopRequestedSoundHandle.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (StopRequestedSoundHandle.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_Audio'' @ 15036c590

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Audio__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Audio.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Audio.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Audio.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

