// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 10

// StaticClass @ 14d998510

UClass * __cdecl UReverbVolumeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReverbVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"ReverbVolumeComponent",
               &Z_Registration_Info_UClass_UReverbVolumeComponent.InnerSingleton,
               StaticRegisterNativesUReverbVolumeComponent,0xf0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UReverbVolumeComponent>,
               InternalVTableHelperCtorCaller<UReverbVolumeComponent>,local_res8,
               UAudioGameplayVolumeMutator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReverbVolumeComponent.InnerSingleton;
}

// UReverbVolumeComponent @ 14d99fb10

UReverbVolumeComponent * __thiscall
UReverbVolumeComponent::UReverbVolumeComponent(UReverbVolumeComponent *this,FVTableHelper *param_1)

{
  UAudioGameplayComponent::UAudioGameplayComponent((UAudioGameplayComponent *)this,param_1);
  (this->ReverbSettings).bApplyReverb = true;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ReverbSettings).ReverbEffect.field0_0x0.DebugPtr = (UReverbEffect *)0x0;
  (this->ReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr = (USoundEffectSubmixPreset *)0x0;
  (this->ReverbSettings).Volume = 0.5;
  (this->ReverbSettings).FadeTime = 2.0;
  return this;
}

// UReverbVolumeComponent @ 14d99fb80

UReverbVolumeComponent * __thiscall
UReverbVolumeComponent::UReverbVolumeComponent
          (UReverbVolumeComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UAudioGameplayComponent::UAudioGameplayComponent((UAudioGameplayComponent *)this,param_1);
  (this->ReverbSettings).bApplyReverb = true;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)&this->_padding_ = 0;
  (this->ReverbSettings).ReverbEffect.field0_0x0.DebugPtr = (UReverbEffect *)0x0;
  (this->ReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr = (USoundEffectSubmixPreset *)0x0;
  (this->ReverbSettings).Volume = 0.5;
  (this->ReverbSettings).FadeTime = 2.0;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// ~UReverbVolumeComponent @ 14d9a0570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UReverbVolumeComponent::~UReverbVolumeComponent(UReverbVolumeComponent *this)

{
  this->_padding_ = (longlong)&UActorComponent::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UActorComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UActorComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FTickFunction::~FTickFunction((FTickFunction *)&this->_padding_);
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CopyAudioDataToMutator @ 14d9a3c40

void __thiscall
UReverbVolumeComponent::CopyAudioDataToMutator
          (UReverbVolumeComponent *this,TSharedPtr<FProxyVolumeMutator,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FProxyVolumeMutator *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FProxyVolumeMutator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FReverbSettings::operator=((FReverbSettings *)(pFVar2 + 1),&this->ReverbSettings);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// FactoryMutator @ 14d9a5670

TSharedPtr<FProxyVolumeMutator,1> * __thiscall
UReverbVolumeComponent::FactoryMutator
          (UReverbVolumeComponent *this,TSharedPtr<FProxyVolumeMutator,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FProxyVolumeMutator,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FProxyVolumeMutator *pFVar9;
  FName local_res10;
  FName local_res18;
  
  pTVar6 = ::operator_new(0x60);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FProxyVolumeMutator *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFProxyMutator_Reverb___00_SharedPointerInternals__6B_
    ;
    pTVar6[2]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&___7FProxyVolumeMutator__6B_;
    *(undefined8 *)((longlong)&pTVar6[3]._padding_ + 4) = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0xffffffff;
    *(undefined4 *)&pTVar6[3]._padding_ = 0xffffffff;
    ::FName::FName(&local_res10,L"MutatorBase");
    *(FName *)((longlong)&pTVar6[3]._padding_ + 4) = local_res10;
    pTVar6[1]._padding_ = (longlong)&___7FProxyMutator_Reverb__6B_;
    *(undefined1 *)&pTVar6[4]._padding_ = 1;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5]._padding_ = 0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x3f000000;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x40000000;
    ::FName::FName(&local_res18,L"Reverb");
    pFVar9 = (FProxyVolumeMutator *)(pTVar6 + 1);
    *(FName *)((longlong)&pTVar6[3]._padding_ + 4) = local_res18;
    pTVar8 = pTVar6;
    if (pFVar9 == (FProxyVolumeMutator *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FProxyVolumeMutator,1> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d9a57d3;
    }
  }
  if (((pFVar9->_padding_ == 0) || (pFVar9->_padding_ == 0)) ||
     (*(int *)(pFVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d9a57d3:
  __return_storage_ptr__->Object = pFVar9;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d9a6b00

UClass * __cdecl UReverbVolumeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReverbVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"ReverbVolumeComponent",
               &Z_Registration_Info_UClass_UReverbVolumeComponent.InnerSingleton,
               StaticRegisterNativesUReverbVolumeComponent,0xf0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UReverbVolumeComponent>,
               InternalVTableHelperCtorCaller<UReverbVolumeComponent>,local_res8,
               UAudioGameplayVolumeMutator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReverbVolumeComponent.InnerSingleton;
}

// SetReverbSettings @ 14d9a99a0

void __thiscall
UReverbVolumeComponent::SetReverbSettings(UReverbVolumeComponent *this,FReverbSettings *param_1)

{
  FReverbSettings::operator=(&this->ReverbSettings,param_1);
  UAudioGameplayVolumeMutator::NotifyDataChanged((UAudioGameplayVolumeMutator *)this);
  return;
}

// StaticRegisterNativesUReverbVolumeComponent @ 14d9a9ba0

void __cdecl UReverbVolumeComponent::StaticRegisterNativesUReverbVolumeComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UReverbVolumeComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetReverbSettings @ 14d9ad670

void __cdecl
UReverbVolumeComponent::execSetReverbSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FReverbSettings *pFVar2;
  FReverbSettings local_28;
  
  local_28.bApplyReverb = true;
  local_28.Volume = 0.5;
  local_28.FadeTime = 2.0;
  local_28.ReverbEffect.field0_0x0.DebugPtr = (TObjectPtr<UReverbEffect>_u_0)0x0;
  local_28.ReverbPluginEffect.field0_0x0.DebugPtr = (TObjectPtr<USoundEffectSubmixPreset>_u_0)0x0;
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
  pFVar2 = &local_28;
  if ((FReverbSettings *)param_2->MostRecentPropertyAddress != (FReverbSettings *)0x0) {
    pFVar2 = (FReverbSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FReverbSettings::operator=((FReverbSettings *)&param_1[5].field_0x8,pFVar2);
  UAudioGameplayVolumeMutator::NotifyDataChanged((UAudioGameplayVolumeMutator *)param_1);
  return;
}

