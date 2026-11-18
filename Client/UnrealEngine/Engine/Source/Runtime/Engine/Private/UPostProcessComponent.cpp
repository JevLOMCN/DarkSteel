// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 147890310

UClass * __cdecl UPostProcessComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPostProcessComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PostProcessComponent",
               &Z_Registration_Info_UClass_UPostProcessComponent.InnerSingleton,
               StaticRegisterNativesUPostProcessComponent,0x9f0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPostProcessComponent>,
               InternalVTableHelperCtorCaller<UPostProcessComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPostProcessComponent.InnerSingleton;
}

// UPostProcessComponent @ 1478aab70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPostProcessComponent * __thiscall
UPostProcessComponent::UPostProcessComponent(UPostProcessComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UPostProcessComponent__6B_;
  FPostProcessSettings::FPostProcessSettings(&this->Settings);
  (this->VolumeGuid).A = 0;
  (this->VolumeGuid).B = 0;
  (this->VolumeGuid).C = 0;
  (this->VolumeGuid).D = 0;
  return this;
}

// UPostProcessComponent @ 1478aabe0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPostProcessComponent * __thiscall
UPostProcessComponent::UPostProcessComponent
          (UPostProcessComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UPostProcessComponent__6B_;
  FPostProcessSettings::FPostProcessSettings(&this->Settings);
  this->BlendRadius = 100.0;
  this->bEnabled = 1;
  this->bUnbound = 1;
  (this->VolumeGuid).A = 0;
  (this->VolumeGuid).B = 0;
  (this->VolumeGuid).C = 0;
  (this->VolumeGuid).D = 0;
  this->Priority = 0.0;
  this->BlendWeight = 1.0;
  return this;
}

// ~UPostProcessComponent @ 1478ac680

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPostProcessComponent::~UPostProcessComponent(UPostProcessComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UPostProcessComponent__6B_;
  pFVar1 = (this->Settings).WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface_PostProcessVolume__6B_;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// EncompassesPoint @ 1478cb7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UPostProcessComponent::EncompassesPoint
          (UPostProcessComponent *this,TVector<double> *param_1,float param_2,float *param_3)

{
  int iVar1;
  char cVar2;
  UClass *pUVar3;
  longlong *plVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_e8 [32];
  float local_c8 [2];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined1 local_88 [24];
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  plVar4 = *(longlong **)&this[-1].Settings.AmbientOcclusionFadeDistance;
  if (plVar4 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UShapeComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar4[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_1478cb824;
  }
  plVar4 = (longlong *)0x0;
LAB_1478cb824:
  if (plVar4 == (longlong *)0x0) {
    if (param_3 != (float *)0x0) {
      *param_3 = 0.0;
    }
  }
  else {
    local_c8[0] = -1.0;
    cVar2 = (**(code **)(*plVar4 + 0x820))(plVar4,param_1,local_c8,local_88);
    if (cVar2 == '\0') {
      (**(code **)(*plVar4 + 0x598))(plVar4,&local_c0,plVar4 + 0x3e);
      pUVar3 = Z_Construct_UClass_USphereComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(plVar4[2] + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        local_70._s_0.Y = local_b8 - local_a0;
        local_58._s_0.Y = local_a0 + local_b8;
        local_70._s_0.X = local_c0 - local_a8;
        local_40 = 1;
        local_58._s_0.X = local_a8 + local_c0;
        local_70._s_0.Z = local_b0 - local_98;
        local_58._s_0.Z = local_98 + local_b0;
        dVar5 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                          ((TVector<double> *)&local_70._s_0,(TVector<double> *)&local_58._s_0,
                           param_1);
        local_90 = SQRT(dVar5);
      }
      else {
        local_c0 = local_c0 - (param_1->field0_0x0)._s_0.X;
        local_b8 = local_b8 - (param_1->field0_0x0)._s_0.Y;
        local_b0 = local_b0 - (param_1->field0_0x0)._s_0.Z;
        auVar6._0_8_ = local_c0 * local_c0;
        auVar6._8_8_ = 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = local_b8 * local_b8 + auVar6._0_8_ + local_b0 * local_b0;
        auVar7 = sqrtpd(auVar6,auVar7);
        local_90 = auVar7._0_8_ - local_90;
        if (local_90 <= 0.0) {
          local_90 = 0.0;
        }
      }
      local_c8[0] = (float)local_90;
    }
    else {
      local_c8[0] = SQRT(local_c8[0]);
    }
    if (param_3 != (float *)0x0) {
      *param_3 = local_c8[0];
    }
    if ((local_c8[0] < 0.0) || (param_2 < local_c8[0])) {
      return false;
    }
  }
  return true;
}

// GetDebugName @ 1478d0f60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FString * __thiscall
UPostProcessComponent::GetDebugName(UPostProcessComponent *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = *(FName *)(this[-1].Settings.LensFlareTints + 1);
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1478da070

UClass * __cdecl UPostProcessComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPostProcessComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PostProcessComponent",
               &Z_Registration_Info_UClass_UPostProcessComponent.InnerSingleton,
               StaticRegisterNativesUPostProcessComponent,0x9f0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPostProcessComponent>,
               InternalVTableHelperCtorCaller<UPostProcessComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPostProcessComponent.InnerSingleton;
}

// GetProperties @ 1478da1f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPostProcessVolumeProperties * __thiscall
UPostProcessComponent::GetProperties
          (UPostProcessComponent *this,FPostProcessVolumeProperties *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  bool bVar7;
  UClass *pUVar8;
  double *pdVar9;
  longlong *plVar10;
  undefined1 local_58 [80];
  
  __return_storage_ptr__->Size = 1.7976931348623157e+308;
  (__return_storage_ptr__->VolumeGuid).A = 0;
  (__return_storage_ptr__->VolumeGuid).B = 0;
  (__return_storage_ptr__->VolumeGuid).C = 0;
  (__return_storage_ptr__->VolumeGuid).D = 0;
  if (((*(byte *)((longlong)&(this->Settings).LensFlareTint.field0_0x0 + 8) & 1) == 0) ||
     (bVar7 = USceneComponent::ShouldRender
                        ((USceneComponent *)&this[-1].Settings.LensFlareBokehShape), !bVar7)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  __return_storage_ptr__->bIsEnabled = bVar7;
  if (((*(byte *)((longlong)&(this->Settings).LensFlareTint.field0_0x0 + 8) & 2) == 0) &&
     (lVar2 = *(longlong *)&this[-1].Settings.AmbientOcclusionFadeDistance, lVar2 != 0)) {
    pUVar8 = Z_Construct_UClass_UShapeComponent_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) goto LAB_1478da288;
    bVar7 = false;
  }
  else {
LAB_1478da288:
    bVar7 = true;
  }
  __return_storage_ptr__->bIsUnbound = bVar7;
  __return_storage_ptr__->BlendRadius = (this->Settings).LensFlareTint.field0_0x0._s_0.R;
  __return_storage_ptr__->BlendWeight = (this->Settings).LensFlareTint.field0_0x0._s_0.G;
  __return_storage_ptr__->Priority = (this->Settings).LensFlareIntensity;
  __return_storage_ptr__->Settings = (FPostProcessSettings *)&this->_padding_;
  dVar3 = __real_7fefffffffffffff;
  if (bVar7 != false) goto LAB_1478da34c;
  plVar10 = *(longlong **)&this[-1].Settings.AmbientOcclusionFadeDistance;
  if (plVar10 == (longlong *)0x0) {
LAB_1478da2ef:
    plVar10 = (longlong *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_UShapeComponent_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(plVar10[2] + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar10[2] + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) goto LAB_1478da2ef;
  }
  pdVar9 = (double *)(**(code **)(*plVar10 + 0x5a0))(plVar10,local_58);
  dVar3 = ((pdVar9[1] + pdVar9[4]) - (pdVar9[1] - pdVar9[4])) *
          ((*pdVar9 + pdVar9[3]) - (*pdVar9 - pdVar9[3])) *
          ((pdVar9[2] + pdVar9[5]) - (pdVar9[2] - pdVar9[5]));
LAB_1478da34c:
  __return_storage_ptr__->Size = dVar3;
  uVar4 = *(undefined8 *)((longlong)&(this->Settings).LensFlareTint.field0_0x0 + 0xc);
  fVar5 = (this->Settings).LensFlareThreshold;
  uVar6 = *(undefined4 *)&(this->Settings).field_0x53c;
  (__return_storage_ptr__->VolumeGuid).A = (int)uVar4;
  (__return_storage_ptr__->VolumeGuid).B = (int)((ulonglong)uVar4 >> 0x20);
  (__return_storage_ptr__->VolumeGuid).C = (uint)fVar5;
  (__return_storage_ptr__->VolumeGuid).D = uVar6;
  return __return_storage_ptr__;
}

// OnRegister @ 1478e6180

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPostProcessComponent::OnRegister(UPostProcessComponent *this)

{
  UWorld *this_00;
  IInterface_PostProcessVolume *pIVar1;
  
  USceneComponent::OnRegister((USceneComponent *)this);
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pIVar1 = (IInterface_PostProcessVolume *)&this->_padding_;
  if (this == (UPostProcessComponent *)0x0) {
    pIVar1 = (IInterface_PostProcessVolume *)0x0;
  }
  UWorld::InsertPostProcessVolume(this_00,pIVar1);
  return;
}

// OnUnregister @ 1478e6570

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPostProcessComponent::OnUnregister(UPostProcessComponent *this)

{
  UWorld *this_00;
  IInterface_PostProcessVolume *pIVar1;
  
  USceneComponent::OnUnregister((USceneComponent *)this);
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pIVar1 = (IInterface_PostProcessVolume *)&this->_padding_;
  if (this == (UPostProcessComponent *)0x0) {
    pIVar1 = (IInterface_PostProcessVolume *)0x0;
  }
  UWorld::RemovePostProcessVolume(this_00,pIVar1);
  return;
}

// PostInitProperties @ 1478e74d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPostProcessComponent::PostInitProperties(UPostProcessComponent *this)

{
  UObject::PostInitProperties((UObject *)this);
  if (((AActor *)this->_padding_ != (AActor *)0x0) &&
     (*(char *)((longlong)&this->_padding_ + 1) != '\x03')) {
    AActor::AddOwnedComponent((AActor *)this->_padding_,(UActorComponent *)this);
    return;
  }
  return;
}

// Serialize @ 1478ef2f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPostProcessComponent::Serialize(UPostProcessComponent *this,FArchive *param_1)

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

// Serialize @ 1478ef300

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPostProcessComponent::Serialize(UPostProcessComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  USceneComponent::Serialize((USceneComponent *)this,pFVar1);
  return;
}

// StaticRegisterNativesUPostProcessComponent @ 1478f82f0

void __cdecl UPostProcessComponent::StaticRegisterNativesUPostProcessComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPostProcessComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 1478fffb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __thiscall UPostProcessComponent::_getUObject(UPostProcessComponent *this)

{
  return (UObject *)&this[-1].Settings.field_0x768;
}

// _getUObject`adjustor{552}' @ 1478fffbc

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UPostProcessComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall UPostProcessComponent::_getUObject_adjustor_552__(UPostProcessComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UPostProcessComponent *)(this[-1].Settings.LensFlareTints + 2));
  return (UObject *)pUVar1;
}

// execAddOrUpdateBlendable @ 1479011d0

void __cdecl
UPostProcessComponent::execAddOrUpdateBlendable(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  UObject *pUVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 local_res10 [2];
  undefined4 local_68 [2];
  UObject *local_60;
  UObject *local_58;
  undefined8 uStack_50;
  
  local_58 = (UObject *)0x0;
  uStack_50 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar7 = local_58;
  uVar6 = local_res10[0];
  uVar12 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_58 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_58);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 == (UObject *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable(pUVar7);
      goto LAB_1479012dd;
    }
  }
  if (pUVar7 == (UObject *)0x0) {
    return;
  }
LAB_1479012dd:
  puVar1 = &param_1[0x3e].field_0x8;
  iVar10 = *(int *)&param_1[0x3e].field_0x10;
  uVar13 = uVar12;
  uVar14 = uVar12;
  if (0 < (longlong)iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar11 < *(int *)&param_1[0x3e].field_0x10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar3 = *(UObject **)(*(longlong *)puVar1 + uVar14 + 8);
      if (pUVar3 == (UObject *)0x0) {
        bVar8 = pUVar7 == (UObject *)0x0;
      }
      else {
        bVar8 = pUVar3 == pUVar7;
      }
      if (bVar8) {
        uVar9 = 0;
        if ((int)uVar11 < *(int *)&param_1[0x3e].field_0x10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)(*(longlong *)puVar1 + (longlong)(int)uVar11 * 0x10) = uVar6;
        return;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar13 = uVar13 + 1;
      uVar14 = uVar14 + 0x10;
    } while ((longlong)uVar13 < (longlong)iVar10);
  }
  local_68[0] = uVar6;
  local_60 = pUVar7;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  if (((*(undefined4 **)puVar1 <= local_68) &&
      (local_68 < *(undefined4 **)puVar1 + (longlong)*(int *)&param_1[0x3e].field_0x14 * 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = *(int *)&param_1[0x3e].field_0x10;
  if (iVar10 == *(int *)&param_1[0x3e].field_0x14) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)puVar1,(int *)&param_1[0x3e].field_0x14);
    *(int *)&param_1[0x3e].field_0x10 = iVar10;
  }
  *(int *)&param_1[0x3e].field_0x10 = iVar10 + 1;
  lVar4 = *(longlong *)puVar1;
  *(undefined4 *)(lVar4 + (longlong)iVar10 * 0x10) = local_68[0];
  *(UObject **)(lVar4 + (longlong)iVar10 * 0x10 + 8) = local_60;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_60);
  }
  return;
}

