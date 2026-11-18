// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// StaticClass @ 14788a7b0

UClass * __cdecl UPointLightComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPointLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PointLightComponent",
               &Z_Registration_Info_UClass_UPointLightComponent.InnerSingleton,
               StaticRegisterNativesUPointLightComponent,0x400,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPointLightComponent>,
               InternalVTableHelperCtorCaller<UPointLightComponent>,local_res8,
               ULocalLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPointLightComponent.InnerSingleton;
}

// UPointLightComponent @ 1478aa960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

UPointLightComponent * __thiscall
UPointLightComponent::UPointLightComponent(UPointLightComponent *this,FVTableHelper *param_1)

{
  ULightComponent::ULightComponent((ULightComponent *)this,param_1);
  *(undefined4 *)&this->field_0x3d0 = 0x3f800000;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)&this->field_0x3d4 = 0x40000000;
  this->field_0x3d8 = 0;
  return this;
}

// UPointLightComponent @ 1478aa9c0

UPointLightComponent * __thiscall
UPointLightComponent::UPointLightComponent(UPointLightComponent *this,FObjectInitializer *param_1)

{
  ULocalLightComponent::ULocalLightComponent((ULocalLightComponent *)this,param_1);
  this->LightFalloffExponent = 8.0;
  this->SourceRadius = 0.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  this->bUseInverseSquaredFalloff = 1;
  this->SoftSourceRadius = 0.0;
  this->SourceLength = 0.0;
  return this;
}

// ~UPointLightComponent @ 1478ac580

void __thiscall UPointLightComponent::~UPointLightComponent(UPointLightComponent *this)

{
  *(undefined ***)this = &ULightComponent::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &ULightComponent::_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &ULightComponent::_vftable__for__IAsyncPhysicsStateProcessor__
  ;
  FRenderCommandFence::~FRenderCommandFence((FRenderCommandFence *)&this->field_0x3b0);
  FTexture::~FTexture((FTexture *)&this->field_0x350);
  ULightComponentBase::~ULightComponentBase((ULightComponentBase *)this);
  return;
}

// ComputeLightBrightness @ 1478bc0c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall UPointLightComponent::ComputeLightBrightness(UPointLightComponent *this)

{
  char cVar1;
  float fVar2;
  
  fVar2 = *(float *)&this->field_0x274;
  if (*(longlong *)&this->field_0x310 != 0) {
    cVar1 = (**(code **)(*(longlong *)this + 0x680))();
    if (cVar1 == '\x03') {
      fVar2 = powf(__real_40000000,*(float *)&this->field_0x274);
    }
    if ((this->field_0x318 & 1) != 0) {
      fVar2 = *(float *)&this->field_0x31c * *(float *)(*(longlong *)&this->field_0x310 + 0x170);
    }
    fVar2 = fVar2 * *(float *)(*(longlong *)&this->field_0x310 + 0x174);
    if (cVar1 == '\x03') {
      fVar2 = logf(fVar2);
      fVar2 = fVar2 * __real_3fb8aa3b;
    }
  }
  if (this->bUseInverseSquaredFalloff != 0) {
    cVar1 = this->field_0x3c0;
    if (cVar1 == '\x01') {
      return fVar2 * __real_461c4000;
    }
    if (cVar1 == '\x04') {
      return (this->SourceLength * __real_3f000000 + this->SourceRadius) * this->SourceRadius *
             __real_41490fdb * fVar2;
    }
    if (cVar1 == '\x02') {
      return fVar2 * ___real_4446f195;
    }
    if (cVar1 == '\x03') {
      fVar2 = powf(__real_40000000,fVar2);
      return fVar2 * __real_461c4000;
    }
    fVar2 = fVar2 * __real_41800000;
  }
  return fVar2;
}

// CreateSceneProxy @ 1478c2440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightSceneProxy * __thiscall UPointLightComponent::CreateSceneProxy(UPointLightComponent *this)

{
  FLocalLightSceneProxy *this_00;
  
  if (((((int)GMaxRHIFeatureLevel < 2) && (this->field_0x1ab == '\x02')) &&
      ((!FReadOnlyCVARCache::bMobileDeferredShadingValue || (!FReadOnlyCVARCache::bMobileHDR)))) &&
     (FReadOnlyCVARCache::MobileForwardLocalLightsValue < 1)) {
    return (FLightSceneProxy *)0x0;
  }
  this_00 = ::operator_new(0x280);
  if (this_00 != (FLocalLightSceneProxy *)0x0) {
    FLocalLightSceneProxy::FLocalLightSceneProxy(this_00,(ULocalLightComponent *)this);
    *(undefined ***)this_00 = &___7FPointLightSceneProxy__6B_;
    *(float *)&this_00->field_0x268 = this->LightFalloffExponent;
    *(float *)&this_00->field_0x26c = this->SourceRadius;
    *(float *)(this_00 + 1) = this->SoftSourceRadius;
    *(float *)&this_00[1].field_0x4 = this->SourceLength;
    *(uint *)&this_00[1].field_0x8 =
         (*(uint *)&this_00[1].field_0x8 ^ this->bUseInverseSquaredFalloff) & 1 ^
         *(uint *)&this_00[1].field_0x8;
    return (FLightSceneProxy *)this_00;
  }
  return (FLightSceneProxy *)0x0;
}

// GetLightType @ 1478d5a70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ELightComponentType __thiscall UPointLightComponent::GetLightType(UPointLightComponent *this)

{
  return LightType_Point;
}

// GetPrivateStaticClass @ 1478d9ef0

UClass * __cdecl UPointLightComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPointLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PointLightComponent",
               &Z_Registration_Info_UClass_UPointLightComponent.InnerSingleton,
               StaticRegisterNativesUPointLightComponent,0x400,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPointLightComponent>,
               InternalVTableHelperCtorCaller<UPointLightComponent>,local_res8,
               ULocalLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPointLightComponent.InnerSingleton;
}

// GetUniformPenumbraSize @ 1478ddba0

float __thiscall UPointLightComponent::GetUniformPenumbraSize(UPointLightComponent *this)

{
  float fVar1;
  
  if (this->field_0x3d8 != '\0') {
    return __real_3f800000;
  }
  if (this->SourceRadius == 0.0) {
    fVar1 = __real_3d4ccccd;
    if (__real_3f800000 <= __real_3d4ccccd) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= __real_38d1b717) {
      fVar1 = __real_38d1b717;
    }
    return fVar1;
  }
  fVar1 = this->SourceRadius * __real_3ba3d70a;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= __real_38d1b717) {
    fVar1 = __real_38d1b717;
  }
  return fVar1;
}

// Serialize @ 1478ef140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall UPointLightComponent::Serialize(UPointLightComponent *this,FArchive *param_1)

{
  TRotator<double> local_28;
  
  ULightComponent::Serialize((ULightComponent *)this,param_1);
  if (*(int *)&param_1->field_0x40 < 0x154) {
    *(undefined4 *)&this->field_0x3cc = *(undefined4 *)&this->field_0x3c8;
  }
  if (*(int *)&param_1->field_0x40 < 0x154) {
    *(uint *)&this->field_0x3e0 =
         (ZPULL(*(undefined4 *)&this->field_0x3e0,0,1) ^ *(uint *)&this->field_0x2dc) & 1 ^
         *(undefined4 *)&this->field_0x3e0;
  }
  else if (((*(int *)&param_1->field_0x40 < 0x203) && (__real_38d1b717 < this->SourceLength)) &&
          (*(longlong *)&this->field_0x310 == 0)) {
    local_28.Pitch = ___xmm_0000000000000000c056800000000000;
    local_28.Yaw = _UNK_1517cfbf8;
    local_28.Roll = 0.0;
    USceneComponent::AddLocalRotation
              ((USceneComponent *)this,&local_28,false,(FHitResult *)0x0,None);
  }
  if (((param_1->field_0x28 & 1) != 0) && (this->bUseInverseSquaredFalloff == 0)) {
    this->field_0x3c0 = 0;
  }
  return;
}

// Serialize @ 1478ef210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
UPointLightComponent::Serialize(UPointLightComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  TRotator<double> local_28;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  ULightComponent::Serialize((ULightComponent *)this,pFVar1);
  if (*(int *)&pFVar1->field_0x40 < 0x154) {
    *(undefined4 *)&this->field_0x3cc = *(undefined4 *)&this->field_0x3c8;
  }
  if (*(int *)&pFVar1->field_0x40 < 0x154) {
    *(uint *)&this->field_0x3e0 =
         (ZPULL(*(undefined4 *)&this->field_0x3e0,0,1) ^ *(uint *)&this->field_0x2dc) & 1 ^
         *(undefined4 *)&this->field_0x3e0;
  }
  else if (((*(int *)&pFVar1->field_0x40 < 0x203) && (__real_38d1b717 < this->SourceLength)) &&
          (*(longlong *)&this->field_0x310 == 0)) {
    local_28.Pitch = ___xmm_0000000000000000c056800000000000;
    local_28.Yaw = _UNK_1517cfbf8;
    local_28.Roll = 0.0;
    USceneComponent::AddLocalRotation
              ((USceneComponent *)this,&local_28,false,(FHitResult *)0x0,None);
  }
  if (((pFVar1->field_0x28 & 1) != 0) && (this->bUseInverseSquaredFalloff == 0)) {
    this->field_0x3c0 = 0;
  }
  return;
}

// SetInverseExposureBlend @ 1478f2fd0

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
UPointLightComponent::SetInverseExposureBlend(UPointLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (param_1 != *(float *)&this->field_0x3c4)) {
    *(float *)&this->field_0x3c4 = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetLightFalloffExponent @ 1478f32f0

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
UPointLightComponent::SetLightFalloffExponent(UPointLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (param_1 != this->LightFalloffExponent)) {
    this->LightFalloffExponent = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetSoftSourceRadius @ 1478f52f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPointLightComponent::SetSoftSourceRadius(UPointLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (param_1 != this->SoftSourceRadius)) {
    this->SoftSourceRadius = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetSourceLength @ 1478f5370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPointLightComponent::SetSourceLength(UPointLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (param_1 != this->SourceLength)) {
    this->SourceLength = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetSourceRadius @ 1478f53d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPointLightComponent::SetSourceRadius(UPointLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (param_1 != this->SourceRadius)) {
    this->SourceRadius = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetUseInverseSquaredFalloff @ 1478f6100

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
UPointLightComponent::SetUseInverseSquaredFalloff(UPointLightComponent *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) {
    if (ZPULL(*(undefined4 *)&this->field_0x3e0,0,1) != (uint)param_1) {
      *(uint *)&this->field_0x3e0 = *(undefined4 *)&this->field_0x3e0 & 0xfffffffe | (uint)param_1;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// StaticRegisterNativesUPointLightComponent @ 1478f8270

void __cdecl UPointLightComponent::StaticRegisterNativesUPointLightComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UPointLightComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetInverseExposureBlend @ 14790e450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPointLightComponent::execSetInverseExposureBlend(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
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
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x18].field_0x4)) {
    *(float *)&param_1[0x18].field_0x4 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetLightFalloffExponent @ 14790e7c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPointLightComponent::execSetLightFalloffExponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
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
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x18].field_0x24)) {
    *(float *)&param_1[0x18].field_0x24 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetSoftSourceRadius @ 147911e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPointLightComponent::execSetSoftSourceRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
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
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x19].field_0x4)) {
    *(float *)&param_1[0x19].field_0x4 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetSourceLength @ 147911fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPointLightComponent::execSetSourceLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
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
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x19].field_0x8)) {
    *(float *)&param_1[0x19].field_0x8 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetSourceRadius @ 147912060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPointLightComponent::execSetSourceRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
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
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)(param_1 + 0x19))) {
    *(float *)(param_1 + 0x19) = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetUseInverseSquaredFalloff @ 147912ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPointLightComponent::execSetUseInverseSquaredFalloff
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
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
  bVar3 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if (((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) {
    if ((*(uint *)&param_1[0x18].field_0x20 & 1) != (uint)bVar3) {
      *(uint *)&param_1[0x18].field_0x20 =
           *(uint *)&param_1[0x18].field_0x20 & 0xfffffffe | (uint)bVar3;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    }
  }
  return;
}

