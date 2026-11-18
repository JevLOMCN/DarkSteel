// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 14798e9e0

UClass * __cdecl USpotLightComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpotLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpotLightComponent",
               &Z_Registration_Info_UClass_USpotLightComponent.InnerSingleton,
               StaticRegisterNativesUSpotLightComponent,0x400,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USpotLightComponent>,
               InternalVTableHelperCtorCaller<USpotLightComponent>,local_res8,
               UPointLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpotLightComponent.InnerSingleton;
}

// USpotLightComponent @ 1479a77a0

USpotLightComponent * __thiscall
USpotLightComponent::USpotLightComponent(USpotLightComponent *this,FVTableHelper *param_1)

{
  UPointLightComponent::UPointLightComponent((UPointLightComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// USpotLightComponent @ 1479a77e0

USpotLightComponent * __thiscall
USpotLightComponent::USpotLightComponent(USpotLightComponent *this,FObjectInitializer *param_1)

{
  UPointLightComponent::UPointLightComponent((UPointLightComponent *)this,param_1);
  this->InnerConeAngle = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->OuterConeAngle = 44.0;
  return this;
}

// ~USpotLightComponent @ 1479a99b0

void __thiscall USpotLightComponent::~USpotLightComponent(USpotLightComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UPointLightComponent::~UPointLightComponent((UPointLightComponent *)this);
  return;
}

// AffectsBounds @ 1479b17c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall
USpotLightComponent::AffectsBounds
          (USpotLightComponent *this,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  float fVar7;
  float fVar8;
  undefined8 extraout_XMM0_Qa;
  double dVar9;
  float fVar10;
  TVector<double> local_98 [6];
  
  bVar5 = ULocalLightComponent::AffectsBounds((ULocalLightComponent *)this,param_1);
  if (bVar5) {
    __libm_sse2_sincosf_();
    dVar1 = (double)this->_padding_;
    dVar3 = (double)this->_padding_;
    dVar4 = (double)this->_padding_;
    fVar7 = (float)extraout_XMM0_Qa;
    fVar8 = (float)((ulonglong)extraout_XMM0_Qa >> 0x20);
    pTVar6 = ULightComponent::GetDirection((ULightComponent *)this,local_98);
    dVar9 = param_1->SphereRadius / (double)fVar7;
    dVar2 = (param_1->Origin).field0_0x0._s_0.X - (dVar1 - dVar9 * (pTVar6->field0_0x0)._s_0.X);
    dVar3 = (param_1->Origin).field0_0x0._s_0.Y - (dVar3 - dVar9 * (pTVar6->field0_0x0)._s_0.Y);
    dVar1 = (param_1->Origin).field0_0x0._s_0.Z - (dVar4 - dVar9 * (pTVar6->field0_0x0)._s_0.Z);
    local_98[0].field0_0x0._16_8_ = dVar4;
    pTVar6 = ULightComponent::GetDirection((ULightComponent *)this,local_98);
    fVar10 = (float)(dVar3 * (pTVar6->field0_0x0)._s_0.Y + dVar2 * (pTVar6->field0_0x0)._s_0.X +
                    dVar1 * (pTVar6->field0_0x0)._s_0.Z);
    if ((0.0 < fVar10) &&
       ((float)(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1) * fVar8 * fVar8 <= fVar10 * fVar10))
    {
      local_98[0].field0_0x0._16_8_ = this->_padding_;
      dVar2 = (param_1->Origin).field0_0x0._s_0.X - (double)this->_padding_;
      dVar1 = (param_1->Origin).field0_0x0._s_0.Z - (double)local_98[0].field0_0x0._16_8_;
      dVar3 = (param_1->Origin).field0_0x0._s_0.Y - (double)this->_padding_;
      fVar10 = (float)(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
      pTVar6 = ULightComponent::GetDirection((ULightComponent *)this,local_98);
      dVar1 = dVar3 * (pTVar6->field0_0x0)._s_0.Y + dVar2 * (pTVar6->field0_0x0)._s_0.X +
              dVar1 * (pTVar6->field0_0x0)._s_0.Z;
      fVar8 = (float)(double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                                      __xmm_80000000000000008000000000000000._4_4_,
                                      SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000)
      ;
      if ((0.0 < fVar8) && (fVar7 * fVar7 * fVar10 <= fVar8 * fVar8)) {
        return (double)fVar10 <= param_1->SphereRadius * param_1->SphereRadius;
      }
      return true;
    }
  }
  return false;
}

// ComputeLightBrightness @ 1479b8e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall USpotLightComponent::ComputeLightBrightness(USpotLightComponent *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = ULightComponent::ComputeLightBrightness((ULightComponent *)this);
  if ((this->_padding_ & 1) != 0) {
    cVar1 = (char)this->_padding_;
    if (cVar1 == '\x01') {
      return fVar2 * __real_461c4000;
    }
    if (cVar1 == '\x04') {
      return fVar2 * (*(float *)&this->_padding_ * __real_3f000000 + *(float *)&this->_padding_) *
                     *(float *)&this->_padding_ * __real_41490fdb;
    }
    if (cVar1 == '\x02') {
      fVar3 = this->InnerConeAngle;
      if (__real_42b20000 <= this->InnerConeAngle) {
        fVar3 = __real_42b20000;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      fVar4 = this->OuterConeAngle * __real_3c8efa36;
      if (__real_3fc6f4b7 <= fVar4) {
        fVar4 = __real_3fc6f4b7;
      }
      fVar3 = fVar3 * __real_3c8efa36 + __real_3a83126f;
      if (fVar3 <= fVar4) {
        fVar3 = fVar4;
      }
      fVar3 = cosf(fVar3);
      return fVar2 * (__real_44c6f195 / (__real_3f800000 - fVar3));
    }
    if (cVar1 == '\x03') {
      fVar2 = powf(__real_40000000,fVar2);
      return fVar2 * __real_461c4000;
    }
    fVar2 = fVar2 * __real_41800000;
  }
  return fVar2;
}

// CreateSceneProxy @ 1479bc3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightSceneProxy * __thiscall USpotLightComponent::CreateSceneProxy(USpotLightComponent *this)

{
  uint uVar1;
  longlong lVar2;
  FLocalLightSceneProxy *this_00;
  float fVar3;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float _X;
  float fVar4;
  
  if (((((int)GMaxRHIFeatureLevel < 2) && (*(char *)((longlong)&this->_padding_ + 3) == '\x02')) &&
      ((!FReadOnlyCVARCache::bMobileDeferredShadingValue || (!FReadOnlyCVARCache::bMobileHDR)))) &&
     (FReadOnlyCVARCache::MobileForwardLocalLightsValue < 1)) {
    return (FLightSceneProxy *)0x0;
  }
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FLocalLightSceneProxy *)0x0) {
    FLocalLightSceneProxy::FLocalLightSceneProxy(this_00,(ULocalLightComponent *)this);
    fVar3 = __real_3c8efa36;
    *(undefined ***)this_00 = &___7FPointLightSceneProxy__6B_;
    *(undefined4 *)&this_00->field_0x268 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(int *)&this_00->field_0x26c = (int)this->_padding_;
    *(undefined4 *)(this_00 + 1) = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(int *)&this_00[1].field_0x4 = (int)this->_padding_;
    uVar1 = *(uint *)&this_00[1].field_0x8;
    lVar2 = this->_padding_;
    *(undefined ***)this_00 = &___7FSpotLightSceneProxy__6B_;
    *(uint *)&this_00[1].field_0x8 = (uVar1 ^ (uint)lVar2) & 1 ^ uVar1;
    fVar4 = this->InnerConeAngle;
    if (__real_42b20000 <= this->InnerConeAngle) {
      fVar4 = __real_42b20000;
    }
    _X = this->OuterConeAngle * fVar3;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (__real_3fc6f4b7 <= _X) {
      _X = __real_3fc6f4b7;
    }
    fVar4 = fVar4 * fVar3;
    fVar3 = fVar4 + __real_3a83126f;
    if (_X <= fVar3) {
      _X = fVar3;
    }
    *(float *)&this_00[1].field_0x10 = _X;
    __libm_sse2_sincosf_();
    *(undefined4 *)&this_00[1].field_0x20 = extraout_XMM0_Da;
    *(float *)&this_00[1].field_0x18 = extraout_XMM0_Db;
    fVar4 = cosf(fVar4);
    *(float *)&this_00[1].field_0x14 = fVar4;
    fVar3 = __real_3f800000;
    *(float *)&this_00[1].field_0x1c = __real_3f800000 / (fVar4 - extraout_XMM0_Db);
    fVar4 = tanf(_X);
    *(float *)&this_00[1].field_0x24 = fVar3 / fVar4;
    return (FLightSceneProxy *)this_00;
  }
  return (FLightSceneProxy *)0x0;
}

// GetBoundingSphere @ 1479c46b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TSphere<double> * __thiscall
USpotLightComponent::GetBoundingSphere
          (USpotLightComponent *this,TSphere<double> *__return_storage_ptr__)

{
  float fVar1;
  TVector<double> *pTVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  TVector<double>_u_0 local_58;
  TVector<double> local_40 [2];
  
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  pTVar2 = ULightComponent::GetDirection((ULightComponent *)this,local_40);
  local_58._s_0.X = (double)this->_padding_;
  local_58._s_0.Y = (double)this->_padding_;
  local_58._s_0.Z = (double)this->_padding_;
  __libm_sse2_sincos_();
  FMath::ComputeBoundingSphereForCone<double>
            (__return_storage_ptr__,(TVector<double> *)&local_58._s_0,pTVar2,(double)fVar1,
             (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc),
             (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da));
  return __return_storage_ptr__;
}

// GetCosHalfConeAngle @ 1479c5ac0

float __thiscall USpotLightComponent::GetCosHalfConeAngle(USpotLightComponent *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->InnerConeAngle;
  if (__real_42b20000 <= this->InnerConeAngle) {
    fVar1 = __real_42b20000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = this->OuterConeAngle * __real_3c8efa36;
  if (__real_3fc6f4b7 <= fVar2) {
    fVar2 = __real_3fc6f4b7;
  }
  fVar1 = fVar1 * __real_3c8efa36 + __real_3a83126f;
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar1 = cosf(fVar1);
  return fVar1;
}

// GetHalfConeAngle @ 1479c9b80

float __thiscall USpotLightComponent::GetHalfConeAngle(USpotLightComponent *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->InnerConeAngle;
  if (__real_42b20000 <= this->InnerConeAngle) {
    fVar1 = __real_42b20000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = this->OuterConeAngle * __real_3c8efa36;
  if (__real_3fc6f4b7 <= fVar2) {
    fVar2 = __real_3fc6f4b7;
  }
  fVar1 = fVar1 * __real_3c8efa36 + __real_3a83126f;
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}

// GetLightType @ 1479ca990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ELightComponentType __thiscall USpotLightComponent::GetLightType(USpotLightComponent *this)

{
  return LightType_NumBits;
}

// GetPrivateStaticClass @ 1479ce0f0

UClass * __cdecl USpotLightComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpotLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpotLightComponent",
               &Z_Registration_Info_UClass_USpotLightComponent.InnerSingleton,
               StaticRegisterNativesUSpotLightComponent,0x400,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USpotLightComponent>,
               InternalVTableHelperCtorCaller<USpotLightComponent>,local_res8,
               UPointLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpotLightComponent.InnerSingleton;
}

// SetInnerConeAngle @ 1479e8b40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USpotLightComponent::SetInnerConeAngle(USpotLightComponent *this,float param_1)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      ((cVar1 = *(char *)((longlong)&this->_padding_ + 3), cVar1 != '\0' && (cVar1 != '\x01')))) &&
     (param_1 != this->InnerConeAngle)) {
    this->InnerConeAngle = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetOuterConeAngle @ 1479e9bf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USpotLightComponent::SetOuterConeAngle(USpotLightComponent *this,float param_1)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      ((cVar1 = *(char *)((longlong)&this->_padding_ + 3), cVar1 != '\0' && (cVar1 != '\x01')))) &&
     (param_1 != this->OuterConeAngle)) {
    this->OuterConeAngle = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// StaticRegisterNativesUSpotLightComponent @ 1479edfb0

void __cdecl USpotLightComponent::StaticRegisterNativesUSpotLightComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_USpotLightComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetInnerConeAngle @ 147a065c0

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
USpotLightComponent::execSetInnerConeAngle(UObject *param_1,FFrame *param_2,void *param_3)

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
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) ||
      ((param_1[10].field_0x1b != '\0' && (param_1[10].field_0x1b != '\x01')))) &&
     (fVar2 != *(float *)&param_1[0x19].field_0x10)) {
    *(float *)&param_1[0x19].field_0x10 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetOuterConeAngle @ 147a079a0

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
USpotLightComponent::execSetOuterConeAngle(UObject *param_1,FFrame *param_2,void *param_3)

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
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) ||
      ((param_1[10].field_0x1b != '\0' && (param_1[10].field_0x1b != '\x01')))) &&
     (fVar2 != *(float *)&param_1[0x19].field_0x14)) {
    *(float *)&param_1[0x19].field_0x14 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

