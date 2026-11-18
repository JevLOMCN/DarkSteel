// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 19

// StaticClass @ 14a837e50

UClass * __cdecl AWN_ISKM_CharacterBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ISKM_CharacterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_CharacterBase",
               &Z_Registration_Info_UClass_AWN_ISKM_CharacterBase.InnerSingleton,
               StaticRegisterNativesAWN_ISKM_CharacterBase,800,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_ISKM_CharacterBase>,
               InternalVTableHelperCtorCaller<AWN_ISKM_CharacterBase>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ISKM_CharacterBase.InnerSingleton;
}

// AWN_ISKM_CharacterBase @ 14a83e560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_ISKM_CharacterBase * __thiscall
AWN_ISKM_CharacterBase::AWN_ISKM_CharacterBase(AWN_ISKM_CharacterBase *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IWN_ISKM_Controller__;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->MaxDrawDistance = 100000.0;
  this->LODDistanceScale = 1.0;
  this->bUsedForBoids = false;
  (this->Bounds).IsValid = '\0';
  return this;
}

// AWN_ISKM_CharacterBase @ 14a83e5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_ISKM_CharacterBase * __thiscall
AWN_ISKM_CharacterBase::AWN_ISKM_CharacterBase
          (AWN_ISKM_CharacterBase *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IWN_ISKM_Controller__;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->MaxDrawDistance = 100000.0;
  this->LODDistanceScale = 1.0;
  this->bUsedForBoids = false;
  (this->Bounds).IsValid = '\0';
  return this;
}

// ~AWN_ISKM_CharacterBase @ 14a83fae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ISKM_CharacterBase::~AWN_ISKM_CharacterBase(AWN_ISKM_CharacterBase *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&___7IWN_ISKM_Controller__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginDestroy @ 14a843b50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ISKM_CharacterBase::BeginDestroy(AWN_ISKM_CharacterBase *this)

{
  IWN_ISKM_Controller *pIVar1;
  
  if (this->_padding_ != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1b0),this)
    ;
  }
  if ((int)this->_padding_ != -1) {
    pIVar1 = (IWN_ISKM_Controller *)&this->_padding_;
    (**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1);
    if (this == (AWN_ISKM_CharacterBase *)0x0) {
      pIVar1 = (IWN_ISKM_Controller *)0x0;
    }
    UWN_ISKM_Subsystem::UnregisterController((UWN_ISKM_Subsystem *)this->_padding_,pIVar1);
  }
  AActor::BeginDestroy((AActor *)this);
  return;
}

// GetActorBounds @ 14a849f40

void __thiscall
AWN_ISKM_CharacterBase::GetActorBounds
          (AWN_ISKM_CharacterBase *this,bool param_1,TVector<double> *param_2,
          TVector<double> *param_3,bool param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = ((this->Bounds).Max.field0_0x0._s_0.X - (this->Bounds).Min.field0_0x0._s_0.X) *
          __real_3fe0000000000000;
  dVar4 = ((this->Bounds).Max.field0_0x0._s_0.Y - (this->Bounds).Min.field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar3 = ((this->Bounds).Max.field0_0x0._s_0.Z - (this->Bounds).Min.field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  (param_3->field0_0x0)._s_0.X = dVar5;
  (param_3->field0_0x0)._s_0.Y = dVar4;
  (param_3->field0_0x0)._s_0.Z = dVar3;
  dVar1 = (this->Bounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->Bounds).Min.field0_0x0._s_0.Z;
  (param_2->field0_0x0)._s_0.X = dVar5 + (this->Bounds).Min.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar4 + dVar1;
  (param_2->field0_0x0)._s_0.Z = dVar3 + dVar2;
  return;
}

// GetPrivateStaticClass @ 14a84afc0

UClass * __cdecl AWN_ISKM_CharacterBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ISKM_CharacterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_CharacterBase",
               &Z_Registration_Info_UClass_AWN_ISKM_CharacterBase.InnerSingleton,
               StaticRegisterNativesAWN_ISKM_CharacterBase,800,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_ISKM_CharacterBase>,
               InternalVTableHelperCtorCaller<AWN_ISKM_CharacterBase>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ISKM_CharacterBase.InnerSingleton;
}

// ISKM_DestroyAllComponents @ 14a84c1e0

void __thiscall AWN_ISKM_CharacterBase::ISKM_DestroyAllComponents(AWN_ISKM_CharacterBase *this)

{
  return;
}

// ISKM_GetLocation @ 14a84c2d0

TVector<double> * __thiscall
AWN_ISKM_CharacterBase::ISKM_GetLocation
          (AWN_ISKM_CharacterBase *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  lVar1 = this[-1]._padding_;
  if (lVar1 == 0) {
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_28 = *(double *)(lVar1 + 0x210);
    dStack_20 = *(double *)(lVar1 + 0x218);
    local_18 = *(double *)(lVar1 + 0x220);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// ISKM_GetLodFragment @ 14a84c3b0

FWN_ISKM_LodFragment * __thiscall
AWN_ISKM_CharacterBase::ISKM_GetLodFragment(AWN_ISKM_CharacterBase *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FWN_ISKM_LodFragment *pFVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  if (uVar1 == 0xffffffff) {
    return (FWN_ISKM_LodFragment *)0x0;
  }
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x70)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FWN_ISKM_LodFragment *)(*pcVar3)();
      return pFVar5;
    }
  }
  return (FWN_ISKM_LodFragment *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar2 + 0x68));
}

// ISKM_GetLodFragment_Mutable @ 14a84c4d0

FWN_ISKM_LodFragment * __thiscall
AWN_ISKM_CharacterBase::ISKM_GetLodFragment_Mutable(AWN_ISKM_CharacterBase *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FWN_ISKM_LodFragment *pFVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  if (uVar1 == 0xffffffff) {
    return (FWN_ISKM_LodFragment *)0x0;
  }
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x70)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FWN_ISKM_LodFragment *)(*pcVar3)();
      return pFVar5;
    }
  }
  return (FWN_ISKM_LodFragment *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar2 + 0x68));
}

// ISKM_PostUpdateController @ 14a84c6f0

void __thiscall
AWN_ISKM_CharacterBase::ISKM_PostUpdateController
          (AWN_ISKM_CharacterBase *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  return;
}

// ISKM_PostUpdateInstances @ 14a84c8e0

void __thiscall
AWN_ISKM_CharacterBase::ISKM_PostUpdateInstances(AWN_ISKM_CharacterBase *this,float param_1)

{
  return;
}

// ISKM_PreUpdateController @ 14a84c950

void __thiscall
AWN_ISKM_CharacterBase::ISKM_PreUpdateController
          (AWN_ISKM_CharacterBase *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  return;
}

// ISKM_PreUpdateInstances @ 14a84d040

TArray<FWN_ISKM_InstanceTask,TSizedDefaultAllocator<32>_> * __thiscall
AWN_ISKM_CharacterBase::ISKM_PreUpdateInstances
          (AWN_ISKM_CharacterBase *this,
          TArray<FWN_ISKM_InstanceTask,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          float param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// ISKM_UpdateAnimation_AnyThread @ 14a84dea0

void __thiscall
AWN_ISKM_CharacterBase::ISKM_UpdateAnimation_AnyThread
          (AWN_ISKM_CharacterBase *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  return;
}

// ISKM_UpdateInstance_AnyThread @ 14a84eb70

void __thiscall
AWN_ISKM_CharacterBase::ISKM_UpdateInstance_AnyThread
          (AWN_ISKM_CharacterBase *this,int param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,float param_5,float param_6)

{
  return;
}

// MarkComponentsAsGarbage @ 14a850440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AWN_ISKM_CharacterBase::MarkComponentsAsGarbage(AWN_ISKM_CharacterBase *this,bool param_1)

{
  IWN_ISKM_Controller *pIVar1;
  
  if (this->_padding_ != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1b0),this)
    ;
  }
  if ((int)this->_padding_ != -1) {
    pIVar1 = (IWN_ISKM_Controller *)&this->_padding_;
    (**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1);
    if (this == (AWN_ISKM_CharacterBase *)0x0) {
      pIVar1 = (IWN_ISKM_Controller *)0x0;
    }
    UWN_ISKM_Subsystem::UnregisterController((UWN_ISKM_Subsystem *)this->_padding_,pIVar1);
  }
  AActor::MarkComponentsAsGarbage((AActor *)this,param_1);
  return;
}

// StaticRegisterNativesAWN_ISKM_CharacterBase @ 14a855ef0

void __cdecl AWN_ISKM_CharacterBase::StaticRegisterNativesAWN_ISKM_CharacterBase(void)

{
  return;
}

