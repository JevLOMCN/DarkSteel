// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 33

// StaticClass @ 147284880

UClass * __cdecl ULightComponentBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightComponentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightComponentBase",
               &Z_Registration_Info_UClass_ULightComponentBase.InnerSingleton,
               StaticRegisterNativesULightComponentBase,0x2a0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULightComponentBase>,
               InternalVTableHelperCtorCaller<ULightComponentBase>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightComponentBase.InnerSingleton;
}

// ULightComponentBase @ 14728ba00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULightComponentBase * __thiscall
ULightComponentBase::ULightComponentBase(ULightComponentBase *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->OriginalLightGuid).A = 0;
  (this->OriginalLightGuid).B = 0;
  (this->OriginalLightGuid).C = 0;
  (this->OriginalLightGuid).D = 0;
  (this->LightGuid).A = 0;
  (this->LightGuid).B = 0;
  (this->LightGuid).C = 0;
  (this->LightGuid).D = 0;
  return this;
}

// ~ULightComponentBase @ 14728d2f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULightComponentBase::~ULightComponentBase(ULightComponentBase *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14728fa40

UClass * __cdecl ULightComponentBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightComponentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightComponentBase",
               &Z_Registration_Info_UClass_ULightComponentBase.InnerSingleton,
               StaticRegisterNativesULightComponentBase,0x2a0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULightComponentBase>,
               InternalVTableHelperCtorCaller<ULightComponentBase>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightComponentBase.InnerSingleton;
}

// Serialize @ 147291010

void __thiscall
ULightComponentBase::Serialize(ULightComponentBase *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesULightComponentBase @ 1472912e0

void __cdecl ULightComponentBase::StaticRegisterNativesULightComponentBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_ULightComponentBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetLightColor @ 147293620

void __cdecl ULightComponentBase::execGetLightColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FLinearColor *pFVar2;
  FLinearColor local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetLightColor((ULightComponentBase *)param_1,&local_18);
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  *(undefined8 *)param_3 = *(undefined8 *)&pFVar2->field0_0x0;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execSetAffectGlobalIllumination @ 147293d10

void __cdecl
ULightComponentBase::execSetAffectGlobalIllumination(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAffectGlobalIllumination((ULightComponentBase *)param_1,local_res10[0] != 0);
  return;
}

// execSetAffectReflection @ 147293da0

void __cdecl
ULightComponentBase::execSetAffectReflection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAffectReflection((ULightComponentBase *)param_1,local_res10[0] != 0);
  return;
}

// execSetCastDeepShadow @ 147293e30

void __cdecl
ULightComponentBase::execSetCastDeepShadow(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCastDeepShadow((ULightComponentBase *)param_1,local_res10[0] != 0);
  return;
}

// execSetCastRaytracedShadow @ 147293ec0

void __cdecl
ULightComponentBase::execSetCastRaytracedShadow(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCastRaytracedShadow((ULightComponentBase *)param_1,local_res10[0] != 0);
  return;
}

// execSetCastRaytracedShadows @ 147293f50

void __cdecl
ULightComponentBase::execSetCastRaytracedShadows(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [24];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCastRaytracedShadows((ULightComponentBase *)param_1,(uint)local_res10[0]);
  return;
}

// execSetCastShadows @ 147293fe0

void __cdecl ULightComponentBase::execSetCastShadows(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCastShadows((ULightComponentBase *)param_1,local_res10[0] != 0);
  return;
}

// execSetCastVolumetricShadow @ 147294070

void __cdecl
ULightComponentBase::execSetCastVolumetricShadow(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCastVolumetricShadow((ULightComponentBase *)param_1,local_res10[0] != 0);
  return;
}

// execSetSamplesPerPixel @ 147294100

void __cdecl
ULightComponentBase::execSetSamplesPerPixel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
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
  SetSamplesPerPixel((ULightComponentBase *)param_1,local_res10[0]);
  return;
}

// ULightComponentBase @ 1478a9b80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULightComponentBase * __thiscall
ULightComponentBase::ULightComponentBase(ULightComponentBase *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FColor FVar2;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->Brightness_DEPRECATED = 3.1415927;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->OriginalLightGuid).A = 0;
  (this->OriginalLightGuid).B = 0;
  (this->OriginalLightGuid).C = 0;
  (this->OriginalLightGuid).D = 0;
  (this->LightGuid).A = 0;
  (this->LightGuid).B = 0;
  (this->LightGuid).C = 0;
  (this->LightGuid).D = 0;
  this->Intensity = 3.1415927;
  FVar2 = FColor::White;
  this->bAffectsWorld = 1;
  this->bCastRaytracedShadow_DEPRECATED = 1;
  this->CastDynamicShadows = 1;
  this->CastStaticShadows = 1;
  this->CastShadows = 1;
  this->bAffectReflection = 1;
  this->bAffectGlobalIllumination = 1;
  (this->LightColor).field0_0x0._s_0 = (FColor_u_0_s_0)FVar2.field0_0x0;
  this->VolumetricScatteringIntensity = 1.0;
  (this->CastRaytracedShadow).Value = '\x01';
  this->DeepShadowLayerDistribution = 0.5;
  return this;
}

// GetLightColor @ 1478d5200

FLinearColor * __thiscall
ULightComponentBase::GetLightColor(ULightComponentBase *this,FLinearColor *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       FLinearColor::sRGBToLinearTable[(this->LightColor).field0_0x0._s_0.R];
  (__return_storage_ptr__->field0_0x0)._s_0.G =
       FLinearColor::sRGBToLinearTable[(this->LightColor).field0_0x0._s_0.G];
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       FLinearColor::sRGBToLinearTable[(this->LightColor).field0_0x0._s_0.B];
  (__return_storage_ptr__->field0_0x0)._s_0.A =
       (float)(this->LightColor).field0_0x0._s_0.A * __real_3b808081;
  return __return_storage_ptr__;
}

// GetPlacementExtent @ 1478d8920

TBoxSphereBounds<double,double> * __thiscall
ULightComponentBase::GetPlacementExtent
          (ULightComponentBase *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 25.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 25.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 25.0;
  __return_storage_ptr__->SphereRadius = 12.5;
  return __return_storage_ptr__;
}

// HasStaticLighting @ 1478df4d0

bool __thiscall ULightComponentBase::HasStaticLighting(ULightComponentBase *this)

{
  if ((this->field_0x1ab == '\0') && (*(longlong *)&this->field_0xa8 != 0)) {
    return true;
  }
  return false;
}

// HasStaticShadowing @ 1478df570

bool __thiscall ULightComponentBase::HasStaticShadowing(ULightComponentBase *this)

{
  if ((this->field_0x1ab != '\x02') && (*(longlong *)&this->field_0xa8 != 0)) {
    return true;
  }
  return false;
}

// PostDuplicate @ 1478e73e0

void __thiscall ULightComponentBase::PostDuplicate(ULightComponentBase *this,Type param_1)

{
  (**(code **)(*(longlong *)this + 0xf8))(this,param_1 == PIE);
  if (param_1 == Normal) {
    (**(code **)(*(longlong *)this + 0x640))(this);
  }
  return;
}

// Serialize @ 1478eea70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULightComponentBase::Serialize(ULightComponentBase *this,FArchive *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar4 < 0x96) {
    uVar1 = (this->LightGuid).B;
    uVar2 = (this->LightGuid).C;
    uVar3 = (this->LightGuid).D;
    (this->OriginalLightGuid).A = (this->LightGuid).A;
    (this->OriginalLightGuid).B = uVar1;
    (this->OriginalLightGuid).C = uVar2;
    (this->OriginalLightGuid).D = uVar3;
    (this->LightGuid).C = 0;
    (this->LightGuid).D = 0;
    (this->LightGuid).A = 0;
    (this->LightGuid).B = 0;
  }
  if (*(int *)&param_1->field_0x40 < 0x154) {
    this->Intensity = this->Brightness_DEPRECATED;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    if (iVar4 < 0x35) {
      (this->CastRaytracedShadow).Value = this->bCastRaytracedShadow_DEPRECATED;
    }
  }
  return;
}

// SetAffectGlobalIllumination @ 1478ef680

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
ULightComponentBase::SetAffectGlobalIllumination(ULightComponentBase *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (ZPULL(*(undefined4 *)&this->field_0x284,1,1) != (uint)param_1)) {
    *(uint *)&this->field_0x284 =
         *(undefined4 *)&this->field_0x284 & 0xfffffffd | (uint)param_1 + (uint)param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetAffectReflection @ 1478ef730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULightComponentBase::SetAffectReflection(ULightComponentBase *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) {
    if (ZPULL(*(undefined4 *)&this->field_0x284,0,1) != (uint)param_1) {
      *(uint *)&this->field_0x284 = *(undefined4 *)&this->field_0x284 & 0xfffffffe | (uint)param_1;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// SetCastDeepShadow @ 1478f0360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULightComponentBase::SetCastDeepShadow(ULightComponentBase *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (ZPULL(*(undefined4 *)&this->field_0x27c,7,1) != (uint)param_1)) {
    *(uint *)&this->field_0x27c =
         *(undefined4 *)&this->field_0x27c & 0xffffff7f | (uint)param_1 << 7;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetCastRaytracedShadow @ 1478f0450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULightComponentBase::SetCastRaytracedShadow(ULightComponentBase *this,bool param_1)

{
  uchar uVar1;
  bool bVar2;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((bVar2) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) {
    uVar1 = (this->CastRaytracedShadow).Value;
    if (param_1) {
      if (uVar1 == '\0') {
        (this->CastRaytracedShadow).Value = '\x01';
        UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
        return;
      }
    }
    else if (uVar1 != '\0') {
      (this->CastRaytracedShadow).Value = '\0';
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// SetCastRaytracedShadows @ 1478f04d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULightComponentBase::SetCastRaytracedShadows(ULightComponentBase *this,Type param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     ((this->CastRaytracedShadow).Value != param_1)) {
    (this->CastRaytracedShadow).Value = (uchar)param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetCastShadows @ 1478f0560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULightComponentBase::SetCastShadows(ULightComponentBase *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (ZPULL(*(undefined4 *)&this->field_0x27c,1,1) != (uint)param_1)) {
    *(uint *)&this->field_0x27c =
         *(undefined4 *)&this->field_0x27c & 0xfffffffd | (uint)param_1 + (uint)param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetCastVolumetricShadow @ 1478f05d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULightComponentBase::SetCastVolumetricShadow(ULightComponentBase *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (ZPULL(*(undefined4 *)&this->field_0x27c,6,1) != (uint)param_1)) {
    *(uint *)&this->field_0x27c =
         *(undefined4 *)&this->field_0x27c & 0xffffffbf | (uint)param_1 << 6;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetSamplesPerPixel @ 1478f4af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULightComponentBase::SetSamplesPerPixel(ULightComponentBase *this,int param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (this->SamplesPerPixel != param_1)) {
    this->SamplesPerPixel = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// ShouldCollideWhenPlacing @ 1478f6bc0

bool __thiscall ULightComponentBase::ShouldCollideWhenPlacing(ULightComponentBase *this)

{
  return true;
}

// UpdateLightGUIDs @ 1478fc0a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULightComponentBase::UpdateLightGUIDs(ULightComponentBase *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FGuid *pFVar3;
  FGuid *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FGuid local_28;
  FGuid local_18;
  
  if ((this->field_0x1ab == '\x02') || (*(longlong *)&this->field_0xa8 == 0)) {
    local_28.A = 0;
    local_28.B = 0;
    uVar1 = local_28._0_8_;
    local_28.C = 0;
    local_28.D = 0;
    uVar2 = local_28._8_8_;
    local_28.A = 0;
    local_28.B = 0;
    local_28.C = 0;
    local_28.D = 0;
    uVar5 = local_28.A;
    uVar6 = local_28.B;
    uVar7 = local_28.C;
    uVar8 = local_28.D;
    local_28._0_8_ = uVar1;
    local_28._8_8_ = uVar2;
  }
  else {
    pFVar3 = FGuid::NewGuid(&local_28);
    uVar5 = pFVar3->A;
    uVar6 = pFVar3->B;
    uVar7 = pFVar3->C;
    uVar8 = pFVar3->D;
  }
  pFVar3 = &this->OriginalLightGuid;
  pFVar3->A = uVar5;
  (this->OriginalLightGuid).B = uVar6;
  (this->OriginalLightGuid).C = uVar7;
  (this->OriginalLightGuid).D = uVar8;
  if (((((this->OriginalLightGuid).D == 0 && (this->OriginalLightGuid).C == 0) &&
       (this->OriginalLightGuid).B == 0) && pFVar3->A == 0) ||
     (*(AActor **)&this->field_0xa8 == (AActor *)0x0)) {
    local_28.A = 0;
    local_28.B = 0;
    pFVar3 = &local_28;
    local_28.C = 0;
    local_28.D = 0;
  }
  else {
    pFVar4 = FActorInstanceGuid::GetActorInstanceGuid(&local_28,*(AActor **)&this->field_0xa8);
    pFVar3 = FGuid::Combine(&local_18,pFVar3,pFVar4);
  }
  uVar5 = pFVar3->B;
  uVar6 = pFVar3->C;
  uVar7 = pFVar3->D;
  (this->LightGuid).A = pFVar3->A;
  (this->LightGuid).B = uVar5;
  (this->LightGuid).C = uVar6;
  (this->LightGuid).D = uVar7;
  return;
}

// ValidateLightGUIDs @ 1478fe590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULightComponentBase::ValidateLightGUIDs(ULightComponentBase *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid *pFVar5;
  FGuid local_28;
  FGuid local_18;
  
  pFVar5 = &this->OriginalLightGuid;
  if ((((this->OriginalLightGuid).C == 0 && (this->OriginalLightGuid).D == 0) &&
      (this->OriginalLightGuid).B == 0) && pFVar5->A == 0) {
    (**(code **)(*(longlong *)this + 0x640))();
  }
  if (((((this->OriginalLightGuid).C == 0 && (this->OriginalLightGuid).B == 0) &&
       (this->OriginalLightGuid).D == 0) && pFVar5->A == 0) ||
     (*(AActor **)&this->field_0xa8 == (AActor *)0x0)) {
    local_28.A = 0;
    local_28.B = 0;
    local_28.C = 0;
    local_28.D = 0;
    pFVar5 = &local_28;
  }
  else {
    pFVar4 = FActorInstanceGuid::GetActorInstanceGuid(&local_28,*(AActor **)&this->field_0xa8);
    pFVar5 = FGuid::Combine(&local_18,pFVar5,pFVar4);
  }
  uVar1 = pFVar5->B;
  uVar2 = pFVar5->C;
  uVar3 = pFVar5->D;
  (this->LightGuid).A = pFVar5->A;
  (this->LightGuid).B = uVar1;
  (this->LightGuid).C = uVar2;
  (this->LightGuid).D = uVar3;
  return;
}

