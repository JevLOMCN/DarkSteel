// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 12

// StaticClass @ 14d9985d0

UClass * __cdecl UAttenuationVolumeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAttenuationVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AttenuationVolumeComponent",
               &Z_Registration_Info_UClass_UAttenuationVolumeComponent.InnerSingleton,
               StaticRegisterNativesUAttenuationVolumeComponent,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAttenuationVolumeComponent>,
               InternalVTableHelperCtorCaller<UAttenuationVolumeComponent>,local_res8,
               UAudioGameplayVolumeMutator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAttenuationVolumeComponent.InnerSingleton;
}

// UAttenuationVolumeComponent @ 14d99f430

UAttenuationVolumeComponent * __thiscall
UAttenuationVolumeComponent::UAttenuationVolumeComponent
          (UAttenuationVolumeComponent *this,FVTableHelper *param_1)

{
  UAudioGameplayComponent::UAudioGameplayComponent((UAudioGameplayComponent *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->ExteriorVolume = 1.0;
  this->ExteriorTime = 0.5;
  this->InteriorVolume = 1.0;
  this->InteriorTime = 0.5;
  return this;
}

// UAttenuationVolumeComponent @ 14d99f4a0

UAttenuationVolumeComponent * __thiscall
UAttenuationVolumeComponent::UAttenuationVolumeComponent
          (UAttenuationVolumeComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UAudioGameplayComponent::UAudioGameplayComponent((UAudioGameplayComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)&this->_padding_ = 0;
  this->ExteriorVolume = 1.0;
  this->ExteriorTime = 0.5;
  this->InteriorVolume = 1.0;
  this->InteriorTime = 0.5;
  *(undefined1 *)&this->_padding_ = 3;
  return this;
}

// ~UAttenuationVolumeComponent @ 14d9a0390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UAttenuationVolumeComponent::~UAttenuationVolumeComponent(UAttenuationVolumeComponent *this)

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

// CopyAudioDataToMutator @ 14d9a3a70

void __thiscall
UAttenuationVolumeComponent::CopyAudioDataToMutator
          (UAttenuationVolumeComponent *this,TSharedPtr<FProxyVolumeMutator,1> *param_1)

{
  float fVar1;
  TReferenceControllerBase<1> *pTVar2;
  FProxyVolumeMutator *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  fVar1 = this->ExteriorVolume;
  if (pFVar3 == (FProxyVolumeMutator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(float *)&pFVar3[1]._padding_ = fVar1;
  fVar1 = this->ExteriorTime;
  if (pFVar3 == (FProxyVolumeMutator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(float *)((longlong)&pFVar3[1]._padding_ + 4) = fVar1;
  *(float *)&pFVar3[1]._padding_ = this->InteriorVolume;
  *(float *)((longlong)&pFVar3[1]._padding_ + 4) = this->InteriorTime;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// FactoryMutator @ 14d9a5310

TSharedPtr<FProxyVolumeMutator,1> * __thiscall
UAttenuationVolumeComponent::FactoryMutator
          (UAttenuationVolumeComponent *this,
          TSharedPtr<FProxyVolumeMutator,1> *__return_storage_ptr__)

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
  
  pTVar6 = ::operator_new(0x50);
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
         &
         ___7__TIntrusiveReferenceController_VFProxyMutator_Attenuation___00_SharedPointerInternals__6B_
    ;
    pTVar6[2]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&___7FProxyVolumeMutator__6B_;
    *(undefined8 *)((longlong)&pTVar6[3]._padding_ + 4) = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0xffffffff;
    *(undefined4 *)&pTVar6[3]._padding_ = 0xffffffff;
    ::FName::FName(&local_res10,L"MutatorBase");
    *(FName *)((longlong)&pTVar6[3]._padding_ + 4) = local_res10;
    *(undefined4 *)&pTVar6[4]._padding_ = 0x3f800000;
    pTVar6[1]._padding_ = (longlong)&___7FProxyMutator_Attenuation__6B_;
    *(undefined4 *)((longlong)&pTVar6[4]._padding_ + 4) = 0x3f000000;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x3f000000;
    ::FName::FName(&local_res18,L"Attenuation");
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
      goto LAB_14d9a5475;
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
LAB_14d9a5475:
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

// GetPrivateStaticClass @ 14d9a65d0

UClass * __cdecl UAttenuationVolumeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAttenuationVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AttenuationVolumeComponent",
               &Z_Registration_Info_UClass_UAttenuationVolumeComponent.InnerSingleton,
               StaticRegisterNativesUAttenuationVolumeComponent,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAttenuationVolumeComponent>,
               InternalVTableHelperCtorCaller<UAttenuationVolumeComponent>,local_res8,
               UAudioGameplayVolumeMutator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAttenuationVolumeComponent.InnerSingleton;
}

// SetExteriorVolume @ 14d9a98a0

void __thiscall
UAttenuationVolumeComponent::SetExteriorVolume
          (UAttenuationVolumeComponent *this,float param_1,float param_2)

{
  this->ExteriorVolume = param_1;
  this->ExteriorTime = param_2;
  UAudioGameplayVolumeMutator::NotifyDataChanged((UAudioGameplayVolumeMutator *)this);
  return;
}

// SetInteriorVolume @ 14d9a98e0

void __thiscall
UAttenuationVolumeComponent::SetInteriorVolume
          (UAttenuationVolumeComponent *this,float param_1,float param_2)

{
  this->InteriorVolume = param_1;
  this->InteriorTime = param_2;
  UAudioGameplayVolumeMutator::NotifyDataChanged((UAudioGameplayVolumeMutator *)this);
  return;
}

// StaticRegisterNativesUAttenuationVolumeComponent @ 14d9a9aa0

void __cdecl UAttenuationVolumeComponent::StaticRegisterNativesUAttenuationVolumeComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAttenuationVolumeComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetExteriorVolume @ 14d9ad330

void __cdecl
UAttenuationVolumeComponent::execSetExteriorVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[5].field_0x8 = local_res8[0];
  *(undefined4 *)&param_1[5].field_0xc = local_res10[0];
  UAudioGameplayVolumeMutator::NotifyDataChanged((UAudioGameplayVolumeMutator *)param_1);
  return;
}

// execSetInteriorVolume @ 14d9ad4f0

void __cdecl
UAttenuationVolumeComponent::execSetInteriorVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[5].field_0x10 = local_res8[0];
  *(undefined4 *)&param_1[5].field_0x14 = local_res10[0];
  UAudioGameplayVolumeMutator::NotifyDataChanged((UAudioGameplayVolumeMutator *)param_1);
  return;
}

