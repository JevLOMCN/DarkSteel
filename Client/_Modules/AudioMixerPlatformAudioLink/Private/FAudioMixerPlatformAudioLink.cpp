// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerPlatformAudioLink
// Functions: 22

// <lambda_invoker_cdecl> @ 148d2b3d0

void __cdecl
`Audio::FAudioMixerPlatformAudioLink::InitializeHardware'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (void)

{
  return;
}

// FAudioMixerPlatformAudioLink @ 148d2b400

FAudioMixerPlatformAudioLink * __thiscall
Audio::FAudioMixerPlatformAudioLink::FAudioMixerPlatformAudioLink
          (FAudioMixerPlatformAudioLink *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioMixerPlatformAudioLink *pFVar3;
  IAudioLinkFactory *pIVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  IAudioMixerPlatformInterface::IAudioMixerPlatformInterface((IAudioMixerPlatformInterface *)this);
  this->bSuspended = false;
  this->bInitialized = false;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  this->bAtomicStreamRunning = (atomic<bool>)0x0;
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
        pFVar3 = (FAudioMixerPlatformAudioLink *)(*pcVar1)();
        return pFVar3;
      }
    }
    pIVar4 = IAudioLinkFactory::FindFactory(*(FName *)local_28.AllocatorInstance.Data);
    if ((FName *)local_28.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  this->Factory = pIVar4;
  (this->DeviceInfo).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceInfo).Name.Data.ArrayNum = 0;
  (this->DeviceInfo).Name.Data.ArrayMax = 0;
  (this->DeviceInfo).DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceInfo).DeviceId.Data.ArrayNum = 0;
  (this->DeviceInfo).DeviceId.Data.ArrayMax = 0;
  (this->DeviceInfo).OutputChannelArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceInfo).OutputChannelArray.ArrayNum = 0;
  (this->DeviceInfo).OutputChannelArray.ArrayMax = 0;
  (this->SynchronizeLink).Object = (IAudioLinkSynchronizer *)0x0;
  (this->SynchronizeLink).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FAudioPlatformDeviceInfo::Reset(&this->DeviceInfo);
  this->LastBufferTickID = 0;
  this->FrameRemainder = 0;
  (this->OpenStreamHandle).ID = 0;
  (this->RenderBeginHandle).ID = 0;
  (this->RenderEndHandle).ID = 0;
  ::FString::FString(&local_18,L"AudioLink AudioMixer");
  MakeDeviceInfo(this,8,48000,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FAudioMixerPlatformAudioLink @ 148d2b580

void __thiscall
Audio::FAudioMixerPlatformAudioLink::~FAudioMixerPlatformAudioLink
          (FAudioMixerPlatformAudioLink *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeviceInfo).OutputChannelArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceInfo).DeviceId.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceInfo).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SynchronizeLink).SharedReferenceCount.ReferenceController);
  IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface((IAudioMixerPlatformInterface *)this);
  return;
}

// CloseAudioStream @ 148d2b7a0

bool __thiscall
Audio::FAudioMixerPlatformAudioLink::CloseAudioStream(FAudioMixerPlatformAudioLink *this)

{
  char cVar1;
  
  if ((int)this->_padding_ != 0) {
    cVar1 = (**(code **)(this->_padding_ + 0xa8))();
    if (cVar1 != '\0') {
      LOCK();
      *(undefined4 *)&this->_padding_ = 0;
      UNLOCK();
      return true;
    }
  }
  return false;
}

// GetDefaultDeviceName @ 148d2bc60

FString * __thiscall
Audio::FAudioMixerPlatformAudioLink::GetDefaultDeviceName
          (FAudioMixerPlatformAudioLink *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&(this->DeviceInfo).Name);
  return __return_storage_ptr__;
}

// GetDefaultOutputDeviceIndex @ 148d2bc90

bool __thiscall
Audio::FAudioMixerPlatformAudioLink::GetDefaultOutputDeviceIndex
          (FAudioMixerPlatformAudioLink *this,uint *param_1)

{
  *param_1 = 0xffffffff;
  return true;
}

// GetNumOutputDevices @ 148d2bce0

bool __thiscall
Audio::FAudioMixerPlatformAudioLink::GetNumOutputDevices
          (FAudioMixerPlatformAudioLink *this,uint *param_1)

{
  *param_1 = 1;
  return true;
}

// GetOrCreateSynchronizer @ 148d2bd10

IAudioLinkSynchronizer * __thiscall
Audio::FAudioMixerPlatformAudioLink::GetOrCreateSynchronizer(FAudioMixerPlatformAudioLink *this)

{
  TSharedPtr<IAudioLinkSynchronizer,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  IAudioLinkSynchronizer *pIVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar1 = &this->SynchronizeLink;
  if (pTVar1->Object == (IAudioLinkSynchronizer *)0x0) {
    if (this->Factory == (IAudioLinkFactory *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Factory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioMixerPlatformAudioLink\\Private\\AudioMixerPlatformAudioLink.cpp"
                         ,0xcf,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar4 = (IAudioLinkSynchronizer *)(*pcVar2)();
        return pIVar4;
      }
    }
    puVar5 = (undefined8 *)(**(code **)((longlong)*this->Factory + 0x48))(this->Factory,local_18);
    if (pTVar1 != (TSharedPtr<IAudioLinkSynchronizer,1> *)puVar5) {
      pTVar1->Object = (IAudioLinkSynchronizer *)*puVar5;
      *puVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SynchronizeLink).SharedReferenceCount,(FSharedReferencer<1> *)(puVar5 + 1))
      ;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return pTVar1->Object;
}

// GetOutputDeviceInfo @ 148d2bdb0

bool __thiscall
Audio::FAudioMixerPlatformAudioLink::GetOutputDeviceInfo
          (FAudioMixerPlatformAudioLink *this,uint param_1,FAudioPlatformDeviceInfo *param_2)

{
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  
  ::FString::operator=(&param_2->Name,&(this->DeviceInfo).Name);
  ::FString::operator=(&param_2->DeviceId,&(this->DeviceInfo).DeviceId);
  pTVar1 = &(this->DeviceInfo).OutputChannelArray;
  param_2->NumChannels = (this->DeviceInfo).NumChannels;
  pTVar2 = &param_2->OutputChannelArray;
  param_2->NumDirectOutChannels = (this->DeviceInfo).NumDirectOutChannels;
  param_2->SampleRate = (this->DeviceInfo).SampleRate;
  param_2->Format = (this->DeviceInfo).Format;
  if (pTVar2 != pTVar1) {
    iVar4 = (param_2->OutputChannelArray).ArrayMax;
    piVar3 = &(param_2->OutputChannelArray).ArrayMax;
    iVar5 = (this->DeviceInfo).OutputChannelArray.ArrayNum;
    _Src = (pTVar1->AllocatorInstance).Data;
    (param_2->OutputChannelArray).ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar5,iVar4,&pTVar2->AllocatorInstance,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar5 << 2);
      }
    }
  }
  param_2->field_0x40 =
       param_2->field_0x40 ^ (param_2->bIsSystemDefault ^ (this->DeviceInfo).bIsSystemDefault) & 1;
  return true;
}

// GetPlatformApi @ 148d2bea0

FString * __thiscall
Audio::FAudioMixerPlatformAudioLink::GetPlatformApi
          (FAudioMixerPlatformAudioLink *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"AudioLink");
  return __return_storage_ptr__;
}

// GetPlatformDeviceInfo @ 148d2bed0

FAudioPlatformDeviceInfo * __thiscall
Audio::FAudioMixerPlatformAudioLink::GetPlatformDeviceInfo
          (FAudioMixerPlatformAudioLink *this,FAudioPlatformDeviceInfo *__return_storage_ptr__)

{
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  
  ::FString::FString(&__return_storage_ptr__->Name,(FString *)&this->_padding_);
  ::FString::FString(&__return_storage_ptr__->DeviceId,(FString *)&this->_padding_);
  pTVar1 = &__return_storage_ptr__->OutputChannelArray;
  __return_storage_ptr__->NumChannels = (int)this->_padding_;
  __return_storage_ptr__->NumDirectOutChannels = *(int *)((longlong)&this->_padding_ + 4);
  __return_storage_ptr__->SampleRate = (int)this->_padding_;
  __return_storage_ptr__->Format = *(Type *)((longlong)&this->_padding_ + 4);
  piVar2 = &(__return_storage_ptr__->OutputChannelArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)this->_padding_;
  _Src = (void *)this->_padding_;
  (__return_storage_ptr__->OutputChannelArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  __return_storage_ptr__->field_0x40 =
       __return_storage_ptr__->field_0x40 ^
       (__return_storage_ptr__->bIsSystemDefault ^ (byte)this->_padding_) & 1;
  return __return_storage_ptr__;
}

// GetPlatformSettings @ 148d2bfb0

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioPlatformSettings * __thiscall
Audio::FAudioMixerPlatformAudioLink::GetPlatformSettings
          (FAudioMixerPlatformAudioLink *this,FAudioPlatformSettings *__return_storage_ptr__)

{
  IAudioLinkSynchronizer *pIVar1;
  void *local_38 [2];
  int local_28;
  int local_20;
  int iStack_1c;
  char local_18;
  
  FAudioPlatformSettings::GetPlatformSettings
            (__return_storage_ptr__,L"/Script/WindowsTargetPlatform.WindowsTargetSettings");
  pIVar1 = GetOrCreateSynchronizer(this);
  if (pIVar1 == (IAudioLinkSynchronizer *)0x0) {
    if (2 < (byte)LogAudioLink._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioLink);
    }
  }
  else {
    (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,local_38);
    if (local_18 == '\0') {
      if ((byte)LogAudioLink._0_1_ < 3) {
        return __return_storage_ptr__;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioLink);
    }
    else {
      if (iStack_1c != -1) {
        __return_storage_ptr__->MaxChannels = iStack_1c;
      }
      if (local_20 != -1) {
        __return_storage_ptr__->SampleRate = local_20;
      }
      if (local_28 != -1) {
        __return_storage_ptr__->CallbackBufferFrameSize = local_28;
      }
    }
    if ((local_18 != '\0') && (local_38[0] != (void *)0x0)) {
      FMemory::Free(local_38[0]);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// InitializeHardware @ 148d2c0f0

bool __thiscall
Audio::FAudioMixerPlatformAudioLink::InitializeHardware(FAudioMixerPlatformAudioLink *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  IAudioLinkSynchronizer *pIVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ulong64 *puVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_198;
  FDelegateAllocation local_190;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_180;
  FDelegateAllocation local_178;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  FDelegateAllocation local_160;
  FString local_150;
  FDestructionSentinel local_140;
  FDestructionSentinel local_128;
  FDestructionSentinel local_110;
  FDestructionSentinel local_f8;
  FDelegateAllocation *local_e0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  void *local_98 [2];
  int local_84;
  int local_80;
  char local_78;
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined8 local_40;
  
  bVar3 = IAudioMixer::ShouldRecycleThreads();
  if (bVar3) {
    local_58 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
    local_40 = 0;
    local_50 = `Audio::FAudioMixerPlatformAudioLink::InitializeHardware'::__l5::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_68[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    IAudioMixerPlatformInterface::CreateNullDeviceThread
              ((IAudioMixerPlatformInterface *)this,(TFunction<void___cdecl(void)> *)local_68,
               __real_3f800000,true);
  }
  pIVar5 = GetOrCreateSynchronizer(this);
  iVar2 = local_150.Data.ArrayMax;
  if (pIVar5 != (IAudioLinkSynchronizer *)0x0) {
    pcVar1 = *(code **)((longlong)*pIVar5 + 0x48);
    local_198.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_190.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_198,(FWriteAccessScope *)&local_f8);
    local_e0 = &local_190;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_190);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFOnRenderParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFAudioMixerPlatformAudioLink_Audio____A6AXAEBUFOnRenderParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = this;
      puVar6[4] = OnLinkRenderBegin;
      puVar6[5] = (ulonglong)(uint)iVar2 << 0x20;
      if ((this == (FAudioMixerPlatformAudioLink *)0x0) || (puVar6[4] == 0)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
    }
    if (local_f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
    }
    puVar8 = (ulong64 *)(*pcVar1)(pIVar5,local_res8);
    (this->RenderBeginHandle).ID = *puVar8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_198,(FWriteAccessScope *)&local_140);
    if ((local_190.DelegateSize != 0) &&
       (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_190,0,0,0x10);
      local_190.DelegateSize = 0;
    }
    if (local_140.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
    }
    if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_190.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_198.AccessDetector);
    iVar2 = local_150.Data.ArrayMax;
    local_180.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_178.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    pcVar1 = *(code **)((longlong)*pIVar5 + 0x58);
    local_178.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_180,(FWriteAccessScope *)&local_d8);
    local_c0 = &local_178;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_178);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFOnRenderParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      puVar6[4] = OnLinkRenderEnd;
      puVar6[5] = (ulonglong)(uint)iVar2 << 0x20;
      *puVar6 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFAudioMixerPlatformAudioLink_Audio____A6AXAEBUFOnRenderParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = this;
      if (puVar6[4] == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    puVar8 = (ulong64 *)(*pcVar1)(pIVar5,local_res10);
    (this->RenderEndHandle).ID = *puVar8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_180,(FWriteAccessScope *)&local_128);
    if ((local_178.DelegateSize != 0) &&
       (local_178.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_178.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_178,0,0,0x10);
      local_178.DelegateSize = 0;
    }
    if (local_128.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
    }
    if (local_178.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_178.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_180.AccessDetector);
    local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    pcVar1 = *(code **)((longlong)*pIVar5 + 0x28);
    local_160.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_168,(FWriteAccessScope *)&local_b8);
    local_a0 = &local_160;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_160);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFOnOpenStreamParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      puVar6[4] = OnLinkOpenStream;
      puVar6[5] = (ulonglong)(uint)local_150.Data.ArrayMax << 0x20;
      *puVar6 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFAudioMixerPlatformAudioLink_Audio____A6AXAEBUFOnOpenStreamParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = this;
      if (puVar6[4] == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    puVar8 = (ulong64 *)(*pcVar1)(pIVar5,local_res18);
    (this->OpenStreamHandle).ID = *puVar8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_168,(FWriteAccessScope *)&local_110);
    if ((local_160.DelegateSize != 0) &&
       (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_160.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_160,0,0,0x10);
      local_160.DelegateSize = 0;
    }
    if (local_110.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
    }
    if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_160.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
    (**(code **)((longlong)*pIVar5 + 0x68))(pIVar5,local_98);
    if (local_78 != '\0') {
      ::FString::FString(&local_150,L"AudioLink AudioMixer");
      MakeDeviceInfo(this,local_84,local_80,&local_150);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if ((local_78 != '\0') && (local_98[0] != (void *)0x0)) {
        FMemory::Free(local_98[0]);
      }
    }
  }
  this->bInitialized = true;
  return true;
}

// IsInitialized @ 148d2c640

bool __thiscall
Audio::FAudioMixerPlatformAudioLink::IsInitialized(FAudioMixerPlatformAudioLink *this)

{
  return this->bInitialized;
}

// MakeDeviceInfo @ 148d2c670

void __thiscall
Audio::FAudioMixerPlatformAudioLink::MakeDeviceInfo
          (FAudioMixerPlatformAudioLink *this,int param_1,int param_2,FString *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_18 [4];
  
  FAudioPlatformDeviceInfo::Reset(&this->DeviceInfo);
  ::FString::operator=(&(this->DeviceInfo).Name,param_3);
  ::FString::operator=(&(this->DeviceInfo).DeviceId,param_3);
  (this->DeviceInfo).bIsSystemDefault = '\x01';
  pTVar3 = &(this->DeviceInfo).OutputChannelArray;
  (this->DeviceInfo).SampleRate = param_2;
  piVar1 = &(this->DeviceInfo).OutputChannelArray.ArrayNum;
  (this->DeviceInfo).NumChannels = param_1;
  (this->DeviceInfo).Format = Float;
  iVar9 = *piVar1;
  if (iVar9 < param_1) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1 - iVar9,&pTVar3->AllocatorInstance,piVar1,
                       &(this->DeviceInfo).OutputChannelArray.ArrayMax);
    memset((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 4,0,(longlong)(param_1 - iVar9) << 2
          );
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar9) {
      uVar8 = iVar9 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar8 != 0) {
        pFVar4 = (pTVar3->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar9 = (*piVar1 - uVar8) - param_1;
        if (iVar9 != 0) {
          memmove(pFVar4,pFVar4 + (longlong)(int)uVar8 * 4,(longlong)iVar9 << 2);
        }
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar3->AllocatorInstance,*piVar1,
                   &(this->DeviceInfo).OutputChannelArray.ArrayMax);
      }
    }
  }
  iVar9 = 0;
  if (0 < param_1) {
    do {
      pFVar4 = (pTVar3->AllocatorInstance).Data;
      local_18[0] = iVar9;
      if (((pFVar4 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar4 + (longlong)(this->DeviceInfo).OutputChannelArray.ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->DeviceInfo).OutputChannelArray.ArrayNum;
      if (iVar7 == (this->DeviceInfo).OutputChannelArray.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar3->AllocatorInstance,
                           &(this->DeviceInfo).OutputChannelArray.ArrayMax);
      }
      iVar9 = iVar9 + 1;
      (this->DeviceInfo).OutputChannelArray.ArrayNum = iVar7 + 1;
      *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
    } while (iVar9 < param_1);
  }
  return;
}

// OnLinkOpenStream @ 148d2c8d0

void __thiscall
Audio::FAudioMixerPlatformAudioLink::OnLinkOpenStream
          (FAudioMixerPlatformAudioLink *this,FOnOpenStreamParams *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"AudioLink AudioMixer");
  MakeDeviceInfo(this,param_1->NumChannels,param_1->SampleRate,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnLinkRenderBegin @ 148d2c930

void __thiscall
Audio::FAudioMixerPlatformAudioLink::OnLinkRenderBegin
          (FAudioMixerPlatformAudioLink *this,FOnRenderParams *param_1)

{
  return;
}

// OnLinkRenderEnd @ 148d2c940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioMixerPlatformAudioLink::OnLinkRenderEnd
          (FAudioMixerPlatformAudioLink *this,FOnRenderParams *param_1)

{
  int iVar1;
  
  if (6 < (byte)LogAudioLink._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAudioLink);
  }
  if ((this->bAtomicStreamRunning != (atomic<bool>)0x0) &&
     ((ulonglong)this->LastBufferTickID < param_1->BufferTickID)) {
    this->LastBufferTickID = (uint)param_1->BufferTickID;
    iVar1 = param_1->NumFrames + this->FrameRemainder;
    this->FrameRemainder = iVar1;
    if (*(int *)((longlong)&this->_padding_ + 4) <= iVar1) {
      this->FrameRemainder = 0;
      IAudioMixerPlatformInterface::ReadNextBuffer((IAudioMixerPlatformInterface *)this);
    }
  }
  return;
}

// OpenAudioStream @ 148d2ca20

bool __thiscall
Audio::FAudioMixerPlatformAudioLink::OpenAudioStream
          (FAudioMixerPlatformAudioLink *this,FAudioMixerOpenStreamParams *param_1)

{
  char cVar1;
  
  if ((this->bInitialized != false) && ((int)this->_padding_ == 0)) {
    *(undefined4 *)&this->_padding_ = 0;
    FAudioPlatformDeviceInfo::Reset((FAudioPlatformDeviceInfo *)&this->_padding_);
    LOCK();
    *(undefined4 *)&this->_padding_ = 0;
    UNLOCK();
    this->_padding_ = 0;
    this->_padding_ = 2;
    cVar1 = (**(code **)(this->_padding_ + 0x68))(this,param_1->OutputDeviceIndex,&this->_padding_);
    if (cVar1 != '\0') {
      *(uint *)&this->_padding_ = param_1->OutputDeviceIndex;
      *(uint *)((longlong)&this->_padding_ + 4) = param_1->NumFrames;
      *(int *)&this->_padding_ = param_1->NumBuffers;
      this->_padding_ = (longlong)param_1->AudioMixer;
      *(uint *)&this->_padding_ = param_1->SampleRate;
      *(int *)((longlong)&this->_padding_ + 4) = param_1->MaxSources;
      *(bool *)&this->_padding_ = param_1->bRestoreIfRemoved;
      *(bool *)((longlong)&this->_padding_ + 1) = param_1->bUseSystemAudioDevice;
      ::FString::operator=((FString *)&this->_padding_,&param_1->AudioDeviceId);
      this->_padding_ = (longlong)param_1->AudioMixer;
      *(int *)&this->_padding_ = param_1->NumBuffers;
      *(uint *)((longlong)&this->_padding_ + 4) = param_1->NumFrames;
      LOCK();
      *(undefined4 *)&this->_padding_ = 1;
      UNLOCK();
      return true;
    }
  }
  return false;
}

// StartAudioStream @ 148d2cb30

bool __thiscall
Audio::FAudioMixerPlatformAudioLink::StartAudioStream(FAudioMixerPlatformAudioLink *this)

{
  if ((this->bInitialized != false) && (((int)this->_padding_ == 1 || ((int)this->_padding_ == 2))))
  {
    IAudioMixerPlatformInterface::BeginGeneratingAudio((IAudioMixerPlatformInterface *)this);
    if ((this->SynchronizeLink).Object == (IAudioLinkSynchronizer *)0x0) {
      IAudioMixerPlatformInterface::StartRunningNullDevice((IAudioMixerPlatformInterface *)this);
    }
    LOCK();
    *(undefined4 *)&this->_padding_ = 4;
    UNLOCK();
    LOCK();
    this->bAtomicStreamRunning = (atomic<bool>)0x1;
    UNLOCK();
    return true;
  }
  return false;
}

// StopAudioStream @ 148d2cba0

bool __thiscall
Audio::FAudioMixerPlatformAudioLink::StopAudioStream(FAudioMixerPlatformAudioLink *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (((int)this->_padding_ != 2) && ((int)this->_padding_ != 0)) {
    if ((int)this->_padding_ != 0) {
      IAudioMixerPlatformInterface::StopRunningNullDevice((IAudioMixerPlatformInterface *)this);
    }
    if ((int)this->_padding_ == 4) {
      IAudioMixerPlatformInterface::StopGeneratingAudio((IAudioMixerPlatformInterface *)this);
    }
    if ((int)this->_padding_ != 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioStreamInfo.StreamState == EAudioOutputStreamState::Stopped",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioMixerPlatformAudioLink\\Private\\AudioMixerPlatformAudioLink.cpp"
                         ,0xb9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  LOCK();
  this->bAtomicStreamRunning = (atomic<bool>)0x0;
  UNLOCK();
  return true;
}

// TeardownHardware @ 148d2cc20

bool __thiscall
Audio::FAudioMixerPlatformAudioLink::TeardownHardware(FAudioMixerPlatformAudioLink *this)

{
  TSharedPtr<IAudioLinkSynchronizer,1> *pTVar1;
  IAudioLinkSynchronizer *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  (**(code **)(this->_padding_ + 0xa8))();
  (**(code **)(this->_padding_ + 0x98))(this);
  pTVar1 = &this->SynchronizeLink;
  pIVar2 = pTVar1->Object;
  if (pIVar2 != (IAudioLinkSynchronizer *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,&this->RenderBeginHandle);
    if (pTVar1->Object == (IAudioLinkSynchronizer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    (**(code **)((longlong)*pTVar1->Object + 0x60))(pTVar1->Object,&this->RenderEndHandle);
    if (pTVar1->Object == (IAudioLinkSynchronizer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    (**(code **)((longlong)*pTVar1->Object + 0x30))(pTVar1->Object,&this->OpenStreamHandle);
    (this->RenderBeginHandle).ID = 0;
    (this->RenderEndHandle).ID = 0;
    (this->OpenStreamHandle).ID = 0;
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<IAudioLinkSynchronizer,1> *)&local_18) {
    pTVar1->Object = (IAudioLinkSynchronizer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SynchronizeLink).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return true;
}

