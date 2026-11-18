// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 50

// CreateSoundGenerator @ 14726e990

TSharedPtr<ISoundGenerator,1> * __thiscall
USoundBase::CreateSoundGenerator
          (USoundBase *this,TSharedPtr<ISoundGenerator,1> *__return_storage_ptr__,
          FSoundGeneratorInitParams *param_1)

{
  __return_storage_ptr__->Object = (ISoundGenerator *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSubtitlePriority @ 147270380

float __thiscall USoundBase::GetSubtitlePriority(USoundBase *this)

{
  return __real_461c4000;
}

// HasCookedAmplitudeEnvelopeData @ 1472703e0

bool __thiscall USoundBase::HasCookedAmplitudeEnvelopeData(USoundBase *this)

{
  return false;
}

// HasCookedFFTData @ 1472703f0

bool __thiscall USoundBase::HasCookedFFTData(USoundBase *this)

{
  return false;
}

// IsProcedurallyGenerated @ 1472704f0

bool __thiscall USoundBase::IsProcedurallyGenerated(USoundBase *this)

{
  return false;
}

// StaticClass @ 147270930

UClass * __cdecl USoundBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundBase",&Z_Registration_Info_UClass_USoundBase.InnerSingleton,
               StaticRegisterNativesUSoundBase,0x180,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None
               ,L"Engine",InternalConstructor<USoundBase>,InternalVTableHelperCtorCaller<USoundBase>
               ,aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundBase.InnerSingleton;
}

// _getUObject @ 147273070

UObject * __thiscall USoundBase::_getUObject(USoundBase *this)

{
  return (UObject *)&this[-1].PreEffectBusSends;
}

// _getUObject`adjustor{8}' @ 14727307c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl USoundBase::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall USoundBase::_getUObject_adjustor_8__(USoundBase *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USoundBase *)&this[-1].TimecodeOffset);
  return (UObject *)pUVar1;
}

// USoundBase @ 148696840

USoundBase * __thiscall USoundBase::USoundBase(USoundBase *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->CurrentPlayCount).field_0x8 = 0;
  (this->SoundClassObject).field0_0x0.DebugPtr = (USoundClass *)0x0;
  *(undefined8 *)&this->CurrentPlayCount = 0;
  *(undefined8 *)&(this->CurrentPlayCount).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentPlayCount).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentPlayCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentPlayCount).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentPlayCount).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentPlayCount).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentPlayCount).field_0x48 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
  (this->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = 0;
  (this->ConcurrencyOverrides).bLimitToOwner = '\0';
  (this->ConcurrencyOverrides).bEnableMaxCountPlatformScaling = '\0';
  (this->ConcurrencyOverrides).bVolumeScaleCanRelease = '\0';
  (this->ConcurrencyOverrides).RetriggerTime = 0.0;
  (this->AttenuationSettings).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  (this->SoundSubmixObject).field0_0x0.DebugPtr = (USoundSubmixBase *)0x0;
  (this->SoundSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundSubmixSends).ArrayNum = 0;
  (this->SoundSubmixSends).ArrayMax = 0;
  (this->SourceEffectChain).field0_0x0.DebugPtr = (USoundEffectSourcePresetChain *)0x0;
  (this->BusSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BusSends).ArrayNum = 0;
  (this->BusSends).ArrayMax = 0;
  (this->PreEffectBusSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreEffectBusSends).ArrayNum = 0;
  (this->PreEffectBusSends).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->TimecodeOffset).NumOfSecondsSinceMidnight = 0.0;
  (this->ConcurrencyOverrides).MaxCount = 0x10;
  (this->ConcurrencyOverrides).ResolutionRule.Value = '\x03';
  (this->ConcurrencyOverrides).PlatformMaxCount.Default = 0x10;
  (this->ConcurrencyOverrides).VolumeScale = 1.0;
  (this->ConcurrencyOverrides).VolumeScaleMode = Default;
  (this->ConcurrencyOverrides).VolumeScaleAttackTime = 0.01;
  (this->ConcurrencyOverrides).VolumeScaleReleaseTime = 0.5;
  (this->ConcurrencyOverrides).VoiceStealReleaseTime = 0.0;
  return this;
}

// USoundBase @ 148696990

USoundBase * __thiscall USoundBase::USoundBase(USoundBase *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->VirtualizationMode = Restart;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->CurrentPlayCount).field_0x8 = 0;
  (this->SoundClassObject).field0_0x0.DebugPtr = (USoundClass *)0x0;
  *(undefined8 *)&this->CurrentPlayCount = 0;
  *(undefined8 *)&(this->CurrentPlayCount).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentPlayCount).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentPlayCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentPlayCount).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentPlayCount).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentPlayCount).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentPlayCount).field_0x48 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
  (this->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = 0;
  (this->ConcurrencyOverrides).bLimitToOwner = '\0';
  (this->ConcurrencyOverrides).bEnableMaxCountPlatformScaling = '\0';
  (this->ConcurrencyOverrides).bVolumeScaleCanRelease = '\0';
  this->bEnableBusSends = '\x01';
  this->bEnableSubmixSends = '\x01';
  this->bEnableBaseSubmix = '\x01';
  (this->ConcurrencyOverrides).RetriggerTime = 0.0;
  (this->AttenuationSettings).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  (this->SoundSubmixObject).field0_0x0.DebugPtr = (USoundSubmixBase *)0x0;
  (this->SoundSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundSubmixSends).ArrayNum = 0;
  (this->SoundSubmixSends).ArrayMax = 0;
  (this->SourceEffectChain).field0_0x0.DebugPtr = (USoundEffectSourcePresetChain *)0x0;
  (this->BusSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BusSends).ArrayNum = 0;
  (this->BusSends).ArrayMax = 0;
  (this->PreEffectBusSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreEffectBusSends).ArrayNum = 0;
  (this->PreEffectBusSends).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->TimecodeOffset).NumOfSecondsSinceMidnight = 0.0;
  (this->ConcurrencyOverrides).MaxCount = 0x10;
  (this->ConcurrencyOverrides).ResolutionRule.Value = '\x03';
  (this->ConcurrencyOverrides).PlatformMaxCount.Default = 0x10;
  (this->ConcurrencyOverrides).VolumeScale = 1.0;
  (this->ConcurrencyOverrides).VolumeScaleMode = Default;
  (this->ConcurrencyOverrides).VolumeScaleAttackTime = 0.01;
  (this->ConcurrencyOverrides).VolumeScaleReleaseTime = 0.5;
  (this->ConcurrencyOverrides).VoiceStealReleaseTime = 0.0;
  this->Duration = -1.0;
  this->Priority = 1.0;
  return this;
}

// ~USoundBase @ 14869b420

void __thiscall USoundBase::~USoundBase(USoundBase *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoundSourceBusSendInfo,int>
            ((FSoundSourceBusSendInfo *)(this->PreEffectBusSends).AllocatorInstance.Data,
             (this->PreEffectBusSends).ArrayNum);
  pFVar1 = (this->PreEffectBusSends).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoundSourceBusSendInfo,int>
            ((FSoundSourceBusSendInfo *)(this->BusSends).AllocatorInstance.Data,
             (this->BusSends).ArrayNum);
  pFVar1 = (this->BusSends).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoundSubmixSendInfo,int>
            ((FSoundSubmixSendInfo *)(this->SoundSubmixSends).AllocatorInstance.Data,
             (this->SoundSubmixSends).ArrayNum);
  pFVar1 = (this->SoundSubmixSends).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ConcurrencySet).HashSize = 0;
  FVar2 = (this->ConcurrencySet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ConcurrencySet).Elements);
  *(undefined4 *)&(this->CurrentPlayCount).field_0x48 = 0;
  pvVar3 = *(void **)&(this->CurrentPlayCount).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentPlayCount);
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  this->_padding_ = (longlong)&___7IAudioPropertiesSheetAssetUserInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddAssetUserData @ 1486a4a20

void __thiscall USoundBase::AddAssetUserData(USoundBase *this,UAssetUserData *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UAssetUserData>_u_0 TVar5;
  int *this_00;
  UObject *local_res10;
  TObjectPtr<UAssetUserData>_u_0 local_res18;
  UAssetUserData *local_18 [2];
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res10 = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(this->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10);
    }
    TVar5.DebugPtr = (UAssetUserData *)(*pcVar2)(this,&local_res10);
    this_00 = &(this->SoundSubmixSends).ArrayNum;
    if (TVar5.DebugPtr != (UAssetUserData *)0x0) {
      local_res18.DebugPtr = TVar5.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      }
      TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>::Remove
                ((TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *)this_00,
                 (TObjectPtr<UAssetUserData> *)&local_res18.ObjectPtr);
    }
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (((*(UAssetUserData ***)this_00 <= local_18) &&
        (local_18 <
         *(UAssetUserData ***)this_00 +
         *(int *)((longlong)&(this->SourceEffectChain).field0_0x0 + 4))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = *(int *)&(this->SourceEffectChain).field0_0x0;
    piVar1 = (int *)((longlong)&(this->SourceEffectChain).field0_0x0 + 4);
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this_00,piVar1);
      *(int *)&(this->SourceEffectChain).field0_0x0 = iVar4;
    }
    *(int *)&(this->SourceEffectChain).field0_0x0 = iVar4 + 1;
    *(UAssetUserData **)(*(longlong *)this_00 + (longlong)iVar4 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UAssetUserData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// CanBeClusterRoot @ 1486a7fc0

bool __thiscall USoundBase::CanBeClusterRoot(USoundBase *this)

{
  return false;
}

// CanBeInCluster @ 1486a7ff0

bool __thiscall USoundBase::CanBeInCluster(USoundBase *this)

{
  return true;
}

// ComputeMaxDistance @ 1486a9af0

float __thiscall USoundBase::ComputeMaxDistance(USoundBase *this)

{
  FBaseAttenuationSettings *this_00;
  float fVar1;
  
  this_00 = (FBaseAttenuationSettings *)(**(code **)(this->_padding_ + 0x2c8))();
  if (this_00 != (FBaseAttenuationSettings *)0x0) {
    if ((this_00[1]._padding_ & 1) == 0) {
      fVar1 = FAudioDevice::GetMaxWorldDistance();
      return fVar1;
    }
    fVar1 = FBaseAttenuationSettings::GetMaxDimension(this_00);
    if (__real_38d1b717 < fVar1) {
      return fVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001486a9b36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x2d0))(this);
  return fVar1;
}

// CreateParameterTransmitter @ 1486aea60

TSharedPtr<Audio::IParameterTransmitter,1> * __thiscall
USoundBase::CreateParameterTransmitter
          (USoundBase *this,TSharedPtr<Audio::IParameterTransmitter,1> *__return_storage_ptr__,
          FParameterTransmitterInitParams *param_1)

{
  __return_storage_ptr__->Object = (IParameterTransmitter *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetAssetUserDataArray @ 1486baf40

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
USoundBase::GetAssetUserDataArray(USoundBase *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)&(this->SoundSubmixSends).ArrayNum;
}

// GetAssetUserDataOfClass @ 1486baf60

UAssetUserData * __thiscall
USoundBase::GetAssetUserDataOfClass(USoundBase *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < *(int *)&(this->SourceEffectChain).field0_0x0) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&(this->SourceEffectChain).field0_0x0) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)(lVar9 + *(longlong *)&(this->SoundSubmixSends).ArrayNum);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_1486bb00c;
LAB_1486bb03a:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_1486bb03a;
          UE::GC::MarkAsReachable(pUVar7);
LAB_1486bb00c:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_1486bb03a;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1486bb03a;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < *(int *)&(this->SourceEffectChain).field0_0x0);
  }
  return (UAssetUserData *)0x0;
}

// GetAttenuationSettingsToApply @ 1486bb1f0

FSoundAttenuationSettings * __thiscall USoundBase::GetAttenuationSettingsToApply(USoundBase *this)

{
  USoundAttenuation *pUVar1;
  FSoundAttenuationSettings *pFVar2;
  
  pUVar1 = (this->AttenuationSettings).field0_0x0.DebugPtr;
  pFVar2 = (FSoundAttenuationSettings *)0x0;
  if (pUVar1 != (USoundAttenuation *)0x0) {
    pFVar2 = &pUVar1->Attenuation;
  }
  return pFVar2;
}

// GetConcurrencyHandles @ 1486bc6a0

void __thiscall
USoundBase::GetConcurrencyHandles
          (USoundBase *this,TArray<FConcurrencyHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  UAudioSettings *this_00;
  code *pcVar6;
  TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  int iVar9;
  UClass *this_01;
  USoundConcurrency *pUVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [16];
  int local_res18;
  ulonglong local_res20;
  FSoundConcurrencySettings *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
  *local_d8;
  TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
  *local_d0;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  this_01 = Z_Construct_UClass_UAudioSettings_NoRegister();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  this_00 = (UAudioSettings *)(this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  if (this->bOverrideConcurrency != '\0') {
    pFVar12 = (param_1->AllocatorInstance).Data;
    local_e8 = &this->ConcurrencyOverrides;
    uStack_e0 = 0;
    uStack_dc = CONCAT31(uStack_dc._1_3_,1);
    if (((pFVar12 <= (FScriptContainerElement *)&local_e8) &&
        ((FScriptContainerElement *)&local_e8 < pFVar12 + (longlong)*piVar1 * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar9 + 1;
    pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(FSoundConcurrencySettings **)pFVar12 = local_e8;
    *(longlong *)(pFVar12 + 8) = CONCAT44(uStack_dc,uStack_e0);
    return;
  }
  iStack_a8 = *(int *)&(this->ConcurrencySet).Elements.field_0x8;
  iVar13 = *(int *)&(this->ConcurrencySet).Elements.field_0x34;
  if (iStack_a8 == iVar13) {
    if (this_00 == (UAudioSettings *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1549935091604520787>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundBase.cpp"
                         ,0xad,"AudioSettings");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      pUVar10 = UAudioSettings::GetDefaultSoundConcurrency(this_00);
      if (pUVar10 != (USoundConcurrency *)0x0) {
        iVar9 = param_1->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar9 + 1;
        pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(FSoundConcurrencySettings **)pFVar12 = &pUVar10->Concurrency;
        *(undefined4 *)(pFVar12 + 8) = *(undefined4 *)((longlong)&pUVar10->_padding_ + 4);
        pFVar12[0xc] = (FScriptContainerElement)0x0;
      }
    }
  }
  else {
    local_d8 = &this->ConcurrencySet;
    puVar3 = &(this->ConcurrencySet).Elements.field_0x10;
    iVar4 = *(int *)&(this->ConcurrencySet).Elements.field_0x28;
    local_res20 = CONCAT44(local_res20._4_4_,1);
    local_b0 = 0;
    iStack_b4 = 0;
    if (iVar4 != 0) {
      puVar15 = *(uint **)&(this->ConcurrencySet).Elements.field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar3;
      }
      uVar16 = *puVar15;
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar9;
        local_b0 = local_b0 + 0x20;
        iVar9 = iVar9 + 1;
        iStack_b4 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1486bc890;
        uVar16 = puVar15[lVar11 + 1];
      }
      local_res20 = (ulonglong)(-uVar16 & uVar16);
      uVar2 = local_res20 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res18 = (int)lVar11;
      iStack_b4 = local_b0 + -1 + local_res18;
      if (iVar4 < iStack_b4) {
        iStack_b4 = iVar4;
      }
    }
LAB_1486bc890:
    iStack_a8 = iStack_a8 - iVar13;
    local_d0 = &this->ConcurrencySet;
    uVar16 = *(uint *)&(this->ConcurrencySet).Elements.field_0x28;
    uVar17 = uVar16 & 0xffffffe0;
    uStack_c4 = (undefined4)local_res20;
    TStack_98._padding_ = CONCAT44(uStack_c4,iVar9);
    uStack_b8 = 0xffffffff;
    TStack_98.CurrentBitIndex = iStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    uStack_ac = local_54;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    iVar13 = (int)uVar16 >> 5;
    iStack_c8 = iVar9;
    local_c0 = puVar3;
    local_a0 = local_d0;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar5 = *(uint *)&(this->ConcurrencySet).Elements.field_0x28;
    if (uVar16 != uVar5) {
      puVar14 = *(undefined1 **)&(this->ConcurrencySet).Elements.field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar3;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_1486bc9a0;
        uVar16 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar16 = (int)lVar11 + -1 + uVar17;
      if ((int)uVar5 < (int)uVar16) {
        uVar16 = uVar5;
      }
    }
LAB_1486bc9a0:
    while( true ) {
      pTVar7 = local_a0;
      if (*(int *)&(local_a0->Elements).field_0x8 - *(int *)&(local_a0->Elements).field_0x34 !=
          (int)uStack_78) {
        `TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_98.CurrentBitIndex == uVar16) &&
          (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
         (pTVar7 == local_d8)) break;
      lVar11 = *(longlong *)
                (*(longlong *)&pTVar7->Elements + (longlong)TStack_98.CurrentBitIndex * 0x10);
      if (lVar11 != 0) {
        iVar9 = param_1->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar9 + 1;
        pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(longlong *)pFVar12 = lVar11 + 0x28;
        *(undefined4 *)(pFVar12 + 8) = *(undefined4 *)(lVar11 + 0xc);
        pFVar12[0xc] = (FScriptContainerElement)0x0;
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
  }
  return;
}

// GetCurveData @ 1486bd260

UCurveTable * __thiscall USoundBase::GetCurveData(USoundBase *this)

{
  return (UCurveTable *)0x0;
}

// GetDuration @ 1486bdc00

float __thiscall USoundBase::GetDuration(USoundBase *this)

{
  return this->Duration;
}

// GetMaxDistance @ 1486c1320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall USoundBase::GetMaxDistance(USoundBase *this)

{
  double dVar1;
  char cVar2;
  int iVar3;
  USoundAttenuation *pUVar4;
  code *pcVar5;
  bool bVar6;
  FRichCurve *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  undefined1 auStackX_8 [8];
  
  pUVar4 = (this->AttenuationSettings).field0_0x0.DebugPtr;
  if ((pUVar4 == (USoundAttenuation *)0x0) || ((pUVar4->Attenuation).bAttenuate == 0)) {
    fVar12 = FAudioDevice::GetMaxWorldDistance();
    return fVar12;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    WorldMax = FAudioDevice::GetMaxWorldDistance();
    _Init_thread_footer(&::_TSS0);
  }
  fVar12 = *(float *)((longlong)&(pUVar4->Attenuation)._padding_ + 4);
  fVar15 = WorldMax;
  if (fVar12 <= WorldMax) {
    cVar2 = (char)(pUVar4->Attenuation)._padding_;
    fVar15 = fVar12;
    if (cVar2 == '\x04') {
      cVar2 = *(char *)((longlong)&(pUVar4->Attenuation)._padding_ + 2);
      if (cVar2 == '\0') {
        fVar15 = *(float *)((longlong)&(pUVar4->Attenuation)._padding_ + 4);
        if (__real_b8d1b717 <= fVar15) {
          fVar15 = __real_b8d1b717;
        }
        fVar15 = (fVar12 * ___real_c2700000) / fVar15;
      }
      else if (cVar2 == '\x02') {
        fVar15 = WorldMax;
      }
    }
    else if (cVar2 == '\x05') {
      pFVar7 = FRuntimeFloatCurve::GetRichCurveConst
                         ((FRuntimeFloatCurve *)&(pUVar4->Attenuation)._padding_);
      if ((pFVar7 == (FRichCurve *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Curve",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Attenuation.cpp"
                             ,0x4b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar12 = (float)(*pcVar5)();
        return fVar12;
      }
      iVar3 = (pFVar7->Keys).ArrayNum;
      pFVar8 = (FScriptContainerElement *)0x0;
      pFVar9 = (pFVar7->Keys).AllocatorInstance.Data;
      fVar14 = 0.0;
      pFVar10 = pFVar9 + (longlong)iVar3 * 0x1c;
      while( true ) {
        if ((pFVar7->Keys).ArrayNum != iVar3) {
          auStackX_8[0] = 0;
          `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStackX_8);
        }
        if (pFVar9 == pFVar10) break;
        if (fVar14 < *(float *)(pFVar9 + 4)) {
          pFVar8 = pFVar9;
          fVar14 = *(float *)(pFVar9 + 4);
        }
        pFVar9 = pFVar9 + 0x1c;
      }
      if (pFVar8 == (FScriptContainerElement *)0x0) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = *(float *)(pFVar8 + 8);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
      }
      fVar15 = WorldMax;
      if ((float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3a83126f) {
        fVar15 = fVar12 * fVar14;
      }
    }
  }
  cVar2 = *(char *)((longlong)&(pUVar4->Attenuation)._padding_ + 1);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      dVar13 = (double)(pUVar4->Attenuation)._padding_;
      dVar1 = (double)(pUVar4->Attenuation)._padding_;
      if (dVar13 <= dVar1) {
        dVar13 = dVar1;
      }
      fVar15 = (float)(dVar13 + (double)fVar15);
      goto LAB_1475d5293;
    }
    if (cVar2 == '\x02') {
      dVar13 = (double)(pUVar4->Attenuation)._padding_;
      dVar1 = (double)(pUVar4->Attenuation)._padding_;
      if (dVar13 <= dVar1) {
        dVar13 = dVar1;
      }
      dVar1 = (double)(pUVar4->Attenuation)._padding_;
      if (dVar13 <= dVar1) {
        dVar13 = dVar1;
      }
      fVar15 = (float)(dVar13 + (double)fVar15);
      goto LAB_1475d5293;
    }
    if (cVar2 != '\x03') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Attenuation.cpp"
                         ,0x37,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        fVar12 = (float)(*pcVar5)();
        return fVar12;
      }
      goto LAB_1475d5293;
    }
  }
  fVar15 = (float)((double)fVar15 + (double)(pUVar4->Attenuation)._padding_);
LAB_1475d5293:
  fVar12 = FAudioDevice::GetMaxWorldDistance();
  if (fVar15 <= fVar12) {
    fVar12 = fVar15;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  return fVar12;
}

// GetPitchMultiplier @ 1486c3730

float __thiscall USoundBase::GetPitchMultiplier(USoundBase *this)

{
  return __real_3f800000;
}

// GetPriority @ 1486c3b80

float __thiscall USoundBase::GetPriority(USoundBase *this)

{
  float fVar1;
  
  fVar1 = this->Priority;
  if (__real_42c80000 <= this->Priority) {
    fVar1 = __real_42c80000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// GetPrivateStaticClass @ 1486c40a0

UClass * __cdecl USoundBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundBase",&Z_Registration_Info_UClass_USoundBase.InnerSingleton,
               StaticRegisterNativesUSoundBase,0x180,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None
               ,L"Engine",InternalConstructor<USoundBase>,InternalVTableHelperCtorCaller<USoundBase>
               ,local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundBase.InnerSingleton;
}

// GetSoundClass @ 1486c7d40

USoundClass * __thiscall USoundBase::GetSoundClass(USoundBase *this)

{
  UAudioSettings *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *this_01;
  USoundClass *pUVar3;
  
  pUVar3 = (this->SoundClassObject).field0_0x0.DebugPtr;
  if (pUVar3 != (USoundClass *)0x0) {
    return pUVar3;
  }
  this_01 = Z_Construct_UClass_UAudioSettings_NoRegister();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  this_00 = (UAudioSettings *)(this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  if (this_00 == (UAudioSettings *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1549935091604520839>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundBase.cpp"
                       ,0x79,"AudioSettings");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (USoundClass *)(*pcVar1)();
      return pUVar3;
    }
    return (USoundClass *)0x0;
  }
  pUVar3 = UAudioSettings::GetDefaultSoundClass(this_00);
  return pUVar3;
}

// GetSoundSourceBusSends @ 1486c7ff0

void __thiscall
USoundBase::GetSoundSourceBusSends
          (USoundBase *this,EBusSendType param_1,
          TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  
  lVar1 = 0x158;
  if (param_1 != PreEffect) {
    lVar1 = 0x148;
  }
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_>::operator=
            (param_2,(TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&this->_padding_ + lVar1));
  return;
}

// GetSoundSubmix @ 1486c8020

USoundSubmixBase * __thiscall USoundBase::GetSoundSubmix(USoundBase *this)

{
  return (this->SoundSubmixObject).field0_0x0.DebugPtr;
}

// GetSoundSubmixSends @ 1486c8030

void __thiscall
USoundBase::GetSoundSubmixSends
          (USoundBase *this,TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_>::operator=
            (param_1,&this->SoundSubmixSends);
  return;
}

// GetSoundWavesWithCookedAnalysisData @ 1486c80c0

bool __thiscall
USoundBase::GetSoundWavesWithCookedAnalysisData
          (USoundBase *this,TArray<USoundWave_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// GetVolumeMultiplier @ 1486c9a90

float __thiscall USoundBase::GetVolumeMultiplier(USoundBase *this)

{
  return __real_3f800000;
}

// HasAttenuationNode @ 1486ca830

bool __thiscall USoundBase::HasAttenuationNode(USoundBase *this)

{
  return false;
}

// HasConcatenatorNode @ 1486cad60

bool __thiscall USoundBase::HasConcatenatorNode(USoundBase *this)

{
  return this->bHasConcatenatorNode;
}

// HasDelayNode @ 1486cb180

bool __thiscall USoundBase::HasDelayNode(USoundBase *this)

{
  return this->bHasDelayNode;
}

// InitParameters @ 1486cc770

void __thiscall
USoundBase::InitParameters
          (USoundBase *this,TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1,
          FName param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 0xa0;
    do {
      pcVar1 = *(code **)(this->_padding_ + 0x388);
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      cVar3 = (*pcVar1)(this,(param_1->AllocatorInstance).Data + lVar6);
      if (cVar3 == '\0') {
        uVar4 = 0;
        if ((int)uVar5 < param_1->ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(param_1,uVar5);
      }
      lVar6 = lVar6 + -0xa0;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// IsLooping @ 1486d1390

bool __thiscall USoundBase::IsLooping(USoundBase *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0x2d8))();
  return __real_461c4000 <= fVar1;
}

// IsOneShot @ 1486d14b0

bool __thiscall USoundBase::IsOneShot(USoundBase *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x310))();
  return cVar1 == '\0';
}

// IsParameterValid @ 1486d14d0

bool __thiscall USoundBase::IsParameterValid(USoundBase *this,FAudioParameter *param_1)

{
  if (((param_1->ParamName != (FName)0x0) && (param_1->ParamType != None)) &&
     (param_1->ParamType != NoneArray)) {
    return true;
  }
  return false;
}

// IsPlayWhenSilent @ 1486d1510

bool __thiscall USoundBase::IsPlayWhenSilent(USoundBase *this)

{
  return this->VirtualizationMode == PlayWhenSilent;
}

// IsPlayable @ 1486d15e0

bool __thiscall USoundBase::IsPlayable(USoundBase *this)

{
  return false;
}

// Parse @ 1486d8520

void __thiscall
USoundBase::Parse(USoundBase *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
                 FSoundParseParameters *param_4,
                 TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  return;
}

// PreSave @ 1486e1e10

void __thiscall USoundBase::PreSave(USoundBase *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// RemoveUserDataOfClass @ 1486e9460

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
USoundBase::RemoveUserDataOfClass(USoundBase *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < *(int *)&(this->SourceEffectChain).field0_0x0) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < *(int *)&(this->SourceEffectChain).field0_0x0) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(lVar9 + *(longlong *)&(this->SoundSubmixSends).ArrayNum);
      if (lVar2 != 0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_1486e950c;
LAB_1486e953a:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_1486e953a;
          UE::GC::MarkAsReachable(pUVar7);
LAB_1486e950c:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_1486e953a;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_1486e953a;
        }
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar2 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
            &pUVar7[1].field_0x8)) {
          TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *)
                     &(this->SoundSubmixSends).ArrayNum,uVar8,Default);
          return;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < *(int *)&(this->SourceEffectChain).field0_0x0);
  }
  return;
}

// Serialize @ 1486ec9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USoundBase::Serialize(USoundBase *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 1486ec9e0

void __thiscall USoundBase::Serialize(USoundBase *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// ShouldApplyInteriorVolumes @ 1486f0c50

bool __thiscall USoundBase::ShouldApplyInteriorVolumes(USoundBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x330))();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x50) & 0x20) != 0)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUSoundBase @ 1486f17d0

void __cdecl USoundBase::StaticRegisterNativesUSoundBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USoundBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsSubtitles @ 1486f2390

bool __thiscall USoundBase::SupportsSubtitles(USoundBase *this)

{
  return false;
}

// execIsAttenuationSettingsEditable @ 1486faf30

void __cdecl
USoundBase::execIsAttenuationSettingsEditable(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x3a0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

