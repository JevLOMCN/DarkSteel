// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 67

// StaticClass @ 146535a60

UClass * __cdecl USynthComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SynthComponent",
               &Z_Registration_Info_UClass_USynthComponent.InnerSingleton,
               StaticRegisterNativesUSynthComponent,0x8c0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USynthComponent>,InternalVTableHelperCtorCaller<USynthComponent>,
               local_res8,USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthComponent.InnerSingleton;
}

// USynthComponent @ 14653f110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USynthComponent * __thiscall
USynthComponent::USynthComponent(USynthComponent *this,FVTableHelper *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  pTVar2 = (TNode *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->AttenuationSettings).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&this->AttenuationOverrides);
  (this->ConcurrencySettings_DEPRECATED).field0_0x0.DebugPtr = (USoundConcurrency *)0x0;
  *(undefined8 *)&(this->ConcurrencySet).Elements = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
  (this->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = 0;
  FSoundModulationDefaultRoutingSettings::FSoundModulationDefaultRoutingSettings
            (&this->ModulationRouting);
  (this->SoundClass).field0_0x0.DebugPtr = (USoundClass *)0x0;
  (this->SourceEffectChain).field0_0x0.DebugPtr = (USoundEffectSourcePresetChain *)0x0;
  (this->SoundSubmix).field0_0x0.DebugPtr = (USoundSubmixBase *)0x0;
  (this->SoundSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundSubmixSends).ArrayNum = 0;
  (this->SoundSubmixSends).ArrayMax = 0;
  (this->BusSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BusSends).ArrayNum = 0;
  (this->BusSends).ArrayMax = 0;
  (this->PreEffectBusSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreEffectBusSends).ArrayNum = 0;
  (this->PreEffectBusSends).ArrayMax = 0;
  *(undefined8 *)&this->OnAudioEnvelopeValue = 0;
  *(undefined8 *)&(this->OnAudioEnvelopeValue).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioEnvelopeValue).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioEnvelopeValueNative = 0;
  *(undefined8 *)&(this->OnAudioEnvelopeValueNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioEnvelopeValueNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnAudioEnvelopeValueNative).field_0x18 = 2;
  (this->Synth).field0_0x0.DebugPtr = (USynthSound *)0x0;
  (this->AudioComponent).field0_0x0.DebugPtr = (UAudioComponent *)0x0;
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    pTVar1->_padding_ = 0;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x10 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x18 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x20 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x28 = 0;
    pTVar1->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x28 = 0;
    pTVar2 = pTVar1;
  }
  (this->CommandQueue).Tail = pTVar2;
  (this->CommandQueue).Head = pTVar2;
  (this->SoundGenerator).Object = (ISoundGenerator *)0x0;
  (this->SoundGenerator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USynthComponent @ 14653f290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USynthComponent * __thiscall
USynthComponent::USynthComponent(USynthComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  pTVar4 = (TNode *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->AttenuationSettings).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&this->AttenuationOverrides);
  (this->ConcurrencySettings_DEPRECATED).field0_0x0.DebugPtr = (USoundConcurrency *)0x0;
  *(undefined8 *)&(this->ConcurrencySet).Elements = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
  (this->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = 0;
  FSoundModulationDefaultRoutingSettings::FSoundModulationDefaultRoutingSettings
            (&this->ModulationRouting);
  (this->SoundClass).field0_0x0.DebugPtr = (USoundClass *)0x0;
  (this->SourceEffectChain).field0_0x0.DebugPtr = (USoundEffectSourcePresetChain *)0x0;
  (this->SoundSubmix).field0_0x0.DebugPtr = (USoundSubmixBase *)0x0;
  (this->SoundSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundSubmixSends).ArrayNum = 0;
  (this->SoundSubmixSends).ArrayMax = 0;
  (this->BusSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BusSends).ArrayNum = 0;
  (this->BusSends).ArrayMax = 0;
  (this->PreEffectBusSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreEffectBusSends).ArrayNum = 0;
  (this->PreEffectBusSends).ArrayMax = 0;
  *(undefined8 *)&this->OnAudioEnvelopeValue = 0;
  *(undefined8 *)&(this->OnAudioEnvelopeValue).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioEnvelopeValue).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioEnvelopeValueNative = 0;
  *(undefined8 *)&(this->OnAudioEnvelopeValueNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioEnvelopeValueNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnAudioEnvelopeValueNative).field_0x18 = 2;
  (this->Synth).field0_0x0.DebugPtr = (USynthSound *)0x0;
  (this->AudioComponent).field0_0x0.DebugPtr = (UAudioComponent *)0x0;
  pTVar3 = ::operator_new(0x40);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    pTVar3->_padding_ = 0;
    *(undefined8 *)&pTVar3->Item = 0;
    *(undefined8 *)&(pTVar3->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar3->Item).field_0x10 = 0;
    *(undefined8 *)&(pTVar3->Item).field_0x18 = 0;
    *(undefined8 *)&(pTVar3->Item).field_0x20 = 0;
    *(undefined8 *)&(pTVar3->Item).field_0x28 = 0;
    pTVar3->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar3->Item = 0;
    *(undefined8 *)&(pTVar3->Item).field_0x28 = 0;
    pTVar4 = pTVar3;
  }
  (this->CommandQueue).Tail = pTVar4;
  (this->CommandQueue).Head = pTVar4;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xf7;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 1;
  this->bStopWhenOwnerDestroyed = '\x01';
  this->bEnableBusSends = 1;
  this->bEnableSubmixSends = 1;
  this->bEnableBaseSubmix = 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x20;
  this->bIsUISound = '\0';
  this->bAlwaysPlay = '\x01';
  (this->SoundGenerator).Object = (ISoundGenerator *)0x0;
  (this->SoundGenerator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsSynthPlaying = false;
  this->bIsInitialized = false;
  (this->Synth).field0_0x0.DebugPtr = (USynthSound *)0x0;
  this->PreferredBufferLength = 0x400;
  return this;
}

// ~USynthComponent @ 146541590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthComponent::~USynthComponent(USynthComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SoundGenerator).SharedReferenceCount.ReferenceController);
  TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>
            (&this->CommandQueue);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAudioEnvelopeValueNative).field_0x8,
             *(int *)&(this->OnAudioEnvelopeValueNative).field_0x10);
  pvVar1 = *(void **)&(this->OnAudioEnvelopeValueNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioEnvelopeValueNative);
  pvVar1 = *(void **)&(this->OnAudioEnvelopeValue).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioEnvelopeValue);
  DestructItems<FSoundSourceBusSendInfo,int>
            ((FSoundSourceBusSendInfo *)(this->PreEffectBusSends).AllocatorInstance.Data,
             (this->PreEffectBusSends).ArrayNum);
  pFVar2 = (this->PreEffectBusSends).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FSoundSourceBusSendInfo,int>
            ((FSoundSourceBusSendInfo *)(this->BusSends).AllocatorInstance.Data,
             (this->BusSends).ArrayNum);
  pFVar2 = (this->BusSends).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FSoundSubmixSendInfo,int>
            ((FSoundSubmixSendInfo *)(this->SoundSubmixSends).AllocatorInstance.Data,
             (this->SoundSubmixSends).ArrayNum);
  pFVar2 = (this->SoundSubmixSends).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FSoundModulationDefaultRoutingSettings::~FSoundModulationDefaultRoutingSettings
            (&this->ModulationRouting);
  (this->ConcurrencySet).HashSize = 0;
  FVar3 = (this->ConcurrencySet).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ConcurrencySet).Elements);
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&this->AttenuationOverrides);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// Activate @ 146545730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthComponent::Activate(USynthComponent *this,bool param_1)

{
  code *pcVar1;
  FName FVar2;
  char cVar3;
  bool bVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  if ((!param_1) && (cVar3 = (**(code **)(this->_padding_ + 0x330))(), cVar3 == '\0')) {
    return;
  }
  Start(this);
  if ((this->_padding_ & 0x100000) != 0) {
    local_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnComponentActivated");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::DelegateFName;
      bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DelegateOwner->IsValidLowLevelFast(false)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                             ,0xd7,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pTVar5 = FSparseDelegateStorage::GetSharedMulticastDelegate(&local_18,(UObject *)this,FVar2);
      local_20.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
      local_38 = pTVar5->Object;
      if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_20.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    if (local_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      if ((local_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FActorComponentActivatedSignature_DelegateWrapper(local_38,(UActorComponent *)this,param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
  }
  return;
}

// AdjustVolume @ 146547580

void __thiscall
USynthComponent::AdjustVolume
          (USynthComponent *this,float param_1,float param_2,EAudioFaderCurve param_3)

{
  UAudioComponent *this_00;
  
  this_00 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (this_00 == (UAudioComponent *)0x0) {
    return;
  }
  UAudioComponent::AdjustVolumeInternal(this_00,param_1,param_2,false,param_3);
  return;
}

// BeginDestroy @ 1465478d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthComponent::BeginDestroy(USynthComponent *this)

{
  USceneComponent::BeginDestroy((USceneComponent *)this);
  Stop(this);
  return;
}

// CreateAudioComponent @ 14654c4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthComponent::CreateAudioComponent(USynthComponent *this)

{
  undefined1 *puVar1;
  bool bVar2;
  UClass *pUVar3;
  UAudioComponent *pUVar4;
  UWorld *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  USynthComponent *local_90;
  longlong local_88;
  undefined4 local_80;
  undefined1 local_78;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->AudioComponent).field0_0x0.DebugPtr == (UAudioComponent *)0x0) {
    local_b8._0_8_ = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UAudioComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)(local_b8 + 0x20),pUVar3);
    local_68 = 0;
    lStack_60 = 0;
    local_88 = 0;
    local_80 = 0x100048;
    local_70 = 0;
    local_78 = 0;
    local_90 = this;
    pUVar4 = (UAudioComponent *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_b8 + 0x20));
    if (local_58 != 0) {
      plVar6 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar6 = local_30;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UAudioComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->AudioComponent).field0_0x0.DebugPtr = pUVar4;
    pUVar4->field_0xb9 = *(undefined1 *)((longlong)&this->_padding_ + 1);
    local_b8._0_8_ = OnAudioComponentEnvelopeValue;
    local_b8._8_4_ = 0;
    local_b8._24_8_ = (ulonglong)(uint)local_b8._12_4_ << 0x20;
    local_b8._16_8_ = OnAudioComponentEnvelopeValue;
    TMulticastDelegateRegistration<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
    ::AddUObject<USynthComponent>
              ((TMulticastDelegateRegistration<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
                *)&((this->AudioComponent).field0_0x0.DebugPtr)->OnAudioSingleEnvelopeValueNative,
               (USynthComponent *)local_b8,(pmf_56345dd6 *)this);
    pUVar4 = (this->AudioComponent).field0_0x0.DebugPtr;
    if (((((TObjectPtr<USceneComponent> *)&pUVar4->field_0xd0)->field0_0x0).DebugPtr ==
         (USceneComponent *)0x0) &&
       (bVar2 = USceneComponent::IsAttachedTo((USceneComponent *)pUVar4,(USceneComponent *)this),
       !bVar2)) {
      if (((AActor *)this->_padding_ == (AActor *)0x0) ||
         (pUVar5 = AActor::GetWorld((AActor *)this->_padding_), pUVar5 == (UWorld *)0x0)) {
        pUVar5 = (UWorld *)this->_padding_;
        if (pUVar5 == (UWorld *)0x0) {
          pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
          pUVar4 = (this->AudioComponent).field0_0x0.DebugPtr;
          if (pUVar5 == (UWorld *)0x0) {
            local_b8._0_8_ = 0;
            USceneComponent::SetupAttachment
                      ((USceneComponent *)pUVar4,(USceneComponent *)this,(FName)0x0);
            goto LAB_14654c6c2;
          }
        }
        else {
          pUVar4 = (this->AudioComponent).field0_0x0.DebugPtr;
        }
        UActorComponent::RegisterComponentWithWorld
                  ((UActorComponent *)pUVar4,pUVar5,(FRegisterComponentContext *)0x0);
        pUVar4 = (this->AudioComponent).field0_0x0.DebugPtr;
        local_b8._0_8_ = 0;
        (**(code **)(*(longlong *)pUVar4 + 0x508))
                  (pUVar4,this,&FAttachmentTransformRules::KeepRelativeTransform,0);
      }
      else {
        pUVar4 = (this->AudioComponent).field0_0x0.DebugPtr;
        local_b8._0_8_ = 0;
        (**(code **)(*(longlong *)pUVar4 + 0x508))
                  (pUVar4,this,&FAttachmentTransformRules::KeepRelativeTransform,0);
        UActorComponent::RegisterComponent
                  ((UActorComponent *)(this->AudioComponent).field0_0x0.DebugPtr);
      }
    }
  }
LAB_14654c6c2:
  pUVar4 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (pUVar4 != (UAudioComponent *)0x0) {
    puVar1 = &pUVar4->field_0x9a;
    *puVar1 = *puVar1 & 0xf7;
    ((this->AudioComponent).field0_0x0.DebugPtr)->bStopWhenOwnerDestroyed = '\x01';
    ((this->AudioComponent).field0_0x0.DebugPtr)->bShouldRemainActiveIfDropped = '\x01';
    ((this->AudioComponent).field0_0x0.DebugPtr)->field_0x1ab = 2;
    ((this->AudioComponent).field0_0x0.DebugPtr)->EnvelopeFollowerAttackTime =
         this->EnvelopeFollowerAttackTime;
    ((this->AudioComponent).field0_0x0.DebugPtr)->EnvelopeFollowerReleaseTime =
         this->EnvelopeFollowerReleaseTime;
    pUVar4 = (this->AudioComponent).field0_0x0.DebugPtr;
    pUVar4->bAlwaysPlay = this->bAlwaysPlay;
  }
  return;
}

// CreateSoundGenerator @ 146550c90

TSharedPtr<ISoundGenerator,1> * __thiscall
USynthComponent::CreateSoundGenerator
          (USynthComponent *this,TSharedPtr<ISoundGenerator,1> *__return_storage_ptr__,
          FSoundGeneratorInitParams *param_1)

{
  __return_storage_ptr__->Object = (ISoundGenerator *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateSoundGeneratorInternal @ 146550dc0

TSharedPtr<ISoundGenerator,1> * __thiscall
USynthComponent::CreateSoundGeneratorInternal
          (USynthComponent *this,TSharedPtr<ISoundGenerator,1> *__return_storage_ptr__,
          FSoundGeneratorInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  TSharedPtr<ISoundGenerator,1> *pTVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  FLLMScope::FLLMScope(local_res8,AudioSynthesis,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AudioSynthesis,true);
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x680))(this,local_18,param_1);
  pTVar3 = &this->SoundGenerator;
  if (pTVar3 != (TSharedPtr<ISoundGenerator,1> *)puVar2) {
    pTVar3->Object = (ISoundGenerator *)*puVar2;
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SoundGenerator).SharedReferenceCount,(FSharedReferencer<1> *)(puVar2 + 1));
  }
  __return_storage_ptr__->Object = pTVar3->Object;
  pTVar1 = (this->SoundGenerator).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Deactivate @ 146550e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthComponent::Deactivate(USynthComponent *this)

{
  code *pcVar1;
  FName FVar2;
  char cVar3;
  bool bVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  cVar3 = (**(code **)(this->_padding_ + 0x330))();
  if (cVar3 == '\0') {
    Stop(this);
    if ((this->_padding_ & 0x100000) == 0) {
      local_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) <
            `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__) {
          _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
          if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::_thread_safe_static_guard_0__ == -1) {
            ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                            ::__l2::DelegateFName,"OnComponentDeactivated");
            _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
        }
        FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                ::__l2::DelegateFName;
        bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
        if (!bVar4) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DelegateOwner->IsValidLowLevelFast(false)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                             ,0xd7,L"");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pTVar5 = FSparseDelegateStorage::GetSharedMulticastDelegate(&local_18,(UObject *)this,FVar2)
        ;
        local_20.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
        local_38 = pTVar5->Object;
        if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_20.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&local_20);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
      if (local_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
        if (local_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        FActorComponentDeactivateSignature_DelegateWrapper(local_38,(UActorComponent *)this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
    }
  }
  return;
}

// EndPlay @ 1465536e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthComponent::EndPlay(USynthComponent *this,Type param_1)

{
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  if (((this->_padding_ != 0) && ((param_1 & ~RemovedFromWorld) == Destroyed)) &&
     (param_1 != EndPlayInEditor)) {
    Stop(this);
  }
  return;
}

// FadeIn @ 146553a50

void __thiscall
USynthComponent::FadeIn
          (USynthComponent *this,float param_1,float param_2,float param_3,EAudioFaderCurve param_4)

{
  UAudioComponent *pUVar1;
  
  pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UAudioComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146553a6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x640))(pUVar1,*(code **)(*(longlong *)pUVar1 + 0x640));
    return;
  }
  return;
}

// FadeOut @ 146553a80

void __thiscall
USynthComponent::FadeOut(USynthComponent *this,float param_1,float param_2,EAudioFaderCurve param_3)

{
  UAudioComponent *pUVar1;
  
  pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UAudioComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146553a8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x648))();
    return;
  }
  return;
}

// GetAudioComponent @ 146555140

UAudioComponent * __thiscall USynthComponent::GetAudioComponent(USynthComponent *this)

{
  return (this->AudioComponent).field0_0x0.DebugPtr;
}

// GetAudioDevice @ 146555150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAudioDevice * __thiscall USynthComponent::GetAudioDevice(USynthComponent *this)

{
  UAudioComponent *pUVar1;
  UWorld *pUVar2;
  FAudioDevice *pFVar3;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar2 == (UWorld *)0x0) {
      pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
      if (pUVar1 != (UAudioComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014655519b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pFVar3 = (FAudioDevice *)(**(code **)(*(longlong *)&pUVar1->field_0x250 + 0x88))();
        return pFVar3;
      }
      return (FAudioDevice *)0x0;
    }
  }
  pFVar3 = FAudioDeviceHandle::GetAudioDevice(&pUVar2->AudioDeviceHandle);
  return pFVar3;
}

// GetModulators @ 146558f60

TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *
__thiscall
USynthComponent::GetModulators
          (USynthComponent *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,EModulationDestination param_1)

{
  UAudioComponent *this_00;
  
  this_00 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (this_00 != (UAudioComponent *)0x0) {
    UAudioComponent::GetModulators(this_00,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = 0;
  (__return_storage_ptr__->Hash).InlineData[0] = '\0';
  (__return_storage_ptr__->Hash).InlineData[1] = '\0';
  (__return_storage_ptr__->Hash).InlineData[2] = '\0';
  (__return_storage_ptr__->Hash).InlineData[3] = '\0';
  (__return_storage_ptr__->Hash)._padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->HashSize = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14655a520

UClass * __cdecl USynthComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SynthComponent",
               &Z_Registration_Info_UClass_USynthComponent.InnerSingleton,
               StaticRegisterNativesUSynthComponent,0x8c0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USynthComponent>,InternalVTableHelperCtorCaller<USynthComponent>,
               local_res8,USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthComponent.InnerSingleton;
}

// GetSoundClass @ 14655ab00

USoundClass * __thiscall USynthComponent::GetSoundClass(USynthComponent *this)

{
  UAudioSettings *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *this_01;
  USoundClass *pUVar3;
  
  pUVar3 = (this->SoundClass).field0_0x0.DebugPtr;
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
                      (&bGEnsureHasExecuted<6345570118323405137>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Components\\SynthComponent.cpp"
                       ,0x151,"AudioSettings");
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

// Init @ 14655e310

bool __thiscall USynthComponent::Init(USynthComponent *this,int *param_1)

{
  return true;
}

// Initialize @ 146560910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall USynthComponent::Initialize(USynthComponent *this,int param_1)

{
  byte *pbVar1;
  USoundEffectSourcePresetChain *pUVar2;
  USoundSubmixBase *pUVar3;
  int iVar4;
  int iVar5;
  FAudioDevice *pFVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  USynthSound *pUVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  FName local_c0;
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  CreateAudioComponent(this);
  local_c8[0] = param_1;
  if (param_1 == -1) {
    pFVar6 = GetAudioDevice(this);
    if (pFVar6 != (FAudioDevice *)0x0) {
      local_c8[0] = pFVar6->SampleRate;
    }
    if (local_c8[0] == -1) {
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x650))(this,local_c8);
  if (((this->NumChannels < 0) || (8 < this->NumChannels)) && (1 < (byte)LogAudioMixer._0_1_)) {
    local_c0 = (FName)this->_padding_;
    ::FName::ToString(&local_c0,&local_b8);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  pUVar9 = (this->Synth).field0_0x0.DebugPtr;
  iVar10 = 8;
  if (this->NumChannels < 8) {
    iVar10 = this->NumChannels;
  }
  iVar5 = 1;
  if (1 < iVar10) {
    iVar5 = iVar10;
  }
  this->NumChannels = iVar5;
  if (pUVar9 == (USynthSound *)0x0) {
    pUVar7 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar7,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = USynthSound::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar8);
    local_a8._8_8_ = pUVar7;
    pUVar9 = (USynthSound *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (USynthSound *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->Synth).field0_0x0.DebugPtr = pUVar9;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (this->SourceEffectChain).field0_0x0.DebugPtr,
     pUVar2 != (USoundEffectSourcePresetChain *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar9->_padding_ = (longlong)(this->SourceEffectChain).field0_0x0;
  pUVar9 = (this->Synth).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (this->SoundSubmix).field0_0x0.DebugPtr, pUVar3 != (USoundSubmixBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar9->_padding_ = (longlong)(this->SoundSubmix).field0_0x0;
  TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *)
             &((this->Synth).field0_0x0.DebugPtr)->_padding_,&this->SoundSubmixSends);
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *)
             &((this->Synth).field0_0x0.DebugPtr)->_padding_,&this->BusSends);
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *)
             &((this->Synth).field0_0x0.DebugPtr)->_padding_,&this->PreEffectBusSends);
  iVar4 = local_c8[0];
  pUVar9 = (this->Synth).field0_0x0.DebugPtr;
  plVar11 = &pUVar9->_padding_;
  *(byte *)plVar11 = (byte)*plVar11 ^ (this->field_0x254 << 2 ^ (byte)pUVar9->_padding_) & 4;
  pUVar9 = (this->Synth).field0_0x0.DebugPtr;
  plVar11 = &pUVar9->_padding_;
  *(byte *)plVar11 =
       (byte)*plVar11 ^
       ((char)(*(uint *)&this->field_0x254 >> 1) << 3 ^ (byte)pUVar9->_padding_) & 8;
  pUVar9 = (this->Synth).field0_0x0.DebugPtr;
  plVar11 = &pUVar9->_padding_;
  *(byte *)plVar11 =
       (byte)*plVar11 ^
       ((char)(*(uint *)&this->field_0x254 >> 2) << 4 ^ (byte)pUVar9->_padding_) & 0x10;
  pUVar9 = (this->Synth).field0_0x0.DebugPtr;
  iVar10 = this->PreferredBufferLength;
  iVar5 = this->NumChannels;
  local_c0 = (FName)this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&(pUVar9->OwningSynthComponent).WeakPtr,(FObjectPtr)&local_c0);
  pbVar1 = (byte *)((longlong)&pUVar9->_padding_ + 4);
  *pbVar1 = *pbVar1 | 8;
  pbVar1 = (byte *)((longlong)&pUVar9->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  *(undefined1 *)((longlong)&pUVar9->_padding_ + 1) = 1;
  *(int *)((longlong)&pUVar9->_padding_ + 4) = iVar5;
  *(int *)&pUVar9->_padding_ = iVar10;
  *(undefined4 *)((longlong)&pUVar9->_padding_ + 4) = 0x461c4000;
  *(int *)&pUVar9->_padding_ = iVar4;
  GetAudioDevice(this);
  return;
}

// IsPlaying @ 146561360

bool __thiscall USynthComponent::IsPlaying(USynthComponent *this)

{
  UAudioComponent *pUVar1;
  char cVar2;
  
  pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UAudioComponent *)0x0) {
    cVar2 = (**(code **)(*(longlong *)&pUVar1->field_0x250 + 0xa8))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsReadyForOwnerToAutoDestroy @ 1465613c0

bool __thiscall USynthComponent::IsReadyForOwnerToAutoDestroy(USynthComponent *this)

{
  atomic<unsigned_char> *this_00;
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  UAudioComponent *pUVar3;
  USynthSound *pUVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  
  pUVar3 = (this->AudioComponent).field0_0x0.DebugPtr;
  if ((pUVar3 == (UAudioComponent *)0x0) ||
     (cVar8 = (**(code **)(*(longlong *)&pUVar3->field_0x250 + 0xa8))(), cVar8 == '\0')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  pUVar4 = (this->Synth).field0_0x0.DebugPtr;
  if (pUVar4 != (USynthSound *)0x0) {
    this_00 = (atomic<unsigned_char> *)((longlong)&pUVar4->_padding_ + 7);
    LOCK();
    FVar1.State = *this_00;
    if (FVar1.State == (atomic<unsigned_char>)0x0) {
      *this_00 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar1.State != (atomic<unsigned_char>)0x0) {
      UE::FMutex::LockSlow((FMutex *)this_00);
    }
    lVar7 = pUVar4->_padding_;
    LOCK();
    aVar2 = *this_00;
    *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)this_00);
    }
    if (0 < (int)lVar7) {
      bVar6 = false;
      goto LAB_146561450;
    }
  }
  bVar6 = true;
LAB_146561450:
  if ((bVar5) && (bVar6)) {
    return true;
  }
  return false;
}

// OnAudioComponentEnvelopeValue @ 146562c80

void __thiscall
USynthComponent::OnAudioComponentEnvelopeValue
          (USynthComponent *this,UAudioComponent *param_1,USoundWave *param_2,float param_3)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
  *this_00;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  float local_78 [2];
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAudioEnvelopeValue,
             &local_40);
  iVar2 = *(int *)&(this->OnAudioEnvelopeValue).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  if (0 < iVar2) {
    local_78[0] = param_3;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnAudioEnvelopeValue,
               local_78);
  }
  this_00 = &this->OnAudioEnvelopeValueNative;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_58);
  iVar2 = *(int *)&(this->OnAudioEnvelopeValueNative).field_0x10;
  plVar10 = *(longlong **)&(this->OnAudioEnvelopeValueNative).field_0x8;
  plVar11 = plVar10 + (longlong)iVar2 * 2;
  while( true ) {
    if (*(int *)&(this->OnAudioEnvelopeValueNative).field_0x10 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar10 == plVar11) break;
    if (((int)plVar10[1] != 0) && (*plVar10 != 0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_70);
      puVar1 = &(this->OnAudioEnvelopeValueNative).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar9 = *(int *)&(this->OnAudioEnvelopeValueNative).field_0x10 - 1;
      if (-1 < (int)uVar9) {
        lVar12 = (longlong)(int)uVar9 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar9 < *(int *)&(this->OnAudioEnvelopeValueNative).field_0x10) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar3 = *(longlong *)&(this->OnAudioEnvelopeValueNative).field_0x8;
          if (((*(int *)(lVar12 + 8 + lVar3) == 0) ||
              (plVar10 = *(longlong **)(lVar12 + lVar3), plVar10 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar10 + 0x68))(plVar10,param_1,param_3), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar12 = lVar12 + -0x10;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      puVar1 = &(this->OnAudioEnvelopeValueNative).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      return;
    }
    plVar10 = plVar10 + 2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  return;
}

// OnBeginGenerate @ 146562e80

void __thiscall USynthComponent::OnBeginGenerate(USynthComponent *this)

{
  return;
}

// OnEndGenerate @ 146563120

void __thiscall USynthComponent::OnEndGenerate(USynthComponent *this)

{
  return;
}

// OnGenerateAudio @ 1465638a0

int __thiscall USynthComponent::OnGenerateAudio(USynthComponent *this,float *param_1,int param_2)

{
  return 0;
}

// OnGeneratePCMAudio @ 1465638b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall USynthComponent::OnGeneratePCMAudio(USynthComponent *this,float *param_1,int param_2)

{
  TNode *pTVar1;
  TNode *pTVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStackY_d8 [32];
  FLLMScope local_a8 [2];
  FMemScope local_a0;
  code *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  FLLMScope::FLLMScope(local_a8,AudioSynthesis,false,None,Default,true);
  FMemScope::FMemScope(&local_a0,AudioSynthesis,true);
  local_98 = (code *)0x0;
  plStack_70 = (longlong *)0x0;
  while (plVar15 = plStack_70, uVar8 = local_78, uVar13 = uStack_80, lVar10 = local_88,
        pTVar1 = ((this->CommandQueue).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
    pcVar3 = *(code **)&pTVar1->Item;
    uVar9 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    local_88 = *(longlong *)&(pTVar1->Item).field_0x10;
    uStack_80 = *(undefined8 *)&(pTVar1->Item).field_0x18;
    local_78 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_70 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(code **)&pTVar1->Item = local_98;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_90;
    *(longlong *)&(pTVar1->Item).field_0x10 = lVar10;
    *(undefined8 *)&(pTVar1->Item).field_0x18 = uVar13;
    *(undefined8 *)&(pTVar1->Item).field_0x20 = uVar8;
    *(longlong **)&(pTVar1->Item).field_0x28 = plVar15;
    pTVar2 = (this->CommandQueue).Tail;
    (this->CommandQueue).Tail = pTVar1;
    local_68 = *(longlong *)&pTVar1->Item;
    uVar8 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    uVar4 = *(undefined4 *)&(pTVar1->Item).field_0x10;
    uVar5 = *(undefined4 *)&(pTVar1->Item).field_0x14;
    uVar6 = *(undefined4 *)&(pTVar1->Item).field_0x18;
    uVar7 = *(undefined4 *)&(pTVar1->Item).field_0x1c;
    uVar13 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_40 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_60;
    *(undefined4 *)&(pTVar1->Item).field_0x10 = local_58;
    *(undefined4 *)&(pTVar1->Item).field_0x14 = uStack_54;
    *(undefined4 *)&(pTVar1->Item).field_0x18 = uStack_50;
    *(undefined4 *)&(pTVar1->Item).field_0x1c = uStack_4c;
    *(undefined4 *)&(pTVar1->Item).field_0x20 = (undefined4)local_48;
    *(undefined4 *)&(pTVar1->Item).field_0x24 = local_48._4_4_;
    *(undefined4 *)&(pTVar1->Item).field_0x28 = 0;
    *(undefined4 *)&(pTVar1->Item).field_0x2c = 0;
    uStack_60 = uVar8;
    local_58 = uVar4;
    uStack_54 = uVar5;
    uStack_50 = uVar6;
    uStack_4c = uVar7;
    local_48 = uVar13;
    local_98 = pcVar3;
    uStack_90 = uVar9;
    if (local_68 != 0) {
      plVar15 = (longlong *)&local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar15 = plStack_40;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if (pTVar2 != (TNode *)0x0) {
      if (*(longlong *)&pTVar2->Item != 0) {
        plVar15 = *(longlong **)&(pTVar2->Item).field_0x28;
        plVar14 = (longlong *)&(pTVar2->Item).field_0x10;
        if (plVar15 != (longlong *)0x0) {
          plVar14 = plVar15;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      ::operator_delete(pTVar2,0x40);
    }
    UE::Core::Private::Function::CheckCallable(local_98);
    pcVar3 = local_98;
    plVar15 = &local_88;
    if (plStack_70 != (longlong *)0x0) {
      plVar15 = plStack_70;
    }
    uVar13 = (**(code **)(*plVar15 + 8))();
    (*pcVar3)(uVar13);
  }
  if (local_98 != (code *)0x0) {
    plVar15 = &local_88;
    if (plStack_70 != (longlong *)0x0) {
      plVar15 = plStack_70;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if (param_2 < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumSamples > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Components\\SynthComponent.cpp"
                        ,0x1b1,L"");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      iVar12 = (*pcVar3)();
      return iVar12;
    }
  }
  if (this->bIsSynthPlaying != false) {
    param_2 = (**(code **)(this->_padding_ + 0x678))(this,param_1,param_2);
  }
  FMemScope::~FMemScope(&local_a0);
  FLLMScope::~FLLMScope(local_a8);
  return param_2;
}

// OnRegister @ 146565d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthComponent::OnRegister(USynthComponent *this)

{
  CreateAudioComponent(this);
  USceneComponent::OnRegister((USceneComponent *)this);
  return;
}

// OnStart @ 146565ea0

void __thiscall USynthComponent::OnStart(USynthComponent *this)

{
  return;
}

// OnStop @ 146565f80

void __thiscall USynthComponent::OnStop(USynthComponent *this)

{
  return;
}

// OnUnregister @ 146566030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthComponent::OnUnregister(USynthComponent *this)

{
  AActor *this_00;
  UAudioComponent *pUVar1;
  UWorld *pUVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  USceneComponent::OnUnregister((USceneComponent *)this);
  this_00 = (AActor *)this->_padding_;
  if ((this_00 == (AActor *)0x0) || (this->bStopWhenOwnerDestroyed != '\0')) {
    Stop(this);
  }
  pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UAudioComponent *)0x0) && ((pUVar1->field_0x9b & 0x40) == 0)) {
    if (this_00 != (AActor *)0x0) {
      pUVar2 = AActor::GetWorld(this_00);
      if (pUVar2 != (UWorld *)0x0) {
        pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
        (**(code **)(*(longlong *)pUVar1 + 0x518))
                  (pUVar1,&FDetachmentTransformRules::KeepRelativeTransform);
        UActorComponent::UnregisterComponent
                  ((UActorComponent *)(this->AudioComponent).field0_0x0.DebugPtr);
      }
    }
    pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar1 + 0x4a0))(pUVar1,0);
    (this->AudioComponent).field0_0x0.DebugPtr = (UAudioComponent *)0x0;
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SoundGenerator != (TSharedPtr<ISoundGenerator,1> *)&local_18) {
    (this->SoundGenerator).Object = (ISoundGenerator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SoundGenerator).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// PumpPendingMessages @ 14656a3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USynthComponent::PumpPendingMessages(USynthComponent *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = (code *)0x0;
  plStack_50 = (longlong *)0x0;
  while (plVar13 = plStack_50, uVar7 = local_58, uVar11 = uStack_60, lVar10 = local_68,
        pTVar1 = ((this->CommandQueue).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
    pcVar8 = *(code **)&pTVar1->Item;
    uVar9 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    local_68 = *(longlong *)&(pTVar1->Item).field_0x10;
    uStack_60 = *(undefined8 *)&(pTVar1->Item).field_0x18;
    local_58 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_50 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(code **)&pTVar1->Item = local_78;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_70;
    *(longlong *)&(pTVar1->Item).field_0x10 = lVar10;
    *(undefined8 *)&(pTVar1->Item).field_0x18 = uVar11;
    *(undefined8 *)&(pTVar1->Item).field_0x20 = uVar7;
    *(longlong **)&(pTVar1->Item).field_0x28 = plVar13;
    pTVar2 = (this->CommandQueue).Tail;
    (this->CommandQueue).Tail = pTVar1;
    local_48 = *(longlong *)&pTVar1->Item;
    uVar7 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    uVar3 = *(undefined4 *)&(pTVar1->Item).field_0x10;
    uVar4 = *(undefined4 *)&(pTVar1->Item).field_0x14;
    uVar5 = *(undefined4 *)&(pTVar1->Item).field_0x18;
    uVar6 = *(undefined4 *)&(pTVar1->Item).field_0x1c;
    uVar11 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_20 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_40;
    *(undefined4 *)&(pTVar1->Item).field_0x10 = local_38;
    *(undefined4 *)&(pTVar1->Item).field_0x14 = uStack_34;
    *(undefined4 *)&(pTVar1->Item).field_0x18 = uStack_30;
    *(undefined4 *)&(pTVar1->Item).field_0x1c = uStack_2c;
    *(undefined4 *)&(pTVar1->Item).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(pTVar1->Item).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(pTVar1->Item).field_0x28 = 0;
    *(undefined4 *)&(pTVar1->Item).field_0x2c = 0;
    uStack_40 = uVar7;
    local_38 = uVar3;
    uStack_34 = uVar4;
    uStack_30 = uVar5;
    uStack_2c = uVar6;
    local_28 = uVar11;
    local_78 = pcVar8;
    uStack_70 = uVar9;
    if (local_48 != 0) {
      plVar13 = (longlong *)&local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar13 = plStack_20;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (pTVar2 != (TNode *)0x0) {
      if (*(longlong *)&pTVar2->Item != 0) {
        plVar13 = *(longlong **)&(pTVar2->Item).field_0x28;
        plVar12 = (longlong *)&(pTVar2->Item).field_0x10;
        if (plVar13 != (longlong *)0x0) {
          plVar12 = plVar13;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      ::operator_delete(pTVar2,0x40);
    }
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar8 = local_78;
    plVar13 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar8)(uVar11);
  }
  if (local_78 != (code *)0x0) {
    plVar13 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return;
}

// Serialize @ 1465726c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthComponent::Serialize(USynthComponent *this,FArchive *param_1)

{
  int iVar1;
  bool abStackX_8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  UActorComponent::Serialize((UActorComponent *)this,param_1);
  if (*(char *)((longlong)&this->_padding_ + 1) < '\0') {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
    if (1 < iVar1) {
      if ((((this->_padding_ & 0x10000) == 0) || (*(longlong *)&param_1->field_0x68 == 0)) ||
         (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
        abStackX_8[0] = false;
      }
      else {
        abStackX_8[0] = true;
      }
      ::operator<<(param_1,abStackX_8);
      if (abStackX_8[0] != false) {
        UE::Math::operator<<(param_1,(TBoxSphereBounds<double,double> *)&this->_padding_);
      }
    }
  }
  return;
}

// Serialize @ 1465726d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthComponent::Serialize(USynthComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  USceneComponent::Serialize((USceneComponent *)this,pFVar1);
  return;
}

// SetAudioBusSendPostEffect @ 146572870

void __thiscall
USynthComponent::SetAudioBusSendPostEffect(USynthComponent *this,UAudioBus *param_1,float param_2)

{
  UAudioComponent *this_00;
  
  this_00 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (this_00 == (UAudioComponent *)0x0) {
    return;
  }
  UAudioComponent::SetBusSendEffectInternal
            (this_00,(USoundSourceBus *)0x0,param_1,param_2,PostEffect);
  return;
}

// SetAudioBusSendPreEffect @ 146572890

void __thiscall
USynthComponent::SetAudioBusSendPreEffect(USynthComponent *this,UAudioBus *param_1,float param_2)

{
  UAudioComponent *this_00;
  
  this_00 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (this_00 == (UAudioComponent *)0x0) {
    return;
  }
  UAudioComponent::SetBusSendEffectInternal
            (this_00,(USoundSourceBus *)0x0,param_1,param_2,PreEffect);
  return;
}

// SetLowPassFilterEnabled @ 146573130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USynthComponent::SetLowPassFilterEnabled(USynthComponent *this,bool param_1)

{
  UAudioComponent *pUVar1;
  FAudioDevice *this_00;
  FName *pFVar2;
  TStatId TVar3;
  FName FStackX_8;
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  undefined1 uStack_30;
  undefined8 uStack_20;
  
  pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UAudioComponent *)0x0) {
    return;
  }
  this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&pUVar1->field_0x250 + 0x88))();
  if (this_00 != (FAudioDevice *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_AudioSetLowPassFilterEnabled ==
            (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetLowPassFilterEnabled(bool)_::_5_::FStat_STAT_AudioSetLowPassFilterEnabled>
             )0x0) {
          pFVar2 = ::FName::FName(&FStackX_8,"STAT_AudioSetLowPassFilterEnabled");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetLowPassFilterEnabled,*pFVar2
                     ,L"FAudioThreadTask.SetLowPassFilterFrequency","STATGROUP_AudioThreadCommands",
                     "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                     MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetLowPassFilterEnabled;
    if (StatPtr_STAT_AudioSetLowPassFilterEnabled ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetLowPassFilterEnabled(bool)_::_5_::FStat_STAT_AudioSetLowPassFilterEnabled>
         )0x0) {
      pFVar2 = ::FName::FName(&FStackX_8,"STAT_AudioSetLowPassFilterEnabled");
      TVar3.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetLowPassFilterEnabled,
                      *pFVar2,L"FAudioThreadTask.SetLowPassFilterFrequency",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    ppuStack_38 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UAudioComponent::SetLowPassFilterEnabled'::`5'::<lambda_1>,1,0>
                   ::_vftable_;
    uStack_20 = 0;
    apcStack_48[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UAudioComponent::SetLowPassFilterEnabled'::__l5::<lambda_1>,void,FActiveSound_&>
         ::Call;
    uStack_30 = param_1;
    FAudioDevice::SendCommandToActiveSounds
              (this_00,pUVar1->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)apcStack_48,TVar3);
  }
  return;
}

// SetLowPassFilterFrequency @ 146573150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USynthComponent::SetLowPassFilterFrequency(USynthComponent *this,float param_1)

{
  UAudioComponent *pUVar1;
  FAudioDevice *this_00;
  FName *pFVar2;
  TStatId TVar3;
  FName FStackX_8;
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  float fStack_30;
  undefined8 uStack_20;
  
  pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UAudioComponent *)0x0) {
    return;
  }
  this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&pUVar1->field_0x250 + 0x88))();
  if (this_00 != (FAudioDevice *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_AudioSetLowPassFilterFrequency ==
            (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetLowPassFilterFrequency(float)_::_5_::FStat_STAT_AudioSetLowPassFilterFrequency>
             )0x0) {
          pFVar2 = ::FName::FName(&FStackX_8,"STAT_AudioSetLowPassFilterFrequency");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetLowPassFilterFrequency,
                     *pFVar2,L"FAudioThreadTask.SetLowPassFilterFrequency",
                     "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                     true,true,ST_int64,true,false,MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetLowPassFilterFrequency;
    if (StatPtr_STAT_AudioSetLowPassFilterFrequency ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetLowPassFilterFrequency(float)_::_5_::FStat_STAT_AudioSetLowPassFilterFrequency>
         )0x0) {
      pFVar2 = ::FName::FName(&FStackX_8,"STAT_AudioSetLowPassFilterFrequency");
      TVar3.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetLowPassFilterFrequency,
                      *pFVar2,L"FAudioThreadTask.SetLowPassFilterFrequency",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    ppuStack_38 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UAudioComponent::SetLowPassFilterFrequency'::`5'::<lambda_1>,1,0>
                   ::_vftable_;
    uStack_20 = 0;
    apcStack_48[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UAudioComponent::SetLowPassFilterFrequency'::__l5::<lambda_1>,void,FActiveSound_&>
         ::Call;
    fStack_30 = param_1;
    FAudioDevice::SendCommandToActiveSounds
              (this_00,pUVar1->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)apcStack_48,TVar3);
  }
  return;
}

// SetModulationRouting @ 146573480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USynthComponent::SetModulationRouting
          (USynthComponent *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1,EModulationDestination param_2,EModulationRouting param_3)

{
  UAudioComponent *pUVar1;
  int iVar2;
  uint uVar3;
  FAudioDevice *this_00;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStackY_218 [32];
  undefined1 auStack_1e8 [16];
  code *apcStack_1d8 [5];
  undefined8 *puStack_1b0;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [32];
  void *pvStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ForElementType<FSetElementId> FStack_160;
  int iStack_158;
  undefined4 uStack_150;
  undefined1 auStack_148 [32];
  void *pvStack_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  ForElementType<FSetElementId> FStack_108;
  int iStack_100;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [32];
  void *pvStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ForElementType<FSetElementId> FStack_b0;
  int iStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [32];
  void *pvStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ForElementType<FSetElementId> FStack_58;
  int iStack_50;
  EModulationRouting EStack_48;
  EModulationRouting EStack_47;
  EModulationRouting EStack_46;
  EModulationRouting EStack_45;
  ulonglong uStack_38;
  
  pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UAudioComponent *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&pUVar1->field_0x250 + 0x88))();
  if (this_00 != (FAudioDevice *)0x0) {
    if (param_2 == Volume) {
      (pUVar1->ModulationRouting).VolumeRouting = param_3;
      lVar4 = 0x960;
    }
    else if (param_2 == Pitch) {
      (pUVar1->ModulationRouting).PitchRouting = param_3;
      lVar4 = 0x9b8;
    }
    else if (param_2 == Lowpass) {
      (pUVar1->ModulationRouting).LowpassRouting = param_3;
      lVar4 = 0xa68;
    }
    else {
      if (param_2 != Highpass) {
        `UAudioComponent::SetModulationRouting'::__l8::<lambda_1>::operator()(auStack_1e8);
        return;
      }
      (pUVar1->ModulationRouting).HighpassRouting = param_3;
      lVar4 = 0xa10;
    }
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    operator=<DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator,TObjectPtr<USoundModulatorBase>_>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(&pUVar1->field_0x0 + lVar4),param_1);
    uStack_1a8 = (undefined4)(pUVar1->ModulationRouting)._padding_;
    uStack_178 = ___xmm_00000000ffffffff0000008000000000;
    uStack_170 = _UNK_150631d98;
    auStack_1a0._0_8_ = (FScriptContainerElement *)0x0;
    auStack_1a0._8_8_ = 0;
    pvStack_180 = (void *)0x0;
    FStack_160 = (ForElementType<FSetElementId>)0x0;
    iStack_158 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)auStack_1a0,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(pUVar1->ModulationRouting)._padding_);
    uStack_150 = (undefined4)(pUVar1->ModulationRouting)._padding_;
    auStack_148._0_8_ = (FScriptContainerElement *)0x0;
    auStack_148._8_8_ = 0;
    pvStack_128 = (void *)0x0;
    uStack_120 = 0;
    uStack_11c = 0x80;
    uStack_118 = 0xffffffff;
    uStack_114 = 0;
    FStack_108 = (ForElementType<FSetElementId>)0x0;
    iStack_100 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)auStack_148,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(pUVar1->ModulationRouting)._padding_);
    uStack_f8 = (undefined4)(pUVar1->ModulationRouting)._padding_;
    uStack_c8 = ___xmm_00000000ffffffff0000008000000000;
    uStack_c0 = _UNK_150631d98;
    auStack_f0._0_8_ = (FScriptContainerElement *)0x0;
    auStack_f0._8_8_ = 0;
    pvStack_d0 = (void *)0x0;
    FStack_b0 = (ForElementType<FSetElementId>)0x0;
    iStack_a8 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)auStack_f0,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(pUVar1->ModulationRouting)._padding_);
    uStack_a0 = (undefined4)(pUVar1->ModulationRouting)._padding_;
    auStack_98._0_8_ = (FScriptContainerElement *)0x0;
    auStack_98._8_8_ = 0;
    pvStack_78 = (void *)0x0;
    uStack_70 = 0;
    uStack_6c = 0x80;
    uStack_68 = 0xffffffff;
    uStack_64 = 0;
    FStack_58 = (ForElementType<FSetElementId>)0x0;
    iStack_50 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)auStack_98,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(pUVar1->ModulationRouting)._padding_);
    EStack_48 = (pUVar1->ModulationRouting).VolumeRouting;
    EStack_47 = (pUVar1->ModulationRouting).PitchRouting;
    EStack_46 = (pUVar1->ModulationRouting).HighpassRouting;
    EStack_45 = (pUVar1->ModulationRouting).LowpassRouting;
    apcStack_1d8[0] = (code *)0x0;
    puVar5 = FMemory::Malloc(0x170,8);
    *puVar5 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UAudioComponent::SetModulationRouting'::`2'::<lambda_2>,1,1>::
               _vftable_;
    *(undefined8 *)
     &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        *)(puVar5 + 2))->Elements = 0;
    puVar5[3] = 0;
    puVar5[6] = 0;
    *(undefined4 *)(puVar5 + 1) = uStack_1a8;
    *(undefined4 *)(puVar5 + 7) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x80;
    *(undefined4 *)(puVar5 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x44) = 0;
    puVar5[10] = 0;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    puStack_1b0 = puVar5;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar5 + 2),
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)auStack_1a0);
    *(undefined8 *)
     &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        *)(puVar5 + 0xd))->Elements = 0;
    puVar5[0xe] = 0;
    puVar5[0x11] = 0;
    *(undefined4 *)(puVar5 + 0xc) = uStack_150;
    *(undefined4 *)(puVar5 + 0x12) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x94) = 0x80;
    *(undefined4 *)(puVar5 + 0x13) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x9c) = 0;
    puVar5[0x15] = 0;
    *(undefined4 *)(puVar5 + 0x16) = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar5 + 0xd),
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)auStack_148);
    *(undefined8 *)
     &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        *)(puVar5 + 0x18))->Elements = 0;
    puVar5[0x19] = 0;
    puVar5[0x1c] = 0;
    *(undefined4 *)(puVar5 + 0x17) = uStack_f8;
    *(undefined4 *)(puVar5 + 0x1d) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xec) = 0x80;
    *(undefined4 *)(puVar5 + 0x1e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0xf4) = 0;
    puVar5[0x20] = 0;
    *(undefined4 *)(puVar5 + 0x21) = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar5 + 0x18),
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)auStack_f0);
    *(undefined8 *)
     &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        *)(puVar5 + 0x23))->Elements = 0;
    puVar5[0x24] = 0;
    puVar5[0x27] = 0;
    *(undefined4 *)(puVar5 + 0x22) = uStack_a0;
    *(undefined4 *)(puVar5 + 0x28) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x144) = 0x80;
    *(undefined4 *)(puVar5 + 0x29) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x14c) = 0;
    puVar5[0x2b] = 0;
    *(undefined4 *)(puVar5 + 0x2c) = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar5 + 0x23),
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)auStack_98);
    *(EModulationRouting *)(puVar5 + 0x2d) = EStack_48;
    *(EModulationRouting *)((longlong)puVar5 + 0x169) = EStack_47;
    *(EModulationRouting *)((longlong)puVar5 + 0x16a) = EStack_46;
    *(EModulationRouting *)((longlong)puVar5 + 0x16b) = EStack_45;
    if (puVar5 + 1 != (undefined8 *)0x0) {
      apcStack_1d8[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UAudioComponent::SetModulationRouting'::__l2::<lambda_2>,void,FActiveSound_&>
           ::Call;
    }
    FAudioDevice::SendCommandToActiveSounds
              (this_00,pUVar1->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)apcStack_1d8,(TStatId)0x154f11430);
    iStack_50 = 0;
    if (FStack_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_58);
    }
    iVar2 = SUB84(auStack_98._8_8_,4);
    auStack_98._8_8_ = auStack_98._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)auStack_98,0,(int *)(auStack_98 + 0xc));
    }
    uStack_68 = 0xffffffff;
    uStack_64 = 0;
    uStack_70 = 0;
    if (0x80 < uStack_6c) {
      uStack_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10),0);
    }
    if (pvStack_78 != (void *)0x0) {
      FMemory::Free(pvStack_78);
    }
    if ((FScriptContainerElement *)auStack_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_98._0_8_);
    }
    iStack_a8 = 0;
    if (FStack_b0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_b0);
    }
    iVar2 = SUB84(auStack_f0._8_8_,4);
    auStack_f0._8_8_ = auStack_f0._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)auStack_f0,0,(int *)(auStack_f0 + 0xc));
    }
    uVar3 = uStack_c8._4_4_;
    uStack_c0 = 0xffffffff;
    uStack_c8 = (ulonglong)uStack_c8._4_4_ << 0x20;
    if (0x80 < uVar3) {
      uStack_c8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_f0 + 0x10),0);
    }
    if (pvStack_d0 != (void *)0x0) {
      FMemory::Free(pvStack_d0);
    }
    if ((FScriptContainerElement *)auStack_f0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_f0._0_8_);
    }
    iStack_100 = 0;
    if (FStack_108 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_108);
    }
    iVar2 = SUB84(auStack_148._8_8_,4);
    auStack_148._8_8_ = auStack_148._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)auStack_148,0,(int *)(auStack_148 + 0xc));
    }
    uStack_118 = 0xffffffff;
    uStack_114 = 0;
    uStack_120 = 0;
    if (0x80 < uStack_11c) {
      uStack_11c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_148 + 0x10),0);
    }
    if (pvStack_128 != (void *)0x0) {
      FMemory::Free(pvStack_128);
    }
    if ((FScriptContainerElement *)auStack_148._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_148._0_8_);
    }
    iStack_158 = 0;
    if (FStack_160 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_160);
    }
    iVar2 = SUB84(auStack_1a0._8_8_,4);
    auStack_1a0._8_8_ = auStack_1a0._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)auStack_1a0,0,(int *)(auStack_1a0 + 0xc));
    }
    uVar3 = uStack_178._4_4_;
    uStack_170 = 0xffffffff;
    uStack_178 = (ulonglong)uStack_178._4_4_ << 0x20;
    if (0x80 < uVar3) {
      uStack_178 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_1a0 + 0x10),0);
    }
    if (pvStack_180 != (void *)0x0) {
      FMemory::Free(pvStack_180);
    }
    if ((FScriptContainerElement *)auStack_1a0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_1a0._0_8_);
    }
  }
  return;
}

// SetOutputToBusOnly @ 146573640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USynthComponent::SetOutputToBusOnly(USynthComponent *this,bool param_1)

{
  UAudioComponent *pUVar1;
  FAudioDevice *this_00;
  FName *pFVar2;
  FName FStackX_8;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  undefined1 uStack_20;
  undefined8 uStack_10;
  
  pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UAudioComponent *)0x0) {
    return;
  }
  this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&pUVar1->field_0x250 + 0x88))();
  if (this_00 != (FAudioDevice *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_AudioSetOutputToBusOnly ==
            (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetOutputToBusOnly(bool)_::_5_::FStat_STAT_AudioSetOutputToBusOnly>
             )0x0) {
          pFVar2 = ::FName::FName(&FStackX_8,"STAT_AudioSetOutputToBusOnly");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetOutputToBusOnly,*pFVar2,
                     L"FAudioThreadTask.SetOutputToBusOnly","STATGROUP_AudioThreadCommands",
                     "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                     MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    ppuStack_28 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UAudioComponent::SetOutputToBusOnly'::`5'::<lambda_1>,1,0>
                   ::_vftable_;
    uStack_10 = 0;
    apcStack_38[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UAudioComponent::SetOutputToBusOnly'::__l5::<lambda_1>,void,FActiveSound_&>
         ::Call;
    uStack_20 = param_1;
    FAudioDevice::SendCommandToActiveSounds
              (this_00,pUVar1->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)apcStack_38,(TStatId)0x154f11430);
  }
  return;
}

// SetSourceBusSendPostEffect @ 1465747f0

void __thiscall
USynthComponent::SetSourceBusSendPostEffect
          (USynthComponent *this,USoundSourceBus *param_1,float param_2)

{
  UAudioComponent *this_00;
  
  this_00 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (this_00 == (UAudioComponent *)0x0) {
    return;
  }
  UAudioComponent::SetBusSendEffectInternal(this_00,param_1,(UAudioBus *)0x0,param_2,PostEffect);
  return;
}

// SetSourceBusSendPreEffect @ 146574810

void __thiscall
USynthComponent::SetSourceBusSendPreEffect
          (USynthComponent *this,USoundSourceBus *param_1,float param_2)

{
  UAudioComponent *this_00;
  
  this_00 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (this_00 == (UAudioComponent *)0x0) {
    return;
  }
  UAudioComponent::SetBusSendEffectInternal(this_00,param_1,(UAudioBus *)0x0,param_2,PreEffect);
  return;
}

// SetSubmixSend @ 146574b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USynthComponent::SetSubmixSend(USynthComponent *this,USoundSubmixBase *param_1,float param_2)

{
  int *piVar1;
  TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  UAudioComponent *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FAudioDevice *this_00;
  FName *pFVar9;
  TStatId TVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStackY_278 [32];
  FName FStack_218;
  FName FStack_210;
  code *apcStack_208 [5];
  undefined8 *puStack_1e0;
  undefined1 auStack_1d8 [112];
  void *pvStack_168;
  undefined4 uStack_160;
  void *pvStack_158;
  ForAnyElementType FStack_140;
  TObjectPtr<UCurveFloat>_u_0 TStack_130;
  FScriptContainerElement FStack_128;
  FScriptContainerElement FStack_118;
  TObjectPtr<USoundSubmixBase>_u_0 TStack_110;
  float fStack_108;
  FScriptContainerElement FStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [72];
  void *pvStack_a8;
  undefined4 uStack_a0;
  void *pvStack_98;
  ForAnyElementType FStack_80;
  TObjectPtr<UCurveFloat>_u_0 TStack_70;
  FScriptContainerElement FStack_68;
  ulonglong uStack_58;
  
  pUVar3 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (pUVar3 == (UAudioComponent *)0x0) {
    return;
  }
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  FSoundSubmixSendInfoBase::FSoundSubmixSendInfoBase((FSoundSubmixSendInfoBase *)auStack_1d8);
  FStack_128 = (FScriptContainerElement)0x0;
  auStack_1d8._8_8_ = param_1;
  auStack_1d8._16_4_ = param_2;
  cVar6 = (**(code **)(*(longlong *)&pUVar3->field_0x250 + 0xa8))(&pUVar3->field_0x250);
  if (cVar6 == '\0') {
    pTVar2 = &pUVar3->PendingSubmixSends;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)auStack_1d8) &&
       ((FScriptContainerElement *)auStack_1d8 <
        pFVar4 + (longlong)(pUVar3->PendingSubmixSends).ArrayMax * 0xb8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (pUVar3->PendingSubmixSends).ArrayNum;
    piVar1 = &(pUVar3->PendingSubmixSends).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8b8,&pTVar2->AllocatorInstance,piVar1);
    }
    lVar12 = (longlong)iVar8 * 0xb8;
    (pUVar3->PendingSubmixSends).ArrayNum = iVar8 + 1;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    pFVar4[lVar12] = auStack_1d8[0];
    ((TObjectPtr<USoundSubmixBase>_u_0 *)(pFVar4 + lVar12 + 8))->DebugPtr =
         (USoundSubmixBase *)auStack_1d8._8_8_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((USoundSubmixBase *)auStack_1d8._8_8_ != (USoundSubmixBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)auStack_1d8._8_8_);
    }
    *(undefined4 *)(pFVar4 + lVar12 + 0x10) = auStack_1d8._16_4_;
    pFVar4[lVar12 + 0x14] = auStack_1d8[0x14];
    *(undefined4 *)(pFVar4 + lVar12 + 0x18) = auStack_1d8._24_4_;
    *(undefined4 *)(pFVar4 + lVar12 + 0x1c) = auStack_1d8._28_4_;
    *(undefined4 *)(pFVar4 + lVar12 + 0x20) = auStack_1d8._32_4_;
    *(undefined4 *)(pFVar4 + lVar12 + 0x24) = auStack_1d8._36_4_;
    FRichCurve::FRichCurve
              ((FRichCurve *)(pFVar4 + lVar12 + 0x28),(FRichCurve *)(auStack_1d8 + 0x28));
    ((TObjectPtr<UCurveFloat>_u_0 *)(pFVar4 + lVar12 + 0xa8))->DebugPtr = (UCurveFloat *)TStack_130;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TStack_130.DebugPtr != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TStack_130.DebugPtr);
    }
    pFVar4[lVar12 + 0xb0] = FStack_128;
  }
  else {
    this_00 = (FAudioDevice *)
              (**(code **)(*(longlong *)&pUVar3->field_0x250 + 0x88))(&pUVar3->field_0x250);
    if (this_00 != (FAudioDevice *)0x0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          if (StatPtr_STAT_SetSubmixSend ==
              (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetSubmixSend(USoundSubmixBase_*,float)_::_8_::FStat_STAT_SetSubmixSend>
               )0x0) {
            pFVar9 = ::FName::FName(&FStack_218,"STAT_SetSubmixSend");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetSubmixSend,*pFVar9,
                       L"FAudioThreadTask.AudioSetSubmixSend","STATGROUP_AudioThreadCommands",
                       "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                       MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
      }
      TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_SetSubmixSend;
      if (StatPtr_STAT_SetSubmixSend ==
          (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetSubmixSend(USoundSubmixBase_*,float)_::_8_::FStat_STAT_SetSubmixSend>
           )0x0) {
        pFVar9 = ::FName::FName(&FStack_210,"STAT_SetSubmixSend");
        TVar10.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetSubmixSend,*pFVar9,
                        L"FAudioThreadTask.AudioSetSubmixSend","STATGROUP_AudioThreadCommands",
                        "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                        MCR_Invalid);
      }
      FStack_118 = auStack_1d8[0];
      TStack_110.DebugPtr = (USoundSubmixBase *)auStack_1d8._8_8_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((USoundSubmixBase *)auStack_1d8._8_8_ != (USoundSubmixBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)auStack_1d8._8_8_);
      }
      fStack_108 = (float)auStack_1d8._16_4_;
      uStack_100 = CONCAT44(auStack_1d8._28_4_,auStack_1d8._24_4_);
      uStack_f8 = CONCAT44(auStack_1d8._36_4_,auStack_1d8._32_4_);
      FStack_104 = auStack_1d8[0x14];
      FRichCurve::FRichCurve((FRichCurve *)auStack_f0,(FRichCurve *)(auStack_1d8 + 0x28));
      TStack_70.DebugPtr = TStack_130.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TStack_130.DebugPtr != (UCurveFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TStack_130.DebugPtr);
      }
      FStack_68 = FStack_128;
      apcStack_208[0] = (code *)0x0;
      puVar11 = FMemory::Malloc(0xc0,8);
      *puVar11 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioComponent::SetSubmixSend'::`8'::<lambda_1>,1,1>::
                  _vftable_;
      *(FScriptContainerElement *)(puVar11 + 1) = FStack_118;
      ((TObjectPtr<USoundSubmixBase>_u_0 *)(puVar11 + 2))->DebugPtr = (USoundSubmixBase *)TStack_110
      ;
      puStack_1e0 = puVar11;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TStack_110.DebugPtr != (USoundSubmixBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TStack_110.DebugPtr);
      }
      *(float *)(puVar11 + 3) = fStack_108;
      *(FScriptContainerElement *)((longlong)puVar11 + 0x1c) = FStack_104;
      *(undefined4 *)(puVar11 + 4) = (undefined4)uStack_100;
      *(undefined4 *)((longlong)puVar11 + 0x24) = uStack_100._4_4_;
      *(undefined4 *)(puVar11 + 5) = (undefined4)uStack_f8;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_f8._4_4_;
      FRuntimeFloatCurve::FRuntimeFloatCurve
                ((FRuntimeFloatCurve *)(puVar11 + 6),(FRuntimeFloatCurve *)auStack_f0);
      *(FScriptContainerElement *)(puVar11 + 0x17) = FStack_68;
      if ((FScriptContainerElement *)(puVar11 + 1) != (FScriptContainerElement *)0x0) {
        apcStack_208[0] =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UAudioComponent::SetSubmixSend'::__l8::<lambda_1>,void,FActiveSound_&>
             ::Call;
      }
      FAudioDevice::SendCommandToActiveSounds
                (this_00,pUVar3->AudioComponentID,
                 (TUniqueFunction<void___cdecl(FActiveSound_&)> *)apcStack_208,TVar10);
      if (FStack_80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_80.Data);
      }
      auStack_f0._0_8_ = &___7FIndexedCurve__6B_;
      if (pvStack_98 != (void *)0x0) {
        FMemory::Free(pvStack_98);
      }
      uStack_a0 = 0;
      if (pvStack_a8 != (void *)0x0) {
        FMemory::Free(pvStack_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(auStack_f0 + 8));
    }
  }
  if (FStack_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_140.Data);
  }
  auStack_1d8._40_8_ = &___7FIndexedCurve__6B_;
  if (pvStack_158 != (void *)0x0) {
    FMemory::Free(pvStack_158);
  }
  uStack_160 = 0;
  if (pvStack_168 != (void *)0x0) {
    FMemory::Free(pvStack_168);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(auStack_1d8 + 0x30));
  return;
}

// SetVolumeMultiplier @ 146575610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USynthComponent::SetVolumeMultiplier(USynthComponent *this,float param_1)

{
  UAudioComponent *pUVar1;
  FAudioDevice *this_00;
  FName *pFVar2;
  TStatId TVar3;
  FName FStackX_8;
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  float fStack_30;
  undefined8 uStack_20;
  
  pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UAudioComponent *)0x0) {
    pUVar1->VolumeMultiplier = param_1;
    pUVar1->VolumeModulationMax = 1.0;
    pUVar1->VolumeModulationMin = 1.0;
    if (((pUVar1->field_0x9a & 0x10) != 0) &&
       (this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&pUVar1->field_0x250 + 0x88))(),
       this_00 != (FAudioDevice *)0x0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        if (StatPtr_STAT_AudioSetVolumeMultiplier ==
            (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetVolumeMultiplier(float)_::_8_::FStat_STAT_AudioSetVolumeMultiplier>
             )0x0) {
          pFVar2 = ::FName::FName(&FStackX_8,"STAT_AudioSetVolumeMultiplier");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetVolumeMultiplier,*pFVar2,
                     L"FAudioThreadTask.SetVolumeMultiplier","STATGROUP_AudioThreadCommands",
                     "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                     MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
      TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetVolumeMultiplier;
      if (StatPtr_STAT_AudioSetVolumeMultiplier ==
          (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetVolumeMultiplier(float)_::_8_::FStat_STAT_AudioSetVolumeMultiplier>
           )0x0) {
        pFVar2 = ::FName::FName(&FStackX_8,"STAT_AudioSetVolumeMultiplier");
        TVar3.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetVolumeMultiplier,*pFVar2,
                        L"FAudioThreadTask.SetVolumeMultiplier","STATGROUP_AudioThreadCommands",
                        "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                        MCR_Invalid);
      }
      ppuStack_38 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`UAudioComponent::SetVolumeMultiplier'::`8'::<lambda_1>,1,0>
                     ::_vftable_;
      uStack_20 = 0;
      apcStack_48[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UAudioComponent::SetVolumeMultiplier'::__l8::<lambda_1>,void,FActiveSound_&>
           ::Call;
      fStack_30 = param_1;
      FAudioDevice::SendCommandToActiveSounds
                (this_00,pUVar1->AudioComponentID,
                 (TUniqueFunction<void___cdecl(FActiveSound_&)> *)apcStack_48,TVar3);
    }
    return;
  }
  return;
}

// Start @ 146576a60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthComponent::Start(USynthComponent *this)

{
  byte bVar1;
  UAudioComponent *pUVar2;
  USoundAttenuation *pUVar3;
  USoundClass *pUVar4;
  USynthSound *pUVar5;
  USoundEffectSourcePresetChain *pUVar6;
  USoundSubmixBase *pUVar7;
  
  if ((((this->_padding_ & 0x100000) == 0) &&
      (Initialize(this,-1), (this->Synth).field0_0x0.DebugPtr != (USynthSound *)0x0)) &&
     (pUVar2 = (this->AudioComponent).field0_0x0.DebugPtr, pUVar2 != (UAudioComponent *)0x0)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (this->AttenuationSettings).field0_0x0.DebugPtr, pUVar3 != (USoundAttenuation *)0x0
       )) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (pUVar2->AttenuationSettings).field0_0x0 = (this->AttenuationSettings).field0_0x0;
    pUVar2 = (this->AudioComponent).field0_0x0.DebugPtr;
    bVar1 = pUVar2->field_0x4c8;
    pUVar2->field_0x4c8 = (this->field_0x250 * '\x02' ^ bVar1) & 0x10 ^ bVar1;
    pUVar2 = (this->AudioComponent).field0_0x0.DebugPtr;
    bVar1 = pUVar2->field_0x4c8;
    pUVar2->field_0x4c8 = (this->field_0x838 << 6 ^ bVar1) & 0x40 ^ bVar1;
    pUVar2 = (this->AudioComponent).field0_0x0.DebugPtr;
    bVar1 = pUVar2->field_0x4ca;
    pUVar2->field_0x4ca = (this->field_0x838 << 2 ^ bVar1) & 8 ^ bVar1;
    pUVar2 = (this->AudioComponent).field0_0x0.DebugPtr;
    bVar1 = pUVar2->field_0x4c8;
    pUVar2->field_0x4c8 = (this->field_0x250 * '\x02' ^ bVar1) & 8 ^ bVar1;
    TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
    ::operator=(&((this->AudioComponent).field0_0x0.DebugPtr)->ConcurrencySet,&this->ConcurrencySet)
    ;
    FSoundAttenuationSettings::operator=
              (&((this->AudioComponent).field0_0x0.DebugPtr)->AttenuationOverrides,
               &this->AttenuationOverrides);
    pUVar2 = (this->AudioComponent).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (this->SoundClass).field0_0x0.DebugPtr, pUVar4 != (USoundClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (pUVar2->SoundClassOverride).field0_0x0 = (this->SoundClass).field0_0x0;
    ((this->AudioComponent).field0_0x0.DebugPtr)->EnvelopeFollowerAttackTime =
         this->EnvelopeFollowerAttackTime;
    ((this->AudioComponent).field0_0x0.DebugPtr)->EnvelopeFollowerReleaseTime =
         this->EnvelopeFollowerReleaseTime;
    pUVar2 = (this->AudioComponent).field0_0x0.DebugPtr;
    *(int *)&(pUVar2->ModulationRouting)._padding_ = (int)(this->ModulationRouting)._padding_;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(pUVar2->ModulationRouting)._padding_,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(this->ModulationRouting)._padding_);
    *(int *)&(pUVar2->ModulationRouting)._padding_ = (int)(this->ModulationRouting)._padding_;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(pUVar2->ModulationRouting)._padding_,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(this->ModulationRouting)._padding_);
    *(int *)&(pUVar2->ModulationRouting)._padding_ = (int)(this->ModulationRouting)._padding_;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(pUVar2->ModulationRouting)._padding_,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(this->ModulationRouting)._padding_);
    *(int *)&(pUVar2->ModulationRouting)._padding_ = (int)(this->ModulationRouting)._padding_;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(pUVar2->ModulationRouting)._padding_,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(this->ModulationRouting)._padding_);
    (pUVar2->ModulationRouting).VolumeRouting = (this->ModulationRouting).VolumeRouting;
    (pUVar2->ModulationRouting).PitchRouting = (this->ModulationRouting).PitchRouting;
    (pUVar2->ModulationRouting).HighpassRouting = (this->ModulationRouting).HighpassRouting;
    (pUVar2->ModulationRouting).LowpassRouting = (this->ModulationRouting).LowpassRouting;
    pUVar5 = (this->Synth).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (this->AttenuationSettings).field0_0x0.DebugPtr, pUVar3 != (USoundAttenuation *)0x0
       )) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar5->_padding_ = (longlong)(this->AttenuationSettings).field0_0x0;
    pUVar5 = (this->Synth).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (this->SourceEffectChain).field0_0x0.DebugPtr,
       pUVar6 != (USoundEffectSourcePresetChain *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    pUVar5->_padding_ = (longlong)(this->SourceEffectChain).field0_0x0;
    pUVar5 = (this->Synth).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 = (this->SoundSubmix).field0_0x0.DebugPtr, pUVar7 != (USoundSubmixBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    pUVar5->_padding_ = (longlong)(this->SoundSubmix).field0_0x0;
    TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *)
               &((this->Synth).field0_0x0.DebugPtr)->_padding_,&this->SoundSubmixSends);
    UAudioComponent::SetSound
              ((this->AudioComponent).field0_0x0.DebugPtr,
               (USoundBase *)(this->Synth).field0_0x0.DebugPtr);
    pUVar2 = (this->AudioComponent).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar2 + 0x650))(pUVar2,0);
    UActorComponent::SetActiveFlag
              ((UActorComponent *)this,
               (bool)((byte)((this->AudioComponent).field0_0x0.DebugPtr)->field_0x9a >> 4 & 1));
    this->bIsSynthPlaying = true;
  }
  return;
}

// StaticRegisterNativesUSynthComponent @ 146577a40

void __cdecl USynthComponent::StaticRegisterNativesUSynthComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x11;
  local_18.DataPtr = Z_Construct_UClass_USynthComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Stop @ 146577cf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthComponent::Stop(USynthComponent *this)

{
  UAudioComponent *pUVar1;
  FAudioDevice *this_00;
  
  if ((this->_padding_ & 0x100000) != 0) {
    pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
    if (pUVar1 != (UAudioComponent *)0x0) {
      (**(code **)(*(longlong *)pUVar1 + 0x668))();
      this_00 = (FAudioDevice *)
                (**(code **)(*(longlong *)&((this->AudioComponent).field0_0x0.DebugPtr)->field_0x250
                            + 0x88))();
      if (this_00 != (FAudioDevice *)0x0) {
        FAudioDevice::StopSoundsUsingResource
                  (this_00,(USoundWave *)(this->Synth).field0_0x0.DebugPtr,
                   (TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> *)0x0);
      }
    }
    UActorComponent::SetActiveFlag((UActorComponent *)this,false);
    return;
  }
  return;
}

// SynthCommand @ 146578d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USynthComponent::SynthCommand(USynthComponent *this,TFunction<void___cdecl(void)> *param_1)

{
  longlong *plVar1;
  FName local_28;
  FString local_20;
  
  if ((this->SoundGenerator).Object == (ISoundGenerator *)0x0) {
    TQueue<TFunction<void___cdecl(void)>,1>::Enqueue(&this->CommandQueue,param_1);
  }
  else if (1 < (byte)LogAudioMixer._0_1_) {
    local_28 = (FName)this->_padding_;
    ::FName::ToString(&local_28,&local_20);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x000146578de3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// __VTableCtorCaller @ 14657e060

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl USynthComponent::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this == (USceneComponent *)0x0) {
    return (UObject *)0x0;
  }
  USceneComponent::USceneComponent(this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this[1]._padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FSoundAttenuationSettings::FSoundAttenuationSettings
            ((FSoundAttenuationSettings *)&this[1]._padding_);
  this[2].ComponentVelocity.field0_0x0._s_0.X = 0.0;
  this[2].ComponentVelocity.field0_0x0._s_0.Y = 0.0;
  this[2].ComponentVelocity.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&this[2].TransformUpdated.field_0x8 = 0;
  *(undefined4 *)&this[2].TransformUpdated.field_0x10 = 0;
  *(undefined4 *)&this[2].TransformUpdated.field_0x14 = 0x80;
  *(undefined4 *)&this[2].TransformUpdated.field_0x18 = 0xffffffff;
  *(undefined4 *)&this[2].TransformUpdated.field_0x1c = 0;
  this[2].ScopedMovementStack.ArrayNum = 0;
  this[2].ScopedMovementStack.ArrayMax = 0;
  *(undefined4 *)&this[2].WorldRotationCache.PayloadPtr.Ptr = 0;
  FSoundModulationDefaultRoutingSettings::FSoundModulationDefaultRoutingSettings
            ((FSoundModulationDefaultRoutingSettings *)&this[2].RelativeRotationCache);
  this[3].ClientAttachedChildren.ArrayNum = 0;
  this[3].ClientAttachedChildren.ArrayMax = 0;
  this[3].NetOldAttachParent = (USceneComponent *)0x0;
  this[3].Bounds.Origin.field0_0x0._s_0.X = 0.0;
  this[3].Bounds.Origin.field0_0x0._s_0.Y = 0.0;
  this[3].Bounds.Origin.field0_0x0._s_0.Z = 0.0;
  this[3].Bounds.BoxExtent.field0_0x0._s_0.X = 0.0;
  this[3].Bounds.BoxExtent.field0_0x0._s_0.Y = 0.0;
  this[3].Bounds.BoxExtent.field0_0x0._s_0.Z = 0.0;
  this[3].Bounds.SphereRadius = 0.0;
  this[3].RelativeLocation.field0_0x0._s_0.Z = 0.0;
  this[3].RelativeRotation.Pitch = 0.0;
  this[3].RelativeRotation.Yaw = 0.0;
  this[3].RelativeRotation.Roll = 0.0;
  this[3].RelativeScale3D.field0_0x0._s_0.X = 0.0;
  this[3].RelativeScale3D.field0_0x0._s_0.Y = 0.0;
  this[3].RelativeScale3D.field0_0x0._s_0.Z = 9.88131291682493e-324;
  this[3].ComponentVelocity.field0_0x0._s_0.Y = 0.0;
  this[3].ComponentVelocity.field0_0x0._s_0.Z = 0.0;
  puVar3 = ::operator_new(0x40);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *puVar3 = 0;
    puVar3[2] = 0;
    puVar3[7] = 0;
    puVar4 = puVar3;
  }
  *(undefined8 **)&this[3].TransformUpdated.field_0x8 = puVar4;
  *(undefined8 **)&this[3].TransformUpdated = puVar4;
  *(undefined8 *)&this[3].TransformUpdated.field_0x10 = 0;
  *(undefined8 *)&this[3].TransformUpdated.field_0x18 = 0;
  return (UObject *)this;
}

// execAdjustVolume @ 14657e290

void __cdecl USynthComponent::execAdjustVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EAudioFaderCurve local_res8 [8];
  float local_res10 [2];
  float local_res20 [2];
  
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
  local_res8[0] = Linear;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UAudioComponent **)&param_1[0x36].field_0x20 != (UAudioComponent *)0x0) {
    UAudioComponent::AdjustVolume
              (*(UAudioComponent **)&param_1[0x36].field_0x20,local_res20[0],local_res10[0],
               local_res8[0]);
  }
  return;
}

// execFadeIn @ 14657ebd0

void __cdecl USynthComponent::execFadeIn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x36].field_0x20;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x640))(plVar2,local_18[0],local_res20[0],local_res10[0],local_res8[0]);
  }
  return;
}

// execFadeOut @ 14657ed40

void __cdecl USynthComponent::execFadeOut(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x36].field_0x20;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x648))(plVar2,local_res20[0],local_res10[0],local_res8[0]);
  }
  return;
}

// execGetModulators @ 14657fc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl USynthComponent::execGetModulators(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStackY_c8 [32];
  EModulationDestination local_98 [16];
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_50;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_98[0] = Volume;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UAudioComponent **)&param_1[0x36].field_0x20 == (UAudioComponent *)0x0) {
    local_50.InlineData[0] = '\0';
    local_50.InlineData[1] = '\0';
    local_50.InlineData[2] = '\0';
    local_50.InlineData[3] = '\0';
    local_50._padding_ = 0;
    local_88._16_8_ = 0;
    uStack_70 = 0;
    local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0x8000000000;
    local_58 = 0xffffffff;
    local_54 = 0;
  }
  else {
    UAudioComponent::GetModulators
              (*(UAudioComponent **)&param_1[0x36].field_0x20,
               (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                *)local_88,local_98[0]);
  }
  if (param_3 != local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = local_88._0_8_;
    *(undefined4 *)((longlong)param_3 + 8) = local_88._8_4_;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_88._12_4_;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    if ((undefined8 *)((longlong)param_3 + 0x10) != (undefined8 *)(local_88 + 0x10)) {
      if (local_68 == (void *)0x0) {
        *(undefined8 *)((longlong)param_3 + 0x10) = local_88._16_8_;
        *(undefined8 *)((longlong)param_3 + 0x18) = uStack_70;
      }
      if (*(void **)((longlong)param_3 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_3 + 0x20));
      }
      *(void **)((longlong)param_3 + 0x20) = local_68;
      *(undefined4 *)((longlong)param_3 + 0x28) = (undefined4)local_60;
      *(uint *)((longlong)param_3 + 0x2c) = local_60._4_4_;
      local_60 = 0;
      local_68 = (void *)0x0;
    }
    *(undefined4 *)((longlong)param_3 + 0x30) = local_58;
    *(undefined4 *)((longlong)param_3 + 0x34) = local_54;
    local_54 = 0;
    local_58 = 0xffffffff;
    if (local_50.SecondaryData == (ForElementType<FSetElementId>)0x0) {
      *(uchar (*) [4])((longlong)param_3 + 0x38) = local_50.InlineData;
    }
    if (*(void **)((longlong)param_3 + 0x40) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_3 + 0x40));
    }
    *(ForElementType<FSetElementId> *)((longlong)param_3 + 0x40) = local_50.SecondaryData;
    local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
    *(int *)((longlong)param_3 + 0x48) = (int)local_40;
  }
  local_40 = local_40 & 0xffffffff00000000;
  if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50.SecondaryData);
  }
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  uVar3 = local_60._4_4_;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = (ulonglong)local_60._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_60 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// execIsPlaying @ 1465805a0

void __cdecl USynthComponent::execIsPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x36].field_0x20 != 0) {
    cVar1 = (**(code **)(*(longlong *)(*(longlong *)&param_1[0x36].field_0x20 + 0x250) + 0xa8))();
    if (cVar1 != '\0') {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetAudioBusSendPostEffect @ 146581440

void __cdecl
USynthComponent::execSetAudioBusSendPostEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  UAudioBus *local_res10;
  
  local_res10 = (UAudioBus *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UAudioComponent **)&param_1[0x36].field_0x20 != (UAudioComponent *)0x0) {
    UAudioComponent::SetAudioBusSendPostEffect
              (*(UAudioComponent **)&param_1[0x36].field_0x20,local_res10,local_res8[0]);
  }
  return;
}

// execSetAudioBusSendPreEffect @ 146581520

void __cdecl
USynthComponent::execSetAudioBusSendPreEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  UAudioBus *local_res10;
  
  local_res10 = (UAudioBus *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UAudioComponent **)&param_1[0x36].field_0x20 != (UAudioComponent *)0x0) {
    UAudioComponent::SetAudioBusSendPreEffect
              (*(UAudioComponent **)&param_1[0x36].field_0x20,local_res10,local_res8[0]);
  }
  return;
}

// execSetLowPassFilterEnabled @ 146581c40

void __cdecl
USynthComponent::execSetLowPassFilterEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UAudioComponent **)&param_1[0x36].field_0x20 != (UAudioComponent *)0x0) {
    UAudioComponent::SetLowPassFilterEnabled
              (*(UAudioComponent **)&param_1[0x36].field_0x20,local_res8[0] != 0);
  }
  return;
}

// execSetLowPassFilterFrequency @ 146581ce0

void __cdecl
USynthComponent::execSetLowPassFilterFrequency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x640))(param_1,local_res8[0]);
  return;
}

// execSetModulationRouting @ 146582080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USynthComponent::execSetModulationRouting(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *pTVar3;
  undefined1 auStackY_b8 [32];
  EModulationRouting local_88;
  EModulationDestination local_87 [15];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_87[0] = Volume;
  pTVar3 = (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
            *)local_78;
  if ((TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *)
      param_2->MostRecentPropertyAddress !=
      (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *)
      0x0) {
    pTVar3 = (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_87,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_87);
  }
  local_88 = Disable;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UAudioComponent **)&param_1[0x36].field_0x20 != (UAudioComponent *)0x0) {
    UAudioComponent::SetModulationRouting
              (*(UAudioComponent **)&param_1[0x36].field_0x20,pTVar3,local_87[0],local_88);
  }
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execSetOutputToBusOnly @ 146582280

void __cdecl USynthComponent::execSetOutputToBusOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UAudioComponent **)&param_1[0x36].field_0x20 != (UAudioComponent *)0x0) {
    UAudioComponent::SetOutputToBusOnly
              (*(UAudioComponent **)&param_1[0x36].field_0x20,local_res8[0] != 0);
  }
  return;
}

// execSetSourceBusSendPostEffect @ 146582db0

void __cdecl
USynthComponent::execSetSourceBusSendPostEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  USoundSourceBus *local_res10;
  
  local_res10 = (USoundSourceBus *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UAudioComponent **)&param_1[0x36].field_0x20 != (UAudioComponent *)0x0) {
    UAudioComponent::SetSourceBusSendPostEffect
              (*(UAudioComponent **)&param_1[0x36].field_0x20,local_res10,local_res8[0]);
  }
  return;
}

// execSetSourceBusSendPreEffect @ 146582e90

void __cdecl
USynthComponent::execSetSourceBusSendPreEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  USoundSourceBus *local_res10;
  
  local_res10 = (USoundSourceBus *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UAudioComponent **)&param_1[0x36].field_0x20 != (UAudioComponent *)0x0) {
    UAudioComponent::SetSourceBusSendPreEffect
              (*(UAudioComponent **)&param_1[0x36].field_0x20,local_res10,local_res8[0]);
  }
  return;
}

// execSetSubmixSend @ 146582f70

void __cdecl USynthComponent::execSetSubmixSend(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  USoundSubmixBase *local_res10;
  
  local_res10 = (USoundSubmixBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UAudioComponent **)&param_1[0x36].field_0x20 != (UAudioComponent *)0x0) {
    UAudioComponent::SetSubmixSend
              (*(UAudioComponent **)&param_1[0x36].field_0x20,local_res10,local_res8[0]);
  }
  return;
}

// execSetVolumeMultiplier @ 146583680

void __cdecl
USynthComponent::execSetVolumeMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UAudioComponent **)&param_1[0x36].field_0x20 != (UAudioComponent *)0x0) {
    UAudioComponent::SetVolumeMultiplier
              (*(UAudioComponent **)&param_1[0x36].field_0x20,local_res8[0]);
  }
  return;
}

// execStart @ 146583710

void __cdecl USynthComponent::execStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Start((USynthComponent *)param_1);
  return;
}

// execStop @ 146583ae0

void __cdecl USynthComponent::execStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Stop((USynthComponent *)param_1);
  return;
}

