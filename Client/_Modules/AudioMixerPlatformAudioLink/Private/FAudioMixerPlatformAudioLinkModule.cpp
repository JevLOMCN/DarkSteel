// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerPlatformAudioLink
// Functions: 4

// IsAudioMixerModule @ 148d2b140

bool __thiscall
FAudioMixerPlatformAudioLinkModule::IsAudioMixerModule(FAudioMixerPlatformAudioLinkModule *this)

{
  return true;
}

// StartupModule @ 148d2b150

void __thiscall
FAudioMixerPlatformAudioLinkModule::StartupModule(FAudioMixerPlatformAudioLinkModule *this)

{
  FModuleManager *this_00;
  FName *pFVar1;
  FName local_res10 [3];
  
  this_00 = FModuleManager::Get();
  pFVar1 = ::FName::FName(local_res10,L"AudioMixerCore");
  FModuleManager::LoadModuleChecked(this_00,*pFVar1);
  return;
}

// CreateAudioDevice @ 148d2b190

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioDevice * __thiscall
FAudioMixerPlatformAudioLinkModule::CreateAudioDevice(FAudioMixerPlatformAudioLinkModule *this)

{
  FMixerDevice *pFVar1;
  IAudioMixerPlatformInterface *pIVar2;
  
  pFVar1 = ::operator_new(0xec0);
  if (pFVar1 != (FMixerDevice *)0x0) {
    pIVar2 = (IAudioMixerPlatformInterface *)(**(code **)((longlong)*this + 0x58))(this);
    pFVar1 = Audio::FMixerDevice::FMixerDevice(pFVar1,pIVar2);
    return (FAudioDevice *)pFVar1;
  }
  return (FAudioDevice *)0x0;
}

// CreateAudioMixerPlatformInterface @ 148d2b1e0

IAudioMixerPlatformInterface * __thiscall
FAudioMixerPlatformAudioLinkModule::CreateAudioMixerPlatformInterface
          (FAudioMixerPlatformAudioLinkModule *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioMixerPlatformAudioLink *this_00;
  IAudioMixerPlatformInterface *pIVar3;
  IAudioLinkFactory *pIVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  this_00 = ::operator_new(0x268);
  if (this_00 == (FAudioMixerPlatformAudioLink *)0x0) {
    return (IAudioMixerPlatformInterface *)0x0;
  }
  Audio::IAudioMixerPlatformInterface::IAudioMixerPlatformInterface
            ((IAudioMixerPlatformInterface *)this_00);
  this_00->bSuspended = false;
  this_00->bInitialized = false;
  this_00->_padding_ = (longlong)&Audio::FAudioMixerPlatformAudioLink::_vftable__for__FRunnable__;
  this_00->_padding_ =
       (longlong)&Audio::FAudioMixerPlatformAudioLink::_vftable__for__FSingleThreadRunnable__;
  this_00->_padding_ =
       (longlong)
       &Audio::FAudioMixerPlatformAudioLink::
        _vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  this_00->bAtomicStreamRunning = (atomic<bool>)0x0;
  IAudioLinkFactory::GetAllRegisteredFactoryNames(&local_28);
  if (local_28.ArrayNum == 0) {
    if ((FName *)local_28.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    pIVar4 = (IAudioLinkFactory *)0x0;
  }
  else {
    if (local_28.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar3 = (IAudioMixerPlatformInterface *)(*pcVar1)();
        return pIVar3;
      }
    }
    pIVar4 = IAudioLinkFactory::FindFactory(*(FName *)local_28.AllocatorInstance.Data);
    if ((FName *)local_28.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  this_00->Factory = pIVar4;
  (this_00->DeviceInfo).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->DeviceInfo).Name.Data.ArrayNum = 0;
  (this_00->DeviceInfo).Name.Data.ArrayMax = 0;
  (this_00->DeviceInfo).DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->DeviceInfo).DeviceId.Data.ArrayNum = 0;
  (this_00->DeviceInfo).DeviceId.Data.ArrayMax = 0;
  (this_00->DeviceInfo).OutputChannelArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->DeviceInfo).OutputChannelArray.ArrayNum = 0;
  (this_00->DeviceInfo).OutputChannelArray.ArrayMax = 0;
  (this_00->SynchronizeLink).Object = (IAudioLinkSynchronizer *)0x0;
  (this_00->SynchronizeLink).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  Audio::FAudioPlatformDeviceInfo::Reset(&this_00->DeviceInfo);
  this_00->LastBufferTickID = 0;
  this_00->FrameRemainder = 0;
  (this_00->OpenStreamHandle).ID = 0;
  (this_00->RenderBeginHandle).ID = 0;
  (this_00->RenderEndHandle).ID = 0;
  ::FString::FString(&local_18,L"AudioLink AudioMixer");
  Audio::FAudioMixerPlatformAudioLink::MakeDeviceInfo(this_00,8,48000,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (IAudioMixerPlatformInterface *)this_00;
}

