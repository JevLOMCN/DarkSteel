// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 72

// StaticClass @ 14788d950

UClass * __cdecl UExponentialHeightFogComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExponentialHeightFogComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExponentialHeightFogComponent",
               &Z_Registration_Info_UClass_UExponentialHeightFogComponent.InnerSingleton,
               StaticRegisterNativesUExponentialHeightFogComponent,0x330,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UExponentialHeightFogComponent>,
               InternalVTableHelperCtorCaller<UExponentialHeightFogComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExponentialHeightFogComponent.InnerSingleton;
}

// UExponentialHeightFogComponent @ 1478a8c20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UExponentialHeightFogComponent * __thiscall
UExponentialHeightFogComponent::UExponentialHeightFogComponent
          (UExponentialHeightFogComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->InscatteringColorCubemap).field0_0x0.DebugPtr = (UTextureCube *)0x0;
  (this->SecondFogData).FogDensity = 0.02;
  (this->SecondFogData).FogHeightFalloff = 0.2;
  (this->SecondFogData).FogHeightOffset = 0.0;
  return this;
}

// UExponentialHeightFogComponent @ 1478a8c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UExponentialHeightFogComponent * __thiscall
UExponentialHeightFogComponent::UExponentialHeightFogComponent
          (UExponentialHeightFogComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FLinearColor FVar2;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->SecondFogData).FogDensity = 0.02;
  (this->SecondFogData).FogHeightFalloff = 0.2;
  (this->SecondFogData).FogHeightOffset = 0.0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->InscatteringColorCubemap).field0_0x0.DebugPtr = (UTextureCube *)0x0;
  (this->FogInscatteringColor_DEPRECATED).field0_0x0._s_0.R = 0.447;
  (this->FogInscatteringColor_DEPRECATED).field0_0x0._s_0.G = 0.638;
  (this->FogInscatteringColor_DEPRECATED).field0_0x0._s_0.B = 1.0;
  (this->FogInscatteringColor_DEPRECATED).field0_0x0._s_0.A = 1.0;
  (this->FogInscatteringLuminance).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  FVar2 = FLinearColor::White;
  this->DirectionalInscatteringExponent = 4.0;
  this->DirectionalInscatteringStartDistance = 10000.0;
  (this->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  (this->DirectionalInscatteringColor_DEPRECATED).field0_0x0._s_0.R = 0.25;
  (this->DirectionalInscatteringColor_DEPRECATED).field0_0x0._s_0.G = 0.25;
  (this->DirectionalInscatteringColor_DEPRECATED).field0_0x0._s_0.B = 0.125;
  (this->DirectionalInscatteringColor_DEPRECATED).field0_0x0._s_0.A = 1.0;
  (this->DirectionalInscatteringLuminance).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  FVar2 = FLinearColor::White;
  this->bHoldout = '\0';
  this->bRenderInMainPass = '\x01';
  this->bVisibleInRealTimeSkyCaptures = '\x01';
  this->bVisibleInReflectionCaptures = '\x01';
  this->EndDistance = 0.0;
  this->FogCutoffDistance = 0.0;
  (this->InscatteringTextureTint).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  this->FullyDirectionalInscatteringColorDistance = 100000.0;
  this->NonDirectionalInscatteringColorDistance = 1000.0;
  this->FogDensity = 0.02;
  this->FogHeightFalloff = 0.2;
  (this->SecondFogData).FogDensity = 0.0;
  this->FogMaxOpacity = 1.0;
  this->StartDistance = 0.0;
  this->VolumetricFogScatteringDistribution = 0.2;
  (this->VolumetricFogAlbedo).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  this->VolumetricFogExtinctionScale = 1.0;
  this->VolumetricFogDistance = 6000.0;
  this->VolumetricFogStaticLightingScatteringIntensity = 1.0;
  return this;
}

// ~UExponentialHeightFogComponent @ 1478abc00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UExponentialHeightFogComponent::~UExponentialHeightFogComponent
          (UExponentialHeightFogComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// AddFogIfNeeded @ 1478b24a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UExponentialHeightFogComponent::AddFogIfNeeded(UExponentialHeightFogComponent *this)

{
  undefined1 uVar1;
  UTextureCube *pUVar2;
  bool bVar3;
  UWorld *pUVar4;
  uint uVar5;
  float fVar6;
  uint local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  FLinearColor_u_0 local_c0;
  TObjectPtr<UTextureCube>_u_0 local_b0;
  float local_a8;
  FLinearColor_u_0 local_a4;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  FLinearColor_u_0 local_84;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 local_64;
  float local_60;
  FColor_u_0 local_5c;
  FLinearColor_u_0 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  undefined1 local_34;
  byte local_33;
  float local_30;
  
  fVar6 = (this->SecondFogData).FogDensity;
  if (__real_41200000 <= fVar6) {
    fVar6 = __real_41200000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  (this->SecondFogData).FogDensity = fVar6;
  fVar6 = (this->SecondFogData).FogHeightFalloff;
  if (__real_40000000 <= fVar6) {
    fVar6 = __real_40000000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  (this->SecondFogData).FogHeightFalloff = fVar6;
  bVar3 = USceneComponent::ShouldComponentAddToScene((USceneComponent *)this);
  if (((((bVar3) && (bVar3 = USceneComponent::ShouldRender((USceneComponent *)this), bVar3)) &&
       ((this->field_0x98 & 1) != 0)) &&
      ((__real_3727c5ac < (this->FogDensity + (this->SecondFogData).FogDensity) * __real_447a0000 &&
       (__real_3727c5ac < this->FogMaxOpacity)))) &&
     ((*(longlong *)&this->field_0x20 == 0 ||
      ((*(uint *)(*(longlong *)&this->field_0x20 + 8) & 0x10) == 0)))) {
    local_d4 = (this->SecondFogData).FogHeightOffset;
    local_33 = local_33 & 0xf0;
    local_c0 = FLinearColor::White.field0_0x0;
    local_a4 = FLinearColor::White.field0_0x0;
    local_84 = FLinearColor::White.field0_0x0;
    local_e8 = 0xc;
    local_58 = FLinearColor::White.field0_0x0;
    local_dc._0_4_ = (this->SecondFogData).FogDensity;
    local_dc._4_4_ = (this->SecondFogData).FogHeightFalloff;
    local_d0 = *(undefined8 *)&(this->FogInscatteringLuminance).field0_0x0;
    uStack_c8 = *(undefined8 *)((longlong)&(this->FogInscatteringLuminance).field0_0x0 + 8);
    uVar5 = 0xc;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (this->InscatteringColorCubemap).field0_0x0.DebugPtr, pUVar2 != (UTextureCube *)0x0
       )) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      uVar5 = local_e8;
    }
    local_b0 = (this->InscatteringColorCubemap).field0_0x0;
    uVar1 = this->field_0x325;
    local_e8 = uVar5 | 0xfffffff3;
    local_94 = this->FullyDirectionalInscatteringColorDistance;
    local_84 = (this->DirectionalInscatteringLuminance).field0_0x0;
    local_64 = this->bEnableVolumetricFog;
    local_38 = this->VolumetricFogStaticLightingScatteringIntensity;
    local_e4 = this->FogDensity;
    local_34 = this->bOverrideLightColorsWithFogInscatteringColors;
    local_c0 = (this->SkyAtmosphereAmbientContributionColorScale).field0_0x0;
    local_33 = this->bHoldout | local_33 & 0xfe;
    local_e0 = this->FogHeightFalloff;
    local_a4 = (this->InscatteringTextureTint).field0_0x0;
    local_33 = (local_33 ^ uVar1) & 2 ^ local_33;
    local_a8 = this->InscatteringColorCubemapAngle;
    local_8c = this->DirectionalInscatteringExponent;
    local_33 = (local_33 ^ uVar1) & 4 ^ local_33;
    local_90 = this->NonDirectionalInscatteringColorDistance;
    local_74 = this->FogMaxOpacity;
    local_33 = (local_33 ^ uVar1) & 8 ^ local_33;
    local_88 = this->DirectionalInscatteringStartDistance;
    local_6c = this->EndDistance;
    local_70 = this->StartDistance;
    local_60 = this->VolumetricFogScatteringDistribution;
    local_68 = this->FogCutoffDistance;
    local_58 = (this->VolumetricFogEmissive).field0_0x0;
    local_5c = (this->VolumetricFogAlbedo).field0_0x0;
    local_48._0_4_ = this->VolumetricFogExtinctionScale;
    local_48._4_4_ = this->VolumetricFogDistance;
    uStack_40._0_4_ = this->VolumetricFogStartDistance;
    uStack_40._4_4_ = this->VolumetricFogNearFadeInDistance;
    pUVar4 = *(UWorld **)&this->field_0xb0;
    local_30 = (float)*(double *)&this->field_0x220;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    (**(code **)(pUVar4->Scene->_padding_ + 0x2a0))(pUVar4->Scene,this,&local_e8);
  }
  return;
}

// CreateRenderState_Concurrent @ 1478c19e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UExponentialHeightFogComponent::CreateRenderState_Concurrent
          (UExponentialHeightFogComponent *this,FRegisterComponentContext *param_1)

{
  UActorComponent::CreateRenderState_Concurrent((UActorComponent *)this,param_1);
  AddFogIfNeeded(this);
  return;
}

// DestroyRenderState_Concurrent @ 1478c3240

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
UExponentialHeightFogComponent::DestroyRenderState_Concurrent(UExponentialHeightFogComponent *this)

{
  UWorld *pUVar1;
  
  UActorComponent::DestroyRenderState_Concurrent((UActorComponent *)this);
  pUVar1 = *(UWorld **)&this->field_0xb0;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
                    /* WARNING: Could not recover jumptable at 0x0001478c3274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->Scene->_padding_ + 0x2a8))(pUVar1->Scene,this);
  return;
}

// GetPrivateStaticClass @ 1478d90b0

UClass * __cdecl UExponentialHeightFogComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExponentialHeightFogComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExponentialHeightFogComponent",
               &Z_Registration_Info_UClass_UExponentialHeightFogComponent.InnerSingleton,
               StaticRegisterNativesUExponentialHeightFogComponent,0x330,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UExponentialHeightFogComponent>,
               InternalVTableHelperCtorCaller<UExponentialHeightFogComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExponentialHeightFogComponent.InnerSingleton;
}

// SendRenderTransform_Concurrent @ 1478ed8e0

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
UExponentialHeightFogComponent::SendRenderTransform_Concurrent(UExponentialHeightFogComponent *this)

{
  UWorld *pUVar1;
  
  pUVar1 = *(UWorld **)&this->field_0xb0;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  (**(code **)(pUVar1->Scene->_padding_ + 0x2a8))(pUVar1->Scene,this);
  AddFogIfNeeded(this);
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  return;
}

// Serialize @ 1478ee180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UExponentialHeightFogComponent::Serialize(UExponentialHeightFogComponent *this,FArchive *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    if (iVar2 < 0x2f) {
      uVar1 = *(undefined8 *)((longlong)&(this->FogInscatteringColor_DEPRECATED).field0_0x0 + 8);
      *(undefined8 *)&(this->FogInscatteringLuminance).field0_0x0 =
           *(undefined8 *)&(this->FogInscatteringColor_DEPRECATED).field0_0x0;
      *(undefined8 *)((longlong)&(this->FogInscatteringLuminance).field0_0x0 + 8) = uVar1;
      uVar1 = *(undefined8 *)
               ((longlong)&(this->DirectionalInscatteringColor_DEPRECATED).field0_0x0 + 8);
      *(undefined8 *)&(this->DirectionalInscatteringLuminance).field0_0x0 =
           *(undefined8 *)&(this->DirectionalInscatteringColor_DEPRECATED).field0_0x0;
      *(undefined8 *)((longlong)&(this->DirectionalInscatteringLuminance).field0_0x0 + 8) = uVar1;
    }
  }
  return;
}

// Serialize @ 1478ee1f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UExponentialHeightFogComponent::Serialize
          (UExponentialHeightFogComponent *this,FStructuredArchiveRecord param_1)

{
  undefined8 uVar1;
  int iVar2;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  USceneComponent::Serialize((USceneComponent *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  if (this_00->ArIsLoading != 0) {
    iVar2 = FArchiveState::CustomVer(this_00,&FUE5MainStreamObjectVersion::GUID);
    if (iVar2 < 0x2f) {
      uVar1 = *(undefined8 *)((longlong)&(this->FogInscatteringColor_DEPRECATED).field0_0x0 + 8);
      *(undefined8 *)&(this->FogInscatteringLuminance).field0_0x0 =
           *(undefined8 *)&(this->FogInscatteringColor_DEPRECATED).field0_0x0;
      *(undefined8 *)((longlong)&(this->FogInscatteringLuminance).field0_0x0 + 8) = uVar1;
      uVar1 = *(undefined8 *)
               ((longlong)&(this->DirectionalInscatteringColor_DEPRECATED).field0_0x0 + 8);
      *(undefined8 *)&(this->DirectionalInscatteringLuminance).field0_0x0 =
           *(undefined8 *)&(this->DirectionalInscatteringColor_DEPRECATED).field0_0x0;
      *(undefined8 *)((longlong)&(this->DirectionalInscatteringLuminance).field0_0x0 + 8) = uVar1;
    }
  }
  return;
}

// SetDirectionalInscatteringColor @ 1478f1f40

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
UExponentialHeightFogComponent::SetDirectionalInscatteringColor
          (UExponentialHeightFogComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  if (((((param_1->field0_0x0)._s_0.R == (this->DirectionalInscatteringLuminance).field0_0x0._s_0.R)
       && ((param_1->field0_0x0)._s_0.G ==
           (this->DirectionalInscatteringLuminance).field0_0x0._s_0.G)) &&
      ((param_1->field0_0x0)._s_0.B == (this->DirectionalInscatteringLuminance).field0_0x0._s_0.B))
     && ((param_1->field0_0x0)._s_0.A == (this->DirectionalInscatteringLuminance).field0_0x0._s_0.A)
     ) {
    return;
  }
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->DirectionalInscatteringLuminance).field0_0x0 =
       *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->DirectionalInscatteringLuminance).field0_0x0 + 8) = uVar1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetDirectionalInscatteringExponent @ 1478f1f90

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
UExponentialHeightFogComponent::SetDirectionalInscatteringExponent
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->DirectionalInscatteringExponent) {
    this->DirectionalInscatteringExponent = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetDirectionalInscatteringStartDistance @ 1478f1fb0

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
UExponentialHeightFogComponent::SetDirectionalInscatteringStartDistance
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->DirectionalInscatteringStartDistance) {
    this->DirectionalInscatteringStartDistance = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetEndDistance @ 1478f2260

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
UExponentialHeightFogComponent::SetEndDistance(UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->EndDistance) {
    this->EndDistance = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetFogCutoffDistance @ 1478f2650

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
UExponentialHeightFogComponent::SetFogCutoffDistance
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->FogCutoffDistance) {
    this->FogCutoffDistance = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetFogDensity @ 1478f2670

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
UExponentialHeightFogComponent::SetFogDensity(UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->FogDensity) {
    this->FogDensity = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetFogHeightFalloff @ 1478f2770

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
UExponentialHeightFogComponent::SetFogHeightFalloff
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->FogHeightFalloff) {
    this->FogHeightFalloff = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetFogInscatteringColor @ 1478f2790

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
UExponentialHeightFogComponent::SetFogInscatteringColor
          (UExponentialHeightFogComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  if (((((param_1->field0_0x0)._s_0.R == (this->FogInscatteringLuminance).field0_0x0._s_0.R) &&
       ((param_1->field0_0x0)._s_0.G == (this->FogInscatteringLuminance).field0_0x0._s_0.G)) &&
      ((param_1->field0_0x0)._s_0.B == (this->FogInscatteringLuminance).field0_0x0._s_0.B)) &&
     ((param_1->field0_0x0)._s_0.A == (this->FogInscatteringLuminance).field0_0x0._s_0.A)) {
    return;
  }
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->FogInscatteringLuminance).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->FogInscatteringLuminance).field0_0x0 + 8) = uVar1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetFogMaxOpacity @ 1478f27e0

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
UExponentialHeightFogComponent::SetFogMaxOpacity(UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->FogMaxOpacity) {
    this->FogMaxOpacity = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetFullyDirectionalInscatteringColorDistance @ 1478f2a90

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
UExponentialHeightFogComponent::SetFullyDirectionalInscatteringColorDistance
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->FullyDirectionalInscatteringColorDistance) {
    this->FullyDirectionalInscatteringColorDistance = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetHoldout @ 1478f2c40

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
UExponentialHeightFogComponent::SetHoldout(UExponentialHeightFogComponent *this,bool param_1)

{
  if (this->bHoldout != param_1) {
    this->field_0x325 = this->field_0x325 & 0xfe | param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetInscatteringColorCubemap @ 1478f2e10

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
UExponentialHeightFogComponent::SetInscatteringColorCubemap
          (UExponentialHeightFogComponent *this,UTextureCube *param_1)

{
  UTextureCube *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->InscatteringColorCubemap).field0_0x0.DebugPtr;
  if (pUVar1 == (UTextureCube *)0x0) {
    bVar2 = param_1 == (UTextureCube *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTextureCube *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->InscatteringColorCubemap).field0_0x0.DebugPtr = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetInscatteringColorCubemapAngle @ 1478f2e70

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
UExponentialHeightFogComponent::SetInscatteringColorCubemapAngle
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->InscatteringColorCubemapAngle) {
    this->InscatteringColorCubemapAngle = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetInscatteringTextureTint @ 1478f2e90

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
UExponentialHeightFogComponent::SetInscatteringTextureTint
          (UExponentialHeightFogComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  if (((((param_1->field0_0x0)._s_0.R == (this->InscatteringTextureTint).field0_0x0._s_0.R) &&
       ((param_1->field0_0x0)._s_0.G == (this->InscatteringTextureTint).field0_0x0._s_0.G)) &&
      ((param_1->field0_0x0)._s_0.B == (this->InscatteringTextureTint).field0_0x0._s_0.B)) &&
     ((param_1->field0_0x0)._s_0.A == (this->InscatteringTextureTint).field0_0x0._s_0.A)) {
    return;
  }
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->InscatteringTextureTint).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->InscatteringTextureTint).field0_0x0 + 8) = uVar1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetNonDirectionalInscatteringColorDistance @ 1478f4170

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
UExponentialHeightFogComponent::SetNonDirectionalInscatteringColorDistance
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->NonDirectionalInscatteringColorDistance) {
    this->NonDirectionalInscatteringColorDistance = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetRenderInMainPass @ 1478f4a80

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
UExponentialHeightFogComponent::SetRenderInMainPass
          (UExponentialHeightFogComponent *this,bool param_1)

{
  if (this->bRenderInMainPass != param_1) {
    this->field_0x325 = this->field_0x325 & 0xfd | param_1 * '\x02';
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetSecondFogData @ 1478f4f40

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
UExponentialHeightFogComponent::SetSecondFogData
          (UExponentialHeightFogComponent *this,FExponentialHeightFogData *param_1)

{
  float fVar1;
  float fVar2;
  
  if (((param_1->FogDensity == (this->SecondFogData).FogDensity) &&
      (param_1->FogHeightOffset == (this->SecondFogData).FogHeightOffset)) &&
     (param_1->FogHeightFalloff == (this->SecondFogData).FogHeightFalloff)) {
    return;
  }
  fVar2 = param_1->FogHeightFalloff;
  fVar1 = param_1->FogHeightOffset;
  (this->SecondFogData).FogDensity = param_1->FogDensity;
  (this->SecondFogData).FogHeightFalloff = fVar2;
  (this->SecondFogData).FogHeightOffset = fVar1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetSecondFogDensity @ 1478f4f90

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
UExponentialHeightFogComponent::SetSecondFogDensity
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != (this->SecondFogData).FogDensity) {
    (this->SecondFogData).FogDensity = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetSecondFogHeightFalloff @ 1478f4fb0

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
UExponentialHeightFogComponent::SetSecondFogHeightFalloff
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != (this->SecondFogData).FogHeightFalloff) {
    (this->SecondFogData).FogHeightFalloff = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetSecondFogHeightOffset @ 1478f4fd0

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
UExponentialHeightFogComponent::SetSecondFogHeightOffset
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != (this->SecondFogData).FogHeightOffset) {
    (this->SecondFogData).FogHeightOffset = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetSkyAtmosphereAmbientContributionColorScale @ 1478f52a0

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
UExponentialHeightFogComponent::SetSkyAtmosphereAmbientContributionColorScale
          (UExponentialHeightFogComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  if (((((param_1->field0_0x0)._s_0.R ==
         (this->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.R) &&
       ((param_1->field0_0x0)._s_0.G ==
        (this->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.G)) &&
      ((param_1->field0_0x0)._s_0.B ==
       (this->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.B)) &&
     ((param_1->field0_0x0)._s_0.A ==
      (this->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.A)) {
    return;
  }
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SkyAtmosphereAmbientContributionColorScale).field0_0x0 =
       *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->SkyAtmosphereAmbientContributionColorScale).field0_0x0 + 8) =
       uVar1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetStartDistance @ 1478f54a0

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
UExponentialHeightFogComponent::SetStartDistance(UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->StartDistance) {
    this->StartDistance = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetVolumetricFog @ 1478f6740

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
UExponentialHeightFogComponent::SetVolumetricFog(UExponentialHeightFogComponent *this,bool param_1)

{
  if (this->bEnableVolumetricFog != param_1) {
    this->bEnableVolumetricFog = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetVolumetricFogAlbedo @ 1478f6760

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
UExponentialHeightFogComponent::SetVolumetricFogAlbedo
          (UExponentialHeightFogComponent *this,FColor param_1)

{
  if ((FColor_u_0)(this->VolumetricFogAlbedo).field0_0x0.Bits != param_1.field0_0x0) {
    (this->VolumetricFogAlbedo).field0_0x0._s_0 = (FColor_u_0_s_0)param_1.field0_0x0;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetVolumetricFogDistance @ 1478f6780

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
UExponentialHeightFogComponent::SetVolumetricFogDistance
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->VolumetricFogDistance) {
    this->VolumetricFogDistance = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetVolumetricFogEmissive @ 1478f67a0

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
UExponentialHeightFogComponent::SetVolumetricFogEmissive
          (UExponentialHeightFogComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  if (((((param_1->field0_0x0)._s_0.R == (this->VolumetricFogEmissive).field0_0x0._s_0.R) &&
       ((param_1->field0_0x0)._s_0.G == (this->VolumetricFogEmissive).field0_0x0._s_0.G)) &&
      ((param_1->field0_0x0)._s_0.B == (this->VolumetricFogEmissive).field0_0x0._s_0.B)) &&
     ((param_1->field0_0x0)._s_0.A == (this->VolumetricFogEmissive).field0_0x0._s_0.A)) {
    return;
  }
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->VolumetricFogEmissive).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumetricFogEmissive).field0_0x0 + 8) = uVar1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetVolumetricFogExtinctionScale @ 1478f67f0

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
UExponentialHeightFogComponent::SetVolumetricFogExtinctionScale
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->VolumetricFogExtinctionScale) {
    this->VolumetricFogExtinctionScale = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetVolumetricFogNearFadeInDistance @ 1478f6810

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
UExponentialHeightFogComponent::SetVolumetricFogNearFadeInDistance
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->VolumetricFogNearFadeInDistance) {
    this->VolumetricFogNearFadeInDistance = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetVolumetricFogScatteringDistribution @ 1478f6830

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
UExponentialHeightFogComponent::SetVolumetricFogScatteringDistribution
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->VolumetricFogScatteringDistribution) {
    this->VolumetricFogScatteringDistribution = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetVolumetricFogStartDistance @ 1478f6850

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
UExponentialHeightFogComponent::SetVolumetricFogStartDistance
          (UExponentialHeightFogComponent *this,float param_1)

{
  if (param_1 != this->VolumetricFogStartDistance) {
    this->VolumetricFogStartDistance = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// StaticRegisterNativesUExponentialHeightFogComponent @ 1478f7e10

void __cdecl
UExponentialHeightFogComponent::StaticRegisterNativesUExponentialHeightFogComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1e;
  local_18.DataPtr = Z_Construct_UClass_UExponentialHeightFogComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetDirectionalInscatteringColor @ 14790ba70

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
UExponentialHeightFogComponent::execSetDirectionalInscatteringColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((local_18 != *(float *)&param_1[0x12].field_0x4) ||
       (fStack_14 != *(float *)&param_1[0x12].field_0x8)) ||
      (fStack_10 != *(float *)&param_1[0x12].field_0xc)) ||
     (fStack_c != *(float *)&param_1[0x12].field_0x10)) {
    *(float *)&param_1[0x12].field_0x4 = local_18;
    *(float *)&param_1[0x12].field_0x8 = fStack_14;
    *(float *)&param_1[0x12].field_0xc = fStack_10;
    *(float *)&param_1[0x12].field_0x10 = fStack_c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetDirectionalInscatteringExponent @ 14790bb30

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
UExponentialHeightFogComponent::execSetDirectionalInscatteringExponent
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
  if (local_res8[0] != *(float *)&param_1[0x11].field_0x14) {
    *(float *)&param_1[0x11].field_0x14 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetDirectionalInscatteringStartDistance @ 14790bbd0

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
UExponentialHeightFogComponent::execSetDirectionalInscatteringStartDistance
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
  if (local_res8[0] != *(float *)&param_1[0x11].field_0x18) {
    *(float *)&param_1[0x11].field_0x18 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetEndDistance @ 14790c330

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
UExponentialHeightFogComponent::execSetEndDistance(UObject *param_1,FFrame *param_2,void *param_3)

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
  if (local_res8[0] != *(float *)&param_1[0x12].field_0x1c) {
    *(float *)&param_1[0x12].field_0x1c = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetFogCutoffDistance @ 14790cce0

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
UExponentialHeightFogComponent::execSetFogCutoffDistance
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
  if (local_res8[0] != *(float *)&param_1[0x12].field_0x20) {
    *(float *)&param_1[0x12].field_0x20 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetFogDensity @ 14790cd80

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
UExponentialHeightFogComponent::execSetFogDensity(UObject *param_1,FFrame *param_2,void *param_3)

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
  if (local_res8[0] != *(float *)&param_1[0xe].field_0x20) {
    *(float *)&param_1[0xe].field_0x20 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetFogHeightFalloff @ 14790cf80

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
UExponentialHeightFogComponent::execSetFogHeightFalloff
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
  if (local_res8[0] != *(float *)&param_1[0xe].field_0x24) {
    *(float *)&param_1[0xe].field_0x24 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetFogInscatteringColor @ 14790d020

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
UExponentialHeightFogComponent::execSetFogInscatteringColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((local_18 != *(float *)&param_1[0xf].field_0x1c) ||
       (fStack_14 != *(float *)&param_1[0xf].field_0x20)) ||
      (fStack_10 != *(float *)&param_1[0xf].field_0x24)) || (fStack_c != *(float *)(param_1 + 0x10))
     ) {
    *(float *)&param_1[0xf].field_0x1c = local_18;
    *(float *)&param_1[0xf].field_0x20 = fStack_14;
    *(float *)&param_1[0xf].field_0x24 = fStack_10;
    *(float *)(param_1 + 0x10) = fStack_c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetFogMaxOpacity @ 14790d0e0

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
UExponentialHeightFogComponent::execSetFogMaxOpacity(UObject *param_1,FFrame *param_2,void *param_3)

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
  if (local_res8[0] != *(float *)&param_1[0x12].field_0x14) {
    *(float *)&param_1[0x12].field_0x14 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetFullyDirectionalInscatteringColorDistance @ 14790d670

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
UExponentialHeightFogComponent::execSetFullyDirectionalInscatteringColorDistance
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
  if (local_res8[0] != *(float *)&param_1[0x11].field_0xc) {
    *(float *)&param_1[0x11].field_0xc = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetHoldout @ 14790db80

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
UExponentialHeightFogComponent::execSetHoldout(UObject *param_1,FFrame *param_2,void *param_3)

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
  if ((bool)(param_1[0x14].field_0x5 & 1) != (local_res8[0] != 0)) {
    param_1[0x14].field_0x5 = param_1[0x14].field_0x5 & 0xfe | local_res8[0] != 0;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetInscatteringColorCubemap @ 14790e020

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
UExponentialHeightFogComponent::execSetInscatteringColorCubemap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UObject **)&param_1[0x10].field_0x18 == (UObject *)0x0) {
    bVar3 = local_res8 == (UObject *)0x0;
  }
  else {
    bVar3 = *(UObject **)&param_1[0x10].field_0x18 == local_res8;
  }
  if (!bVar3) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    *(UObject **)&param_1[0x10].field_0x18 = pUVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetInscatteringColorCubemapAngle @ 14790e0f0

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
UExponentialHeightFogComponent::execSetInscatteringColorCubemapAngle
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
  if (local_res8[0] != *(float *)&param_1[0x10].field_0x20) {
    *(float *)&param_1[0x10].field_0x20 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetInscatteringTextureTint @ 14790e190

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
UExponentialHeightFogComponent::execSetInscatteringTextureTint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((local_18 != *(float *)&param_1[0x10].field_0x24) ||
       (fStack_14 != *(float *)(param_1 + 0x11))) ||
      (fStack_10 != *(float *)&param_1[0x11].field_0x4)) ||
     (fStack_c != *(float *)&param_1[0x11].field_0x8)) {
    *(float *)&param_1[0x10].field_0x24 = local_18;
    *(float *)(param_1 + 0x11) = fStack_14;
    *(float *)&param_1[0x11].field_0x4 = fStack_10;
    *(float *)&param_1[0x11].field_0x8 = fStack_c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetNonDirectionalInscatteringColorDistance @ 14790fb20

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
UExponentialHeightFogComponent::execSetNonDirectionalInscatteringColorDistance
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
  if (local_res8[0] != *(float *)&param_1[0x11].field_0x10) {
    *(float *)&param_1[0x11].field_0x10 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetRenderInMainPass @ 147910fd0

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
UExponentialHeightFogComponent::execSetRenderInMainPass
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  if ((bool)((byte)param_1[0x14].field_0x5 >> 1 & 1) != (local_res8[0] != 0)) {
    param_1[0x14].field_0x5 = param_1[0x14].field_0x5 & 0xfd | (local_res8[0] != 0) * '\x02';
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetSecondFogData @ 1479114a0

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
UExponentialHeightFogComponent::execSetSecondFogData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_18;
  undefined8 local_14;
  
  local_18 = 0.02;
  local_14 = 0x3e4ccccd;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_18 != *(float *)(param_1 + 0xf)) ||
      (local_14._4_4_ != *(float *)&param_1[0xf].field_0x8)) ||
     ((float)local_14 != *(float *)&param_1[0xf].field_0x4)) {
    *(float *)(param_1 + 0xf) = local_18;
    *(float *)&param_1[0xf].field_0x4 = (float)local_14;
    *(float *)&param_1[0xf].field_0x8 = local_14._4_4_;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetSecondFogDensity @ 147911570

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
UExponentialHeightFogComponent::execSetSecondFogDensity
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
  if (local_res8[0] != *(float *)(param_1 + 0xf)) {
    *(float *)(param_1 + 0xf) = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetSecondFogHeightFalloff @ 147911610

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
UExponentialHeightFogComponent::execSetSecondFogHeightFalloff
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
  if (local_res8[0] != *(float *)&param_1[0xf].field_0x4) {
    *(float *)&param_1[0xf].field_0x4 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetSecondFogHeightOffset @ 1479116b0

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
UExponentialHeightFogComponent::execSetSecondFogHeightOffset
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
  if (local_res8[0] != *(float *)&param_1[0xf].field_0x8) {
    *(float *)&param_1[0xf].field_0x8 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetSkyAtmosphereAmbientContributionColorScale @ 147911d90

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
UExponentialHeightFogComponent::execSetSkyAtmosphereAmbientContributionColorScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((local_18 != *(float *)&param_1[0x10].field_0x4) ||
       (fStack_14 != *(float *)&param_1[0x10].field_0x8)) ||
      (fStack_10 != *(float *)&param_1[0x10].field_0xc)) ||
     (fStack_c != *(float *)&param_1[0x10].field_0x10)) {
    *(float *)&param_1[0x10].field_0x4 = local_18;
    *(float *)&param_1[0x10].field_0x8 = fStack_14;
    *(float *)&param_1[0x10].field_0xc = fStack_10;
    *(float *)&param_1[0x10].field_0x10 = fStack_c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetStartDistance @ 147912200

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
UExponentialHeightFogComponent::execSetStartDistance(UObject *param_1,FFrame *param_2,void *param_3)

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
  if (local_res8[0] != *(float *)&param_1[0x12].field_0x18) {
    *(float *)&param_1[0x12].field_0x18 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetVolumetricFog @ 1479135f0

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
UExponentialHeightFogComponent::execSetVolumetricFog(UObject *param_1,FFrame *param_2,void *param_3)

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
  if ((bool)param_1[0x12].field_0x24 != (local_res8[0] != 0)) {
    param_1[0x12].field_0x24 = local_res8[0] != 0;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetVolumetricFogAlbedo @ 147913690

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
UExponentialHeightFogComponent::execSetVolumetricFogAlbedo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[0x13].field_0x4 != local_res8[0]) {
    *(int *)&param_1[0x13].field_0x4 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetVolumetricFogDistance @ 147913720

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
UExponentialHeightFogComponent::execSetVolumetricFogDistance
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
  if (local_res8[0] != *(float *)&param_1[0x13].field_0x1c) {
    *(float *)&param_1[0x13].field_0x1c = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetVolumetricFogEmissive @ 1479137c0

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
UExponentialHeightFogComponent::execSetVolumetricFogEmissive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((local_18 != *(float *)&param_1[0x13].field_0x8) ||
       (fStack_14 != *(float *)&param_1[0x13].field_0xc)) ||
      (fStack_10 != *(float *)&param_1[0x13].field_0x10)) ||
     (fStack_c != *(float *)&param_1[0x13].field_0x14)) {
    *(float *)&param_1[0x13].field_0x8 = local_18;
    *(float *)&param_1[0x13].field_0xc = fStack_14;
    *(float *)&param_1[0x13].field_0x10 = fStack_10;
    *(float *)&param_1[0x13].field_0x14 = fStack_c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetVolumetricFogExtinctionScale @ 147913880

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
UExponentialHeightFogComponent::execSetVolumetricFogExtinctionScale
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
  if (local_res8[0] != *(float *)&param_1[0x13].field_0x18) {
    *(float *)&param_1[0x13].field_0x18 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetVolumetricFogNearFadeInDistance @ 147913920

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
UExponentialHeightFogComponent::execSetVolumetricFogNearFadeInDistance
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
  if (local_res8[0] != *(float *)&param_1[0x13].field_0x24) {
    *(float *)&param_1[0x13].field_0x24 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetVolumetricFogScatteringDistribution @ 1479139c0

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
UExponentialHeightFogComponent::execSetVolumetricFogScatteringDistribution
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
  if (local_res8[0] != *(float *)(param_1 + 0x13)) {
    *(float *)(param_1 + 0x13) = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetVolumetricFogStartDistance @ 147913a60

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
UExponentialHeightFogComponent::execSetVolumetricFogStartDistance
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
  if (local_res8[0] != *(float *)&param_1[0x13].field_0x20) {
    *(float *)&param_1[0x13].field_0x20 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

