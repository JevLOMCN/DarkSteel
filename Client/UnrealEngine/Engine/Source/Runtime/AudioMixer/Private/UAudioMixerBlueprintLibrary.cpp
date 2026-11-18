// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 91

// StaticClass @ 1464cff50

UClass * __cdecl UAudioMixerBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"AudioMixerBlueprintLibrary",
               &Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUAudioMixerBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioMixerBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAudioMixerBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.InnerSingleton;
}

// UAudioMixerBlueprintLibrary @ 1464da100

UAudioMixerBlueprintLibrary * __thiscall
UAudioMixerBlueprintLibrary::UAudioMixerBlueprintLibrary
          (UAudioMixerBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAudioMixerBlueprintLibrary__6B_;
  return this;
}

// UAudioMixerBlueprintLibrary @ 1464da130

UAudioMixerBlueprintLibrary * __thiscall
UAudioMixerBlueprintLibrary::UAudioMixerBlueprintLibrary
          (UAudioMixerBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAudioMixerBlueprintLibrary__6B_;
  return this;
}

// ~UAudioMixerBlueprintLibrary @ 1464dd160

void __thiscall
UAudioMixerBlueprintLibrary::~UAudioMixerBlueprintLibrary(UAudioMixerBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UAudioMixerBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 1464e4c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>::operator()
          (void *this,EAudioChunkLoadResult param_1)

{
  undefined8 *puVar1;
  FReadAccessScope local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  EAudioChunkLoadResult local_40;
  code *local_38 [5];
  undefined8 *local_10;
  
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_78);
  local_58 = *(undefined8 *)((longlong)this + 8);
  local_50 = *(undefined8 *)((longlong)this + 0x10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_78);
  local_48 = *(undefined8 *)((longlong)this + 0x18);
  local_38[0] = (code *)0x0;
  local_40 = param_1;
  puVar1 = FMemory::Malloc(0x30,8);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &UE::Core::Private::Function::
             TFunction_OwnedObject<``UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::`25'::<lambda_1>::operator()'::`2'::<lambda_1>,1,1>
             ::_vftable_;
  puVar1[3] = 0;
  local_10 = puVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_60,&local_78);
  puVar1[2] = local_58;
  puVar1[3] = local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_78);
  puVar1[4] = local_48;
  *(EAudioChunkLoadResult *)(puVar1 + 5) = local_40;
  if (puVar1 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return;
}

// operator() @ 1464e58e0

void __thiscall
`UAudioMixerBlueprintLibrary::StopRecordingOutput'::__l51::<lambda_1>::operator()(void *this)

{
  FSoundWavePCMWriter *this_00;
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  TUniquePtr<Audio::FAudioRecordingData,TDefaultDelete<Audio::FAudioRecordingData>_> TVar4;
  FReadAccessScope local_28;
  
  lVar2 = *(longlong *)this;
  if (lVar2 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x230),&local_28);
    iVar1 = *(int *)(lVar2 + 0x240);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (0 < iVar1) {
      FOnSubmixRecordedFileDone_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(*(longlong *)this + 0x230)
                 ,(USoundWave *)0x0);
    }
  }
  TVar4.Ptr = RecordingData.Ptr;
  if (RecordingData.Ptr != (FAudioRecordingData *)0x0) {
    this_00 = &(RecordingData.Ptr)->Writer;
    RecordingData.Ptr = (FAudioRecordingData *)0x0;
    Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(this_00);
    pFVar3 = ((TVar4.Ptr)->InputBuffer).RawPCMData.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(TVar4.Ptr,0xa0);
  }
  return;
}

// operator() @ 1464e6700

void __thiscall
`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l14::<lambda_2>::operator()
          (void *this)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this);
  if (bVar2) {
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
    if (&local_18 != (ForAnyElementType *)((longlong)this + 0x18)) {
      uVar1 = *(uint *)((longlong)this + 0x20);
      _Src = ((ForAnyElementType *)((longlong)this + 0x18))->Data;
      local_10 = (ulonglong)uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,&local_18,uVar1,(int *)((longlong)&local_10 + 4));
        memcpy(local_18.Data,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(this,&local_18);
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

// operator() @ 1464e67c0

void __thiscall
`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l14::<lambda_2>::operator()(void *this)

{
  bool bVar1;
  FString local_38;
  FString local_28;
  undefined1 local_18;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this);
  if (bVar1) {
    local_18 = 2;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,(FString *)((longlong)this + 0x18));
    ::FString::operator=(&local_28,(FString *)((longlong)this + 0x28));
    local_18 = *(undefined1 *)((longlong)this + 0x38);
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(this,&local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1464e6860

void __thiscall
`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l2::<lambda_3>::operator()
          (void *this)

{
  int iVar1;
  FAudioOutputDeviceInfo *pFVar2;
  bool bVar3;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this);
  if (bVar3) {
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
    if (&local_18 != (ForAnyElementType *)((longlong)this + 0x18)) {
      DestructItems<FAudioOutputDeviceInfo,int>((FAudioOutputDeviceInfo *)0x0,0);
      iVar1 = *(int *)((longlong)this + 0x20);
      pFVar2 = (FAudioOutputDeviceInfo *)((ForAnyElementType *)((longlong)this + 0x18))->Data;
      local_10 = CONCAT44(local_10._4_4_,iVar1);
      if ((iVar1 == 0) && (local_10._4_4_ == 0)) {
        local_10 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,iVar1,local_10._4_4_,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
        ConstructItems<FAudioOutputDeviceInfo,FAudioOutputDeviceInfo,int>
                  (local_18.Data,pFVar2,iVar1);
      }
    }
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(this,&local_18);
    DestructItems<FAudioOutputDeviceInfo,int>((FAudioOutputDeviceInfo *)local_18.Data,(int)local_10)
    ;
    if ((FAudioOutputDeviceInfo *)local_18.Data != (FAudioOutputDeviceInfo *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

// AddMasterSubmixEffect @ 1464ebd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::AddMasterSubmixEffect
          (UObject *param_1,USoundEffectSubmixPreset *param_2)

{
  atomic<int> *paVar1;
  code *pcVar2;
  bool bVar3;
  FMixerDevice *this;
  TSharedPtr<FSoundEffectSubmix,1> local_68;
  FSoundEffectSubmixInitData local_58;
  code *local_38 [5];
  undefined8 *local_10;
  
  if (param_2 == (USoundEffectSubmixPreset *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else {
    this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
    if (this != (FMixerDevice *)0x0) {
      local_58.DeviceID = *(uint *)&this->field_0xa0;
      local_58.ParentPresetUniqueId = *(uint *)&param_2->field_0xc;
      local_58.SampleRate = (float)*(int *)&this->field_0x84;
      local_58.PresetSettings = (void *)0x0;
      USoundEffectPreset::CreateInstance<FSoundEffectSubmixInitData,FSoundEffectSubmix>
                (&local_68,&local_58,(USoundEffectPreset *)param_2);
      if ((local_68.Object == (FSoundEffectSubmix *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FSoundEffectBase::SetEnabled((FSoundEffectBase *)local_68.Object,true);
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        paVar1 = &(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          *paVar1 = (atomic<int>)((int)*paVar1 + 1);
          UNLOCK();
        }
      }
      local_38[0] = (code *)0x0;
      local_10 = FMemory::Malloc(0x20,8);
      local_10[2] = local_68.Object;
      *local_10 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FMixerDevice::AddMainSubmixEffect'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      local_10[1] = this;
      local_10[3] = local_68.SharedReferenceCount.ReferenceController;
      if (local_10 + 1 != (undefined8 *)0x0) {
        local_38[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FMixerDevice::AddMainSubmixEffect'::__l2::<lambda_1>,void>
                      ::Call;
      }
      Audio::FMixerDevice::AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// AddSourceEffectToPresetChain @ 1464ed300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain
          (UObject *param_1,USoundEffectSourcePresetChain *param_2,FSourceEffectChainEntry *param_3)

{
  undefined4 uVar1;
  USoundEffectSourcePreset *pUVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  FMixerDevice *pFVar7;
  FScriptContainerElement *pFVar8;
  TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_2 == (USoundEffectSourcePresetChain *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else {
    pFVar7 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
    if (pFVar7 != (FMixerDevice *)0x0) {
      uVar1 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      cVar4 = (**(code **)(*(longlong *)pFVar7 + 0x128))(pFVar7,uVar1,&local_18);
      if (cVar4 == '\0') {
        TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>::operator=
                  (&local_18,&param_2->Chain);
      }
      if (((local_18.AllocatorInstance.Data <= param_3) &&
          (param_3 < (FSourceEffectChainEntry *)
                     (local_18.AllocatorInstance.Data + (longlong)local_18.ArrayMax * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_18.ArrayNum;
      if (local_18.ArrayNum == local_18.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_18.AllocatorInstance,&local_18.ArrayMax);
      }
      pFVar8 = local_18.AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      local_18.ArrayNum = iVar6 + 1;
      pUVar2 = (param_3->Preset).field0_0x0.DebugPtr;
      *(USoundEffectSourcePreset **)&pFVar8->field_0x0 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (USoundEffectSourcePreset *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(uint *)(pFVar8 + 8) = *(uint *)(pFVar8 + 8) ^ (*(uint *)(pFVar8 + 8) ^ param_3->bBypass) & 1
      ;
      (**(code **)(*(longlong *)pFVar7 + 0x120))
                (pFVar7,uVar1,&local_18,param_2->bPlayEffectChainTails);
      if ((FSourceEffectChainEntry *)local_18.AllocatorInstance.Data !=
          (FSourceEffectChainEntry *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// AddSubmixEffect @ 1464edb40

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UAudioMixerBlueprintLibrary::AddSubmixEffect
          (UObject *param_1,USoundSubmix *param_2,USoundEffectSubmixPreset *param_3)

{
  code *pcVar1;
  FSoundEffectSubmix *this;
  bool bVar2;
  int iVar3;
  FMixerDevice *this_00;
  TSharedPtr<FSoundEffectSubmix,1> local_48;
  TSharedPtr<FSoundEffectSubmix,1> local_38;
  FSoundEffectSubmixInitData local_28;
  
  if ((param_3 != (USoundEffectSubmixPreset *)0x0) && (param_2 != (USoundSubmix *)0x0)) {
    this_00 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
    if (this_00 != (FMixerDevice *)0x0) {
      local_28.DeviceID = *(uint *)&this_00->field_0xa0;
      local_28.ParentPresetUniqueId = *(uint *)&param_3->field_0xc;
      local_28.SampleRate = (float)*(int *)&this_00->field_0x84;
      local_28.PresetSettings = (void *)0x0;
      USoundEffectPreset::CreateInstance<FSoundEffectSubmixInitData,FSoundEffectSubmix>
                (&local_48,&local_28,(USoundEffectPreset *)param_3);
      this = local_48.Object;
      if (local_48.Object == (FSoundEffectSubmix *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
      FSoundEffectBase::SetEnabled((FSoundEffectBase *)this,true);
      local_38.Object = local_48.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar3 = Audio::FMixerDevice::AddSubmixEffect(this_00,param_2,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      return iVar3;
    }
  }
  return 0;
}

// ClearMasterSubmixEffects @ 1464f0330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(UObject *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  FMixerDevice *local_20;
  undefined8 local_10;
  
  local_20 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (local_20 != (FMixerDevice *)0x0) {
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::ClearMainSubmixEffects'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::ClearMainSubmixEffects'::__l2::<lambda_1>,void>
                  ::Call;
    Audio::FMixerDevice::AudioRenderThreadCommand
              (local_20,(TFunction<void___cdecl(void)> *)local_38);
  }
  return;
}

// ClearSubmixEffectChainOverride @ 1464f05e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride
          (UObject *param_1,USoundSubmix *param_2,float param_3)

{
  FMixerDevice *pFVar1;
  
  pFVar1 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (pFVar1 != (FMixerDevice *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x1a8))(pFVar1,param_2,param_3);
  }
  return;
}

// ClearSubmixEffects @ 1464f0750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UAudioMixerBlueprintLibrary::ClearSubmixEffects(UObject *param_1,USoundSubmix *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  FMixerDevice *this;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMixerSubmix *pFVar7;
  bool bVar8;
  TWeakPtr<Audio::FMixerSubmix,1> local_48;
  code *local_38 [2];
  undefined **local_28;
  FMixerSubmix *local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (this != (FMixerDevice *)0x0) {
    pTVar5 = Audio::FMixerDevice::GetSubmixInstance(this,&local_48,(USoundSubmixBase *)param_2);
    pFVar7 = (FMixerSubmix *)0x0;
    pTVar6 = (pTVar5->WeakReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar6->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar4 = pTVar6->SharedReferenceCount;
        bVar8 = aVar2 == aVar4;
        if (bVar8) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar8);
      pTVar3 = (pTVar5->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
      (pTVar5->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        pFVar7 = pTVar5->Object;
        pTVar5->Object = (FMixerSubmix *)0x0;
      }
    }
    if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_48.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar7 != (FMixerSubmix *)0x0) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_10 = 0;
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffects'::`5'::<lambda_1>,0,0>
                  ::_vftable_;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::ClearSubmixEffects'::__l5::<lambda_1>,void>
                    ::Call;
      local_20 = pFVar7;
      local_18 = pTVar6;
      Audio::FMixerDevice::AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return;
}

// Conv_AudioOutputDeviceInfoToString @ 1464f75d0

FString * __cdecl
UAudioMixerBlueprintLibrary::Conv_AudioOutputDeviceInfoToString
          (FString *__return_storage_ptr__,FAudioOutputDeviceInfo *param_1)

{
  EAudioMixerStreamDataFormatType EVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  char *pcVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  FString local_38;
  FString local_28;
  
  EVar1 = param_1->Format;
  if (EVar1 == Unknown) {
    pcVar5 = "Unknown";
  }
  else if (EVar1 == Float) {
    pcVar5 = "Float";
  }
  else if (EVar1 == Int16) {
    pcVar5 = "Int16";
  }
  else if (EVar1 == Unsupported) {
    pcVar5 = "Unsupported";
  }
  else {
    pcVar5 = "Invalid Format Type";
  }
  ::FString::FString(&local_38,pcVar5);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"Device Name: %s, \nDevice Id: %s, \nNum Channels: %u, \nSample Rate: %u, \nFormat: %s,  \nIs System Default: %u, \n"
            );
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(__return_storage_ptr__,"Output Channel Array: \n",0x17);
  iVar7 = 0;
  if (0 < param_1->NumChannels) {
    lVar6 = 0;
    do {
      if (iVar7 < (param_1->OutputChannelArray).ArrayNum) {
        if ((iVar7 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
        switch((param_1->OutputChannelArray).AllocatorInstance.Data[lVar6]) {
        case (FScriptContainerElement)0x0:
          break;
        case (FScriptContainerElement)0x1:
          break;
        case (FScriptContainerElement)0x2:
          break;
        case (FScriptContainerElement)0x3:
          break;
        case (FScriptContainerElement)0x4:
          break;
        case (FScriptContainerElement)0x5:
          break;
        case (FScriptContainerElement)0x6:
          break;
        case (FScriptContainerElement)0x7:
          break;
        case (FScriptContainerElement)0x8:
          break;
        case (FScriptContainerElement)0x9:
          break;
        case (FScriptContainerElement)0xa:
          break;
        case (FScriptContainerElement)0xb:
          break;
        case (FScriptContainerElement)0xc:
          break;
        case (FScriptContainerElement)0xd:
          break;
        case (FScriptContainerElement)0xe:
          break;
        case (FScriptContainerElement)0xf:
          break;
        case (FScriptContainerElement)0x10:
          break;
        case (FScriptContainerElement)0x11:
          break;
        case (FScriptContainerElement)0x12:
        }
        ::FString::PrintfImpl(&local_28,L"\t%d: %s \n");
        iVar8 = local_28.Data.ArrayNum + -1;
        if (local_28.Data.ArrayNum == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar8);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (iVar7 < param_1->NumChannels);
  }
  return __return_storage_ptr__;
}

// GetAvailableAudioOutputDevices @ 146500cd0

/* WARNING: Removing unreachable block (ram,0x0001465010f9) */
/* WARNING: Removing unreachable block (ram,0x000146501108) */
/* WARNING: Removing unreachable block (ram,0x000146501117) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices
          (UObject *param_1,FOnAudioOutputDevicesObtained *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  IAudioMixerPlatformInterface *pIVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  FMixerDevice *pFVar8;
  longlong *plVar9;
  FAudioPlatformDeviceInfo *pFVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  <lambda_2> local_res18 [8];
  uint local_res20 [2];
  TArray<FAudioOutputDeviceInfo,TSizedDefaultAllocator<32>_> local_158;
  undefined1 local_148 [16];
  FString local_138;
  int local_128;
  int local_124;
  undefined8 *local_120;
  ForAnyElementType local_118;
  undefined8 local_110;
  byte local_108;
  undefined1 local_f8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  undefined1 local_e8 [8];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined1 local_cc;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  byte local_b8;
  FReadAccessScope local_a8;
  FAudioOutputDeviceInfo local_88;
  
  bVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_2);
  if (bVar4) {
    bVar4 = IsInAudioThread();
    uVar12 = 0;
    if (bVar4) {
      local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ArrayNum = 0;
      local_158.ArrayMax = 0;
      pFVar8 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
      if ((pFVar8 != (FMixerDevice *)0x0) &&
         (pIVar3 = pFVar8->AudioMixerPlatform, pIVar3 != (IAudioMixerPlatformInterface *)0x0)) {
        plVar9 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x120))(pIVar3);
        if (plVar9 == (longlong *)0x0) {
          local_res20[0] = 0;
          (**(code **)(pIVar3->_padding_ + 0x60))(pIVar3,local_res20);
          if ((int)local_res20[0] < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res20[0]);
          }
          if (local_158.ArrayMax < (int)local_res20[0]) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,local_res20[0],&local_158.AllocatorInstance,local_158.ArrayNum,
                       &local_158.ArrayMax);
          }
          pFVar10 = (FAudioPlatformDeviceInfo *)
                    (**(code **)(pIVar3->_padding_ + 200))(pIVar3,local_148);
          FAudioOutputDeviceInfo::FAudioOutputDeviceInfo(&local_88,pFVar10);
          if (local_118.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data);
          }
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_148._0_8_);
          }
          if (local_res20[0] != 0) {
            do {
              Audio::FAudioPlatformDeviceInfo::FAudioPlatformDeviceInfo
                        ((FAudioPlatformDeviceInfo *)local_f8);
              (**(code **)(pIVar3->_padding_ + 0x68))(pIVar3,uVar12,local_f8);
              ::FString::FString((FString *)local_148,(FString *)local_f8);
              ::FString::FString(&local_138,(FString *)local_e8);
              local_128 = (int)local_d8;
              local_124 = local_d0;
              local_120 = (undefined8 *)CONCAT71(local_120._1_7_,local_cc);
              local_118.Data = (FScriptContainerElement *)0x0;
              local_108 = local_b8 & 1 | local_108 & 0xfc;
              local_110 = 0;
              iVar6 = (int)local_c0;
              pFVar1 = local_c8.Data + (longlong)iVar6 * 4;
              FVar11.Data = local_c8.Data;
              while( true ) {
                if ((int)local_c0 != iVar6) {
                  `TCheckedPointerIterator<enum_EAudioMixerChannel::Type_const_,int,0>::operator!='
                  ::__l2::<lambda_1>::operator()(local_res18);
                }
                if (FVar11.Data == pFVar1) break;
                FVar2 = *FVar11.Data;
                iVar5 = (int)local_110;
                if ((int)local_110 == local_110._4_4_) {
                  iVar5 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x101,&local_118,(int *)((longlong)&local_110 + 4));
                }
                FVar11.Data = FVar11.Data + 4;
                local_110 = CONCAT44(local_110._4_4_,iVar5 + 1);
                local_118.Data[iVar5] = FVar2;
              }
              if (local_138.Data.ArrayNum == local_88.DeviceId.Data.ArrayNum) {
                if (local_138.Data.ArrayNum < 2) {
                  bVar4 = true;
                }
                else {
                  iVar6 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)local_138.Data.AllocatorInstance.Data,
                                     (wchar_t *)local_88.DeviceId.Data.AllocatorInstance.Data);
                  bVar4 = iVar6 == 0;
                }
              }
              else {
                bVar4 = local_138.Data.ArrayNum + local_88.DeviceId.Data.ArrayNum == 1;
              }
              local_108 = bVar4 * '\x02' | local_108 & 0xfd;
              iVar6 = local_158.ArrayNum;
              if (local_158.ArrayNum == local_158.ArrayMax) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x848,&local_158.AllocatorInstance,&local_158.ArrayMax);
              }
              local_158.ArrayNum = iVar6 + 1;
              *(undefined8 *)&local_158.AllocatorInstance.Data[(longlong)iVar6 * 0x48].field_0x0 = 0
              ;
              pFVar1 = local_158.AllocatorInstance.Data + (longlong)iVar6 * 0x48;
              *(undefined8 *)&pFVar1->field_0x0 = local_148._0_8_;
              *(undefined4 *)(pFVar1 + 8) = local_148._8_4_;
              *(undefined4 *)(pFVar1 + 0xc) = local_148._12_4_;
              *(undefined8 *)(pFVar1 + 0x10) = 0;
              *(FScriptContainerElement **)(pFVar1 + 0x10) = local_138.Data.AllocatorInstance.Data;
              *(int *)(pFVar1 + 0x18) = local_138.Data.ArrayNum;
              *(int *)(pFVar1 + 0x1c) = local_138.Data.ArrayMax;
              *(int *)(pFVar1 + 0x20) = local_128;
              *(int *)(pFVar1 + 0x24) = local_124;
              *(undefined8 *)(pFVar1 + 0x30) = 0;
              pFVar1[0x28] = local_120._0_1_;
              *(FScriptContainerElement **)(pFVar1 + 0x30) = local_118.Data;
              *(int *)(pFVar1 + 0x38) = (int)local_110;
              *(int *)(pFVar1 + 0x3c) = local_110._4_4_;
              FVar2 = pFVar1[0x40];
              pFVar1[0x40] = (FScriptContainerElement)(local_108 & 1 | (byte)FVar2 & 0xfe);
              pFVar1[0x40] = (FScriptContainerElement)
                             (local_108 & 1 | (byte)FVar2 & 0xfc | local_108 & 2);
              local_110 = 0;
              local_118.Data = (FScriptContainerElement *)0x0;
              local_138.Data.ArrayNum = 0;
              local_138.Data.ArrayMax = 0;
              local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_148._8_8_ = 0;
              local_148._0_8_ = (FScriptContainerElement *)0x0;
              if (local_c8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data);
              }
              if (local_e8 != (undefined1  [8])0x0) {
                FMemory::Free((void *)local_e8);
              }
              if ((atomic<unsigned___int64>)local_f8 != (atomic<unsigned___int64>)0x0) {
                FMemory::Free((void *)local_f8);
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < local_res20[0]);
          }
          if (local_88.OutputChannelArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_88.OutputChannelArray.AllocatorInstance.Data);
          }
          local_a8.DestructionSentinel._0_8_ = local_88.Name.Data.AllocatorInstance.Data;
          if (local_88.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.DeviceId.Data.AllocatorInstance.Data);
            local_a8.DestructionSentinel._0_8_ = local_88.Name.Data.AllocatorInstance.Data;
          }
        }
        else {
          (**(code **)(*plVar9 + 0x10))(plVar9,&local_a8);
          Algo::
          Transform<TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_>,TArray<FAudioOutputDeviceInfo,TSizedDefaultAllocator<32>_>_&,_UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices_::__l17::<lambda_2>_>
                    ((TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> *)
                     &local_a8,&local_158,local_res18[0]);
          DestructItems<Audio::FAudioPlatformDeviceInfo,int>
                    ((FAudioPlatformDeviceInfo *)local_a8.DestructionSentinel._0_8_,
                     (int)local_a8.DestructionSentinel.Accessor);
        }
        if ((FAudioPlatformDeviceInfo *)local_a8.DestructionSentinel._0_8_ !=
            (FAudioPlatformDeviceInfo *)0x0) {
          FMemory::Free((void *)local_a8.DestructionSentinel._0_8_);
        }
      }
      local_f8 = (undefined1  [8])0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_a8);
      local_f0.AccessDetector.State = *(FMRSWRecursiveAccessDetector *)&param_2->field_0x8;
      local_e8 = *(undefined1 (*) [8])&param_2->field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      FVar11.Data = local_158.AllocatorInstance.Data;
      iVar6 = local_158.ArrayNum;
      local_e0.Data = (FScriptContainerElement *)0x0;
      local_d8 = CONCAT44(local_d8._4_4_,local_158.ArrayNum);
      if (local_158.ArrayNum == 0) {
        local_d8 = local_158._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,local_158.ArrayNum,0,&local_e0,local_158.ArrayNum,
                   (int *)((longlong)&local_d8 + 4));
        ConstructItems<FAudioOutputDeviceInfo,FAudioOutputDeviceInfo,int>
                  (local_e0.Data,(FAudioOutputDeviceInfo *)FVar11.Data,iVar6);
      }
      local_148._0_8_ = (FScriptContainerElement *)0x0;
      puVar7 = FMemory::Malloc(0x30,8);
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::`2'::<lambda_3>,1,1>
                 ::_vftable_;
      puVar7[3] = 0;
      local_120 = puVar7;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,&local_a8);
      *(FMRSWRecursiveAccessDetector *)(puVar7 + 2) = local_f0.AccessDetector.State;
      puVar7[3] = local_e8;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      puVar7[4] = 0;
      puVar7[4] = local_e0.Data;
      local_e0.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar7 + 5) = (int)local_d8;
      *(int *)((longlong)puVar7 + 0x2c) = local_d8._4_4_;
      local_d8._0_4_ = 0;
      local_d8._4_4_ = 0;
      if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_148._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l2::<lambda_3>,void>
             ::Call;
      }
      FAudioThread::RunCommandOnGameThread
                ((TUniqueFunction<void___cdecl(void)> *)local_148,(TStatId)0x154f11430);
      DestructItems<FAudioOutputDeviceInfo,int>
                ((FAudioOutputDeviceInfo *)local_e0.Data,(int)local_d8);
      if ((FAudioOutputDeviceInfo *)local_e0.Data != (FAudioOutputDeviceInfo *)0x0) {
        FMemory::Free(local_e0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_f8);
      DestructItems<FAudioOutputDeviceInfo,int>
                ((FAudioOutputDeviceInfo *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
      if ((FAudioOutputDeviceInfo *)local_158.AllocatorInstance.Data !=
          (FAudioOutputDeviceInfo *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
    }
    else {
      local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_f8 = (undefined1  [8])param_1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_a8);
      local_e8 = *(undefined1 (*) [8])&param_2->field_0x8;
      local_e0.Data = *(FScriptContainerElement **)&param_2->field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      local_148._0_8_ = (FScriptContainerElement *)0x0;
      puVar7 = FMemory::Malloc(0x28,8);
      *puVar7 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::`8'::<lambda_1>,1,1>
                 ::_vftable_;
      ((FMRSWRecursiveAccessDetector *)(puVar7 + 1))->State = (atomic<unsigned___int64>)local_f8;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      local_120 = puVar7;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_f0,&local_a8);
      puVar7[3] = local_e8;
      puVar7[4] = local_e0.Data;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      if ((FMRSWRecursiveAccessDetector *)(puVar7 + 1) != (FMRSWRecursiveAccessDetector *)0x0) {
        local_148._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l8::<lambda_1>,void>
             ::Call;
      }
      FAudioThread::RunCommandOnAudioThread
                ((TUniqueFunction<void___cdecl(void)> *)local_148,(TStatId)0x154f11430);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
    }
  }
  return;
}

// GetCurrentAudioOutputDeviceName @ 1465017b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName
          (UObject *param_1,FOnMainAudioOutputDeviceObtained *param_2)

{
  IAudioMixerPlatformInterface *pIVar1;
  void *_Src;
  bool bVar2;
  undefined8 *puVar3;
  FMixerDevice *pFVar4;
  int iVar5;
  undefined1 local_a8 [24];
  ForAnyElementType local_90;
  undefined8 local_88;
  undefined8 *local_80;
  UObject *local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70 [2];
  undefined8 local_60;
  void *local_58;
  FMRSWRecursiveAccessDetector *local_50;
  code *local_38 [5];
  undefined8 *local_10;
  
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_2);
  if (bVar2) {
    bVar2 = IsInAudioThread();
    if (bVar2) {
      pFVar4 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
      if ((pFVar4 != (FMixerDevice *)0x0) &&
         (pIVar1 = pFVar4->AudioMixerPlatform, pIVar1 != (IAudioMixerPlatformInterface *)0x0)) {
        (**(code **)(pIVar1->_padding_ + 0x70))(pIVar1,&local_58);
        local_a8._0_8_ = (atomic<unsigned___int64>)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
                   (FReadAccessScope *)&local_78);
        local_a8._8_8_ = *(undefined8 *)&param_2->field_0x8;
        local_a8._16_8_ = *(undefined8 *)&param_2->field_0x10;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_78);
        _Src = local_58;
        local_90.Data = (FScriptContainerElement *)0x0;
        iVar5 = (int)local_50;
        local_88 = CONCAT44(local_88._4_4_,iVar5);
        if (iVar5 == 0) {
          local_88 = (ulonglong)local_50 & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar5,0,&local_90,iVar5,(int *)((longlong)&local_88 + 4));
          memcpy(local_90.Data,_Src,(longlong)iVar5 * 2);
        }
        local_38[0] = (code *)0x0;
        puVar3 = FMemory::Malloc(0x30,8);
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::`14'::<lambda_2>,1,1>
                   ::_vftable_;
        puVar3[3] = 0;
        local_10 = puVar3;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                   (FReadAccessScope *)&local_78);
        puVar3[2] = local_a8._8_8_;
        puVar3[3] = local_a8._16_8_;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_78);
        puVar3[4] = 0;
        puVar3[4] = local_90.Data;
        local_90.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)(puVar3 + 5) = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar3 + 0x2c) = local_88._4_4_;
        local_88 = 0;
        if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_38[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l14::<lambda_2>,void>
                        ::Call;
        }
        FAudioThread::RunCommandOnGameThread
                  ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
        if (local_90.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_a8);
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
      }
      DestructItems<FAudioOutputDeviceInfo,int>((FAudioOutputDeviceInfo *)0x0,0);
    }
    else {
      local_70[0].AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
      ;
      local_78 = param_1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
                 (FReadAccessScope *)&local_58);
      local_70[1].AccessDetector.State._0_1_ = (bool)param_2->field_0x8;
      local_70[1].AccessDetector.State._1_7_ = *(undefined7 *)&param_2->field_0x9;
      local_60 = *(undefined8 *)&param_2->field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_58);
      local_a8._0_8_ = (atomic<unsigned___int64>)0x0;
      puVar3 = FMemory::Malloc(0x28,8);
      *puVar3 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::`8'::<lambda_1>,1,1>
                 ::_vftable_;
      puVar3[1] = local_78;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      local_80 = puVar3;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (local_70,(FReadAccessScope *)&local_58);
      puVar3[3] = local_70[1].AccessDetector.State;
      puVar3[4] = local_60;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_58);
      if (puVar3 + 1 != (undefined8 *)0x0) {
        local_a8._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l8::<lambda_1>,void>
             ::Call;
      }
      FAudioThread::RunCommandOnAudioThread
                ((TUniqueFunction<void___cdecl(void)> *)local_a8,(TStatId)0x154f11430);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70[0].AccessDetector);
    }
  }
  return;
}

// GetMagnitudeForFrequencies @ 146503540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies
          (UObject *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,USoundSubmix *param_4)

{
  FMixerDevice *pFVar1;
  
  pFVar1 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (pFVar1 != (FMixerDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146503587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x1d0))(pFVar1,param_4,param_2,param_3);
    return;
  }
  if (1 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  return;
}

// GetNumberOfEntriesInSourceEffectChain @ 146504550

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain
          (UObject *param_1,USoundEffectSourcePresetChain *param_2)

{
  char cVar1;
  FMixerDevice *pFVar2;
  int iVar3;
  void *local_18;
  undefined8 local_10;
  
  if (param_2 == (USoundEffectSourcePresetChain *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    pFVar2 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
    if (pFVar2 != (FMixerDevice *)0x0) {
      local_18 = (void *)0x0;
      local_10 = 0;
      cVar1 = (**(code **)(*(longlong *)pFVar2 + 0x128))
                        (pFVar2,*(undefined4 *)((longlong)&param_2->_padding_ + 4),&local_18);
      if (cVar1 == '\0') {
        iVar3 = (param_2->Chain).ArrayNum;
      }
      else {
        iVar3 = (int)local_10;
      }
      if (local_18 != (void *)0x0) {
        FMemory::Free(local_18);
      }
      return iVar3;
    }
  }
  return 0;
}

// GetPhaseForFrequencies @ 146504680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::GetPhaseForFrequencies
          (UObject *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,USoundSubmix *param_4)

{
  FMixerDevice *pFVar1;
  
  pFVar1 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (pFVar1 != (FMixerDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001465046c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x1d8))(pFVar1,param_4,param_2,param_3);
    return;
  }
  if (1 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  return;
}

// GetPrivateStaticClass @ 1465050e0

UClass * __cdecl UAudioMixerBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"AudioMixerBlueprintLibrary",
               &Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUAudioMixerBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioMixerBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAudioMixerBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.InnerSingleton;
}

// IsAudioBusActive @ 14650e6b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UAudioMixerBlueprintLibrary::IsAudioBusActive(UObject *param_1,UAudioBus *param_2)

{
  uint uVar1;
  code *pcVar2;
  FAudioBusKey FVar3;
  bool bVar4;
  undefined1 uVar5;
  FMixerDevice *this;
  UAudioBusSubsystem *this_00;
  FStaticBasicLogRecord *pFVar6;
  
  if (param_2 == (UAudioBus *)0x0) {
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return false;
    }
    pFVar6 = &::LOG_Static;
  }
  else {
    this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
    if (this != (FMixerDevice *)0x0) {
      uVar1 = *(uint *)((longlong)&param_2->_padding_ + 4);
      this_00 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>((FAudioDevice *)this);
      if ((this_00 == (UAudioBusSubsystem *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AudioBusSubsystem",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBlueprintLibrary.cpp"
                             ,0x2b4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      FVar3.InstanceId = 0xffffffff;
      FVar3.ObjectId = uVar1;
      bVar4 = UAudioBusSubsystem::IsAudioBusActive(this_00,FVar3);
      return bVar4;
    }
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return false;
    }
    pFVar6 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogAudioMixer);
  return false;
}

// MakeFullSpectrumSpectralAnalysisBandSettings @ 1465113f0

TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> * __cdecl
UAudioMixerBlueprintLibrary::MakeFullSpectrumSpectralAnalysisBandSettings
          (TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,int param_1,float param_2,float param_3,int param_4,int param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_58;
  int iStack_54;
  int iStack_50;
  float fStack_4c;
  
  if (__real_469c4000 <= param_3) {
    param_3 = __real_469c4000;
  }
  if (__real_469c4000 <= param_2) {
    param_2 = __real_469c4000;
  }
  iVar4 = 10000;
  if (param_1 < 10000) {
    iVar4 = param_1;
  }
  iVar7 = 0;
  if (param_2 <= __real_41a00000) {
    param_2 = __real_41a00000;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  iVar4 = 10000;
  if (param_4 < 10000) {
    iVar4 = param_4;
  }
  if (param_3 <= param_2) {
    param_3 = param_2;
  }
  iVar8 = 0;
  if (0 < iVar4) {
    iVar8 = iVar4;
  }
  iVar4 = 10000;
  if (param_5 < 10000) {
    iVar4 = param_5;
  }
  iVar9 = 0;
  if (0 < iVar4) {
    iVar9 = iVar4;
  }
  fVar10 = logf(param_3 / param_2);
  fVar11 = __real_3f800000;
  fVar12 = fVar10 * __real_3fb8aa3b;
  if (fVar10 * __real_3fb8aa3b <= __real_3c23d70a) {
    fVar12 = __real_3c23d70a;
  }
  fVar12 = (float)iVar6 / fVar12;
  fVar10 = fVar12;
  if (fVar12 <= __real_3c23d70a) {
    fVar10 = __real_3c23d70a;
  }
  fVar10 = powf(__real_40000000,__real_3f800000 / fVar10);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  fVar11 = fVar11 / (fVar10 - fVar11);
  if (0 < iVar6) {
    do {
      local_58 = 440.0;
      iStack_54 = 10;
      iStack_50 = 500;
      fStack_4c = 10.0;
      local_58 = Audio::FPseudoConstantQ::GetConstantQCenterFrequency(iVar7,param_2,fVar12);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      iStack_54 = iVar8;
      iStack_50 = iVar9;
      fStack_4c = fVar11;
      if (((pFVar1 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      iVar7 = iVar7 + 1;
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      *(ulonglong *)pFVar1 = CONCAT44(iStack_54,local_58);
      *(ulonglong *)(pFVar1 + 8) = CONCAT44(fStack_4c,iStack_50);
    } while (iVar7 < iVar6);
  }
  return __return_storage_ptr__;
}

// MakeMusicalSpectralAnalysisBandSettings @ 146511630

TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> * __cdecl
UAudioMixerBlueprintLibrary::MakeMusicalSpectralAnalysisBandSettings
          (TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,int param_1,EMusicalNoteName param_2,int param_3,int param_4,
          int param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float local_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  iVar5 = 10000;
  if (param_1 < 10000) {
    iVar5 = param_1;
  }
  iVar9 = 0;
  iVar8 = 0;
  if (0 < iVar5) {
    iVar8 = iVar5;
  }
  iVar5 = 10;
  if (param_3 < 10) {
    iVar5 = param_3;
  }
  iVar7 = 10000;
  if (param_4 < 10000) {
    iVar7 = param_4;
  }
  iVar10 = 0;
  if (0 < iVar7) {
    iVar10 = iVar7;
  }
  iVar7 = 10000;
  if (param_5 < 10000) {
    iVar7 = param_5;
  }
  iVar11 = 0;
  if (0 < iVar7) {
    iVar11 = iVar7;
  }
  iVar7 = -1;
  if (-1 < iVar5) {
    iVar7 = iVar5;
  }
  fVar12 = powf(__real_40000000,(float)(int)(iVar7 * 0xc + -0x39 + (uint)param_2) * __real_3daaaaab)
  ;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  fVar12 = fVar12 * __real_43dc0000;
  __return_storage_ptr__->ArrayNum = 0;
  fVar3 = __real_41400000;
  __return_storage_ptr__->ArrayMax = 0;
  if (0 < iVar8) {
    do {
      local_48 = 440.0;
      iStack_44 = 10;
      iStack_40 = 500;
      uStack_3c = 0x41200000;
      local_48 = Audio::FPseudoConstantQ::GetConstantQCenterFrequency(iVar9,fVar12,fVar3);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      uStack_3c = 0x41868981;
      iStack_44 = iVar10;
      iStack_40 = iVar11;
      if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      iVar9 = iVar9 + 1;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(ulonglong *)pFVar1 = CONCAT44(iStack_44,local_48);
      *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_3c,iStack_40);
    } while (iVar9 < iVar8);
  }
  return __return_storage_ptr__;
}

// MakePresetSpectralAnalysisBandSettings @ 146511940

TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> * __cdecl
UAudioMixerBlueprintLibrary::MakePresetSpectralAnalysisBandSettings
          (TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,EAudioSpectrumBandPresetType param_1,int param_2,int param_3,
          int param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_42200000;
  fVar2 = __real_42c80000;
  if ((((param_1 != KickDrum) &&
       (fVar1 = __real_43160000, fVar2 = __real_458ca000, param_1 != SnareDrum)) &&
      (fVar1 = __real_43960000, fVar2 = __real_453b8000, param_1 != Voice)) &&
     (fVar1 = __real_41a00000, fVar2 = __real_469c4000, param_1 == Cymbals)) {
    fVar1 = __real_45bb8000;
    fVar2 = __real_467a0000;
  }
  MakeFullSpectrumSpectralAnalysisBandSettings
            (__return_storage_ptr__,param_2,fVar1,fVar2,param_3,param_4);
  return __return_storage_ptr__;
}

// PauseRecordingOutput @ 1465149f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::PauseRecordingOutput(UObject *param_1,USoundSubmix *param_2)

{
  FMixerDevice *pFVar1;
  
  pFVar1 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (pFVar1 != (FMixerDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146514a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x240))
              (pFVar1,param_2,*(code **)(*(longlong *)pFVar1 + 0x240));
    return;
  }
  if (1 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    return;
  }
  return;
}

// PrimeSoundCueForPlayback @ 1465158a0

void __cdecl UAudioMixerBlueprintLibrary::PrimeSoundCueForPlayback(USoundCue *param_1)

{
  USoundNode *pUVar1;
  
  if (param_1 == (USoundCue *)0x0) {
    return;
  }
  pUVar1 = (param_1->FirstNode).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundNode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001486e20c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,1);
    return;
  }
  return;
}

// PrimeSoundForPlayback @ 1465158b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::PrimeSoundForPlayback
          (USoundWave *param_1,FOnSoundLoadComplete *param_2)

{
  code *pcVar1;
  FStreamingManagerCollection *this;
  IAudioStreamingManager *pIVar2;
  undefined8 *puVar3;
  TSharedPtr<FSoundWaveProxy,1> *pTVar4;
  TSharedPtr<FSoundWaveProxy,1> local_98;
  FReadAccessScope local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  undefined8 local_68;
  undefined8 local_60;
  USoundWave *local_58;
  code *local_48 [5];
  undefined8 *local_20;
  
  if (param_1 == (USoundWave *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)param_2);
      return;
    }
  }
  else {
    this = IStreamingManager::Get();
    pIVar2 = FStreamingManagerCollection::GetAudioStreamingManager(this);
    local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    pcVar1 = *(code **)(*(longlong *)pIVar2 + 0xa8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_88);
    local_68 = *(undefined8 *)&param_2->field_0x8;
    local_60 = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    local_48[0] = (code *)0x0;
    local_58 = param_1;
    puVar3 = FMemory::Malloc(0x28,8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::`25'::<lambda_1>,0,1>
               ::_vftable_;
    puVar3[3] = 0;
    local_20 = puVar3;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_70,&local_88);
    puVar3[2] = local_68;
    puVar3[3] = local_60;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    puVar3[4] = local_58;
    if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>,void,enum_EAudioChunkLoadResult>
                    ::Call;
    }
    pTVar4 = USoundWave::CreateSoundWaveProxy(param_1,&local_98);
    (*pcVar1)(pIVar2,pTVar4,1,local_48,0xff,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// RegisterAudioBusToSubmix @ 1465185b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix
          (UObject *param_1,USoundSubmix *param_2,UAudioBus *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EAudioBusChannels EVar3;
  int iVar4;
  FMixerSubmix *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FAudioBusKey FVar8;
  bool bVar9;
  atomic<int> aVar10;
  FMixerDevice *pFVar11;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar12;
  UAudioBusSubsystem *this;
  FMixerSourceManager *this_00;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar13;
  FPatchInput *pFVar14;
  FMixerSubmix *pFVar15;
  FMixerSubmix *this_01;
  FAudioBusKey local_res10;
  FPatchInput local_c8;
  FPatchInput local_b0;
  TWeakPtr<Audio::FMixerSubmix,1> local_98;
  TSharedPtr<Audio::FPatchOutput,1> local_88;
  code *local_78 [5];
  undefined8 *local_50;
  FPatchInput local_48;
  
  if (param_2 == (USoundSubmix *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else if (param_3 == (UAudioBus *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else {
    bVar9 = IsInAudioThread();
    if (bVar9) {
      pFVar11 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
      if (pFVar11 == (FMixerDevice *)0x0) {
        if (1 < (byte)LogAudioMixer._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
      }
      else {
        pTVar12 = Audio::FMixerDevice::GetSubmixInstance
                            (pFVar11,&local_98,(USoundSubmixBase *)param_2);
        pFVar5 = (FMixerSubmix *)(pTVar12->WeakReferenceCount).ReferenceController;
        pFVar15 = pFVar5;
        this_01 = (FMixerSubmix *)0x0;
        if (pFVar5 != (FMixerSubmix *)0x0) {
          aVar2 = *(atomic<int> *)&pFVar5->field_0x8;
          do {
            pFVar15 = (FMixerSubmix *)0x0;
            if (aVar2 == (atomic<int>)0x0) break;
            LOCK();
            aVar10 = *(atomic<int> *)&pFVar5->field_0x8;
            bVar9 = aVar2 == aVar10;
            if (bVar9) {
              *(atomic<int> *)&pFVar5->field_0x8 = (atomic<int>)((int)aVar2 + 1);
              aVar10 = aVar2;
            }
            UNLOCK();
            pFVar15 = pFVar5;
            aVar2 = aVar10;
          } while (!bVar9);
          pTVar6 = (pTVar12->WeakReferenceCount).ReferenceController;
          LOCK();
          paVar1 = &pTVar6->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if ((aVar2 == (atomic<int>)0x1) && (pTVar6 != (TReferenceControllerBase<1> *)0x0)) {
            (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
          }
          (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
          this_01 = (FMixerSubmix *)0x0;
          if (pFVar15 != (FMixerSubmix *)0x0) {
            this_01 = pTVar12->Object;
            pTVar12->Object = (FMixerSubmix *)0x0;
          }
        }
        if (local_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_98.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_98.WeakReferenceCount.ReferenceController,1);
          }
        }
        if (this_01 == (FMixerSubmix *)0x0) {
          if (1 < (byte)LogAudioMixer._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          }
        }
        else {
          this = FAudioDevice::GetSubsystem<UAudioBusSubsystem>((FAudioDevice *)pFVar11);
          if ((this == (UAudioBusSubsystem *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("AudioBusSubsystem",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBlueprintLibrary.cpp"
                                 ,0x2de,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_res10.ObjectId = *(uint *)((longlong)&param_3->_padding_ + 4);
          EVar3 = param_3->AudioBusChannels;
          iVar4 = *(int *)&pFVar11->field_0x8c;
          local_res10.InstanceId = 0xffffffff;
          FVar8.InstanceId = 0xffffffff;
          FVar8.ObjectId = local_res10.ObjectId;
          this_00 = UAudioEngineSubsystem::GetMutableSourceManager((UAudioEngineSubsystem *)this);
          if ((this_00 == (FMixerSourceManager *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("SourceManager",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioBusSubsystem.cpp"
                                 ,0x7e,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar11 = UAudioEngineSubsystem::GetMutableMixerDevice((UAudioEngineSubsystem *)this);
          if (pFVar11 == (FMixerDevice *)0x0) {
            local_c8.PushCallsCounter = 0;
            local_c8._20_4_ = 0;
            local_c8.OutputHandle.Object = (FPatchOutput *)0x0;
            local_c8.OutputHandle.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
          }
          else {
            pTVar13 = Audio::FMixerDevice::MakePatch
                                (pFVar11,&local_88,iVar4,EVar3 + 1,__real_3f800000);
            Audio::FPatchInput::FPatchInput(&local_b0,pTVar13);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_88.SharedReferenceCount.ReferenceController);
            pFVar14 = Audio::FPatchInput::FPatchInput(&local_48,&local_b0);
            Audio::FMixerSourceManager::AddPendingAudioBusConnection
                      (this_00,FVar8,EVar3 + 1,false,pFVar14,0xffffffffffffffff);
            Audio::FPatchInput::FPatchInput(&local_c8,&local_b0);
            Audio::FPatchInput::~FPatchInput(&local_b0);
          }
          Audio::FMixerSubmix::RegisterAudioBus(this_01,&local_res10,&local_c8);
          Audio::FPatchInput::~FPatchInput(&local_c8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
      }
    }
    else {
      local_78[0] = (code *)0x0;
      local_50 = FMemory::Malloc(0x20,8);
      *local_50 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix'::`47'::<lambda_1>,1,1>
                   ::_vftable_;
      local_50[1] = param_1;
      local_50[2] = param_2;
      local_50[3] = param_3;
      if (local_50 + 1 != (undefined8 *)0x0) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix'::__l47::<lambda_1>,void>
                      ::Call;
      }
      FAudioThread::RunCommandOnAudioThread
                ((TUniqueFunction<void___cdecl(void)> *)local_78,(TStatId)0x154f11430);
    }
  }
  return;
}

// RemoveMasterSubmixEffect @ 14651d0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect
          (UObject *param_1,USoundEffectSubmixPreset *param_2)

{
  code *local_38 [2];
  undefined **local_28;
  FMixerDevice *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  if (param_2 == (USoundEffectSubmixPreset *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else {
    local_20 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
    if (local_20 != (FMixerDevice *)0x0) {
      local_10 = 0;
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Audio::FMixerDevice::RemoveMainSubmixEffect'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_18 = *(undefined4 *)&param_2->field_0xc;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::RemoveMainSubmixEffect'::__l2::<lambda_1>,void>
                    ::Call;
      Audio::FMixerDevice::AudioRenderThreadCommand
                (local_20,(TFunction<void___cdecl(void)> *)local_38);
    }
  }
  return;
}

// RemoveSourceEffectFromPresetChain @ 14651d530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain
          (UObject *param_1,USoundEffectSourcePresetChain *param_2,int param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  FMixerDevice *pFVar6;
  uint uVar7;
  int iVar8;
  TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_2 == (USoundEffectSourcePresetChain *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else {
    pFVar6 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
    if (pFVar6 != (FMixerDevice *)0x0) {
      uVar1 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      cVar3 = (**(code **)(*(longlong *)pFVar6 + 0x128))(pFVar6,uVar1,&local_18);
      if (cVar3 == '\0') {
        TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>::operator=
                  (&local_18,&param_2->Chain);
      }
      if ((-1 < param_3) && (param_3 < local_18.ArrayNum)) {
        uVar7 = 0;
        if (param_3 < local_18.ArrayNum) {
          uVar7 = (uint)~param_3 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar5 = (local_18.ArrayNum - param_3) + -1;
        iVar8 = local_18.ArrayNum;
        if (iVar5 != 0) {
          memmove(local_18.AllocatorInstance.Data + (longlong)param_3 * 0x10,
                  local_18.AllocatorInstance.Data + (longlong)param_3 * 0x10 + 0x10,
                  (longlong)iVar5 << 4);
          iVar8 = local_18.ArrayNum;
        }
        local_18.ArrayNum = iVar8 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&local_18.AllocatorInstance,iVar8 + -1,&local_18.ArrayMax);
        (**(code **)(*(longlong *)pFVar6 + 0x120))
                  (pFVar6,uVar1,&local_18,param_2->bPlayEffectChainTails);
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RemoveSubmixEffect @ 14651dc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::RemoveSubmixEffect
          (UObject *param_1,USoundSubmix *param_2,USoundEffectSubmixPreset *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined4 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  FMixerDevice *this;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMixerSubmix *pFVar8;
  bool bVar9;
  TWeakPtr<Audio::FMixerSubmix,1> local_58;
  code *local_48 [5];
  undefined8 *local_20;
  
  this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (this != (FMixerDevice *)0x0) {
    uVar3 = *(undefined4 *)&param_3->field_0xc;
    pTVar6 = Audio::FMixerDevice::GetSubmixInstance(this,&local_58,(USoundSubmixBase *)param_2);
    pFVar8 = (FMixerSubmix *)0x0;
    pTVar7 = (pTVar6->WeakReferenceCount).ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar7->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        bVar9 = aVar2 == aVar5;
        if (bVar9) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar9);
      pTVar4 = (pTVar6->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
      (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        pFVar8 = pTVar6->Object;
        pTVar6->Object = (FMixerSubmix *)0x0;
      }
    }
    if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_58.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar8 != (FMixerSubmix *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48[0] = (code *)0x0;
      local_20 = FMemory::Malloc(0x20,8);
      local_20[1] = pFVar8;
      local_20[2] = pTVar7;
      *local_20 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffect'::`5'::<lambda_1>,0,1>
                   ::_vftable_;
      *(undefined4 *)(local_20 + 3) = uVar3;
      if (local_20 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FMixerDevice::RemoveSubmixEffect'::__l5::<lambda_1>,void>
                      ::Call;
      }
      Audio::FMixerDevice::AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  return;
}

// RemoveSubmixEffectAtIndex @ 14651df10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::RemoveSubmixEffectAtIndex
          (UObject *param_1,USoundSubmix *param_2,int param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  FMixerDevice *this;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMixerSubmix *pFVar7;
  bool bVar8;
  TWeakPtr<Audio::FMixerSubmix,1> local_58;
  code *local_48 [5];
  undefined8 *local_20;
  
  this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (this != (FMixerDevice *)0x0) {
    pTVar5 = Audio::FMixerDevice::GetSubmixInstance(this,&local_58,(USoundSubmixBase *)param_2);
    pFVar7 = (FMixerSubmix *)0x0;
    pTVar6 = (pTVar5->WeakReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar6->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar4 = pTVar6->SharedReferenceCount;
        bVar8 = aVar2 == aVar4;
        if (bVar8) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar8);
      pTVar3 = (pTVar5->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
      (pTVar5->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        pFVar7 = pTVar5->Object;
        pTVar5->Object = (FMixerSubmix *)0x0;
      }
    }
    if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_58.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar7 != (FMixerSubmix *)0x0) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48[0] = (code *)0x0;
      local_20 = FMemory::Malloc(0x20,8);
      local_20[1] = pFVar7;
      local_20[2] = pTVar6;
      *local_20 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::`5'::<lambda_1>,0,1>
                   ::_vftable_;
      *(int *)(local_20 + 3) = param_3;
      if (local_20 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::__l5::<lambda_1>,void>
                      ::Call;
      }
      Audio::FMixerDevice::AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return;
}

// RemoveSubmixEffectPreset @ 14651e070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset
          (UObject *param_1,USoundSubmix *param_2,USoundEffectSubmixPreset *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined4 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  FMixerDevice *this;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMixerSubmix *pFVar8;
  bool bVar9;
  TWeakPtr<Audio::FMixerSubmix,1> TStack_58;
  code *apcStack_48 [5];
  undefined8 *puStack_20;
  
  this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (this != (FMixerDevice *)0x0) {
    uVar3 = *(undefined4 *)&param_3->field_0xc;
    pTVar6 = Audio::FMixerDevice::GetSubmixInstance(this,&TStack_58,(USoundSubmixBase *)param_2);
    pFVar8 = (FMixerSubmix *)0x0;
    pTVar7 = (pTVar6->WeakReferenceCount).ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar7->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        bVar9 = aVar2 == aVar5;
        if (bVar9) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar9);
      pTVar4 = (pTVar6->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
      (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        pFVar8 = pTVar6->Object;
        pTVar6->Object = (FMixerSubmix *)0x0;
      }
    }
    if (TStack_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(TStack_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TStack_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (TStack_58.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar8 != (FMixerSubmix *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      apcStack_48[0] = (code *)0x0;
      puStack_20 = FMemory::Malloc(0x20,8);
      puStack_20[1] = pFVar8;
      puStack_20[2] = pTVar7;
      *puStack_20 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffect'::`5'::<lambda_1>,0,1>
                     ::_vftable_;
      *(undefined4 *)(puStack_20 + 3) = uVar3;
      if (puStack_20 != (undefined8 *)&DAT_fffffffffffffff8) {
        apcStack_48[0] =
             UE::Core::Private::Function::
             TFunctionRefCaller<`Audio::FMixerDevice::RemoveSubmixEffect'::__l5::<lambda_1>,void>::
             Call;
      }
      Audio::FMixerDevice::AudioRenderThreadCommand
                (this,(TFunction<void___cdecl(void)> *)apcStack_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  return;
}

// RemoveSubmixEffectPresetAtIndex @ 14651e080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex
          (UObject *param_1,USoundSubmix *param_2,int param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  FMixerDevice *this;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMixerSubmix *pFVar7;
  bool bVar8;
  TWeakPtr<Audio::FMixerSubmix,1> TStack_58;
  code *apcStack_48 [5];
  undefined8 *puStack_20;
  
  this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (this != (FMixerDevice *)0x0) {
    pTVar5 = Audio::FMixerDevice::GetSubmixInstance(this,&TStack_58,(USoundSubmixBase *)param_2);
    pFVar7 = (FMixerSubmix *)0x0;
    pTVar6 = (pTVar5->WeakReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar6->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar4 = pTVar6->SharedReferenceCount;
        bVar8 = aVar2 == aVar4;
        if (bVar8) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar8);
      pTVar3 = (pTVar5->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
      (pTVar5->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        pFVar7 = pTVar5->Object;
        pTVar5->Object = (FMixerSubmix *)0x0;
      }
    }
    if (TStack_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(TStack_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TStack_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (TStack_58.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar7 != (FMixerSubmix *)0x0) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      apcStack_48[0] = (code *)0x0;
      puStack_20 = FMemory::Malloc(0x20,8);
      puStack_20[1] = pFVar7;
      puStack_20[2] = pTVar6;
      *puStack_20 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::`5'::<lambda_1>,0,1>
                     ::_vftable_;
      *(int *)(puStack_20 + 3) = param_3;
      if (puStack_20 != (undefined8 *)&DAT_fffffffffffffff8) {
        apcStack_48[0] =
             UE::Core::Private::Function::
             TFunctionRefCaller<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::__l5::<lambda_1>,void>
             ::Call;
      }
      Audio::FMixerDevice::AudioRenderThreadCommand
                (this,(TFunction<void___cdecl(void)> *)apcStack_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return;
}

// ReplaceSoundEffectSubmix @ 14651e490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix
          (UObject *param_1,USoundSubmix *param_2,int param_3,USoundEffectSubmixPreset *param_4)

{
  code *pcVar1;
  FSoundEffectSubmix *this;
  bool bVar2;
  FMixerDevice *this_00;
  TSharedPtr<FSoundEffectSubmix,1> TStack_48;
  TSharedPtr<FSoundEffectSubmix,1> TStack_38;
  FSoundEffectSubmixInitData FStack_28;
  
  if (((param_4 != (USoundEffectSubmixPreset *)0x0) && (param_2 != (USoundSubmix *)0x0)) &&
     (this_00 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1),
     this_00 != (FMixerDevice *)0x0)) {
    FStack_28.SampleRate = (float)*(int *)&this_00->field_0x84;
    FStack_28.DeviceID = 0xffffffff;
    FStack_28.PresetSettings = (void *)0x0;
    FStack_28.ParentPresetUniqueId = 0xffffffff;
    USoundEffectPreset::CreateInstance<FSoundEffectSubmixInitData,FSoundEffectSubmix>
              (&TStack_48,&FStack_28,(USoundEffectPreset *)param_4);
    this = TStack_48.Object;
    if ((TStack_48.Object == (FSoundEffectSubmix *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FSoundEffectBase::SetEnabled((FSoundEffectBase *)this,true);
    TStack_38.Object = TStack_48.Object;
    TStack_38.SharedReferenceCount.ReferenceController =
         TStack_48.SharedReferenceCount.ReferenceController;
    if (TStack_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    Audio::FMixerDevice::ReplaceSoundEffectSubmix(this_00,param_2,param_3,&TStack_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ReplaceSubmixEffect @ 14651e4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::ReplaceSubmixEffect
          (UObject *param_1,USoundSubmix *param_2,int param_3,USoundEffectSubmixPreset *param_4)

{
  code *pcVar1;
  FSoundEffectSubmix *this;
  bool bVar2;
  FMixerDevice *this_00;
  TSharedPtr<FSoundEffectSubmix,1> local_48;
  TSharedPtr<FSoundEffectSubmix,1> local_38;
  FSoundEffectSubmixInitData local_28;
  
  if (((param_4 != (USoundEffectSubmixPreset *)0x0) && (param_2 != (USoundSubmix *)0x0)) &&
     (this_00 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1),
     this_00 != (FMixerDevice *)0x0)) {
    local_28.SampleRate = (float)*(int *)&this_00->field_0x84;
    local_28.DeviceID = 0xffffffff;
    local_28.PresetSettings = (void *)0x0;
    local_28.ParentPresetUniqueId = 0xffffffff;
    USoundEffectPreset::CreateInstance<FSoundEffectSubmixInitData,FSoundEffectSubmix>
              (&local_48,&local_28,(USoundEffectPreset *)param_4);
    this = local_48.Object;
    if ((local_48.Object == (FSoundEffectSubmix *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FSoundEffectBase::SetEnabled((FSoundEffectBase *)this,true);
    local_38.Object = local_48.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    Audio::FMixerDevice::ReplaceSoundEffectSubmix(this_00,param_2,param_3,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ResumeRecordingOutput @ 14651ebf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::ResumeRecordingOutput(UObject *param_1,USoundSubmix *param_2)

{
  FMixerDevice *pFVar1;
  
  pFVar1 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (pFVar1 != (FMixerDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014651ec18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x248))
              (pFVar1,param_2,*(code **)(*(longlong *)pFVar1 + 0x248));
    return;
  }
  if (1 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    return;
  }
  return;
}

// SetBypassSourceEffectChainEntry @ 14651f040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry
          (UObject *param_1,USoundEffectSourcePresetChain *param_2,int param_3,bool param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FMixerDevice *pFVar5;
  uint uVar6;
  TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> local_28;
  
  if (param_2 == (USoundEffectSourcePresetChain *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else {
    pFVar5 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
    if (pFVar5 != (FMixerDevice *)0x0) {
      uVar1 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      cVar3 = (**(code **)(*(longlong *)pFVar5 + 0x128))(pFVar5,uVar1,&local_28);
      if (cVar3 == '\0') {
        TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>::operator=
                  (&local_28,&param_2->Chain);
      }
      if ((-1 < param_3) && (param_3 < local_28.ArrayNum)) {
        uVar6 = 0;
        if (param_3 < local_28.ArrayNum) {
          uVar6 = (uint)~param_3 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)(local_28.AllocatorInstance.Data + (longlong)param_3 * 0x10 + 8) =
             *(uint *)(local_28.AllocatorInstance.Data + (longlong)param_3 * 0x10 + 8) & 0xfffffffe;
        *(uint *)(local_28.AllocatorInstance.Data + (longlong)param_3 * 0x10 + 8) =
             *(uint *)(local_28.AllocatorInstance.Data + (longlong)param_3 * 0x10 + 8) |
             (uint)param_4;
        (**(code **)(*(longlong *)pFVar5 + 0x120))
                  (pFVar5,uVar1,&local_28,param_2->bPlayEffectChainTails);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetSubmixEffectChainOverride @ 146521c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride
          (UObject *param_1,USoundSubmix *param_2,
          TArray<USoundEffectSubmixPreset_*,TSizedDefaultAllocator<32>_> *param_3,float param_4)

{
  int iVar1;
  USoundEffectPreset *this;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMixerDevice *pFVar7;
  FSoundEffectSubmix *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [16];
  USoundEffectPreset *local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  TSharedPtr<FSoundEffectSubmix,1> local_80;
  TSharedPtr<FSoundEffectBase,1> local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  void *pvStack_58;
  float local_50;
  uint uStack_4c;
  
  pFVar7 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (pFVar7 != (FMixerDevice *)0x0) {
    pFVar9 = (param_3->AllocatorInstance).Data;
    iVar1 = param_3->ArrayNum;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = 0;
    pFVar3 = pFVar9 + (longlong)iVar1 * 8;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<USoundEffectSubmixPreset_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar9 == pFVar3) break;
      this = *(USoundEffectPreset **)pFVar9;
      if (this != (USoundEffectPreset *)0x0) {
        local_60 = *(undefined4 *)&pFVar7->field_0xa0;
        uStack_4c = *(uint *)((longlong)&this->_padding_ + 4);
        local_50 = (float)*(int *)&pFVar7->field_0x84;
        pvStack_58 = (void *)0x0;
        pFVar8 = (FSoundEffectSubmix *)(**(code **)(this->_padding_ + 0x2d0))(this);
        local_98 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar8->field_0x4c,(FObjectPtr)&local_98);
        lVar2 = *(longlong *)pFVar8;
        *(uint *)&pFVar8->field_0x54 = uStack_4c;
        *(ulonglong *)&(pFVar8->InitData_Internal).DeviceID = CONCAT44(uStack_5c,local_60);
        (pFVar8->InitData_Internal).PresetSettings = pvStack_58;
        (pFVar8->InitData_Internal).SampleRate = local_50;
        (pFVar8->InitData_Internal).ParentPresetUniqueId = uStack_4c;
        (**(code **)(lVar2 + 0x48))(pFVar8,&local_60);
        local_80.Object = pFVar8;
        local_70.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
        if (local_70.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
        {
          local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)0x1;
          (local_70.SharedReferenceCount.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_VFSoundEffectSubmix__U__DefaultDeleter_VFSoundEffectSubmix___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          (local_70.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1
          ;
          local_70.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar8;
          LOCK();
          (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_70.Object = (FSoundEffectBase *)local_80.Object;
        local_80.SharedReferenceCount.ReferenceController =
             local_70.SharedReferenceCount.ReferenceController;
        USoundEffectPreset::AddEffectInstance(this,&local_70);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.SharedReferenceCount.ReferenceController);
        if ((local_80.Object == (FSoundEffectSubmix *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FSoundEffectBase::SetEnabled((FSoundEffectBase *)local_80.Object,true);
        if (((local_90.Data <= &local_80) &&
            (&local_80 <
             (TSharedPtr<FSoundEffectSubmix,1> *)(local_90.Data + (longlong)local_88._4_4_ * 0x10)))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = (int)local_88;
        if ((int)local_88 == local_88._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_90,(int *)((longlong)&local_88 + 4));
        }
        local_88 = CONCAT44(local_88._4_4_,iVar6 + 1);
        *(FSoundEffectSubmix **)&local_90.Data[(longlong)iVar6 * 0x10].field_0x0 = local_80.Object;
        *(TReferenceControllerBase<1> **)(local_90.Data + (longlong)iVar6 * 0x10 + 8) =
             local_80.SharedReferenceCount.ReferenceController;
        if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.SharedReferenceCount.ReferenceController);
      }
      pFVar9 = pFVar9 + 8;
    }
    if (0 < (int)local_88) {
      (**(code **)(*(longlong *)pFVar7 + 0x1a0))(pFVar7,param_2,&local_90,param_4);
    }
    DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
              ((TSharedPtr<FSoundEffectSubmix,1> *)local_90.Data,(int)local_88);
    if ((TSharedPtr<FSoundEffectSubmix,1> *)local_90.Data != (TSharedPtr<FSoundEffectSubmix,1> *)0x0
       ) {
      FMemory::Free(local_90.Data);
    }
  }
  pFVar3 = (param_3->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// StartAnalyzingOutput @ 1465234f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::StartAnalyzingOutput
          (UObject *param_1,USoundSubmix *param_2,EFFTSize param_3,
          EFFTPeakInterpolationMethod param_4,EFFTWindowType param_5,float param_6,
          EAudioSpectrumType param_7)

{
  FMixerDevice *pFVar1;
  FSoundSpectrumAnalyzerSettings local_18 [2];
  
  pFVar1 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (pFVar1 == (FMixerDevice *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    local_18[0] = USoundSubmix::GetSpectrumAnalyzerSettings(param_3,param_4,param_5,param_6,param_7)
    ;
    (**(code **)(*(longlong *)pFVar1 + 0x1c0))(pFVar1,param_2,local_18);
  }
  return;
}

// StartAudioBus @ 146523aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAudioMixerBlueprintLibrary::StartAudioBus(UObject *param_1,UAudioBus *param_2)

{
  EAudioBusChannels EVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FMixerDevice *this;
  UAudioBusSubsystem *this_00;
  FString *pFVar5;
  FString local_18;
  
  if (param_2 == (UAudioBus *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else {
    this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
    if (this == (FMixerDevice *)0x0) {
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        return;
      }
    }
    else {
      uVar2 = *(uint *)((longlong)&param_2->_padding_ + 4);
      EVar1 = param_2->AudioBusChannels;
      this_00 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>((FAudioDevice *)this);
      if (this_00 == (UAudioBusSubsystem *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioBusSubsystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBlueprintLibrary.cpp"
                           ,0x28c,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar5 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)param_2,&local_18,(UObject *)0x0);
      UAudioBusSubsystem::StartAudioBus
                (this_00,(FAudioBusKey)((ulonglong)uVar2 | 0xffffffff00000000),pFVar5,EVar1 + 1,
                 false);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// StartRecordingOutput @ 1465247a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::StartRecordingOutput
          (UObject *param_1,float param_2,USoundSubmix *param_3)

{
  FMixerDevice *pFVar1;
  
  pFVar1 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (pFVar1 != (FMixerDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001465247d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x138))
              (pFVar1,param_3,param_2,*(code **)(*(longlong *)pFVar1 + 0x138));
    return;
  }
  if (1 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  return;
}

// StaticRegisterNativesUAudioMixerBlueprintLibrary @ 146524d80

void __cdecl UAudioMixerBlueprintLibrary::StaticRegisterNativesUAudioMixerBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x28;
  local_18.DataPtr = Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopAnalyzingOutput @ 146525060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::StopAnalyzingOutput(UObject *param_1,USoundSubmix *param_2)

{
  FMixerDevice *pFVar1;
  
  pFVar1 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (pFVar1 != (FMixerDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146525088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x1c8))
              (pFVar1,param_2,*(code **)(*(longlong *)pFVar1 + 0x1c8));
    return;
  }
  if (1 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    return;
  }
  return;
}

// StopAudioBus @ 146525340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAudioMixerBlueprintLibrary::StopAudioBus(UObject *param_1,UAudioBus *param_2)

{
  uint uVar1;
  code *pcVar2;
  FAudioBusKey FVar3;
  bool bVar4;
  FMixerDevice *this;
  UAudioBusSubsystem *this_00;
  
  if (param_2 == (UAudioBus *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else {
    this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
    if (this != (FMixerDevice *)0x0) {
      uVar1 = *(uint *)((longlong)&param_2->_padding_ + 4);
      this_00 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>((FAudioDevice *)this);
      if (this_00 == (UAudioBusSubsystem *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioBusSubsystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBlueprintLibrary.cpp"
                           ,0x2a0,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FVar3.InstanceId = 0xffffffff;
      FVar3.ObjectId = uVar1;
      UAudioBusSubsystem::StopAudioBus(this_00,FVar3);
      return;
    }
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  return;
}

// StopRecordingOutput @ 1465262c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

USoundWave * __cdecl
UAudioMixerBlueprintLibrary::StopRecordingOutput
          (UObject *param_1,EAudioRecordingExportType param_2,FString *param_3,FString *param_4,
          USoundSubmix *param_5,USoundWave *param_6)

{
  FSoundWavePCMWriter *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TUniquePtr<Audio::FAudioRecordingData,TDefaultDelete<Audio::FAudioRecordingData>_> TVar8;
  TUniquePtr<Audio::FAudioRecordingData,TDefaultDelete<Audio::FAudioRecordingData>_> TVar9;
  bool bVar10;
  uint uVar11;
  FMixerDevice *pFVar12;
  undefined8 *puVar13;
  FAudioRecordingData *pFVar14;
  USoundWave *pUVar15;
  uint uVar16;
  FAudioRecordingData *pFVar17;
  FAudioRecordingData *pFVar18;
  float *pfVar19;
  ForAnyElementType local_e8;
  int local_e0 [3];
  int local_d4;
  int local_d0;
  int local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  TSampleBuffer<short> local_b8;
  code *local_88 [2];
  undefined **local_78;
  USoundSubmix *local_70;
  undefined8 local_60;
  
  if ((RecordingData.Ptr != (FAudioRecordingData *)0x0) && (2 < (byte)LogAudioMixer._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  pFVar12 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
  if (pFVar12 == (FMixerDevice *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    puVar13 = (undefined8 *)
              (**(code **)(*(longlong *)pFVar12 + 0x140))(pFVar12,param_5,&local_c0,&local_bc);
    if (*(int *)(puVar13 + 1) == 0) {
      if (2 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    else {
      pFVar14 = ::operator_new(0xa0);
      pFVar18 = (FAudioRecordingData *)0x0;
      pFVar17 = pFVar18;
      if (pFVar14 != (FAudioRecordingData *)0x0) {
        *(undefined8 *)&(pFVar14->InputBuffer).field_0x24 = 0;
        *(undefined8 *)
         ((longlong)&(pFVar14->Writer).CurrentBuffer.RawPCMData.AllocatorInstance.Data + 4) = 0;
        *(undefined8 *)&(pFVar14->Writer).CurrentBuffer.RawPCMData.ArrayMax = 0;
        (pFVar14->Writer).CurrentBuffer.NumFrames = 0;
        (pFVar14->Writer).CurrentBuffer.NumChannels = 0;
        (pFVar14->Writer).CurrentBuffer.SampleRate = 0;
        (pFVar14->Writer).CurrentBuffer.SampleDuration = 0.0;
        *(undefined8 *)&(pFVar14->Writer).CurrentBuffer.field_0x24 = 0;
        *(undefined8 *)((longlong)&(pFVar14->Writer).CurrentSoundWave + 4) = 0;
        *(undefined8 *)&(pFVar14->Writer)._padding_ = 0;
        *(undefined8 *)
         ((longlong)&(pFVar14->Writer).AbsoluteFilePath.Data.AllocatorInstance.Data + 4) = 0;
        *(undefined8 *)&(pFVar14->Writer).AbsoluteFilePath.Data.ArrayMax = 0;
        *(undefined8 *)&(pFVar14->Writer).field_0x4c = 0;
        *(undefined8 *)((longlong)&(pFVar14->Writer).CurrentOperation.Ptr + 4) = 0;
        *(undefined8 *)((longlong)&(pFVar14->Writer).SerializedWavData.AllocatorInstance.Data + 4) =
             0;
        *(undefined8 *)&(pFVar14->Writer).SerializedWavData.ArrayMax = 0;
        *(undefined8 *)&(pFVar14->Writer).ChunkSize = 0;
        *(undefined4 *)((longlong)&(pFVar14->Writer).CurrentPackage + 4) = 0;
        (pFVar14->InputBuffer).RawPCMData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar14->InputBuffer).RawPCMData.ArrayNum = 0;
        (pFVar14->InputBuffer).RawPCMData.ArrayMax = 0;
        (pFVar14->InputBuffer).NumSamples = 0;
        (pFVar14->InputBuffer).NumFrames = 0;
        (pFVar14->InputBuffer).NumChannels = 0;
        (pFVar14->InputBuffer).SampleRate = 0;
        (pFVar14->InputBuffer).SampleDuration = 0.0;
        Audio::FSoundWavePCMWriter::FSoundWavePCMWriter(&pFVar14->Writer,0x2000);
        pFVar17 = pFVar14;
      }
      TVar8.Ptr = RecordingData.Ptr;
      TVar9.Ptr = RecordingData.Ptr;
      if ((RecordingData.Ptr != pFVar17) &&
         (TVar9.Ptr = pFVar17, RecordingData.Ptr != (FAudioRecordingData *)0x0)) {
        pFVar1 = &(RecordingData.Ptr)->Writer;
        RecordingData.Ptr = pFVar17;
        Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(pFVar1);
        pFVar2 = ((TVar8.Ptr)->InputBuffer).RawPCMData.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(TVar8.Ptr,0xa0);
        TVar9 = RecordingData;
      }
      RecordingData.Ptr = TVar9.Ptr;
      local_d0 = (int)local_c0;
      local_e0[2] = *(int *)(puVar13 + 1);
      pfVar19 = (float *)*puVar13;
      local_b8.RawPCMData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.RawPCMData.ArrayMax = 0;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0[1] = 0;
      local_d4 = local_e0[2] / local_d0;
      local_cc = (int)local_bc;
      local_c8 = (float)local_d4 / (float)local_cc;
      if (local_e0[2] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_e0[2]);
      }
      local_e0[0] = 0;
      if (0 < local_e0[2]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_e0[2],&local_e8,0,local_e0 + 1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_e0[2],&local_e8,local_e0,local_e0 + 1);
      fVar7 = __real_46fffe00;
      fVar6 = __real_bf800000;
      fVar5 = __real_3f800000;
      pFVar17 = pFVar18;
      if (0 < local_e0[2]) {
        do {
          uVar16 = (uint)pFVar18;
          fVar4 = *pfVar19;
          if (fVar5 <= *pfVar19) {
            fVar4 = fVar5;
          }
          if (fVar4 <= fVar6) {
            fVar4 = fVar6;
          }
          uVar11 = 0;
          if ((int)uVar16 < local_e0[0]) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            pUVar15 = (USoundWave *)(*pcVar3)();
            return pUVar15;
          }
          pFVar18 = (FAudioRecordingData *)(ulonglong)(uVar16 + 1);
          pfVar19 = pfVar19 + 1;
          *(short *)(local_e8.Data + (longlong)pFVar17) = (short)(int)(fVar4 * fVar7);
          pFVar17 = (FAudioRecordingData *)
                    ((longlong)&(pFVar17->InputBuffer).RawPCMData.AllocatorInstance.Data + 2);
        } while ((int)(uVar16 + 1) < local_e0[2]);
      }
      local_b8.NumFrames = local_d4;
      local_b8.NumChannels = local_d0;
      local_b8.SampleRate = local_cc;
      local_b8.SampleDuration = local_c8;
      local_b8.NumSamples = local_e0[2];
      if (local_e0[2] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_e0[2]);
      }
      local_b8.RawPCMData.ArrayNum = 0;
      if (local_b8.RawPCMData.ArrayMax < local_e0[2]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_e0[2],(ForAnyElementType *)&local_b8,0,&local_b8.RawPCMData.ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b8.NumSamples,(ForAnyElementType *)&local_b8,
                 &local_b8.RawPCMData.ArrayNum,&local_b8.RawPCMData.ArrayMax);
      memcpy(local_b8.RawPCMData.AllocatorInstance.Data,local_e8.Data,
             (longlong)local_b8.NumSamples * 2);
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      Audio::TSampleBuffer<short>::operator=(&(RecordingData.Ptr)->InputBuffer,&local_b8);
      if (local_b8.RawPCMData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.RawPCMData.AllocatorInstance.Data);
      }
      if (param_2 == SoundWave) {
        pUVar15 = Audio::FSoundWavePCMWriter::SynchronouslyWriteSoundWave
                            (&(RecordingData.Ptr)->Writer,&(RecordingData.Ptr)->InputBuffer,param_3,
                             param_4);
        TVar8 = RecordingData;
        if (RecordingData.Ptr != (FAudioRecordingData *)0x0) {
          pFVar1 = &(RecordingData.Ptr)->Writer;
          RecordingData.Ptr = (FAudioRecordingData *)0x0;
          Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(pFVar1);
          pFVar2 = ((TVar8.Ptr)->InputBuffer).RawPCMData.AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          ::operator_delete(TVar8.Ptr,0xa0);
        }
        pFVar2 = (param_4->Data).AllocatorInstance.Data;
        if (pFVar2 == (FScriptContainerElement *)0x0) {
          return pUVar15;
        }
        FMemory::Free(pFVar2);
        return pUVar15;
      }
      if (param_2 == WavFile) {
        local_78 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::StopRecordingOutput'::`51'::<lambda_1>,0,0>
                    ::_vftable_;
        local_70 = param_5;
        local_88[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UAudioMixerBlueprintLibrary::StopRecordingOutput'::__l51::<lambda_1>,void>
                      ::Call;
        local_60 = 0;
        Audio::FSoundWavePCMWriter::BeginWriteToWavFile
                  (&(RecordingData.Ptr)->Writer,&(RecordingData.Ptr)->InputBuffer,param_3,param_4,
                   (TFunction<void___cdecl(void)> *)local_88);
      }
    }
  }
  pFVar2 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return (USoundWave *)0x0;
}

// SwapAudioOutputDevice @ 146527850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::SwapAudioOutputDevice
          (UObject *param_1,FString *param_2,FOnCompletedDeviceSwap *param_3)

{
  IAudioMixerPlatformInterface *pIVar1;
  undefined1 auVar2 [8];
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  FMixerDevice *pFVar6;
  FAudioPlatformDeviceInfo *pFVar7;
  longlong lVar8;
  int iVar9;
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_110;
  undefined8 local_108;
  undefined8 local_100;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  undefined8 local_f0;
  void *local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  FReadAccessScope local_b0;
  code *local_98 [5];
  undefined8 *local_70;
  FAudioOutputDeviceInfo local_68;
  
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_3);
  if (bVar3) {
    bVar3 = IsInAudioThread();
    if (bVar3) {
      pFVar6 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
      if (pFVar6 == (FMixerDevice *)0x0) {
        return;
      }
      pIVar1 = pFVar6->AudioMixerPlatform;
      if (pIVar1 == (IAudioMixerPlatformInterface *)0x0) {
        return;
      }
      cVar4 = (**(code **)(pIVar1->_padding_ + 0xc0))(pIVar1,param_2,0);
      pFVar7 = (FAudioPlatformDeviceInfo *)(**(code **)(pIVar1->_padding_ + 200))(pIVar1,&local_f8);
      FAudioOutputDeviceInfo::FAudioOutputDeviceInfo(&local_68,pFVar7);
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      if (local_f8.AccessDetector.State != (atomic<unsigned___int64>)0x0) {
        FMemory::Free((void *)local_f8.AccessDetector.State);
      }
      local_128 = (undefined1  [8])0x0;
      local_120 = (undefined1  [8])0x0;
      local_118 = (undefined1  [8])0x0;
      iVar9 = local_68.DeviceId.Data.ArrayNum + -1;
      if (local_68.DeviceId.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      local_110.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_108._0_1_ = 2;
      ::FString::AssignRange
                ((FString *)local_128,(wchar_t *)local_68.DeviceId.Data.AllocatorInstance.Data,iVar9
                );
      ::FString::operator=((FString *)local_118,param_2);
      local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_108 = CONCAT71(local_108._1_7_,cVar4 != '\0');
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_b0);
      local_f0 = *(undefined8 *)&param_3->field_0x8;
      local_e8 = *(void **)&param_3->field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_b0);
      auVar2 = local_128;
      lVar8 = (longlong)(int)local_120._0_4_;
      local_e0.Data = (FScriptContainerElement *)0x0;
      local_d8 = CONCAT44(local_d8._4_4_,local_120._0_4_);
      if (local_120._0_4_ == 0) {
        local_d8 = (ulonglong)local_120 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_120._0_4_,0,&local_e0,local_120._0_4_,(int *)((longlong)&local_d8 + 4))
        ;
        memcpy(local_e0.Data,(void *)auVar2,lVar8 * 2);
      }
      auVar2 = local_118;
      lVar8 = (longlong)(int)local_110.AccessDetector.State._0_4_;
      local_d0.Data = (FScriptContainerElement *)0x0;
      local_c8 = (void *)CONCAT44(local_c8._4_4_,local_110.AccessDetector.State._0_4_);
      if (local_110.AccessDetector.State._0_4_ == 0) {
        local_c8 = (void *)((ulonglong)local_110.AccessDetector.State & 0xffffffff);
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_110.AccessDetector.State._0_4_,0,&local_d0,
                   local_110.AccessDetector.State._0_4_,(int *)((longlong)&local_c8 + 4));
        memcpy(local_d0.Data,(void *)auVar2,lVar8 * 2);
      }
      local_c0 = (undefined1)local_108;
      local_98[0] = (code *)0x0;
      puVar5 = FMemory::Malloc(0x48,8);
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::`14'::<lambda_2>,1,1>
                 ::_vftable_;
      puVar5[3] = 0;
      local_70 = puVar5;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_f8,&local_b0);
      puVar5[2] = local_f0;
      puVar5[3] = local_e8;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_b0);
      puVar5[4] = 0;
      puVar5[4] = local_e0.Data;
      local_e0.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(puVar5 + 5) = (undefined4)local_d8;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = local_d8._4_4_;
      local_d8 = 0;
      puVar5[6] = 0;
      puVar5[6] = local_d0.Data;
      local_d0.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(puVar5 + 7) = (undefined4)local_c8;
      *(undefined4 *)((longlong)puVar5 + 0x3c) = local_c8._4_4_;
      local_c8 = (void *)0x0;
      *(undefined1 *)(puVar5 + 8) = local_c0;
      if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l14::<lambda_2>,void>
                      ::Call;
      }
      FAudioThread::RunCommandOnGameThread
                ((TUniqueFunction<void___cdecl(void)> *)local_98,(TStatId)0x154f11430);
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      if (local_e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
      if (local_118 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_118);
      }
      if (local_128 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_128);
      }
      if (local_68.OutputChannelArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.OutputChannelArray.AllocatorInstance.Data);
      }
      if (local_68.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.DeviceId.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_128 = (undefined1  [8])param_1;
      ::FString::FString((FString *)local_120,param_2);
      local_110.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_108 = 0;
      local_100 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_b0);
      local_108 = *(undefined8 *)&param_3->field_0x8;
      local_100 = *(undefined8 *)&param_3->field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_b0);
      local_98[0] = (code *)0x0;
      puVar5 = FMemory::Malloc(0x38,8);
      *puVar5 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::`8'::<lambda_1>,1,1>
                 ::_vftable_;
      puVar5[1] = local_128;
      local_70 = puVar5;
      ::FString::FString((FString *)(puVar5 + 2),(FString *)local_120);
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_110,&local_b0);
      puVar5[5] = local_108;
      puVar5[6] = local_100;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_b0);
      if (puVar5 + 1 != (undefined8 *)0x0) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l8::<lambda_1>,void>
                      ::Call;
      }
      FAudioThread::RunCommandOnAudioThread
                ((TUniqueFunction<void___cdecl(void)> *)local_98,(TStatId)0x154f11430);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_110.AccessDetector);
      local_68.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_120;
    }
    if (local_68.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Name.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TrimAudioCache @ 146528370

float __cdecl UAudioMixerBlueprintLibrary::TrimAudioCache(float param_1)

{
  FStreamingManagerCollection *this;
  IAudioStreamingManager *pIVar1;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  
  this = IStreamingManager::Get();
  pIVar1 = FStreamingManagerCollection::GetAudioStreamingManager(this);
  fVar4 = param_1 * __real_49800000;
  lVar3 = 0;
  if ((__real_5f000000 <= fVar4) && (fVar4 = fVar4 - __real_5f000000, fVar4 < __real_5f000000)) {
    lVar3 = -0x8000000000000000;
  }
  uVar2 = (**(code **)(*(longlong *)pIVar1 + 0xb8))(pIVar1,(longlong)fVar4 + lVar3);
  return (float)((double)uVar2 * __real_3eb0000000000000);
}

// UnregisterAudioBusFromSubmix @ 146529320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix
          (UObject *param_1,USoundSubmix *param_2,UAudioBus *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  atomic<int> aVar5;
  FMixerDevice *this;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar6;
  FStaticBasicLogRecord *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FMixerSubmix *this_00;
  FAudioBusKey local_res10;
  TWeakPtr<Audio::FMixerSubmix,1> local_58;
  code *local_48 [5];
  undefined8 *local_20;
  
  if (param_2 == (USoundSubmix *)0x0) {
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return;
    }
    pFVar7 = &::LOG_Static;
  }
  else if (param_3 == (UAudioBus *)0x0) {
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return;
    }
    pFVar7 = &::LOG_Static;
  }
  else {
    bVar4 = IsInAudioThread();
    if (!bVar4) {
      local_48[0] = (code *)0x0;
      local_20 = FMemory::Malloc(0x20,8);
      *local_20 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix'::`47'::<lambda_1>,1,1>
                   ::_vftable_;
      local_20[1] = param_1;
      local_20[2] = param_2;
      local_20[3] = param_3;
      if (local_20 + 1 != (undefined8 *)0x0) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix'::__l47::<lambda_1>,void>
                      ::Call;
      }
      FAudioThread::RunCommandOnAudioThread
                ((TUniqueFunction<void___cdecl(void)> *)local_48,(TStatId)0x154f11430);
      return;
    }
    this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(param_1);
    if (this != (FMixerDevice *)0x0) {
      pTVar6 = Audio::FMixerDevice::GetSubmixInstance(this,&local_58,(USoundSubmixBase *)param_2);
      this_00 = (FMixerSubmix *)0x0;
      pTVar8 = (pTVar6->WeakReferenceCount).ReferenceController;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = pTVar8->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            pTVar8 = (TReferenceControllerBase<1> *)0x0;
            break;
          }
          LOCK();
          aVar5 = pTVar8->SharedReferenceCount;
          bVar4 = aVar2 == aVar5;
          if (bVar4) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar5 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar5;
        } while (!bVar4);
        pTVar3 = (pTVar6->WeakReferenceCount).ReferenceController;
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
        (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          this_00 = pTVar6->Object;
          pTVar6->Object = (FMixerSubmix *)0x0;
        }
      }
      if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_58.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (this_00 == (FMixerSubmix *)0x0) {
        if (1 < (byte)LogAudioMixer._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
      }
      else {
        local_res10.ObjectId = *(uint *)((longlong)&param_3->_padding_ + 4);
        local_res10.InstanceId = 0xffffffff;
        Audio::FMixerSubmix::UnregisterAudioBus(this_00,&local_res10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      return;
    }
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return;
    }
    pFVar7 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&LogAudioMixer);
  return;
}

// execAddMasterSubmixEffect @ 14652f120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execAddMasterSubmixEffect
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FProperty *pFVar2;
  code *pcVar3;
  USoundEffectPreset *pUVar4;
  bool bVar5;
  FMixerDevice *this;
  USoundEffectPreset *local_res10 [2];
  UObject *local_res20;
  TSharedPtr<FSoundEffectSubmix,1> local_78;
  FSoundEffectSubmixInitData local_68;
  code *local_48 [5];
  undefined8 *local_20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (USoundEffectPreset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (USoundEffectPreset *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res20);
    if (this != (FMixerDevice *)0x0) {
      local_68.DeviceID = *(uint *)&this->field_0xa0;
      local_68.ParentPresetUniqueId = *(uint *)((longlong)&pUVar4->_padding_ + 4);
      local_68.SampleRate = (float)*(int *)&this->field_0x84;
      local_68.PresetSettings = (void *)0x0;
      USoundEffectPreset::CreateInstance<FSoundEffectSubmixInitData,FSoundEffectSubmix>
                (&local_78,&local_68,pUVar4);
      if ((local_78.Object == (FSoundEffectSubmix *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FSoundEffectBase::SetEnabled((FSoundEffectBase *)local_78.Object,true);
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        paVar1 = &(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          *paVar1 = (atomic<int>)((int)*paVar1 + 1);
          UNLOCK();
        }
      }
      local_48[0] = (code *)0x0;
      local_20 = FMemory::Malloc(0x20,8);
      local_20[1] = this;
      local_20[2] = local_78.Object;
      *local_20 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FMixerDevice::AddMainSubmixEffect'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      local_20[3] = local_78.SharedReferenceCount.ReferenceController;
      if (local_20 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FMixerDevice::AddMainSubmixEffect'::__l2::<lambda_1>,void>
                      ::Call;
      }
      Audio::FMixerDevice::AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// execAddSourceEffectToPresetChain @ 14652f350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execAddSourceEffectToPresetChain
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined4 uVar2;
  FProperty *pFVar3;
  FSourceEffectChainEntry *pFVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FMixerDevice *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong local_res10;
  UObject *local_res20;
  ForAnyElementType local_58;
  undefined8 local_50;
  UObject *local_48;
  uint local_40;
  UObject *local_38;
  uint local_30;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_30 = local_30 & 0xfffffffe;
  local_38 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = local_38;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38);
  }
  lVar6 = local_res10;
  local_40 = local_40 & 0xfffffffe | local_30 & 1;
  if (local_res10 == 0) {
    if ((byte)LogAudioMixer._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    return;
  }
  pFVar10 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res20);
  if (pFVar10 == (FMixerDevice *)0x0) {
    return;
  }
  uVar2 = *(undefined4 *)(lVar6 + 0xc);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  cVar7 = (**(code **)(*(longlong *)pFVar10 + 0x128))(pFVar10,uVar2,&local_58);
  if ((cVar7 == '\0') && (&local_58 != (ForAnyElementType *)(lVar6 + 0x28))) {
    iVar9 = *(int *)(lVar6 + 0x30);
    pFVar4 = (FSourceEffectChainEntry *)((ForAnyElementType *)(lVar6 + 0x28))->Data;
    local_50 = CONCAT44(local_50._4_4_,iVar9);
    if ((iVar9 == 0) && (local_50._4_4_ == 0)) {
      local_50 = 0;
      local_50._0_4_ = 0;
      goto LAB_14652f534;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar9,local_50._4_4_,&local_58,iVar9,(int *)((longlong)&local_50 + 4));
    ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>(local_58.Data,pFVar4,iVar9);
  }
LAB_14652f534:
  iVar9 = (int)local_50;
  if ((local_58.Data <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < local_58.Data + (longlong)local_50._4_4_ * 0x10)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = (int)local_50;
  }
  if (iVar9 == local_50._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  pFVar11 = local_58.Data + (longlong)iVar9 * 0x10;
  local_50 = CONCAT44(local_50._4_4_,iVar9 + 1);
  *(UObject **)pFVar11 = local_48;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_48);
  }
  *(uint *)(pFVar11 + 8) = *(uint *)(pFVar11 + 8) ^ (*(uint *)(pFVar11 + 8) ^ local_40) & 1;
  (**(code **)(*(longlong *)pFVar10 + 0x120))(pFVar10,uVar2,&local_58,*(byte *)(lVar6 + 0x38) & 1);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// execAddSubmixEffect @ 14652f650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execAddSubmixEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  USoundEffectPreset *pUVar3;
  USoundSubmix *pUVar4;
  FSoundEffectSubmix *this;
  bool bVar5;
  int iVar6;
  FMixerDevice *this_00;
  USoundEffectPreset *local_res10;
  USoundSubmix *local_res18;
  UObject *local_res20;
  TSharedPtr<FSoundEffectSubmix,1> local_68;
  TSharedPtr<FSoundEffectSubmix,1> local_58;
  FSoundEffectSubmixInitData local_48;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (USoundSubmix *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (USoundEffectPreset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res18;
  pUVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != (USoundEffectPreset *)0x0) && (local_res18 != (USoundSubmix *)0x0)) {
    this_00 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res20);
    if (this_00 != (FMixerDevice *)0x0) {
      local_48.DeviceID = *(uint *)&this_00->field_0xa0;
      local_48.ParentPresetUniqueId = *(uint *)((longlong)&pUVar3->_padding_ + 4);
      local_48.SampleRate = (float)*(int *)&this_00->field_0x84;
      local_48.PresetSettings = (void *)0x0;
      USoundEffectPreset::CreateInstance<FSoundEffectSubmixInitData,FSoundEffectSubmix>
                (&local_68,&local_48,pUVar3);
      this = local_68.Object;
      if (local_68.Object == (FSoundEffectSubmix *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FSoundEffectBase::SetEnabled((FSoundEffectBase *)this,true);
      local_58.Object = local_68.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_68.SharedReferenceCount.ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar6 = Audio::FMixerDevice::AddSubmixEffect(this_00,pUVar4,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      *(int *)param_3 = iVar6;
      return;
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execClearMasterSubmixEffects @ 14652f860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execClearMasterSubmixEffects
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  FMixerDevice *local_20;
  undefined8 local_10;
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res10[0]);
  if (local_20 != (FMixerDevice *)0x0) {
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::ClearMainSubmixEffects'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::ClearMainSubmixEffects'::__l2::<lambda_1>,void>
                  ::Call;
    Audio::FMixerDevice::AudioRenderThreadCommand
              (local_20,(TFunction<void___cdecl(void)> *)local_38);
  }
  return;
}

// execClearSubmixEffectChainOverride @ 14652f910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execClearSubmixEffectChainOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  FMixerDevice *pFVar4;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  UObject *local_28 [4];
  
  local_28[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar3 = local_res20;
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_28[0]);
  if (pFVar4 != (FMixerDevice *)0x0) {
    (**(code **)(*(longlong *)pFVar4 + 0x1a8))(pFVar4,uVar3,uVar2);
  }
  return;
}

// execClearSubmixEffects @ 14652fa40

/* WARNING: Removing unreachable block (ram,0x00014652fd79) */
/* WARNING: Removing unreachable block (ram,0x00014652fd85) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execClearSubmixEffects(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  FProperty *pFVar4;
  USoundSubmixBase *pUVar5;
  uint uVar6;
  atomic<int> aVar7;
  FMixerDevice *this;
  undefined1 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  FMixerSubmix *pFVar10;
  uint *puVar11;
  FSharedReferencer<1> FVar12;
  FMixerSubmix *pFVar13;
  bool bVar14;
  FLLMScope local_res10 [5];
  USoundSubmixBase *local_res20;
  UObject *local_88;
  FMemScope local_80;
  TSharedPtr<Audio::FMixerSubmix,1> local_78;
  code *local_68 [2];
  undefined **local_58;
  FMixerSubmix *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  
  local_88 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20 = (USoundSubmixBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar5 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_88);
  if (this != (FMixerDevice *)0x0) {
    FLLMScope::FLLMScope(local_res10,AudioMixer,false,None,Default,true);
    FMemScope::FMemScope(&local_80,AudioMixer,true);
    Audio::FMixerDevice::GetRequiredSubmixInstance(this,&local_78,pUVar5);
    if (local_78.Object == (FMixerSubmix *)0x0) {
      if (pUVar5 == (USoundSubmixBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        pFVar10 = (FMixerSubmix *)0x0;
        FVar12.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        uVar3 = *(uint *)((longlong)&pUVar5->_padding_ + 4);
        if (DisableSubmixMutationLockCVar == 0) {
          lpCriticalSection = &(this->Submixes).MutationLock;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (*(int *)&(this->Submixes).SubmixMap.field_0x8 !=
              *(int *)&(this->Submixes).SubmixMap.field_0x34) {
            puVar8 = *(undefined1 **)&(this->Submixes).SubmixMap.field_0x40;
            if (puVar8 == (undefined1 *)0x0) {
              puVar8 = &(this->Submixes).SubmixMap.field_0x38;
            }
            uVar6 = *(uint *)(puVar8 + (ulonglong)
                                       (*(int *)&(this->Submixes).SubmixMap.field_0x48 - 1U & uVar3)
                                       * 4);
            if (uVar6 != 0xffffffff) {
              do {
                puVar11 = (uint *)((longlong)(int)uVar6 * 0x20 +
                                  *(longlong *)&(this->Submixes).SubmixMap);
                if (*puVar11 == uVar3) {
                  if (puVar11 != (uint *)0x0) {
                    pFVar10 = *(FMixerSubmix **)(puVar11 + 2);
                    FVar12.ReferenceController = *(TReferenceControllerBase<1> **)(puVar11 + 4);
                    if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      (FVar12.ReferenceController)->SharedReferenceCount =
                           (atomic<int>)
                           ((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    goto LAB_14652fc8b;
                  }
                  break;
                }
                uVar6 = puVar11[6];
              } while (uVar6 != 0xffffffff);
            }
          }
          FVar12.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar10 = (FMixerSubmix *)0x0;
LAB_14652fc8b:
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        else {
          if (*(int *)&(this->Submixes).SubmixMap.field_0x8 !=
              *(int *)&(this->Submixes).SubmixMap.field_0x34) {
            puVar8 = *(undefined1 **)&(this->Submixes).SubmixMap.field_0x40;
            if (puVar8 == (undefined1 *)0x0) {
              puVar8 = &(this->Submixes).SubmixMap.field_0x38;
            }
            uVar6 = *(uint *)(puVar8 + (ulonglong)
                                       (*(int *)&(this->Submixes).SubmixMap.field_0x48 - 1U & uVar3)
                                       * 4);
            if (uVar6 != 0xffffffff) {
              do {
                puVar11 = (uint *)((longlong)(int)uVar6 * 0x20 +
                                  *(longlong *)&(this->Submixes).SubmixMap);
                if (*puVar11 == uVar3) {
                  if (puVar11 != (uint *)0x0) {
                    pFVar10 = *(FMixerSubmix **)(puVar11 + 2);
                    FVar12.ReferenceController = *(TReferenceControllerBase<1> **)(puVar11 + 4);
                    if (FVar12.ReferenceController == (TReferenceControllerBase<1> *)0x0)
                    goto LAB_14652fc9d;
                    LOCK();
                    (FVar12.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
                    UNLOCK();
                    goto LAB_14652fc94;
                  }
                  break;
                }
                uVar6 = puVar11[6];
              } while (uVar6 != 0xffffffff);
            }
          }
          FVar12.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar10 = (FMixerSubmix *)0x0;
        }
LAB_14652fc94:
        if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar12.ReferenceController)->WeakReferenceCount =
               (atomic<int>)((int)(FVar12.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
LAB_14652fc9d:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar12.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
      }
    }
    else {
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      pFVar10 = local_78.Object;
      FVar12.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
    }
    FMemScope::~FMemScope(&local_80);
    FLLMScope::~FLLMScope(local_res10);
    pTVar9 = FVar12.ReferenceController;
    pFVar13 = (FMixerSubmix *)0x0;
    if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (FVar12.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar7 = (FVar12.ReferenceController)->SharedReferenceCount;
        bVar14 = aVar2 == aVar7;
        if (bVar14) {
          (FVar12.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar7;
      } while (!bVar14);
      LOCK();
      paVar1 = &(FVar12.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar12.ReferenceController)->_padding_ + 8))(FVar12.ReferenceController,1);
      }
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        pFVar13 = pFVar10;
      }
    }
    if (pFVar13 != (FMixerSubmix *)0x0) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_40 = 0;
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffects'::`5'::<lambda_1>,0,0>
                  ::_vftable_;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::ClearSubmixEffects'::__l5::<lambda_1>,void>
                    ::Call;
      local_50 = pFVar13;
      local_48 = pTVar9;
      Audio::FMixerDevice::AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  return;
}

// execConv_AudioOutputDeviceInfoToString @ 14652fe10

void __cdecl
UAudioMixerBlueprintLibrary::execConv_AudioOutputDeviceInfoToString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FAudioOutputDeviceInfo *pFVar3;
  FString local_68;
  FAudioOutputDeviceInfo local_58;
  
  ::FString::FString(&local_58.Name,"");
  ::FString::FString(&local_58.DeviceId,"");
  local_58.NumChannels = 0;
  local_58.SampleRate = 0;
  local_58.bIsCurrentDevice = '\0';
  local_58.bIsSystemDefault = '\x01';
  local_58.Format = Unknown;
  local_58.OutputChannelArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.OutputChannelArray.ArrayNum = 0;
  local_58.OutputChannelArray.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar3 = &local_58;
  if ((FAudioOutputDeviceInfo *)param_2->MostRecentPropertyAddress != (FAudioOutputDeviceInfo *)0x0)
  {
    pFVar3 = (FAudioOutputDeviceInfo *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Conv_AudioOutputDeviceInfoToString(&local_68,pFVar3);
  if (param_3 != pFVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.OutputChannelArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.OutputChannelArray.AllocatorInstance.Data);
  }
  if (local_58.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.DeviceId.Data.AllocatorInstance.Data);
  }
  if (local_58.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Name.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetAvailableAudioOutputDevices @ 14652ff60

void __cdecl
UAudioMixerBlueprintLibrary::execGetAvailableAudioOutputDevices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  UObject *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  atomic<unsigned___int64> local_30;
  FReadAccessScope local_28;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40._0_8_ = (atomic<unsigned___int64>)0x0;
  this = &local_58;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  local_40._8_8_ = this[1].AccessDetector.State;
  local_30 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  GetAvailableAudioOutputDevices(local_res10,(FOnAudioOutputDevicesObtained *)local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// execGetCurrentAudioOutputDeviceName @ 1465300a0

void __cdecl
UAudioMixerBlueprintLibrary::execGetCurrentAudioOutputDeviceName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  UObject *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  atomic<unsigned___int64> local_30;
  FReadAccessScope local_28;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40._0_8_ = (atomic<unsigned___int64>)0x0;
  this = &local_58;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  local_40._8_8_ = this[1].AccessDetector.State;
  local_30 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  GetCurrentAudioOutputDeviceName(local_res10,(FOnMainAudioOutputDeviceObtained *)local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// execGetMagnitudeForFrequencies @ 1465301e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execGetMagnitudeForFrequencies
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FMixerDevice *pFVar3;
  void **ppvVar4;
  void **ppvVar5;
  undefined8 local_res10 [2];
  UObject *local_res20;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  ppvVar4 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  ppvVar5 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res20);
  if (pFVar3 == (FMixerDevice *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    (**(code **)(*(longlong *)pFVar3 + 0x1d0))(pFVar3,uVar2,ppvVar4,ppvVar5);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetNumberOfEntriesInSourceEffectChain @ 1465303b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execGetNumberOfEntriesInSourceEffectChain
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  char cVar3;
  FMixerDevice *pFVar4;
  undefined4 uVar5;
  longlong local_res10;
  UObject *local_res18;
  void *local_18;
  undefined8 local_10;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    pFVar4 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res18);
    if (pFVar4 != (FMixerDevice *)0x0) {
      local_18 = (void *)0x0;
      local_10 = 0;
      cVar3 = (**(code **)(*(longlong *)pFVar4 + 0x128))
                        (pFVar4,*(undefined4 *)(lVar2 + 0xc),&local_18);
      if (cVar3 == '\0') {
        uVar5 = *(undefined4 *)(lVar2 + 0x30);
      }
      else {
        uVar5 = (undefined4)local_10;
      }
      if (local_18 != (void *)0x0) {
        FMemory::Free(local_18);
      }
      *(undefined4 *)param_3 = uVar5;
      return;
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetPhaseForFrequencies @ 146530500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execGetPhaseForFrequencies
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FMixerDevice *pFVar3;
  void **ppvVar4;
  void **ppvVar5;
  undefined8 local_res10 [2];
  UObject *local_res20;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  ppvVar4 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  ppvVar5 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res20);
  if (pFVar3 == (FMixerDevice *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    (**(code **)(*(longlong *)pFVar3 + 0x1d8))(pFVar3,uVar2,ppvVar4,ppvVar5);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execIsAudioBusActive @ 1465306d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execIsAudioBusActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  code *pcVar3;
  FAudioBusKey FVar4;
  longlong lVar5;
  bool bVar6;
  FMixerDevice *this;
  UAudioBusSubsystem *this_00;
  FStaticBasicLogRecord *pFVar7;
  longlong local_res10;
  UObject *local_res18;
  uint local_res20;
  undefined4 uStackX_24;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    if ((byte)LogAudioMixer._0_1_ < 2) goto LAB_146530817;
    pFVar7 = &::LOG_Static;
  }
  else {
    this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res18);
    if (this != (FMixerDevice *)0x0) {
      uVar1 = *(uint *)(lVar5 + 0xc);
      this_00 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>((FAudioDevice *)this);
      if (this_00 == (UAudioBusSubsystem *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioBusSubsystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBlueprintLibrary.cpp"
                           ,0x2b4,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uStackX_24 = 0xffffffff;
      FVar4.InstanceId = 0xffffffff;
      FVar4.ObjectId = uVar1;
      local_res20 = uVar1;
      bVar6 = UAudioBusSubsystem::IsAudioBusActive(this_00,FVar4);
      *(bool *)param_3 = bVar6;
      return;
    }
    if ((byte)LogAudioMixer._0_1_ < 2) goto LAB_146530817;
    pFVar7 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&LogAudioMixer);
LAB_146530817:
  *(undefined1 *)param_3 = 0;
  return;
}

// execMakeFullSpectrumSpectralAnalysisBandSettings @ 146530830

void __cdecl
UAudioMixerBlueprintLibrary::execMakeFullSpectrumSpectralAnalysisBandSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  int local_res18 [2];
  float local_res20 [2];
  float local_38;
  int local_34;
  TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> local_30;
  
  local_34 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_34,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_34);
  }
  local_38 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = MakeFullSpectrumSpectralAnalysisBandSettings
                     (&local_30,local_34,local_38,local_res20[0],local_res18[0],local_res10[0]);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// execMakeMusicalSpectralAnalysisBandSettings @ 146530a20

void __cdecl
UAudioMixerBlueprintLibrary::execMakeMusicalSpectralAnalysisBandSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> *pTVar2;
  EMusicalNoteName local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_38;
  int local_34;
  TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> local_30;
  
  local_34 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_34,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_34);
  }
  local_res10[0] = C;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = MakeMusicalSpectralAnalysisBandSettings
                     (&local_30,local_34,local_res10[0],local_38,local_res20[0],local_res18[0]);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// execMakePresetSpectralAnalysisBandSettings @ 146530c10

void __cdecl
UAudioMixerBlueprintLibrary::execMakePresetSpectralAnalysisBandSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> local_30;
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  fVar3 = __real_469c4000;
  fVar2 = __real_41a00000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar4 = __real_42200000;
  fVar5 = __real_42c80000;
  if ((((local_res10[0] != '\0') &&
       (fVar4 = __real_43160000, fVar5 = __real_458ca000, local_res10[0] != '\x01')) &&
      (fVar4 = __real_43960000, fVar5 = __real_453b8000, local_res10[0] != '\x02')) &&
     (fVar4 = fVar2, fVar5 = fVar3, local_res10[0] == '\x03')) {
    fVar4 = __real_45bb8000;
    fVar5 = __real_467a0000;
  }
  MakeFullSpectrumSpectralAnalysisBandSettings
            (&local_30,local_38[0],fVar4,fVar5,local_res20[0],local_res18[0]);
  if (param_3 != &local_30) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_30.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_30.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_30.ArrayMax;
    local_30.ArrayNum = 0;
    local_30.ArrayMax = 0;
    local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// execPauseRecordingOutput @ 146530e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execPauseRecordingOutput
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FMixerDevice *pFVar3;
  undefined8 local_res10 [2];
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res20);
  if (pFVar3 != (FMixerDevice *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x240))(pFVar3,uVar2);
    return;
  }
  if (1 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  return;
}

// execPrimeSoundCueForPlayback @ 146530f10

void __cdecl
UAudioMixerBlueprintLibrary::execPrimeSoundCueForPlayback
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USoundCue *local_res10 [3];
  
  local_res10[0] = (USoundCue *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (USoundCue *)0x0) {
    USoundCue::PrimeSoundCue(local_res10[0]);
  }
  return;
}

// execPrimeSoundForPlayback @ 146530f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execPrimeSoundForPlayback
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  USoundWave *this;
  FStreamingManagerCollection *this_00;
  IAudioStreamingManager *pIVar3;
  undefined8 *puVar4;
  TSharedPtr<FSoundWaveProxy,1> *pTVar5;
  USoundWave *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  undefined8 local_90;
  undefined8 local_88;
  USoundWave *local_80;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  code *local_48 [5];
  undefined8 *local_20;
  
  local_res10 = (USoundWave *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0 = 0;
  local_b8 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_c8,&local_78);
  local_a8 = local_c0;
  local_a0 = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_78);
  this = local_res10;
  if (local_res10 == (USoundWave *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    this_00 = IStreamingManager::Get();
    pIVar3 = FStreamingManagerCollection::GetAudioStreamingManager(this_00);
    local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    pcVar2 = *(code **)(*(longlong *)pIVar3 + 0xa8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b0,&local_60);
    local_90 = local_a8;
    local_88 = local_a0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    local_80 = this;
    local_48[0] = (code *)0x0;
    puVar4 = FMemory::Malloc(0x28,8);
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::`25'::<lambda_1>,0,1>
               ::_vftable_;
    puVar4[3] = 0;
    local_20 = puVar4;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_60);
    puVar4[2] = local_90;
    puVar4[3] = local_88;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    puVar4[4] = local_80;
    if (puVar4 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>,void,enum_EAudioChunkLoadResult>
                    ::Call;
    }
    pTVar5 = USoundWave::CreateSoundWaveProxy(this,(TSharedPtr<FSoundWaveProxy,1> *)&local_78);
    (*pcVar2)(pIVar3,pTVar5,1,local_48,0xff,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_78.DestructionSentinel.Accessor);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  return;
}

// execRegisterAudioBusToSubmix @ 1465311e0

/* WARNING: Removing unreachable block (ram,0x00014653159c) */
/* WARNING: Removing unreachable block (ram,0x0001465315ab) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execRegisterAudioBusToSubmix
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FField **ppFVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  FProperty *pFVar7;
  code *pcVar8;
  FAudioBusKey FVar9;
  longlong lVar10;
  USoundSubmixBase *pUVar11;
  UObject *pUVar12;
  bool bVar13;
  uint uVar14;
  atomic<int> aVar15;
  FMixerDevice *pFVar16;
  UAudioBusSubsystem *this;
  FMixerSourceManager *this_00;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar17;
  FPatchInput *pFVar18;
  undefined1 *puVar19;
  uint *puVar20;
  FMixerSubmix *pFVar21;
  FMixerSubmix *this_01;
  FMixerSubmix *pFVar22;
  FMixerSubmix *pFVar23;
  FLLMScope local_res10 [5];
  longlong local_res20;
  USoundSubmixBase *local_118;
  UObject *local_110;
  FAudioBusKey local_108;
  FMemScope local_100;
  TSharedPtr<Audio::FMixerSubmix,1> local_f8;
  FPatchInput local_e8;
  FMixerSubmix *local_c8;
  FMixerSubmix *pFStack_c0;
  FPatchInput local_b8;
  TSharedPtr<Audio::FPatchOutput,1> local_a0;
  code *local_88 [5];
  undefined8 *local_60;
  FPatchInput local_58;
  
  this_01 = (FMixerSubmix *)0x0;
  local_110 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_118 = (USoundSubmixBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar12 = local_110;
  pUVar11 = local_118;
  lVar10 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_118 == (USoundSubmixBase *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else if (local_res20 == 0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    bVar13 = IsInAudioThread();
    if (bVar13) {
      pFVar16 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(pUVar12);
      if (pFVar16 == (FMixerDevice *)0x0) {
        if (1 < (byte)LogAudioMixer._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
      }
      else {
        FLLMScope::FLLMScope(local_res10,AudioMixer,false,None,Default,true);
        FMemScope::FMemScope(&local_100,AudioMixer,true);
        Audio::FMixerDevice::GetRequiredSubmixInstance(pFVar16,&local_f8,pUVar11);
        if (local_f8.Object == (FMixerSubmix *)0x0) {
          uVar5 = *(uint *)((longlong)&pUVar11->_padding_ + 4);
          pFVar21 = this_01;
          pFVar23 = this_01;
          if (DisableSubmixMutationLockCVar == 0) {
            lpCriticalSection = &(pFVar16->Submixes).MutationLock;
            if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            if (*(int *)&(pFVar16->Submixes).SubmixMap.field_0x8 !=
                *(int *)&(pFVar16->Submixes).SubmixMap.field_0x34) {
              puVar19 = *(undefined1 **)&(pFVar16->Submixes).SubmixMap.field_0x40;
              if (puVar19 == (undefined1 *)0x0) {
                puVar19 = &(pFVar16->Submixes).SubmixMap.field_0x38;
              }
              uVar14 = *(uint *)(puVar19 +
                                (ulonglong)
                                (*(int *)&(pFVar16->Submixes).SubmixMap.field_0x48 - 1U & uVar5) * 4
                                );
              if (uVar14 != 0xffffffff) {
                do {
                  puVar20 = (uint *)((longlong)(int)uVar14 * 0x20 +
                                    *(longlong *)&(pFVar16->Submixes).SubmixMap);
                  if (*puVar20 == uVar5) {
                    if (puVar20 != (uint *)0x0) {
                      pFVar23 = *(FMixerSubmix **)(puVar20 + 2);
                      pFVar21 = *(FMixerSubmix **)(puVar20 + 4);
                      if (pFVar21 != (FMixerSubmix *)0x0) {
                        LOCK();
                        *(atomic<int> *)&pFVar21->field_0x8 =
                             (atomic<int>)((int)*(atomic<int> *)&pFVar21->field_0x8 + 1);
                        UNLOCK();
                      }
                    }
                    break;
                  }
                  uVar14 = puVar20[6];
                } while (uVar14 != 0xffffffff);
              }
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          }
          else if (*(int *)&(pFVar16->Submixes).SubmixMap.field_0x8 !=
                   *(int *)&(pFVar16->Submixes).SubmixMap.field_0x34) {
            puVar19 = *(undefined1 **)&(pFVar16->Submixes).SubmixMap.field_0x40;
            if (puVar19 == (undefined1 *)0x0) {
              puVar19 = &(pFVar16->Submixes).SubmixMap.field_0x38;
            }
            uVar14 = *(uint *)(puVar19 +
                              (ulonglong)
                              (*(int *)&(pFVar16->Submixes).SubmixMap.field_0x48 - 1U & uVar5) * 4);
            if (uVar14 != 0xffffffff) {
              do {
                puVar20 = (uint *)((longlong)(int)uVar14 * 0x20 +
                                  *(longlong *)&(pFVar16->Submixes).SubmixMap);
                if (*puVar20 == uVar5) {
                  if (puVar20 != (uint *)0x0) {
                    pFVar23 = *(FMixerSubmix **)(puVar20 + 2);
                    pFVar21 = *(FMixerSubmix **)(puVar20 + 4);
                    if (pFVar21 == (FMixerSubmix *)0x0) goto LAB_146531523;
                    LOCK();
                    *(atomic<int> *)&pFVar21->field_0x8 =
                         (atomic<int>)((int)*(atomic<int> *)&pFVar21->field_0x8 + 1);
                    UNLOCK();
                  }
                  break;
                }
                uVar14 = puVar20[6];
              } while (uVar14 != 0xffffffff);
            }
          }
          if (pFVar21 != (FMixerSubmix *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar21->field_0xc =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar21->field_0xc + 1);
            UNLOCK();
          }
LAB_146531523:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar21);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f8.SharedReferenceCount.ReferenceController);
        }
        else {
          local_c8 = local_f8.Object;
          pFStack_c0 = (FMixerSubmix *)local_f8.SharedReferenceCount.ReferenceController;
          if ((FMixerSubmix *)local_f8.SharedReferenceCount.ReferenceController !=
              (FMixerSubmix *)0x0) {
            LOCK();
            (local_f8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)
                 ((int)(local_f8.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f8.SharedReferenceCount.ReferenceController);
          pFVar21 = pFStack_c0;
          pFVar23 = local_c8;
        }
        FMemScope::~FMemScope(&local_100);
        FLLMScope::~FLLMScope(local_res10);
        pFVar22 = pFVar21;
        if (pFVar21 != (FMixerSubmix *)0x0) {
          aVar3 = *(atomic<int> *)&pFVar21->field_0x8;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              pFVar22 = (FMixerSubmix *)0x0;
              break;
            }
            LOCK();
            aVar15 = *(atomic<int> *)&pFVar21->field_0x8;
            bVar13 = aVar3 == aVar15;
            if (bVar13) {
              *(atomic<int> *)&pFVar21->field_0x8 = (atomic<int>)((int)aVar3 + 1);
              aVar15 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar15;
          } while (!bVar13);
          LOCK();
          paVar1 = (atomic<int> *)&pFVar21->field_0xc;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(*(longlong *)pFVar21 + 8))(pFVar21,1);
          }
          if (pFVar22 != (FMixerSubmix *)0x0) {
            this_01 = pFVar23;
          }
        }
        if (this_01 == (FMixerSubmix *)0x0) {
          if (1 < (byte)LogAudioMixer._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          }
        }
        else {
          this = FAudioDevice::GetSubsystem<UAudioBusSubsystem>((FAudioDevice *)pFVar16);
          if ((this == (UAudioBusSubsystem *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AudioBusSubsystem",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBlueprintLibrary.cpp"
                                  ,0x2de,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_108.ObjectId = *(uint *)(lVar10 + 0xc);
          bVar4 = *(byte *)(lVar10 + 0x30);
          iVar6 = *(int *)&pFVar16->field_0x8c;
          local_108.InstanceId = 0xffffffff;
          FVar9.InstanceId = 0xffffffff;
          FVar9.ObjectId = local_108.ObjectId;
          this_00 = UAudioEngineSubsystem::GetMutableSourceManager((UAudioEngineSubsystem *)this);
          if ((this_00 == (FMixerSourceManager *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SourceManager",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioBusSubsystem.cpp"
                                  ,0x7e,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar16 = UAudioEngineSubsystem::GetMutableMixerDevice((UAudioEngineSubsystem *)this);
          if (pFVar16 == (FMixerDevice *)0x0) {
            local_e8.OutputHandle.Object = (FPatchOutput *)0x0;
            local_e8.OutputHandle.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            local_e8.PushCallsCounter = 0;
            local_e8._20_4_ = 0;
          }
          else {
            pTVar17 = Audio::FMixerDevice::MakePatch
                                (pFVar16,&local_a0,iVar6,bVar4 + 1,__real_3f800000);
            Audio::FPatchInput::FPatchInput(&local_b8,pTVar17);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a0.SharedReferenceCount.ReferenceController);
            pFVar18 = Audio::FPatchInput::FPatchInput(&local_58,&local_b8);
            Audio::FMixerSourceManager::AddPendingAudioBusConnection
                      (this_00,FVar9,bVar4 + 1,false,pFVar18,0xffffffffffffffff);
            Audio::FPatchInput::FPatchInput(&local_e8,&local_b8);
            Audio::FPatchInput::~FPatchInput(&local_b8);
          }
          Audio::FMixerSubmix::RegisterAudioBus(this_01,&local_108,&local_e8);
          Audio::FPatchInput::~FPatchInput(&local_e8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar22);
      }
    }
    else {
      local_88[0] = (code *)0x0;
      local_60 = FMemory::Malloc(0x20,8);
      *local_60 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix'::`47'::<lambda_1>,1,1>
                   ::_vftable_;
      local_60[1] = pUVar12;
      local_60[2] = pUVar11;
      local_60[3] = lVar10;
      if (local_60 + 1 != (undefined8 *)0x0) {
        local_88[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix'::__l47::<lambda_1>,void>
                      ::Call;
      }
      FAudioThread::RunCommandOnAudioThread
                ((TUniqueFunction<void___cdecl(void)> *)local_88,(TStatId)0x154f11430);
    }
  }
  return;
}

// execRemoveMasterSubmixEffect @ 1465317a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execRemoveMasterSubmixEffect
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong local_res10;
  UObject *local_res20;
  code *local_38 [2];
  undefined **local_28;
  FMixerDevice *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else {
    local_20 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res20);
    if (local_20 != (FMixerDevice *)0x0) {
      local_10 = 0;
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Audio::FMixerDevice::RemoveMainSubmixEffect'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_18 = *(undefined4 *)(lVar2 + 0xc);
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::RemoveMainSubmixEffect'::__l2::<lambda_1>,void>
                    ::Call;
      Audio::FMixerDevice::AudioRenderThreadCommand
                (local_20,(TFunction<void___cdecl(void)> *)local_38);
    }
  }
  return;
}

// execRemoveSourceEffectFromPresetChain @ 146531900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execRemoveSourceEffectFromPresetChain
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined4 uVar2;
  FProperty *pFVar3;
  FSourceEffectChainEntry *pFVar4;
  code *pcVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  FMixerDevice *pFVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint local_res10 [4];
  longlong local_res20;
  UObject *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  local_58 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar7 = local_res20;
  uVar6 = local_res10[0];
  lVar13 = (longlong)(int)local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == 0) {
    if ((byte)LogAudioMixer._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    return;
  }
  pFVar11 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_58);
  if (pFVar11 == (FMixerDevice *)0x0) {
    return;
  }
  uVar2 = *(undefined4 *)(lVar7 + 0xc);
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  cVar8 = (**(code **)(*(longlong *)pFVar11 + 0x128))(pFVar11,uVar2,&local_50);
  if ((cVar8 == '\0') && (&local_50 != (ForAnyElementType *)(lVar7 + 0x28))) {
    iVar12 = *(int *)(lVar7 + 0x30);
    pFVar4 = (FSourceEffectChainEntry *)((ForAnyElementType *)(lVar7 + 0x28))->Data;
    local_48 = CONCAT44(local_48._4_4_,iVar12);
    if ((iVar12 == 0) && (local_48._4_4_ == 0)) {
      local_48 = 0;
      local_48._0_4_ = 0;
      goto LAB_146531ab0;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar12,local_48._4_4_,&local_50,iVar12,(int *)((longlong)&local_48 + 4));
    ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>(local_50.Data,pFVar4,iVar12)
    ;
  }
LAB_146531ab0:
  if ((-1 < (int)uVar6) && ((int)uVar6 < (int)local_48)) {
    uVar14 = 0;
    if ((int)uVar6 < (int)local_48) {
      uVar14 = ~uVar6 >> 0x1f;
    }
    iVar12 = (int)local_48;
    if (uVar14 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = (int)local_48;
    }
    iVar10 = (iVar12 - uVar6) + -1;
    if (iVar10 != 0) {
      memmove(local_50.Data + lVar13 * 0x10,local_50.Data + lVar13 * 0x10 + 0x10,
              (longlong)iVar10 << 4);
      iVar12 = (int)local_48;
    }
    local_48 = CONCAT44(local_48._4_4_,iVar12 + -1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&local_50,iVar12 + -1,(int *)((longlong)&local_48 + 4));
    (**(code **)(*(longlong *)pFVar11 + 0x120))(pFVar11,uVar2,&local_50,*(byte *)(lVar7 + 0x38) & 1)
    ;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
}

// execRemoveSubmixEffect @ 146531ba0

void __cdecl
UAudioMixerBlueprintLibrary::execRemoveSubmixEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USoundEffectSubmixPreset *local_res10 [2];
  USoundSubmix *local_res20;
  UObject *local_18 [2];
  
  local_18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20 = (USoundSubmix *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (USoundEffectSubmixPreset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveSubmixEffect(local_18[0],local_res20,local_res10[0]);
  return;
}

// execRemoveSubmixEffectAtIndex @ 146531cb0

void __cdecl
UAudioMixerBlueprintLibrary::execRemoveSubmixEffectAtIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [4];
  USoundSubmix *local_res20;
  UObject *local_18 [2];
  
  local_18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20 = (USoundSubmix *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveSubmixEffectAtIndex(local_18[0],local_res20,local_res10[0]);
  return;
}

// execRemoveSubmixEffectPreset @ 146531dc0

void __cdecl
UAudioMixerBlueprintLibrary::execRemoveSubmixEffectPreset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USoundEffectSubmixPreset *local_res10 [2];
  USoundSubmix *local_res20;
  UObject *local_18 [2];
  
  local_18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20 = (USoundSubmix *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (USoundEffectSubmixPreset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveSubmixEffect(local_18[0],local_res20,local_res10[0]);
  return;
}

// execRemoveSubmixEffectPresetAtIndex @ 146531ed0

void __cdecl
UAudioMixerBlueprintLibrary::execRemoveSubmixEffectPresetAtIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [4];
  USoundSubmix *local_res20;
  UObject *local_18 [2];
  
  local_18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20 = (USoundSubmix *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveSubmixEffectAtIndex(local_18[0],local_res20,local_res10[0]);
  return;
}

// execReplaceSoundEffectSubmix @ 146531fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execReplaceSoundEffectSubmix
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  USoundEffectPreset *pUVar4;
  USoundSubmix *pUVar5;
  FSoundEffectSubmix *this;
  bool bVar6;
  FMixerDevice *this_00;
  int local_res10 [4];
  USoundEffectPreset *local_res20;
  USoundSubmix *local_78;
  UObject *local_70;
  TSharedPtr<FSoundEffectSubmix,1> local_68;
  TSharedPtr<FSoundEffectSubmix,1> local_58;
  FSoundEffectSubmixInitData local_48;
  
  local_70 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_78 = (USoundSubmix *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (USoundEffectPreset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar5 = local_78;
  pUVar4 = local_res20;
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res20 != (USoundEffectPreset *)0x0) && (local_78 != (USoundSubmix *)0x0)) &&
     (this_00 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_70),
     this_00 != (FMixerDevice *)0x0)) {
    local_48.SampleRate = (float)*(int *)&this_00->field_0x84;
    local_48.DeviceID = 0xffffffff;
    local_48.PresetSettings = (void *)0x0;
    local_48.ParentPresetUniqueId = 0xffffffff;
    USoundEffectPreset::CreateInstance<FSoundEffectSubmixInitData,FSoundEffectSubmix>
              (&local_68,&local_48,pUVar4);
    this = local_68.Object;
    if ((local_68.Object == (FSoundEffectSubmix *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FSoundEffectBase::SetEnabled((FSoundEffectBase *)this,true);
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    Audio::FMixerDevice::ReplaceSoundEffectSubmix(this_00,pUVar5,iVar3,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  return;
}

// execReplaceSubmixEffect @ 146532200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execReplaceSubmixEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  USoundEffectPreset *pUVar4;
  USoundSubmix *pUVar5;
  FSoundEffectSubmix *this;
  bool bVar6;
  FMixerDevice *this_00;
  int local_res10 [4];
  USoundEffectPreset *local_res20;
  USoundSubmix *local_78;
  UObject *local_70;
  TSharedPtr<FSoundEffectSubmix,1> local_68;
  TSharedPtr<FSoundEffectSubmix,1> local_58;
  FSoundEffectSubmixInitData local_48;
  
  local_70 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_78 = (USoundSubmix *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (USoundEffectPreset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar5 = local_78;
  pUVar4 = local_res20;
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res20 != (USoundEffectPreset *)0x0) && (local_78 != (USoundSubmix *)0x0)) &&
     (this_00 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_70),
     this_00 != (FMixerDevice *)0x0)) {
    local_48.SampleRate = (float)*(int *)&this_00->field_0x84;
    local_48.DeviceID = 0xffffffff;
    local_48.PresetSettings = (void *)0x0;
    local_48.ParentPresetUniqueId = 0xffffffff;
    USoundEffectPreset::CreateInstance<FSoundEffectSubmixInitData,FSoundEffectSubmix>
              (&local_68,&local_48,pUVar4);
    this = local_68.Object;
    if ((local_68.Object == (FSoundEffectSubmix *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FSoundEffectBase::SetEnabled((FSoundEffectBase *)this,true);
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    Audio::FMixerDevice::ReplaceSoundEffectSubmix(this_00,pUVar5,iVar3,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  return;
}

// execResumeRecordingOutput @ 146532420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execResumeRecordingOutput
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FMixerDevice *pFVar3;
  undefined8 local_res10 [2];
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res20);
  if (pFVar3 != (FMixerDevice *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x248))(pFVar3,uVar2);
    return;
  }
  if (1 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  return;
}

// execSetBypassSourceEffectChainEntry @ 146532520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execSetBypassSourceEffectChainEntry
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined4 uVar2;
  int iVar3;
  FProperty *pFVar4;
  FSourceEffectChainEntry *pFVar5;
  code *pcVar6;
  uint uVar7;
  longlong lVar8;
  char cVar9;
  bool bVar10;
  FMixerDevice *pFVar11;
  uint uVar12;
  bool bVar13;
  int local_res20 [2];
  uint local_68 [2];
  longlong local_60;
  UObject *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  local_58 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_60 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_68[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  lVar8 = local_60;
  uVar7 = local_68[0];
  bVar13 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_60 == 0) {
    if ((byte)LogAudioMixer._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    return;
  }
  pFVar11 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_58);
  if (pFVar11 == (FMixerDevice *)0x0) {
    return;
  }
  uVar2 = *(undefined4 *)(lVar8 + 0xc);
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  cVar9 = (**(code **)(*(longlong *)pFVar11 + 0x128))(pFVar11,uVar2,&local_50);
  if ((cVar9 == '\0') && (&local_50 != (ForAnyElementType *)(lVar8 + 0x28))) {
    iVar3 = *(int *)(lVar8 + 0x30);
    pFVar5 = (FSourceEffectChainEntry *)((ForAnyElementType *)(lVar8 + 0x28))->Data;
    local_48 = CONCAT44(local_48._4_4_,iVar3);
    if ((iVar3 == 0) && (local_48._4_4_ == 0)) {
      local_48 = 0;
      local_48._0_4_ = 0;
      goto LAB_146532717;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,local_48._4_4_,&local_50,iVar3,(int *)((longlong)&local_48 + 4));
    ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>(local_50.Data,pFVar5,iVar3);
  }
LAB_146532717:
  if ((-1 < (int)uVar7) && ((int)uVar7 < (int)local_48)) {
    uVar12 = 0;
    if ((int)uVar7 < (int)local_48) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(uint *)(local_50.Data + (longlong)(int)uVar7 * 0x10 + 8) =
         *(uint *)(local_50.Data + (longlong)(int)uVar7 * 0x10 + 8) & 0xfffffffe;
    *(uint *)(local_50.Data + (longlong)(int)uVar7 * 0x10 + 8) =
         *(uint *)(local_50.Data + (longlong)(int)uVar7 * 0x10 + 8) | (uint)bVar13;
    (**(code **)(*(longlong *)pFVar11 + 0x120))(pFVar11,uVar2,&local_50,*(byte *)(lVar8 + 0x38) & 1)
    ;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
}

// execSetSubmixEffectChainOverride @ 1465327d0

void __cdecl
UAudioMixerBlueprintLibrary::execSetSubmixEffectChainOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  void *_Src;
  longlong lVar3;
  float local_res10 [4];
  USoundSubmix *local_res20;
  UObject *local_58;
  void *local_50;
  undefined8 local_48;
  TArray<USoundEffectSubmixPreset_*,TSizedDefaultAllocator<32>_> local_40 [2];
  
  local_58 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20 = (USoundSubmix *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_50 = (void *)0x0;
  local_48 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_50;
  fVar2 = local_res10[0];
  local_40[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_48;
  local_40[0].ArrayNum = (int)local_48;
  if ((int)local_48 == 0) {
    local_40[0].ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_48,0,&local_40[0].AllocatorInstance,(int)local_48,
               &local_40[0].ArrayMax);
    memcpy(local_40[0].AllocatorInstance.Data,_Src,lVar3 << 3);
  }
  SetSubmixEffectChainOverride(local_58,local_res20,local_40,fVar2);
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execStartAnalyzingOutput @ 146532990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execStartAnalyzingOutput
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EAudioSpectrumType EVar2;
  EFFTWindowType EVar3;
  EFFTPeakInterpolationMethod EVar4;
  EFFTSize EVar5;
  float fVar6;
  undefined8 uVar7;
  FMixerDevice *pFVar8;
  EAudioSpectrumType local_res10 [8];
  EFFTWindowType local_res20 [8];
  EFFTPeakInterpolationMethod local_58;
  EFFTSize local_57 [3];
  float local_54;
  undefined8 local_50;
  UObject *local_48;
  FSoundSpectrumAnalyzerSettings local_40 [3];
  
  local_48 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_50 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_57[0] = DefaultSize;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_57,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_57);
  }
  local_58 = NearestNeighbor;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_54 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_54,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_54);
  }
  local_res10[0] = MagnitudeSpectrum;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar7 = local_50;
  fVar6 = local_54;
  EVar5 = local_57[0];
  EVar4 = local_58;
  EVar3 = local_res20[0];
  EVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar8 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_48);
  if (pFVar8 == (FMixerDevice *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    local_40[0] = USoundSubmix::GetSpectrumAnalyzerSettings(EVar5,EVar4,EVar3,fVar6,EVar2);
    (**(code **)(*(longlong *)pFVar8 + 0x1c0))(pFVar8,uVar7,local_40);
  }
  return;
}

// execStartAudioBus @ 146532c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execStartAudioBus(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  uint uVar2;
  FProperty *pFVar3;
  code *pcVar4;
  UObjectBaseUtility *this;
  bool bVar5;
  FMixerDevice *this_00;
  UAudioBusSubsystem *this_01;
  FString *pFVar6;
  FStaticBasicLogRecord *pFVar7;
  UObjectBaseUtility *local_res10;
  UObject *local_res20;
  FString local_28;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObjectBaseUtility *)0x0) {
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return;
    }
    pFVar7 = &::LOG_Static;
  }
  else {
    this_00 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res20);
    if (this_00 != (FMixerDevice *)0x0) {
      bVar1 = this[1].field_0x8;
      uVar2 = *(uint *)&this->field_0xc;
      this_01 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>((FAudioDevice *)this_00);
      if ((this_01 == (UAudioBusSubsystem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AudioBusSubsystem",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBlueprintLibrary.cpp"
                             ,0x28c,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar6 = UObjectBaseUtility::GetPathName(this,&local_28,(UObject *)0x0);
      UAudioBusSubsystem::StartAudioBus
                (this_01,(FAudioBusKey)((ulonglong)uVar2 | 0xffffffff00000000),pFVar6,bVar1 + 1,
                 false);
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return;
    }
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return;
    }
    pFVar7 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&LogAudioMixer);
  return;
}

// execStartRecordingOutput @ 146532db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execStartRecordingOutput
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  FMixerDevice *pFVar4;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  UObject *local_28 [4];
  
  local_28[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  uVar3 = local_res20;
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_28[0]);
  if (pFVar4 != (FMixerDevice *)0x0) {
    (**(code **)(*(longlong *)pFVar4 + 0x138))(pFVar4,uVar3,uVar2);
    return;
  }
  if (1 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  return;
}

// execStopAnalyzingOutput @ 146532f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execStopAnalyzingOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FMixerDevice *pFVar3;
  undefined8 local_res10 [2];
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res20);
  if (pFVar3 != (FMixerDevice *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x1c8))(pFVar3,uVar2);
    return;
  }
  if (1 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  return;
}

// execStopAudioBus @ 146533010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execStopAudioBus(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  code *pcVar3;
  FAudioBusKey FVar4;
  longlong lVar5;
  bool bVar6;
  FMixerDevice *this;
  UAudioBusSubsystem *this_00;
  FStaticBasicLogRecord *pFVar7;
  longlong local_res10 [2];
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return;
    }
    pFVar7 = &::LOG_Static;
  }
  else {
    this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(local_res20);
    if (this != (FMixerDevice *)0x0) {
      uVar1 = *(uint *)(lVar5 + 0xc);
      this_00 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>((FAudioDevice *)this);
      if ((this_00 == (UAudioBusSubsystem *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AudioBusSubsystem",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBlueprintLibrary.cpp"
                             ,0x2a0,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar4.InstanceId = 0xffffffff;
      FVar4.ObjectId = uVar1;
      UAudioBusSubsystem::StopAudioBus(this_00,FVar4);
      return;
    }
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return;
    }
    pFVar7 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&LogAudioMixer);
  return;
}

// execStopRecordingOutput @ 146533180

void __cdecl
UAudioMixerBlueprintLibrary::execStopRecordingOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USoundSubmix *pUVar2;
  void *_Src;
  USoundWave *pUVar3;
  longlong lVar4;
  EAudioRecordingExportType local_res10 [8];
  USoundWave *local_res18;
  USoundSubmix *local_res20;
  UObject *local_78;
  void *local_70;
  undefined8 local_68;
  FString local_60;
  FString local_50;
  
  local_78 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = SoundWave;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_70 = (void *)0x0;
  local_68 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res20 = (USoundSubmix *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (USoundWave *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  _Src = local_70;
  pUVar2 = local_res20;
  pUVar3 = local_res18;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_68;
  local_60.Data.ArrayNum = (int)local_68;
  if ((int)local_68 == 0) {
    local_60.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_68,0,(ForAnyElementType *)&local_60,(int)local_68,
               &local_60.Data.ArrayMax);
    memcpy(local_60.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  pUVar3 = StopRecordingOutput(local_78,local_res10[0],&local_50,&local_60,pUVar2,pUVar3);
  *(USoundWave **)param_3 = pUVar3;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// execSwapAudioOutputDevice @ 1465333e0

void __cdecl
UAudioMixerBlueprintLibrary::execSwapAudioOutputDevice
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  UObject *local_res10;
  FString local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  atomic<unsigned___int64> local_30;
  FReadAccessScope local_28;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40._0_8_ = (atomic<unsigned___int64>)0x0;
  this = &local_58;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  local_40._8_8_ = this[1].AccessDetector.State;
  local_30 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SwapAudioOutputDevice(local_res10,&local_68,(FOnCompletedDeviceSwap *)local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// execTrimAudioCache @ 146533560

void __cdecl
UAudioMixerBlueprintLibrary::execTrimAudioCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  longlong lVar3;
  FStreamingManagerCollection *this;
  IAudioStreamingManager *pIVar4;
  ulonglong uVar5;
  float fVar6;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = __real_5f000000;
  fVar6 = local_res10[0] * __real_44800000;
  lVar3 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar6 = fVar6 * __real_44800000;
  if ((fVar2 <= fVar6) && (fVar6 = fVar6 - fVar2, fVar6 < fVar2)) {
    lVar3 = -0x8000000000000000;
  }
  this = IStreamingManager::Get();
  pIVar4 = FStreamingManagerCollection::GetAudioStreamingManager(this);
  uVar5 = (**(code **)(*(longlong *)pIVar4 + 0xb8))(pIVar4,(longlong)fVar6 + lVar3);
  *(float *)param_3 = (float)((double)uVar5 * __real_3eb0000000000000);
  return;
}

// execUnregisterAudioBusFromSubmix @ 146533670

/* WARNING: Removing unreachable block (ram,0x0001465339fe) */
/* WARNING: Removing unreachable block (ram,0x000146533a0a) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UAudioMixerBlueprintLibrary::execUnregisterAudioBusFromSubmix
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FField **ppFVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar3;
  uint uVar4;
  FProperty *pFVar5;
  longlong lVar6;
  USoundSubmixBase *pUVar7;
  UObject *pUVar8;
  bool bVar9;
  uint uVar10;
  atomic<int> aVar11;
  FMixerDevice *this;
  FStaticBasicLogRecord *pFVar12;
  undefined1 *puVar13;
  FMixerSubmix *pFVar14;
  FMixerSubmix *this_00;
  uint *puVar15;
  FMixerSubmix *pFVar16;
  FMixerSubmix *pFVar17;
  FLLMScope local_res10 [2];
  longlong local_res20;
  USoundSubmixBase *local_98;
  UObject *local_90;
  FAudioBusKey local_88;
  FMemScope local_80;
  TSharedPtr<Audio::FMixerSubmix,1> local_78;
  FMixerSubmix *local_68;
  FMixerSubmix *pFStack_60;
  code *local_58 [5];
  undefined8 *local_30;
  
  this_00 = (FMixerSubmix *)0x0;
  local_90 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98 = (USoundSubmixBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar8 = local_90;
  pUVar7 = local_98;
  lVar6 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_98 == (USoundSubmixBase *)0x0) {
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return;
    }
    pFVar12 = &::LOG_Static;
  }
  else if (local_res20 == 0) {
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return;
    }
    pFVar12 = &::LOG_Static;
  }
  else {
    bVar9 = IsInAudioThread();
    if (!bVar9) {
      local_58[0] = (code *)0x0;
      local_30 = FMemory::Malloc(0x20,8);
      *local_30 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix'::`47'::<lambda_1>,1,1>
                   ::_vftable_;
      local_30[1] = pUVar8;
      local_30[2] = pUVar7;
      local_30[3] = lVar6;
      if (local_30 + 1 != (undefined8 *)0x0) {
        local_58[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix'::__l47::<lambda_1>,void>
                      ::Call;
      }
      FAudioThread::RunCommandOnAudioThread
                ((TUniqueFunction<void___cdecl(void)> *)local_58,(TStatId)0x154f11430);
      return;
    }
    this = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(pUVar8);
    if (this != (FMixerDevice *)0x0) {
      FLLMScope::FLLMScope(local_res10,AudioMixer,false,None,Default,true);
      FMemScope::FMemScope(&local_80,AudioMixer,true);
      Audio::FMixerDevice::GetRequiredSubmixInstance(this,&local_78,pUVar7);
      if (local_78.Object == (FMixerSubmix *)0x0) {
        uVar4 = *(uint *)((longlong)&pUVar7->_padding_ + 4);
        pFVar16 = this_00;
        pFVar17 = this_00;
        if (DisableSubmixMutationLockCVar == 0) {
          lpCriticalSection = &(this->Submixes).MutationLock;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (*(int *)&(this->Submixes).SubmixMap.field_0x8 !=
              *(int *)&(this->Submixes).SubmixMap.field_0x34) {
            puVar13 = *(undefined1 **)&(this->Submixes).SubmixMap.field_0x40;
            if (puVar13 == (undefined1 *)0x0) {
              puVar13 = &(this->Submixes).SubmixMap.field_0x38;
            }
            uVar10 = *(uint *)(puVar13 +
                              (ulonglong)
                              (*(int *)&(this->Submixes).SubmixMap.field_0x48 - 1U & uVar4) * 4);
            if (uVar10 != 0xffffffff) {
              do {
                puVar15 = (uint *)((longlong)(int)uVar10 * 0x20 +
                                  *(longlong *)&(this->Submixes).SubmixMap);
                if (*puVar15 == uVar4) {
                  if (puVar15 != (uint *)0x0) {
                    pFVar17 = *(FMixerSubmix **)(puVar15 + 2);
                    pFVar16 = *(FMixerSubmix **)(puVar15 + 4);
                    if (pFVar16 != (FMixerSubmix *)0x0) {
                      LOCK();
                      *(atomic<int> *)&pFVar16->field_0x8 =
                           (atomic<int>)((int)*(atomic<int> *)&pFVar16->field_0x8 + 1);
                      UNLOCK();
                    }
                  }
                  break;
                }
                uVar10 = puVar15[6];
              } while (uVar10 != 0xffffffff);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        else if (*(int *)&(this->Submixes).SubmixMap.field_0x8 !=
                 *(int *)&(this->Submixes).SubmixMap.field_0x34) {
          puVar13 = *(undefined1 **)&(this->Submixes).SubmixMap.field_0x40;
          if (puVar13 == (undefined1 *)0x0) {
            puVar13 = &(this->Submixes).SubmixMap.field_0x38;
          }
          uVar10 = *(uint *)(puVar13 +
                            (ulonglong)(*(int *)&(this->Submixes).SubmixMap.field_0x48 - 1U & uVar4)
                            * 4);
          if (uVar10 != 0xffffffff) {
            do {
              puVar15 = (uint *)((longlong)(int)uVar10 * 0x20 +
                                *(longlong *)&(this->Submixes).SubmixMap);
              if (*puVar15 == uVar4) {
                if (puVar15 != (uint *)0x0) {
                  pFVar17 = *(FMixerSubmix **)(puVar15 + 2);
                  pFVar16 = *(FMixerSubmix **)(puVar15 + 4);
                  if (pFVar16 == (FMixerSubmix *)0x0) goto LAB_146533983;
                  LOCK();
                  *(atomic<int> *)&pFVar16->field_0x8 =
                       (atomic<int>)((int)*(atomic<int> *)&pFVar16->field_0x8 + 1);
                  UNLOCK();
                }
                break;
              }
              uVar10 = puVar15[6];
            } while (uVar10 != 0xffffffff);
          }
        }
        if (pFVar16 != (FMixerSubmix *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar16->field_0xc =
               (atomic<int>)((int)*(atomic<int> *)&pFVar16->field_0xc + 1);
          UNLOCK();
        }
LAB_146533983:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar16);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
      }
      else {
        local_68 = local_78.Object;
        pFStack_60 = (FMixerSubmix *)local_78.SharedReferenceCount.ReferenceController;
        if ((FMixerSubmix *)local_78.SharedReferenceCount.ReferenceController != (FMixerSubmix *)0x0
           ) {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        pFVar16 = pFStack_60;
        pFVar17 = local_68;
      }
      FMemScope::~FMemScope(&local_80);
      FLLMScope::~FLLMScope(local_res10);
      pFVar14 = pFVar16;
      if (pFVar16 != (FMixerSubmix *)0x0) {
        aVar3 = *(atomic<int> *)&pFVar16->field_0x8;
        do {
          pFVar14 = this_00;
          if (aVar3 == (atomic<int>)0x0) break;
          LOCK();
          aVar11 = *(atomic<int> *)&pFVar16->field_0x8;
          bVar9 = aVar3 == aVar11;
          if (bVar9) {
            *(atomic<int> *)&pFVar16->field_0x8 = (atomic<int>)((int)aVar3 + 1);
            aVar11 = aVar3;
          }
          UNLOCK();
          pFVar14 = pFVar16;
          aVar3 = aVar11;
        } while (!bVar9);
        LOCK();
        paVar1 = (atomic<int> *)&pFVar16->field_0xc;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(*(longlong *)pFVar16 + 8))(pFVar16,1);
        }
        if (pFVar14 != (FMixerSubmix *)0x0) {
          this_00 = pFVar17;
        }
      }
      if (this_00 != (FMixerSubmix *)0x0) {
        local_88.ObjectId = *(uint *)(lVar6 + 0xc);
        local_88.InstanceId = 0xffffffff;
        Audio::FMixerSubmix::UnregisterAudioBus(this_00,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar14);
        return;
      }
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar14);
      return;
    }
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return;
    }
    pFVar12 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar12,(FLogCategoryBase *)&LogAudioMixer);
  return;
}

