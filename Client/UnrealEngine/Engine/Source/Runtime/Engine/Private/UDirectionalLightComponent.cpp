// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 56

// StaticClass @ 147891640

UClass * __cdecl UDirectionalLightComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDirectionalLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DirectionalLightComponent",
               &Z_Registration_Info_UClass_UDirectionalLightComponent.InnerSingleton,
               StaticRegisterNativesUDirectionalLightComponent,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDirectionalLightComponent>,
               InternalVTableHelperCtorCaller<UDirectionalLightComponent>,local_res8,
               ULightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDirectionalLightComponent.InnerSingleton;
}

// UDirectionalLightComponent @ 1478a8710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

UDirectionalLightComponent * __thiscall
UDirectionalLightComponent::UDirectionalLightComponent
          (UDirectionalLightComponent *this,FVTableHelper *param_1)

{
  ULightComponent::ULightComponent((ULightComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)&(this->LightmassSettings)._padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&(this->LightmassSettings)._padding_ + 4) = 0x40000000;
  *(undefined1 *)&(this->LightmassSettings)._padding_ = 0;
  (this->LightmassSettings).LightSourceAngle = 1.0;
  return this;
}

// UDirectionalLightComponent @ 1478a8780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

UDirectionalLightComponent * __thiscall
UDirectionalLightComponent::UDirectionalLightComponent
          (UDirectionalLightComponent *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  FLinearColor FVar3;
  
  ULightComponent::ULightComponent((ULightComponent *)this,param_1);
  this->bEnableLightShaftOcclusion = 0;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 2;
  this->bUseInsetShadowsForMovableObjects = 1;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 0x40;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined4 *)&(this->LightmassSettings)._padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&(this->LightmassSettings)._padding_ + 4) = 0x40000000;
  *(undefined1 *)&(this->LightmassSettings)._padding_ = 0;
  (this->LightmassSettings).LightSourceAngle = 1.0;
  this->bUsedAsAtmosphereSunLight_DEPRECATED = 0;
  this->bAtmosphereSunLight = 1;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x41200000;
  this->OcclusionDepthRange = 100000.0;
  this->OcclusionMaskDarkness = 0.05;
  this->ShadowCascadeBiasDistribution = 1.0;
  this->WholeSceneDynamicShadowRadius_DEPRECATED = 20000.0;
  this->DynamicShadowDistanceMovableLight = 40000.0;
  this->DynamicShadowDistanceStationaryLight = 0.0;
  this->DistanceFieldShadowDistance = 51200.0;
  this->ForwardShadingPriority = 0;
  this->DynamicShadowCascades = 4;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  this->TraceDistance = 10000.0;
  this->FarShadowDistance = 300000.0;
  this->LightSourceAngle = 0.5357;
  this->LightSourceSoftAngle = 0.0;
  this->ShadowSourceAngleFactor = 1.0;
  this->CascadeDistributionExponent = 3.0;
  this->CascadeTransitionFraction = 0.1;
  this->ShadowDistanceFadeoutFraction = 0.1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  this->ShadowAmount = 1.0;
  this->AtmosphereSunLightIndex = 0;
  (this->ModulatedShadowColor).field0_0x0.Bits = 0xff808080;
  FVar3 = FLinearColor::White;
  this->bCastShadowsOnClouds = 0;
  this->bCastCloudShadows = 0;
  this->bCastShadowsOnAtmosphere = 0;
  this->CloudShadowExtent = 150.0;
  (this->AtmosphereSunDiskColorScale).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  this->CloudShadowMapResolutionScale = 1.0;
  this->CloudShadowRaySampleCountScale = 1.0;
  this->CloudShadowStrength = 1.0;
  this->CloudShadowOnAtmosphereStrength = 1.0;
  this->CloudShadowOnSurfaceStrength = 1.0;
  FVar3 = FLinearColor::White;
  this->CloudShadowDepthBias = 0.0;
  this->bPerPixelAtmosphereTransmittance = 0;
  (this->CloudScatteredLuminanceScale).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  return this;
}

// ~UDirectionalLightComponent @ 1478abae0

void __thiscall
UDirectionalLightComponent::~UDirectionalLightComponent(UDirectionalLightComponent *this)

{
  this->_padding_ = (longlong)&ULightComponent::_vftable__for__UObject__;
  this->_padding_ = (longlong)&ULightComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&ULightComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  FRenderCommandFence::~FRenderCommandFence((FRenderCommandFence *)&this->_padding_);
  FTexture::~FTexture((FTexture *)&this->_padding_);
  ULightComponentBase::~ULightComponentBase((ULightComponentBase *)this);
  return;
}

// CreateSceneProxy @ 1478c1e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightSceneProxy * __thiscall
UDirectionalLightComponent::CreateSceneProxy(UDirectionalLightComponent *this)

{
  FDirectionalLightSceneProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x300);
  if (pFVar1 != (FDirectionalLightSceneProxy *)0x0) {
    pFVar1 = FDirectionalLightSceneProxy::FDirectionalLightSceneProxy(pFVar1,this);
    return (FLightSceneProxy *)pFVar1;
  }
  return (FLightSceneProxy *)0x0;
}

// GetAtmosphereSunDiskColorScale @ 1478cf980

FLinearColor * __thiscall
UDirectionalLightComponent::GetAtmosphereSunDiskColorScale
          (UDirectionalLightComponent *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->AtmosphereSunDiskColorScale).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->AtmosphereSunDiskColorScale).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetAtmosphereSunLightIndex @ 1478cf9c0

uchar __thiscall
UDirectionalLightComponent::GetAtmosphereSunLightIndex(UDirectionalLightComponent *this)

{
  return (uchar)this->AtmosphereSunLightIndex;
}

// GetLightPosition @ 1478d5380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<double> * __thiscall
UDirectionalLightComponent::GetLightPosition
          (UDirectionalLightComponent *this,TVector4<double> *__return_storage_ptr__)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar2 = ___xmm_00000000000000003ff0000000000000;
  auVar11._0_8_ = this->_padding_;
  auVar11._8_8_ = this->_padding_;
  dVar1 = (double)this->_padding_;
  auVar3._0_8_ = this->_padding_;
  auVar3._8_8_ = this->_padding_;
  auVar5 = blendpd(auVar3,auVar11,2);
  (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
  dVar18 = auVar2._8_8_;
  auVar16._0_8_ = dVar18 * (double)auVar3._0_8_ - (double)auVar3._8_8_ * auVar2._0_8_;
  auVar16._8_8_ = (double)auVar3._8_8_ * 0.0 - (double)auVar11._0_8_ * dVar18;
  auVar3 = blendpd(auVar2,ZEXT816(0),2);
  auVar7._0_8_ = auVar3._0_8_ * (double)auVar11._0_8_ - auVar5._0_8_ * 0.0;
  auVar7._8_8_ = auVar3._8_8_ * (double)auVar11._8_8_ - auVar5._8_8_ * 0.0;
  auVar5._0_8_ = this->_padding_;
  auVar5._8_8_ = this->_padding_;
  auVar3 = blendpd(auVar16,auVar7,2);
  dVar12 = auVar16._8_8_ + auVar16._8_8_;
  dVar13 = auVar7._0_8_ + auVar7._0_8_;
  auVar17._0_8_ = auVar3._0_8_ + auVar3._0_8_;
  auVar17._8_8_ = auVar3._8_8_ + auVar3._8_8_;
  auVar9._8_4_ = SUB84(dVar13,0);
  auVar9._0_8_ = dVar12;
  uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
  auVar9._12_4_ = uVar14;
  auVar6._8_4_ = SUB84(dVar13,0);
  auVar6._0_8_ = dVar12;
  auVar6._12_4_ = uVar14;
  auVar7 = blendpd(auVar6,auVar17,2);
  auVar10._0_8_ = auVar9._8_8_ * (double)auVar5._0_8_ - (double)auVar5._8_8_ * dVar12;
  auVar10._8_8_ = auVar17._0_8_ * (double)auVar5._8_8_ - (double)auVar11._0_8_ * dVar13;
  auVar3 = blendpd(auVar5,auVar11,2);
  auVar4._8_4_ = SUB84(auVar10._8_8_,0);
  auVar4._0_8_ = auVar10._0_8_;
  auVar4._12_4_ = (int)((ulonglong)auVar10._8_8_ >> 0x20);
  auVar8._0_8_ = auVar7._0_8_ * (double)auVar11._0_8_ - auVar3._0_8_ * auVar17._0_8_;
  auVar8._8_8_ = auVar7._8_8_ * (double)auVar11._8_8_ - auVar3._8_8_ * auVar17._8_8_;
  auVar11 = blendpd(auVar10,auVar8,2);
  dVar15 = (auVar17._0_8_ * dVar1 + auVar11._0_8_) * __real_c2a0000000000000;
  dVar12 = (dVar12 * dVar1 + auVar2._0_8_ + auVar4._8_8_) * __real_c2a0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar13 * dVar1 + dVar18 + auVar8._0_8_) * __real_c2a0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar15;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12;
  return __return_storage_ptr__;
}

// GetLightType @ 1478d5a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ELightComponentType __thiscall
UDirectionalLightComponent::GetLightType(UDirectionalLightComponent *this)

{
  return LightType_Directional;
}

// GetLightUnits @ 1478d5a80

ELightUnits __thiscall UDirectionalLightComponent::GetLightUnits(UDirectionalLightComponent *this)

{
  return Unitless;
}

// GetLightmassSettings @ 1478d5b80

FLightmassLightSettings * __thiscall
UDirectionalLightComponent::GetLightmassSettings
          (UDirectionalLightComponent *this,FLightmassLightSettings *__return_storage_ptr__)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (this->LightmassSettings)._padding_;
  uVar2 = *(undefined4 *)((longlong)&(this->LightmassSettings)._padding_ + 4);
  __return_storage_ptr__->IndirectLightingSaturation =
       (float)*(undefined4 *)&(this->LightmassSettings)._padding_;
  __return_storage_ptr__->ShadowExponent = (float)uVar2;
  *(int *)&__return_storage_ptr__->bUseAreaShadowsForStationaryLight = iVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1478d8e70

UClass * __cdecl UDirectionalLightComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDirectionalLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DirectionalLightComponent",
               &Z_Registration_Info_UClass_UDirectionalLightComponent.InnerSingleton,
               StaticRegisterNativesUDirectionalLightComponent,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDirectionalLightComponent>,
               InternalVTableHelperCtorCaller<UDirectionalLightComponent>,local_res8,
               ULightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDirectionalLightComponent.InnerSingleton;
}

// GetUniformPenumbraSize @ 1478ddb20

float __thiscall
UDirectionalLightComponent::GetUniformPenumbraSize(UDirectionalLightComponent *this)

{
  float fVar1;
  
  if ((char)(this->LightmassSettings)._padding_ != '\0') {
    return __real_3f800000;
  }
  fVar1 = (this->LightmassSettings).LightSourceAngle * __real_3d4ccccd;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= __real_38d1b717) {
    fVar1 = __real_38d1b717;
  }
  return fVar1;
}

// InvalidateLightingCacheDetailed @ 1478e0d10

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
UDirectionalLightComponent::InvalidateLightingCacheDetailed
          (UDirectionalLightComponent *this,bool param_1,bool param_2)

{
  if (!param_2) {
    if ((*(char *)((longlong)&this->_padding_ + 3) != '\x02') && (this->_padding_ != 0)) {
      BeginReleaseResource((FRenderResource *)&this->_padding_,(FRenderCommandPipe *)0x0);
      (**(code **)(this->_padding_ + 0x640))(this);
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      return;
    }
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  return;
}

// IsUsedAsAtmosphereSunLight @ 1478e1ac0

bool __thiscall
UDirectionalLightComponent::IsUsedAsAtmosphereSunLight(UDirectionalLightComponent *this)

{
  return this->bAtmosphereSunLight;
}

// Serialize @ 1478edef0

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
UDirectionalLightComponent::Serialize(UDirectionalLightComponent *this,FArchive *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  UObject *this_00;
  UClass *pUVar6;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar5 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID),
     iVar5 < 0x1e)) {
    this_00 = UObject::GetArchetype((UObject *)this);
    bVar4 = UObject::IsInBlueprint(this_00);
    if (!bVar4) {
      this->DynamicShadowDistanceMovableLight = 20000.0;
      this->DistanceFieldShadowDistance = 30000.0;
      this->DynamicShadowCascades = 3;
      *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
    }
  }
  ULightComponent::Serialize((ULightComponent *)this,param_1);
  if ((*(int *)&param_1->field_0x40 < 0x10a) && (lVar3 = this->_padding_, lVar3 != 0)) {
    pUVar6 = Z_Construct_UClass_ADirectionalLight_NoRegister();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar6->_padding_)) {
      cVar1 = *(char *)((longlong)&this->_padding_ + 3);
      if (cVar1 == '\x02') {
        this->DynamicShadowDistanceMovableLight = this->WholeSceneDynamicShadowRadius_DEPRECATED;
      }
      else if (cVar1 == '\x01') {
        this->DynamicShadowDistanceStationaryLight = this->WholeSceneDynamicShadowRadius_DEPRECATED;
      }
    }
  }
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (iVar5 < 0x26) {
    uVar2 = *(uint *)&this->field_0x428;
    *(uint *)&this->field_0x428 = (uVar2 * 2 ^ uVar2) & 2 ^ uVar2;
  }
  return;
}

// Serialize @ 1478ee030

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
UDirectionalLightComponent::Serialize
          (UDirectionalLightComponent *this,FStructuredArchiveRecord param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  FArchiveState *this_00;
  UObject *this_01;
  UClass *pUVar6;
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  if ((this_00->ArIsLoading != 0) &&
     (iVar5 = FArchiveState::CustomVer(this_00,&FUE5ReleaseStreamObjectVersion::GUID), iVar5 < 0x1e)
     ) {
    this_01 = UObject::GetArchetype((UObject *)this);
    bVar4 = UObject::IsInBlueprint(this_01);
    if (!bVar4) {
      this->DynamicShadowDistanceMovableLight = 20000.0;
      this->DistanceFieldShadowDistance = 30000.0;
      this->DynamicShadowCascades = 3;
      *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
    }
  }
  ULightComponent::Serialize((ULightComponent *)this,(FArchive *)this_00);
  if (((this_00->ArUEVer).FileVersionUE4 < 0x10a) && (lVar3 = this->_padding_, lVar3 != 0)) {
    pUVar6 = Z_Construct_UClass_ADirectionalLight_NoRegister();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar6->_padding_)) {
      cVar1 = *(char *)((longlong)&this->_padding_ + 3);
      if (cVar1 == '\x02') {
        this->DynamicShadowDistanceMovableLight = this->WholeSceneDynamicShadowRadius_DEPRECATED;
      }
      else if (cVar1 == '\x01') {
        this->DynamicShadowDistanceStationaryLight = this->WholeSceneDynamicShadowRadius_DEPRECATED;
      }
    }
  }
  iVar5 = FArchiveState::CustomVer(this_00,&FUE5MainStreamObjectVersion::GUID);
  if (iVar5 < 0x26) {
    uVar2 = *(uint *)&this->field_0x428;
    *(uint *)&this->field_0x428 = (uVar2 * 2 ^ uVar2) & 2 ^ uVar2;
  }
  return;
}

// SetAtmosphereSunDiskColorScale @ 1478ef8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDirectionalLightComponent::SetAtmosphereSunDiskColorScale
          (UDirectionalLightComponent *this,FLinearColor *param_1)

{
  longlong lVar1;
  FSceneInterface *pFVar2;
  bool bVar3;
  UWorld *pUVar4;
  undefined ***pppuVar5;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((!bVar3) && ((this->_padding_ & 1) != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    return;
  }
  if ((((param_1->field0_0x0)._s_0.R == (this->AtmosphereSunDiskColorScale).field0_0x0._s_0.R) &&
      ((param_1->field0_0x0)._s_0.G == (this->AtmosphereSunDiskColorScale).field0_0x0._s_0.G)) &&
     (((param_1->field0_0x0)._s_0.B == (this->AtmosphereSunDiskColorScale).field0_0x0._s_0.B &&
      ((param_1->field0_0x0)._s_0.A == (this->AtmosphereSunDiskColorScale).field0_0x0._s_0.A)))) {
    return;
  }
  lVar1 = this->_padding_;
  local_30 = *(undefined8 *)&param_1->field0_0x0;
  uStack_28 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDirectionalLightComponent::SetAtmosphereSunDiskColorScale'::`5'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDirectionalLightComponent::SetAtmosphereSunDiskColorScale'::__l5::<lambda_1>,void,FLightSceneProxy_*>
                ::Call;
  *(undefined8 *)&(this->AtmosphereSunDiskColorScale).field0_0x0 = local_30;
  *(undefined8 *)((longlong)&(this->AtmosphereSunDiskColorScale).field0_0x0 + 8) = uStack_28;
  local_20 = (undefined ***)0x0;
  if (((lVar1 != 0) &&
      ((pUVar4 = (UWorld *)this->_padding_, pUVar4 != (UWorld *)0x0 ||
       (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar4 != (UWorld *)0x0)))) && (pFVar2 = pUVar4->Scene, pFVar2 != (FSceneInterface *)0x0)) {
    (**(code **)(pFVar2->_padding_ + 0x268))(pFVar2,this,local_48);
  }
  if (local_48[0] != (code *)0x0) {
    pppuVar5 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar5 = local_20;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// SetAtmosphereSunLight @ 1478efa00

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
UDirectionalLightComponent::SetAtmosphereSunLight(UDirectionalLightComponent *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (ZPULL(*(undefined4 *)&this->field_0x428,1,1) != (uint)param_1)) {
    *(uint *)&this->field_0x428 =
         *(undefined4 *)&this->field_0x428 & 0xfffffffd | (uint)param_1 + (uint)param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetAtmosphereSunLightIndex @ 1478efa70

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
UDirectionalLightComponent::SetAtmosphereSunLightIndex(UDirectionalLightComponent *this,int param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (this->AtmosphereSunLightIndex != param_1)) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    this->AtmosphereSunLightIndex = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetCascadeDistributionExponent @ 1478f02f0

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
UDirectionalLightComponent::SetCascadeDistributionExponent
          (UDirectionalLightComponent *this,float param_1)

{
  if (param_1 != this->CascadeDistributionExponent) {
    this->CascadeDistributionExponent = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetCascadeTransitionFraction @ 1478f0310

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
UDirectionalLightComponent::SetCascadeTransitionFraction
          (UDirectionalLightComponent *this,float param_1)

{
  if (param_1 != this->CascadeTransitionFraction) {
    this->CascadeTransitionFraction = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetDynamicShadowCascades @ 1478f1fd0

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
UDirectionalLightComponent::SetDynamicShadowCascades(UDirectionalLightComponent *this,int param_1)

{
  if (this->DynamicShadowCascades != param_1) {
    this->DynamicShadowCascades = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetDynamicShadowDistanceMovableLight @ 1478f1ff0

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
UDirectionalLightComponent::SetDynamicShadowDistanceMovableLight
          (UDirectionalLightComponent *this,float param_1)

{
  if (param_1 != this->DynamicShadowDistanceMovableLight) {
    this->DynamicShadowDistanceMovableLight = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetDynamicShadowDistanceStationaryLight @ 1478f2010

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
UDirectionalLightComponent::SetDynamicShadowDistanceStationaryLight
          (UDirectionalLightComponent *this,float param_1)

{
  if (param_1 != this->DynamicShadowDistanceStationaryLight) {
    this->DynamicShadowDistanceStationaryLight = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetEnableLightShaftOcclusion @ 1478f2160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDirectionalLightComponent::SetEnableLightShaftOcclusion
          (UDirectionalLightComponent *this,bool param_1)

{
  FSceneInterface *pFVar1;
  bool bVar2;
  UWorld *pUVar3;
  uint uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  byte local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((!bVar2) && ((this->_padding_ & 1) != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    return;
  }
  if (ZPULL(*(undefined4 *)&this->field_0x3c4,0,1) != (uint)param_1) {
    local_20 = (undefined ***)0x0;
    uVar4 = *(undefined4 *)&this->field_0x3c4 & 0xfffffffe | (uint)param_1;
    *(uint *)&this->field_0x3c4 = uVar4;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDirectionalLightComponent::SetEnableLightShaftOcclusion'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_30 = (byte)uVar4 & 1;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDirectionalLightComponent::SetEnableLightShaftOcclusion'::__l5::<lambda_1>,void,FLightSceneProxy_*>
                  ::Call;
    if (((this->_padding_ != 0) &&
        ((pUVar3 = (UWorld *)this->_padding_, pUVar3 != (UWorld *)0x0 ||
         (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         pUVar3 != (UWorld *)0x0)))) && (pFVar1 = pUVar3->Scene, pFVar1 != (FSceneInterface *)0x0))
    {
      (**(code **)(pFVar1->_padding_ + 0x268))(pFVar1,this,local_48);
    }
    if (local_48[0] != (code *)0x0) {
      pppuVar5 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar5 = local_20;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    return;
  }
  return;
}

// SetForwardShadingPriority @ 1478f2970

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
UDirectionalLightComponent::SetForwardShadingPriority(UDirectionalLightComponent *this,int param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (this->ForwardShadingPriority != param_1)) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    this->ForwardShadingPriority = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetLightShaftOverrideDirection @ 1478f3530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDirectionalLightComponent::SetLightShaftOverrideDirection
          (UDirectionalLightComponent *this,TVector<double> *param_1)

{
  double dVar1;
  FSceneInterface *pFVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  UWorld *pUVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  bVar5 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((!bVar5) && ((this->_padding_ & 1) != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    return;
  }
  if ((((param_1->field0_0x0)._s_0.X == (this->LightShaftOverrideDirection).field0_0x0._s_0.X) &&
      ((param_1->field0_0x0)._s_0.Y == (this->LightShaftOverrideDirection).field0_0x0._s_0.Y)) &&
     ((param_1->field0_0x0)._s_0.Z == (this->LightShaftOverrideDirection).field0_0x0._s_0.Z)) {
    return;
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->LightShaftOverrideDirection).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->LightShaftOverrideDirection).field0_0x0._s_0.Y = dVar3;
  local_48[0] = (code *)0x0;
  (this->LightShaftOverrideDirection).field0_0x0._s_0.Z = dVar1;
  local_20 = FMemory::Malloc(0x20,8);
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDirectionalLightComponent::SetLightShaftOverrideDirection'::`5'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)dVar3;
  local_20[2] = (longlong)dVar4;
  local_20[3] = (longlong)dVar1;
  if ((double *)(local_20 + 1) != (double *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDirectionalLightComponent::SetLightShaftOverrideDirection'::__l5::<lambda_1>,void,FLightSceneProxy_*>
                  ::Call;
  }
  if (((this->_padding_ != 0) &&
      ((pUVar6 = (UWorld *)this->_padding_, pUVar6 != (UWorld *)0x0 ||
       (pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar6 != (UWorld *)0x0)))) && (pFVar2 = pUVar6->Scene, pFVar2 != (FSceneInterface *)0x0)) {
    (**(code **)(pFVar2->_padding_ + 0x268))(pFVar2,this,local_48);
  }
  if (local_48[0] != (code *)0x0) {
    plVar7 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar7 = local_20;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// SetLightSourceAngle @ 1478f3690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDirectionalLightComponent::SetLightSourceAngle(UDirectionalLightComponent *this,float param_1)

{
  FSceneInterface *pFVar1;
  bool bVar2;
  UWorld *pUVar3;
  undefined **ppuVar4;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined *local_48;
  float local_40;
  undefined **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((!bVar2) && ((this->_padding_ & 1) != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    return;
  }
  if (param_1 != this->LightSourceAngle) {
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDirectionalLightComponent::SetLightSourceAngle'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDirectionalLightComponent::SetLightSourceAngle'::__l5::<lambda_1>,void,FLightSceneProxy_*>
                  ::Call;
    this->LightSourceAngle = param_1;
    local_30 = (undefined **)0x0;
    local_40 = param_1;
    if (((this->_padding_ != 0) &&
        ((pUVar3 = (UWorld *)this->_padding_, pUVar3 != (UWorld *)0x0 ||
         (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         pUVar3 != (UWorld *)0x0)))) && (pFVar1 = pUVar3->Scene, pFVar1 != (FSceneInterface *)0x0))
    {
      (**(code **)(pFVar1->_padding_ + 0x268))(pFVar1,this,local_58);
    }
    if (local_58[0] != (code *)0x0) {
      ppuVar4 = &local_48;
      if (local_30 != (undefined **)0x0) {
        ppuVar4 = local_30;
      }
      (**(code **)(*ppuVar4 + 0x10))();
    }
    return;
  }
  return;
}

// SetLightSourceSoftAngle @ 1478f3790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDirectionalLightComponent::SetLightSourceSoftAngle(UDirectionalLightComponent *this,float param_1)

{
  FSceneInterface *pFVar1;
  bool bVar2;
  UWorld *pUVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined **local_48;
  float local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((!bVar2) && ((this->_padding_ & 1) != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    return;
  }
  if (param_1 != this->LightSourceSoftAngle) {
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDirectionalLightComponent::SetLightSourceSoftAngle'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDirectionalLightComponent::SetLightSourceSoftAngle'::__l5::<lambda_1>,void,FLightSceneProxy_*>
                  ::Call;
    this->LightSourceSoftAngle = param_1;
    local_30 = (undefined ***)0x0;
    local_40 = param_1;
    if (((this->_padding_ != 0) &&
        ((pUVar3 = (UWorld *)this->_padding_, pUVar3 != (UWorld *)0x0 ||
         (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         pUVar3 != (UWorld *)0x0)))) && (pFVar1 = pUVar3->Scene, pFVar1 != (FSceneInterface *)0x0))
    {
      (**(code **)(pFVar1->_padding_ + 0x268))(pFVar1,this,local_58);
    }
    if (local_58[0] != (code *)0x0) {
      pppuVar4 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar4 = local_30;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    return;
  }
  return;
}

// SetOcclusionDepthRange @ 1478f43b0

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
UDirectionalLightComponent::SetOcclusionDepthRange(UDirectionalLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->OcclusionDepthRange)
     ) {
    this->OcclusionDepthRange = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetOcclusionMaskDarkness @ 1478f4410

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
UDirectionalLightComponent::SetOcclusionMaskDarkness(UDirectionalLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != this->OcclusionMaskDarkness)) {
    this->OcclusionMaskDarkness = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetShadowAmount @ 1478f4ff0

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
UDirectionalLightComponent::SetShadowAmount(UDirectionalLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->ShadowAmount)) {
    this->ShadowAmount = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetShadowCascadeBiasDistribution @ 1478f50b0

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
UDirectionalLightComponent::SetShadowCascadeBiasDistribution
          (UDirectionalLightComponent *this,float param_1)

{
  if (param_1 != this->ShadowCascadeBiasDistribution) {
    this->ShadowCascadeBiasDistribution = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetShadowDistanceFadeoutFraction @ 1478f50d0

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
UDirectionalLightComponent::SetShadowDistanceFadeoutFraction
          (UDirectionalLightComponent *this,float param_1)

{
  if (param_1 != this->ShadowDistanceFadeoutFraction) {
    this->ShadowDistanceFadeoutFraction = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetShadowSourceAngleFactor @ 1478f5150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDirectionalLightComponent::SetShadowSourceAngleFactor
          (UDirectionalLightComponent *this,float param_1)

{
  FSceneInterface *pFVar1;
  bool bVar2;
  UWorld *pUVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined **local_48;
  float local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((!bVar2) && ((this->_padding_ & 1) != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    return;
  }
  if (param_1 != this->ShadowSourceAngleFactor) {
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDirectionalLightComponent::SetShadowSourceAngleFactor'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDirectionalLightComponent::SetShadowSourceAngleFactor'::__l5::<lambda_1>,void,FLightSceneProxy_*>
                  ::Call;
    this->ShadowSourceAngleFactor = param_1;
    local_30 = (undefined ***)0x0;
    local_40 = param_1;
    if (((this->_padding_ != 0) &&
        ((pUVar3 = (UWorld *)this->_padding_, pUVar3 != (UWorld *)0x0 ||
         (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         pUVar3 != (UWorld *)0x0)))) && (pFVar1 = pUVar3->Scene, pFVar1 != (FSceneInterface *)0x0))
    {
      (**(code **)(pFVar1->_padding_ + 0x268))(pFVar1,this,local_58);
    }
    if (local_58[0] != (code *)0x0) {
      pppuVar4 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar4 = local_30;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    return;
  }
  return;
}

// StaticRegisterNativesUDirectionalLightComponent @ 1478f7db0

void __cdecl UDirectionalLightComponent::StaticRegisterNativesUDirectionalLightComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x13;
  local_18.DataPtr = Z_Construct_UClass_UDirectionalLightComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetAtmosphereSunDiskColorScale @ 147908d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDirectionalLightComponent::execSetAtmosphereSunDiskColorScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FSceneInterface *pFVar3;
  bool bVar4;
  UWorld *pUVar5;
  undefined ***pppuVar6;
  undefined1 auStack_c8 [32];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  code *local_88 [2];
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98 = local_a8;
  fStack_94 = local_a4;
  fStack_90 = local_a0;
  fStack_8c = local_9c;
  bVar4 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if (((!bVar4) && ((param_1[3].field_0x20 & 1) != 0)) && (param_1[10].field_0x1b == '\0')) {
    return;
  }
  if (((local_a8 == *(float *)&param_1[0x1a].field_0x20) &&
      (local_a4 == *(float *)&param_1[0x1a].field_0x24)) &&
     ((local_a0 == *(float *)(param_1 + 0x1b) && (local_9c == *(float *)&param_1[0x1b].field_0x4))))
  {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x15);
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDirectionalLightComponent::SetAtmosphereSunDiskColorScale'::`5'::<lambda_1>,0,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDirectionalLightComponent::SetAtmosphereSunDiskColorScale'::__l5::<lambda_1>,void,FLightSceneProxy_*>
                ::Call;
  *(ulonglong *)&param_1[0x1a].field_0x20 = CONCAT44(fStack_94,local_98);
  *(ulonglong *)(param_1 + 0x1b) = CONCAT44(fStack_8c,fStack_90);
  local_60 = (undefined ***)0x0;
  local_70 = CONCAT44(fStack_94,local_98);
  uStack_68 = CONCAT44(fStack_8c,fStack_90);
  if (((lVar2 != 0) &&
      ((pUVar5 = *(UWorld **)&param_1[4].field_0x10, pUVar5 != (UWorld *)0x0 ||
       (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
       pUVar5 != (UWorld *)0x0)))) && (pFVar3 = pUVar5->Scene, pFVar3 != (FSceneInterface *)0x0)) {
    (**(code **)(pFVar3->_padding_ + 0x268))(pFVar3,param_1,local_88);
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar6 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar6 = local_60;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  return;
}

// execSetAtmosphereSunLight @ 147908f30

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
UDirectionalLightComponent::execSetAtmosphereSunLight
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
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     ((*(uint *)&param_1[0x1a].field_0x18 >> 1 & 1) != (uint)bVar3)) {
    *(uint *)&param_1[0x1a].field_0x18 =
         *(uint *)&param_1[0x1a].field_0x18 & 0xfffffffd | (uint)bVar3 + (uint)bVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetAtmosphereSunLightIndex @ 147909010

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
UDirectionalLightComponent::execSetAtmosphereSunLightIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int iVar3;
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
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (*(int *)&param_1[0x1a].field_0x1c != iVar3)) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    *(int *)&param_1[0x1a].field_0x1c = iVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetCascadeDistributionExponent @ 147909bb0

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
UDirectionalLightComponent::execSetCascadeDistributionExponent
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  if (local_res8[0] != *(float *)&param_1[0x19].field_0x10) {
    *(float *)&param_1[0x19].field_0x10 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetCascadeTransitionFraction @ 147909c50

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
UDirectionalLightComponent::execSetCascadeTransitionFraction
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  if (local_res8[0] != *(float *)&param_1[0x19].field_0x14) {
    *(float *)&param_1[0x19].field_0x14 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetDynamicShadowCascades @ 14790bc70

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
UDirectionalLightComponent::execSetDynamicShadowCascades
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[0x19].field_0xc != local_res8[0]) {
    *(int *)&param_1[0x19].field_0xc = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetDynamicShadowDistanceMovableLight @ 14790bd10

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
UDirectionalLightComponent::execSetDynamicShadowDistanceMovableLight
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  if (local_res8[0] != *(float *)&param_1[0x19].field_0x4) {
    *(float *)&param_1[0x19].field_0x4 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetDynamicShadowDistanceStationaryLight @ 14790bdb0

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
UDirectionalLightComponent::execSetDynamicShadowDistanceStationaryLight
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  if (local_res8[0] != *(float *)&param_1[0x19].field_0x8) {
    *(float *)&param_1[0x19].field_0x8 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetEnableLightShaftOcclusion @ 14790c1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDirectionalLightComponent::execSetEnableLightShaftOcclusion
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSceneInterface *pFVar2;
  bool bVar3;
  UWorld *pUVar4;
  uint uVar5;
  undefined ***pppuVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  int local_58 [4];
  code *local_48 [2];
  undefined **local_38;
  byte local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  bVar7 = local_58[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if (((!bVar3) && ((param_1[3].field_0x20 & 1) != 0)) && (param_1[10].field_0x1b == '\0')) {
    return;
  }
  if ((*(uint *)&param_1[0x18].field_0x4 & 1) != (uint)bVar7) {
    local_20 = (undefined ***)0x0;
    uVar5 = *(uint *)&param_1[0x18].field_0x4 & 0xfffffffe | (uint)bVar7;
    *(uint *)&param_1[0x18].field_0x4 = uVar5;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDirectionalLightComponent::SetEnableLightShaftOcclusion'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_30 = (byte)uVar5 & 1;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDirectionalLightComponent::SetEnableLightShaftOcclusion'::__l5::<lambda_1>,void,FLightSceneProxy_*>
                  ::Call;
    if (((*(longlong *)(param_1 + 0x15) != 0) &&
        ((pUVar4 = *(UWorld **)&param_1[4].field_0x10, pUVar4 != (UWorld *)0x0 ||
         (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
         pUVar4 != (UWorld *)0x0)))) && (pFVar2 = pUVar4->Scene, pFVar2 != (FSceneInterface *)0x0))
    {
      (**(code **)(pFVar2->_padding_ + 0x268))(pFVar2,param_1,local_48);
    }
    if (local_48[0] != (code *)0x0) {
      pppuVar6 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar6 = local_20;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    return;
  }
  return;
}

// execSetForwardShadingPriority @ 14790d430

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
UDirectionalLightComponent::execSetForwardShadingPriority
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int iVar3;
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
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (*(int *)&param_1[0x1a].field_0x4 != iVar3)) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    *(int *)&param_1[0x1a].field_0x4 = iVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetLightShaftOverrideDirection @ 14790ebf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDirectionalLightComponent::execSetLightShaftOverrideDirection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSceneInterface *pFVar2;
  bool bVar3;
  UWorld *pUVar4;
  double *pdVar5;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  code *local_68 [2];
  double local_58 [3];
  double *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_58[0] = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if (((!bVar3) && ((param_1[3].field_0x20 & 1) != 0)) && (param_1[10].field_0x1b == '\0')) {
    return;
  }
  if (((local_88 == *(double *)&param_1[0x18].field_0x10) &&
      (dStack_80 == *(double *)&param_1[0x18].field_0x18)) &&
     (local_58[0] == *(double *)&param_1[0x18].field_0x20)) {
    return;
  }
  *(double *)&param_1[0x18].field_0x10 = local_88;
  *(double *)&param_1[0x18].field_0x18 = dStack_80;
  *(double *)&param_1[0x18].field_0x20 = local_78;
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x20,8);
  local_40[1] = local_88;
  local_40[2] = dStack_80;
  local_40[3] = local_78;
  *local_40 = (double)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UDirectionalLightComponent::SetLightShaftOverrideDirection'::`5'::<lambda_1>,0,1>
                       ::_vftable_;
  if (local_40 != (double *)&DAT_fffffffffffffff8) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDirectionalLightComponent::SetLightShaftOverrideDirection'::__l5::<lambda_1>,void,FLightSceneProxy_*>
                  ::Call;
  }
  if (((*(longlong *)(param_1 + 0x15) != 0) &&
      ((pUVar4 = *(UWorld **)&param_1[4].field_0x10, pUVar4 != (UWorld *)0x0 ||
       (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
       pUVar4 != (UWorld *)0x0)))) && (pFVar2 = pUVar4->Scene, pFVar2 != (FSceneInterface *)0x0)) {
    (**(code **)(pFVar2->_padding_ + 0x268))(pFVar2,param_1,local_68);
  }
  if (local_68[0] != (code *)0x0) {
    pdVar5 = local_58;
    if (local_40 != (double *)0x0) {
      pdVar5 = local_40;
    }
    (**(code **)((longlong)*pdVar5 + 0x10))();
  }
  return;
}

// execSetLightSourceAngle @ 14790edc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDirectionalLightComponent::execSetLightSourceAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FSceneInterface *pFVar3;
  float fVar4;
  bool bVar5;
  UWorld *pUVar6;
  undefined **ppuVar7;
  undefined1 auStack_88 [32];
  float local_68 [4];
  code *local_58 [2];
  undefined *local_48;
  float local_40;
  undefined **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  fVar4 = local_68[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar5 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if (((!bVar5) && ((param_1[3].field_0x20 & 1) != 0)) && (param_1[10].field_0x1b == '\0')) {
    return;
  }
  if (fVar4 != *(float *)&param_1[0x1a].field_0x8) {
    lVar2 = *(longlong *)(param_1 + 0x15);
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDirectionalLightComponent::SetLightSourceAngle'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDirectionalLightComponent::SetLightSourceAngle'::__l5::<lambda_1>,void,FLightSceneProxy_*>
                  ::Call;
    *(float *)&param_1[0x1a].field_0x8 = fVar4;
    local_30 = (undefined **)0x0;
    local_40 = fVar4;
    if (((lVar2 != 0) &&
        ((pUVar6 = *(UWorld **)&param_1[4].field_0x10, pUVar6 != (UWorld *)0x0 ||
         (pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
         pUVar6 != (UWorld *)0x0)))) && (pFVar3 = pUVar6->Scene, pFVar3 != (FSceneInterface *)0x0))
    {
      (**(code **)(pFVar3->_padding_ + 0x268))(pFVar3,param_1,local_58);
    }
    if (local_58[0] != (code *)0x0) {
      ppuVar7 = &local_48;
      if (local_30 != (undefined **)0x0) {
        ppuVar7 = local_30;
      }
      (**(code **)(*ppuVar7 + 0x10))();
    }
    return;
  }
  return;
}

// execSetLightSourceSoftAngle @ 14790ef30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDirectionalLightComponent::execSetLightSourceSoftAngle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FSceneInterface *pFVar3;
  float fVar4;
  bool bVar5;
  UWorld *pUVar6;
  undefined ***pppuVar7;
  undefined1 auStack_88 [32];
  float local_68 [4];
  code *local_58 [2];
  undefined **local_48;
  float local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  fVar4 = local_68[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar5 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if (((!bVar5) && ((param_1[3].field_0x20 & 1) != 0)) && (param_1[10].field_0x1b == '\0')) {
    return;
  }
  if (fVar4 != *(float *)&param_1[0x1a].field_0xc) {
    lVar2 = *(longlong *)(param_1 + 0x15);
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDirectionalLightComponent::SetLightSourceSoftAngle'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDirectionalLightComponent::SetLightSourceSoftAngle'::__l5::<lambda_1>,void,FLightSceneProxy_*>
                  ::Call;
    *(float *)&param_1[0x1a].field_0xc = fVar4;
    local_30 = (undefined ***)0x0;
    local_40 = fVar4;
    if (((lVar2 != 0) &&
        ((pUVar6 = *(UWorld **)&param_1[4].field_0x10, pUVar6 != (UWorld *)0x0 ||
         (pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
         pUVar6 != (UWorld *)0x0)))) && (pFVar3 = pUVar6->Scene, pFVar3 != (FSceneInterface *)0x0))
    {
      (**(code **)(pFVar3->_padding_ + 0x268))(pFVar3,param_1,local_58);
    }
    if (local_58[0] != (code *)0x0) {
      pppuVar7 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar7 = local_30;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    return;
  }
  return;
}

// execSetOcclusionDepthRange @ 14790fd80

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
UDirectionalLightComponent::execSetOcclusionDepthRange
          (UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)&param_1[0x18].field_0xc)) {
    *(float *)&param_1[0x18].field_0xc = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetOcclusionMaskDarkness @ 14790fe40

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
UDirectionalLightComponent::execSetOcclusionMaskDarkness
          (UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)&param_1[0x18].field_0x8)) {
    *(float *)&param_1[0x18].field_0x8 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetShadowAmount @ 147911750

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
UDirectionalLightComponent::execSetShadowAmount(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)(param_1 + 0x1d))) {
    *(float *)(param_1 + 0x1d) = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetShadowCascadeBiasDistribution @ 1479118d0

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
UDirectionalLightComponent::execSetShadowCascadeBiasDistribution
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  if (local_res8[0] != *(float *)(param_1 + 0x18)) {
    *(float *)(param_1 + 0x18) = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetShadowDistanceFadeoutFraction @ 147911970

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
UDirectionalLightComponent::execSetShadowDistanceFadeoutFraction
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  if (local_res8[0] != *(float *)&param_1[0x19].field_0x18) {
    *(float *)&param_1[0x19].field_0x18 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetShadowSourceAngleFactor @ 147911ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDirectionalLightComponent::execSetShadowSourceAngleFactor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FSceneInterface *pFVar3;
  float fVar4;
  bool bVar5;
  UWorld *pUVar6;
  undefined ***pppuVar7;
  undefined1 auStack_88 [32];
  float local_68 [4];
  code *local_58 [2];
  undefined **local_48;
  float local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  fVar4 = local_68[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar5 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if (((!bVar5) && ((param_1[3].field_0x20 & 1) != 0)) && (param_1[10].field_0x1b == '\0')) {
    return;
  }
  if (fVar4 != *(float *)&param_1[0x1a].field_0x10) {
    lVar2 = *(longlong *)(param_1 + 0x15);
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDirectionalLightComponent::SetShadowSourceAngleFactor'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDirectionalLightComponent::SetShadowSourceAngleFactor'::__l5::<lambda_1>,void,FLightSceneProxy_*>
                  ::Call;
    *(float *)&param_1[0x1a].field_0x10 = fVar4;
    local_30 = (undefined ***)0x0;
    local_40 = fVar4;
    if (((lVar2 != 0) &&
        ((pUVar6 = *(UWorld **)&param_1[4].field_0x10, pUVar6 != (UWorld *)0x0 ||
         (pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
         pUVar6 != (UWorld *)0x0)))) && (pFVar3 = pUVar6->Scene, pFVar3 != (FSceneInterface *)0x0))
    {
      (**(code **)(pFVar3->_padding_ + 0x268))(pFVar3,param_1,local_58);
    }
    if (local_58[0] != (code *)0x0) {
      pppuVar7 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar7 = local_30;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    return;
  }
  return;
}

