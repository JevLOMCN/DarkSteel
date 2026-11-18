// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 58

// StaticClass @ 1479902c0

UClass * __cdecl USkyLightComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkyLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkyLightComponent",
               &Z_Registration_Info_UClass_USkyLightComponent.InnerSingleton,
               StaticRegisterNativesUSkyLightComponent,0x470,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USkyLightComponent>,
               InternalVTableHelperCtorCaller<USkyLightComponent>,local_res8,
               ULightComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkyLightComponent.InnerSingleton;
}

// USkyLightComponent @ 1479a69a0

USkyLightComponent * __thiscall
USkyLightComponent::USkyLightComponent(USkyLightComponent *this,FVTableHelper *param_1)

{
  ULightComponentBase::ULightComponentBase((ULightComponentBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->Cubemap).field0_0x0.DebugPtr = (UTextureCube *)0x0;
  (this->ProcessedSkyTexture).Reference = (FSkyTextureCubeResource *)0x0;
  (this->IrradianceEnvironmentMap).R.V[0] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[1] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[2] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[3] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[4] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[5] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[6] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[7] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[8] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[9] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[10] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[0xb] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[0] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[1] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[2] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[3] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[4] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[5] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[6] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[7] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[8] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[9] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[10] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[0xb] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[0] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[1] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[2] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[3] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[4] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[5] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[6] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[7] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[8] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[9] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[10] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[0xb] = 0.0;
  this->AverageBrightness = 0.0;
  (this->BlendDestinationCubemap).field0_0x0.DebugPtr = (UTextureCube *)0x0;
  (this->BlendDestinationProcessedSkyTexture).Reference = (FSkyTextureCubeResource *)0x0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[0] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[1] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[2] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[3] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[4] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[5] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[6] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[7] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[8] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[9] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[10] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[0xb] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[0] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[1] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[2] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[3] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[4] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[5] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[6] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[7] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[8] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[9] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[10] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[0xb] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[0] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[1] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[2] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[3] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[4] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[5] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[6] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[7] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[8] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[9] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[10] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[0xb] = 0.0;
  FRenderCommandFence::FRenderCommandFence(&this->IrradianceMapFence);
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  return this;
}

// USkyLightComponent @ 1479a6aa0

USkyLightComponent * __thiscall
USkyLightComponent::USkyLightComponent(USkyLightComponent *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  uint uVar2;
  FLinearColor FVar3;
  
  ULightComponentBase::ULightComponentBase((ULightComponentBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->Cubemap).field0_0x0.DebugPtr = (UTextureCube *)0x0;
  (this->ProcessedSkyTexture).Reference = (FSkyTextureCubeResource *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->IrradianceEnvironmentMap).R.V[0] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[1] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[2] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[3] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[4] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[5] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[6] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[7] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[8] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[9] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[10] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[0xb] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[0] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[1] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[2] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[3] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[4] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[5] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[6] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[7] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[8] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[9] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[10] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[0xb] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[0] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[1] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[2] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[3] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[4] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[5] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[6] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[7] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[8] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[9] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[10] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[0xb] = 0.0;
  this->AverageBrightness = 0.0;
  (this->BlendDestinationCubemap).field0_0x0.DebugPtr = (UTextureCube *)0x0;
  (this->BlendDestinationProcessedSkyTexture).Reference = (FSkyTextureCubeResource *)0x0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[0] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[1] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[2] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[3] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[4] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[5] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[6] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[7] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[8] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[9] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[10] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).R.V[0xb] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[0] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[1] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[2] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[3] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[4] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[5] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[6] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[7] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[8] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[9] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[10] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).G.V[0xb] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[0] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[1] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[2] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[3] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[4] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[5] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[6] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[7] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[8] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[9] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[10] = 0.0;
  (this->BlendDestinationIrradianceEnvironmentMap).B.V[0xb] = 0.0;
  FRenderCommandFence::FRenderCommandFence(&this->IrradianceMapFence);
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  this->SkyDistanceThreshold = 150000.0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
  this->bLowerHemisphereIsBlack = true;
  this->bSavedConstructionScriptValuesValid = true;
  this->bHasEverCaptured = false;
  this->OcclusionMaxDistance = 1000.0;
  this->OcclusionExponent = 1.0;
  this->MinOcclusion = 0.0;
  (this->OcclusionTint).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  uVar2 = *(uint *)((longlong)&this->_padding_ + 4);
  this->CubemapResolution = 0x80;
  FVar3 = FLinearColor::Black;
  this->AverageBrightness = 1.0;
  this->BlendDestinationAverageBrightness = 1.0;
  (this->LowerHemisphereColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  FVar3 = FLinearColor::White;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 3;
  this->bCloudAmbientOcclusion = 0;
  *(uint *)((longlong)&this->_padding_ + 4) = uVar2 & 0xfffffeff | 0x40;
  (this->SpecifiedCubemapColorScale).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 4;
  this->bRealTimeCapture = false;
  this->CloudAmbientOcclusionExtent = 150.0;
  this->CloudAmbientOcclusionStrength = 1.0;
  this->CloudAmbientOcclusionMapResolutionScale = 1.0;
  this->CloudAmbientOcclusionApertureScale = 0.05;
  return this;
}

// ~USkyLightComponent @ 1479a96e0

void __thiscall USkyLightComponent::~USkyLightComponent(USkyLightComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  FRenderCommandFence::~FRenderCommandFence(&this->IrradianceMapFence);
  TRefCountPtr<FSkyTextureCubeResource>::~TRefCountPtr<FSkyTextureCubeResource>
            (&this->BlendDestinationProcessedSkyTexture);
  TRefCountPtr<FSkyTextureCubeResource>::~TRefCountPtr<FSkyTextureCubeResource>
            (&this->ProcessedSkyTexture);
  ULightComponentBase::~ULightComponentBase((ULightComponentBase *)this);
  return;
}

// ApplyComponentInstanceData @ 1479b1e40

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
USkyLightComponent::ApplyComponentInstanceData
          (USkyLightComponent *this,FPrecomputedSkyLightInstanceData *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong *plVar8;
  USkyLightComponent *local_res8;
  longlong local_48 [5];
  undefined8 uStack_20;
  longlong local_18;
  undefined8 uStack_10;
  
  if (param_1 == (FPrecomputedSkyLightInstanceData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("LightMapData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyLightComponent.cpp"
                       ,0x2cb,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar7 = ULightComponentBase::HasStaticShadowing((ULightComponentBase *)this);
  if (bVar7) {
    plVar8 = local_48 + 4;
    local_48[4]._0_4_ = (param_1->OriginalLightGuid).A;
    local_48[4]._4_4_ = (param_1->OriginalLightGuid).B;
    uStack_20._0_4_ = (param_1->OriginalLightGuid).C;
    uStack_20._4_4_ = (param_1->OriginalLightGuid).D;
  }
  else {
    local_48[0] = 0;
    plVar8 = local_48;
    local_48[1] = 0;
  }
  lVar5 = plVar8[1];
  this->_padding_ = *plVar8;
  this->_padding_ = lVar5;
  bVar7 = ULightComponentBase::HasStaticShadowing((ULightComponentBase *)this);
  if (bVar7) {
    plVar8 = &local_18;
    local_18._0_4_ = (param_1->LightGuid).A;
    local_18._4_4_ = (param_1->LightGuid).B;
    uStack_10._0_4_ = (param_1->LightGuid).C;
    uStack_10._4_4_ = (param_1->LightGuid).D;
  }
  else {
    local_48[2] = 0;
    plVar8 = local_48 + 2;
    local_48[3] = 0;
  }
  lVar5 = plVar8[1];
  this->_padding_ = *plVar8;
  this->_padding_ = lVar5;
  TRefCountPtr<FSkyTextureCubeResource>::operator=
            (&this->ProcessedSkyTexture,(param_1->ProcessedSkyTexture).Reference);
  uVar6 = *(undefined8 *)((param_1->IrradianceEnvironmentMap).R.V + 2);
  *(undefined8 *)(this->IrradianceEnvironmentMap).R.V =
       *(undefined8 *)(param_1->IrradianceEnvironmentMap).R.V;
  *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 2) = uVar6;
  uVar6 = *(undefined8 *)((param_1->IrradianceEnvironmentMap).R.V + 6);
  *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 4) =
       *(undefined8 *)((param_1->IrradianceEnvironmentMap).R.V + 4);
  *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 6) = uVar6;
  uVar6 = *(undefined8 *)((param_1->IrradianceEnvironmentMap).R.V + 10);
  *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 8) =
       *(undefined8 *)((param_1->IrradianceEnvironmentMap).R.V + 8);
  *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 10) = uVar6;
  uVar6 = *(undefined8 *)((param_1->IrradianceEnvironmentMap).G.V + 2);
  *(undefined8 *)(this->IrradianceEnvironmentMap).G.V =
       *(undefined8 *)(param_1->IrradianceEnvironmentMap).G.V;
  *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 2) = uVar6;
  uVar6 = *(undefined8 *)((param_1->IrradianceEnvironmentMap).G.V + 6);
  *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 4) =
       *(undefined8 *)((param_1->IrradianceEnvironmentMap).G.V + 4);
  *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 6) = uVar6;
  uVar6 = *(undefined8 *)((param_1->IrradianceEnvironmentMap).G.V + 10);
  *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 8) =
       *(undefined8 *)((param_1->IrradianceEnvironmentMap).G.V + 8);
  *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 10) = uVar6;
  uVar6 = *(undefined8 *)((param_1->IrradianceEnvironmentMap).B.V + 2);
  *(undefined8 *)(this->IrradianceEnvironmentMap).B.V =
       *(undefined8 *)(param_1->IrradianceEnvironmentMap).B.V;
  *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 2) = uVar6;
  fVar2 = (param_1->IrradianceEnvironmentMap).B.V[5];
  fVar3 = (param_1->IrradianceEnvironmentMap).B.V[6];
  fVar4 = (param_1->IrradianceEnvironmentMap).B.V[7];
  (this->IrradianceEnvironmentMap).B.V[4] = (param_1->IrradianceEnvironmentMap).B.V[4];
  (this->IrradianceEnvironmentMap).B.V[5] = fVar2;
  (this->IrradianceEnvironmentMap).B.V[6] = fVar3;
  (this->IrradianceEnvironmentMap).B.V[7] = fVar4;
  fVar2 = (param_1->IrradianceEnvironmentMap).B.V[9];
  fVar3 = (param_1->IrradianceEnvironmentMap).B.V[10];
  fVar4 = (param_1->IrradianceEnvironmentMap).B.V[0xb];
  (this->IrradianceEnvironmentMap).B.V[8] = (param_1->IrradianceEnvironmentMap).B.V[8];
  (this->IrradianceEnvironmentMap).B.V[9] = fVar2;
  (this->IrradianceEnvironmentMap).B.V[10] = fVar3;
  (this->IrradianceEnvironmentMap).B.V[0xb] = fVar4;
  this->AverageBrightness = param_1->AverageBrightness;
  if (((this->ProcessedSkyTexture).Reference != (FSkyTextureCubeResource *)0x0) &&
     (this->bSavedConstructionScriptValuesValid != false)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
    local_res8 = this;
    TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_>::Remove
              (&SkyCapturesToUpdate,&local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// BeginDestroy @ 1479b46a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyLightComponent::BeginDestroy(USkyLightComponent *this)

{
  int *piVar1;
  FSkyTextureCubeResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  USkyLightComponent *local_res8;
  USkyLightComponent *local_res10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
  local_res8 = this;
  TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_>::Remove(&SkyCapturesToUpdate,&local_res8)
  ;
  LeaveCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
  local_res10 = this;
  TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_>::Remove
            (&SkyCapturesToUpdateBlendDestinations,&local_res10);
  pFVar2 = (this->ProcessedSkyTexture).Reference;
  if (pFVar2 != (FSkyTextureCubeResource *)0x0) {
    (this->ProcessedSkyTexture).Reference = (FSkyTextureCubeResource *)0x0;
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyLightComponent.cpp"
                         ,0xa1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    piVar1 = &pFVar2->NumRefs;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      BeginReleaseResource((FRenderResource *)pFVar2,(FRenderCommandPipe *)0x0);
      BeginCleanup((FDeferredCleanupInterface *)&pFVar2->_padding_);
    }
  }
  FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
  USceneComponent::BeginDestroy((USceneComponent *)this);
  return;
}

// CaptureEmissiveRadianceEnvironmentCubeMap @ 1479b7bf0

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
USkyLightComponent::CaptureEmissiveRadianceEnvironmentCubeMap
          (USkyLightComponent *this,TSHVectorRGB<3> *param_1,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_2)

{
  FSceneInterface *pFVar1;
  undefined4 local_28 [4];
  
  (param_1->R).V[0] = 0.0;
  (param_1->R).V[1] = 0.0;
  (param_1->R).V[2] = 0.0;
  (param_1->R).V[3] = 0.0;
  (param_1->R).V[4] = 0.0;
  (param_1->R).V[5] = 0.0;
  (param_1->R).V[6] = 0.0;
  (param_1->R).V[7] = 0.0;
  (param_1->R).V[8] = 0.0;
  (param_1->R).V[9] = 0.0;
  (param_1->R).V[10] = 0.0;
  (param_1->R).V[0xb] = 0.0;
  (param_1->G).V[0] = 0.0;
  (param_1->G).V[1] = 0.0;
  (param_1->G).V[2] = 0.0;
  (param_1->G).V[3] = 0.0;
  (param_1->G).V[4] = 0.0;
  (param_1->G).V[5] = 0.0;
  (param_1->G).V[6] = 0.0;
  (param_1->G).V[7] = 0.0;
  (param_1->G).V[8] = 0.0;
  (param_1->G).V[9] = 0.0;
  (param_1->G).V[10] = 0.0;
  (param_1->G).V[0xb] = 0.0;
  (param_1->B).V[0] = 0.0;
  (param_1->B).V[1] = 0.0;
  (param_1->B).V[2] = 0.0;
  (param_1->B).V[3] = 0.0;
  (param_1->B).V[4] = 0.0;
  (param_1->B).V[5] = 0.0;
  (param_1->B).V[6] = 0.0;
  (param_1->B).V[7] = 0.0;
  (param_1->B).V[8] = 0.0;
  (param_1->B).V[9] = 0.0;
  (param_1->B).V[10] = 0.0;
  (param_1->B).V[0xb] = 0.0;
  pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
  if ((pFVar1 != (FSceneInterface *)0x0) &&
     (((this->SourceType).Value != '\x01' ||
      ((this->Cubemap).field0_0x0.DebugPtr != (UTextureCube *)0x0)))) {
    local_28[0] = 0x3f800000;
    pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
    (**(code **)(pFVar1->_padding_ + 400))
              (pFVar1,this,1,(this->Cubemap).field0_0x0.DebugPtr,0,local_28,param_1,param_2,0);
    FlushRenderingCommands();
  }
  return;
}

// CreateRenderState_Concurrent @ 1479bbbd0

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
USkyLightComponent::CreateRenderState_Concurrent
          (USkyLightComponent *this,FRegisterComponentContext *param_1)

{
  char cVar1;
  bool bVar2;
  FSkyLightSceneProxy *pFVar3;
  UWorld *pUVar4;
  
  UActorComponent::CreateRenderState_Concurrent((UActorComponent *)this,param_1);
  if ((((this->SourceType).Value == '\x01') &&
      ((this->Cubemap).field0_0x0.DebugPtr == (UTextureCube *)0x0)) &&
     ((this->bRealTimeCapture == false ||
      (((cVar1 = *(char *)((longlong)&this->_padding_ + 3), cVar1 != '\x02' && (cVar1 != '\x01')) ||
       (GSkylightRealTimeReflectionCapture < 1)))))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((((this->_padding_ & 0x100000000) != 0) && (bVar2)) &&
     ((bVar2 = USceneComponent::ShouldComponentAddToScene((USceneComponent *)this), bVar2 &&
      (bVar2 = USceneComponent::ShouldRender((USceneComponent *)this), bVar2)))) {
    if ((((this->ProcessedSkyTexture).Reference != (FSkyTextureCubeResource *)0x0) ||
        (((this->bRealTimeCapture != false &&
          ((cVar1 = *(char *)((longlong)&this->_padding_ + 3), cVar1 == '\x02' || (cVar1 == '\x01'))
          )) && (0 < GSkylightRealTimeReflectionCapture)))) &&
       (pFVar3 = ::operator_new(0x160), pFVar3 != (FSkyLightSceneProxy *)0x0)) {
      pFVar3 = FSkyLightSceneProxy::FSkyLightSceneProxy(pFVar3,this);
      this->SceneProxy = pFVar3;
      if (pFVar3 == (FSkyLightSceneProxy *)0x0) {
        return;
      }
      pUVar4 = (UWorld *)this->_padding_;
      if (pUVar4 == (UWorld *)0x0) {
        pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
                    /* WARNING: Could not recover jumptable at 0x0001479bbcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pUVar4->Scene->_padding_ + 0x108))(pUVar4->Scene,this->SceneProxy);
      return;
    }
    this->SceneProxy = (FSkyLightSceneProxy *)0x0;
  }
  return;
}

// CreateSceneProxy @ 1479bbfb0

FSkyLightSceneProxy * __thiscall USkyLightComponent::CreateSceneProxy(USkyLightComponent *this)

{
  char cVar1;
  FSkyLightSceneProxy *pFVar2;
  
  if (((this->ProcessedSkyTexture).Reference != (FSkyTextureCubeResource *)0x0) ||
     ((this->bRealTimeCapture != false &&
      (((cVar1 = *(char *)((longlong)&this->_padding_ + 3), cVar1 == '\x02' || (cVar1 == '\x01')) &&
       (0 < GSkylightRealTimeReflectionCapture)))))) {
    pFVar2 = ::operator_new(0x160);
    if (pFVar2 != (FSkyLightSceneProxy *)0x0) {
      pFVar2 = FSkyLightSceneProxy::FSkyLightSceneProxy(pFVar2,this);
      return pFVar2;
    }
  }
  return (FSkyLightSceneProxy *)0x0;
}

// DestroyRenderState_Concurrent @ 1479bcd20

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

void __thiscall USkyLightComponent::DestroyRenderState_Concurrent(USkyLightComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FSkyLightSceneProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSkyLightSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  UActorComponent::DestroyRenderState_Concurrent((UActorComponent *)this);
  if (this->SceneProxy != (FSkyLightSceneProxy *)0x0) {
    pUVar3 = (UWorld *)this->_padding_;
    if (pUVar3 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    (**(code **)(pUVar3->Scene->_padding_ + 0x110))(pUVar3->Scene,this->SceneProxy);
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`USkyLightComponent::DestroyRenderState_Concurrent'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_70 = this->SceneProxy;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USkyLightComponent::DestroyRenderState_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_USkyLightComponent::DestroyRenderState_Concurrent_::__l5::TSTR_FDestroySkyLightCommand534>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`USkyLightComponent::DestroyRenderState_Concurrent'::__l5::TSTR_FDestroySkyLightCommand534>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    this->SceneProxy = (FSkyLightSceneProxy *)0x0;
  }
  return;
}

// GetComponentInstanceData @ 1479c4d80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TStructOnScope<FActorComponentInstanceData> * __thiscall
USkyLightComponent::GetComponentInstanceData
          (USkyLightComponent *this,
          TStructOnScope<FActorComponentInstanceData> *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  uint uVar5;
  UPackage *pUVar6;
  FSceneComponentInstanceData *this_00;
  UObject *pUVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  UScriptStruct *local_res8;
  
  FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
  *(undefined ***)__return_storage_ptr__ = &___7__TStructOnScope_UFActorComponentInstanceData____6B_
  ;
  FStructOnScope::Destroy((FStructOnScope *)__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData,
                         (UObject *)pUVar6,L"PrecomputedSkyLightInstanceData");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton;
  lVar10 = 0;
  if (Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton !=
      (UScriptStruct *)0x0) {
    local_res8 = Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable
                ((UObject *)
                 Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res8);
    iVar8 = (int)*(short *)((longlong)&pUVar4->_padding_ + 4);
    uVar9 = (int)pUVar4->_padding_ + -1 + iVar8 & ~(iVar8 - 1U);
    uVar5 = 1;
    if (uVar9 != 0) {
      uVar5 = uVar9;
    }
    this_00 = FMemory::Malloc((longlong)(int)uVar5,0);
    *(FSceneComponentInstanceData **)&__return_storage_ptr__->field_0x10 = this_00;
    FSceneComponentInstanceData::FSceneComponentInstanceData(this_00,(USceneComponent *)this);
    *(undefined4 *)&this_00[1]._padding_ = 0x3f800000;
    this_00->_padding_ = (longlong)&___7FPrecomputedSkyLightInstanceData__6B_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined8 *)&this_00[1].AttachedInstanceComponents = 0;
    *(undefined8 *)&this_00[1].AttachedInstanceComponents.field_0x8 = 0;
    *(undefined8 *)&this_00[1].AttachedInstanceComponents.field_0x10 = 0;
    *(undefined8 *)&this_00[1].AttachedInstanceComponents.field_0x18 = 0;
    *(undefined8 *)&this_00[1].AttachedInstanceComponents.field_0x20 = 0;
    *(undefined8 *)&this_00[1].AttachedInstanceComponents.field_0x28 = 0;
    *(undefined8 *)&this_00[1].AttachedInstanceComponents.field_0x30 = 0;
    *(undefined8 *)&this_00[1].AttachedInstanceComponents.field_0x38 = 0;
    *(undefined8 *)&this_00[1].AttachedInstanceComponents.field_0x40 = 0;
    *(undefined8 *)&this_00[1].AttachedInstanceComponents.field_0x48 = 0;
    this_00[2]._padding_ = 0;
    this_00[2]._padding_ = 0;
    __return_storage_ptr__->field_0x20 = 1;
  }
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8);
  if (Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData,
                         (UObject *)pUVar6,L"PrecomputedSkyLightInstanceData");
    if (Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_1479c4f38;
  }
  iVar8 = (int)(Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton)->
               _padding_;
  if ((*(int *)&pUVar7[1].field_0x10 < iVar8) ||
     ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar8 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton)->
       _padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar10 = *(longlong *)&__return_storage_ptr__->field_0x10;
  }
LAB_1479c4f38:
  lVar1 = this->_padding_;
  *(longlong *)(lVar10 + 0xb8) = this->_padding_;
  *(longlong *)(lVar10 + 0xc0) = lVar1;
  lVar1 = this->_padding_;
  *(longlong *)(lVar10 + 200) = this->_padding_;
  *(longlong *)(lVar10 + 0xd0) = lVar1;
  TRefCountPtr<FSkyTextureCubeResource>::operator=
            ((TRefCountPtr<FSkyTextureCubeResource> *)(lVar10 + 0xe0),
             (this->ProcessedSkyTexture).Reference);
  FRenderCommandFence::Wait(&this->IrradianceMapFence,false);
  uVar2 = *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 2);
  *(undefined8 *)(lVar10 + 0xf0) = *(undefined8 *)(this->IrradianceEnvironmentMap).R.V;
  *(undefined8 *)(lVar10 + 0xf8) = uVar2;
  uVar2 = *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 6);
  *(undefined8 *)(lVar10 + 0x100) = *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 4);
  *(undefined8 *)(lVar10 + 0x108) = uVar2;
  uVar2 = *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 10);
  *(undefined8 *)(lVar10 + 0x110) = *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 8);
  *(undefined8 *)(lVar10 + 0x118) = uVar2;
  uVar2 = *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 2);
  *(undefined8 *)(lVar10 + 0x120) = *(undefined8 *)(this->IrradianceEnvironmentMap).G.V;
  *(undefined8 *)(lVar10 + 0x128) = uVar2;
  uVar2 = *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 6);
  *(undefined8 *)(lVar10 + 0x130) = *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 4);
  *(undefined8 *)(lVar10 + 0x138) = uVar2;
  uVar2 = *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 10);
  *(undefined8 *)(lVar10 + 0x140) = *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 8);
  *(undefined8 *)(lVar10 + 0x148) = uVar2;
  uVar2 = *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 2);
  *(undefined8 *)(lVar10 + 0x150) = *(undefined8 *)(this->IrradianceEnvironmentMap).B.V;
  *(undefined8 *)(lVar10 + 0x158) = uVar2;
  uVar2 = *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 6);
  *(undefined8 *)(lVar10 + 0x160) = *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 4);
  *(undefined8 *)(lVar10 + 0x168) = uVar2;
  uVar2 = *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 10);
  *(undefined8 *)(lVar10 + 0x170) = *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 8);
  *(undefined8 *)(lVar10 + 0x178) = uVar2;
  *(float *)(lVar10 + 0xd8) = this->AverageBrightness;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1479cdd40

UClass * __cdecl USkyLightComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkyLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkyLightComponent",
               &Z_Registration_Info_UClass_USkyLightComponent.InnerSingleton,
               StaticRegisterNativesUSkyLightComponent,0x470,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USkyLightComponent>,
               InternalVTableHelperCtorCaller<USkyLightComponent>,local_res8,
               ULightComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkyLightComponent.InnerSingleton;
}

// IsOcclusionSupported @ 1479da680

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USkyLightComponent::IsOcclusionSupported(USkyLightComponent *this)

{
  FSceneInterface *pFVar1;
  
  pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
  if (pFVar1 != (FSceneInterface *)0x0) {
    return 1 < (int)pFVar1->FeatureLevel;
  }
  return true;
}

// IsReadyForFinishDestroy @ 1479da6e0

bool __thiscall USkyLightComponent::IsReadyForFinishDestroy(USkyLightComponent *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseResourcesFence);
  return bVar1;
}

// IsRealTimeCaptureEnabled @ 1479da700

bool __thiscall USkyLightComponent::IsRealTimeCaptureEnabled(USkyLightComponent *this)

{
  char cVar1;
  
  if ((this->bRealTimeCapture != false) &&
     (((cVar1 = *(char *)((longlong)&this->_padding_ + 3), cVar1 == '\x02' || (cVar1 == '\x01')) &&
      (0 < GSkylightRealTimeReflectionCapture)))) {
    return true;
  }
  return false;
}

// OnVisibilityChanged @ 1479dcda0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyLightComponent::OnVisibilityChanged(USkyLightComponent *this)

{
  bool bVar1;
  USkyLightComponent *local_res8 [4];
  
  USceneComponent::OnVisibilityChanged((USceneComponent *)this);
  if ((this->_padding_ & 0x20) == 0) {
    return;
  }
  if (this->bHasEverCaptured == false) {
    if (((this->_padding_ & 0x100000000) != 0) &&
       (((bVar1 = ULightComponentBase::HasStaticLighting((ULightComponentBase *)this), !bVar1 ||
         (bVar1 = IsRayTracingEnabled(), bVar1)) ||
        (bVar1 = DoesProjectSupportDistanceFields(), bVar1)))) {
      EnterCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
      local_res8[0] = this;
      TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<USkyLightComponent_*>
                (&SkyCapturesToUpdate,local_res8);
      this->bSavedConstructionScriptValuesValid = false;
      LeaveCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
    }
    if ((((this->_padding_ & 0x20) != 0) && ((this->_padding_ & 0x100000000) != 0)) &&
       ((this->BlendDestinationCubemap).field0_0x0.DebugPtr != (UTextureCube *)0x0)) {
      local_res8[0] = this;
      TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<USkyLightComponent_*>
                (&SkyCapturesToUpdateBlendDestinations,local_res8);
      this->bSavedConstructionScriptValuesValid = false;
    }
    return;
  }
  return;
}

// PostInitProperties @ 1479ddd60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyLightComponent::PostInitProperties(USkyLightComponent *this)

{
  USkyLightComponent *local_res8 [4];
  
  if ((this->_padding_ & 0x30) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
    local_res8[0] = this;
    TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<USkyLightComponent_*>
              (&SkyCapturesToUpdate,local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
  }
  UActorComponent::PostInitProperties((UActorComponent *)this);
  return;
}

// PostLoad @ 1479ddfb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall USkyLightComponent::PostLoad(USkyLightComponent *this)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  TRHIGlobal<int> TVar5;
  USkyLightComponent *local_res8 [4];
  
  UActorComponent::PostLoad((UActorComponent *)this);
  TVar5 = GRHIGlobals.MaxCubeTextureDimensions;
  if (0 < GSkylightCubemapMaxResolution) {
    this->CubemapResolution = GSkylightCubemapMaxResolution;
  }
  iVar4 = 1;
  if (this->CubemapResolution != 0) {
    iVar4 = this->CubemapResolution;
  }
  uVar1 = (ulonglong)(iVar4 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if (iVar4 < TVar5.Value) {
    TVar5.Value = iVar4;
  }
  iVar4 = 8;
  if (8 < TVar5.Value) {
    iVar4 = TVar5.Value;
  }
  this->CubemapResolution = iVar4;
  if (GIsCookerLoadingPackage == false) {
    if (((this->_padding_ & 0x20) == 0) || ((this->_padding_ & 0x30) != 0)) {
LAB_1479de047:
      EnterCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
      local_res8[0] = this;
      TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_>::Remove
                (&SkyCapturesToUpdate,local_res8);
                    /* WARNING: Could not recover jumptable at 0x0001479de076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
      return;
    }
    bVar3 = ULightComponentBase::HasStaticLighting((ULightComponentBase *)this);
    if (bVar3) {
      bVar3 = IsRayTracingEnabled();
      if (!bVar3) {
        bVar3 = DoesProjectSupportDistanceFields();
        if (!bVar3) goto LAB_1479de047;
      }
    }
  }
  return;
}

// RecaptureSky @ 1479e0d00

void __thiscall USkyLightComponent::RecaptureSky(USkyLightComponent *this)

{
  bool bVar1;
  USkyLightComponent *apUStackX_8 [4];
  
  if (((this->_padding_ & 0x20) == 0) || ((this->_padding_ & 0x100000000) == 0)) {
    return;
  }
  bVar1 = ULightComponentBase::HasStaticLighting((ULightComponentBase *)this);
  if ((bVar1) &&
     ((bVar1 = IsRayTracingEnabled(), !bVar1 && (bVar1 = DoesProjectSupportDistanceFields(), !bVar1)
      ))) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
  apUStackX_8[0] = this;
  TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<USkyLightComponent_*>
            (&SkyCapturesToUpdate,apUStackX_8);
  this->bSavedConstructionScriptValuesValid = false;
                    /* WARNING: Could not recover jumptable at 0x0001479e6d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
  return;
}

// SanitizeCubemapSize @ 1479e5050

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall USkyLightComponent::SanitizeCubemapSize(USkyLightComponent *this)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  TRHIGlobal<int> TVar5;
  
  TVar5.Value = GRHIGlobals.MaxCubeTextureDimensions.Value;
  piVar1 = &this->CubemapResolution;
  if (0 < GSkylightCubemapMaxResolution) {
    *piVar1 = GSkylightCubemapMaxResolution;
  }
  iVar4 = 1;
  if (*piVar1 != 0) {
    iVar4 = *piVar1;
  }
  uVar2 = (ulonglong)(iVar4 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar3 & 0x1f);
  if (iVar4 < TVar5.Value) {
    TVar5.Value = iVar4;
  }
  iVar4 = 8;
  if (8 < TVar5.Value) {
    iVar4 = TVar5.Value;
  }
  *piVar1 = iVar4;
  return;
}

// SendRenderTransform_Concurrent @ 1479e5540

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

void __thiscall USkyLightComponent::SendRenderTransform_Concurrent(USkyLightComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_e8 [32];
  FSkyLightSceneProxy *local_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  code *local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (this->SceneProxy != (FSkyLightSceneProxy *)0x0) {
    pcStack_c0 = (code *)this->_padding_;
    pcStack_b8 = (code *)this->_padding_;
    pcStack_b0 = (code *)this->_padding_;
    local_88[0] = (code *)0x0;
    local_c8 = this->SceneProxy;
    local_a8 = pcStack_c0;
    pcStack_a0 = pcStack_b8;
    local_98 = pcStack_b0;
    local_60 = FMemory::Malloc(0x28,8);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`USkyLightComponent::SendRenderTransform_Concurrent'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[1] = (code *)local_c8;
    local_60[2] = pcStack_c0;
    local_60[3] = pcStack_b8;
    local_60[4] = pcStack_b0;
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USkyLightComponent::SendRenderTransform_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_USkyLightComponent::SendRenderTransform_Concurrent_::__l5::TSTR_UpdateSkyLightCapturePosition551>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`USkyLightComponent::SendRenderTransform_Concurrent'::__l5::TSTR_UpdateSkyLightCapturePosition551>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  return;
}

// Serialize @ 1479e5b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USkyLightComponent::Serialize(USkyLightComponent *this,FArchive *param_1)

{
  int iVar1;
  FArchive *pFVar2;
  undefined1 auStack_c8 [32];
  TSHVector<3> local_a8;
  TSHVector<3> local_78;
  TSHVector<3> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  ULightComponentBase::Serialize((ULightComponentBase *)this,param_1);
  if (0x1ff < *(int *)&param_1->field_0x40) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar1 < 9) {
      local_a8.V[0] = 0.0;
      local_a8.V[1] = 0.0;
      local_a8.V[2] = 0.0;
      local_a8.V[3] = 0.0;
      local_a8.V[4] = 0.0;
      local_a8.V[5] = 0.0;
      local_a8.V[6] = 0.0;
      local_a8.V[7] = 0.0;
      local_a8.V[8] = 0.0;
      local_a8.V[9] = 0.0;
      local_a8.V[10] = 0.0;
      local_a8.V[0xb] = 0.0;
      local_78.V[0] = 0.0;
      local_78.V[1] = 0.0;
      local_78.V[2] = 0.0;
      local_78.V[3] = 0.0;
      local_78.V[4] = 0.0;
      local_78.V[5] = 0.0;
      local_78.V[6] = 0.0;
      local_78.V[7] = 0.0;
      local_78.V[8] = 0.0;
      local_78.V[9] = 0.0;
      local_78.V[10] = 0.0;
      local_78.V[0xb] = 0.0;
      local_48.V[0] = 0.0;
      local_48.V[1] = 0.0;
      local_48.V[2] = 0.0;
      local_48.V[3] = 0.0;
      local_48.V[4] = 0.0;
      local_48.V[5] = 0.0;
      local_48.V[6] = 0.0;
      local_48.V[7] = 0.0;
      local_48.V[8] = 0.0;
      local_48.V[9] = 0.0;
      local_48.V[10] = 0.0;
      local_48.V[0xb] = 0.0;
      pFVar2 = ::operator<<(param_1,&local_a8);
      pFVar2 = ::operator<<(pFVar2,&local_78);
      ::operator<<(pFVar2,&local_48);
    }
  }
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    if (iVar1 < 0x35) {
      *(byte *)&this->_padding_ = (byte)(*(uint *)((longlong)&this->_padding_ + 4) >> 7) & 2;
    }
  }
  return;
}

// Serialize @ 1479e5c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USkyLightComponent::Serialize(USkyLightComponent *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FArchive *pFVar2;
  undefined1 auStack_d8 [32];
  FSlotBase local_b8 [2];
  TSHVector<3> local_a8;
  TSHVector<3> local_78;
  TSHVector<3> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_b8);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FReleaseObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  ULightComponentBase::Serialize((ULightComponentBase *)this,(FArchive *)this_00);
  if (0x1ff < (this_00->ArUEVer).FileVersionUE4) {
    iVar1 = FArchiveState::CustomVer(this_00,&FReleaseObjectVersion::GUID);
    if (iVar1 < 9) {
      local_a8.V[0] = 0.0;
      local_a8.V[1] = 0.0;
      local_a8.V[2] = 0.0;
      local_a8.V[3] = 0.0;
      local_a8.V[4] = 0.0;
      local_a8.V[5] = 0.0;
      local_a8.V[6] = 0.0;
      local_a8.V[7] = 0.0;
      local_a8.V[8] = 0.0;
      local_a8.V[9] = 0.0;
      local_a8.V[10] = 0.0;
      local_a8.V[0xb] = 0.0;
      local_78.V[0] = 0.0;
      local_78.V[1] = 0.0;
      local_78.V[2] = 0.0;
      local_78.V[3] = 0.0;
      local_78.V[4] = 0.0;
      local_78.V[5] = 0.0;
      local_78.V[6] = 0.0;
      local_78.V[7] = 0.0;
      local_78.V[8] = 0.0;
      local_78.V[9] = 0.0;
      local_78.V[10] = 0.0;
      local_78.V[0xb] = 0.0;
      local_48.V[0] = 0.0;
      local_48.V[1] = 0.0;
      local_48.V[2] = 0.0;
      local_48.V[3] = 0.0;
      local_48.V[4] = 0.0;
      local_48.V[5] = 0.0;
      local_48.V[6] = 0.0;
      local_48.V[7] = 0.0;
      local_48.V[8] = 0.0;
      local_48.V[9] = 0.0;
      local_48.V[10] = 0.0;
      local_48.V[0xb] = 0.0;
      pFVar2 = ::operator<<((FArchive *)this_00,&local_a8);
      pFVar2 = ::operator<<(pFVar2,&local_78);
      ::operator<<(pFVar2,&local_48);
    }
  }
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FUE5MainStreamObjectVersion::GUID);
    if (iVar1 < 0x35) {
      *(byte *)&this->_padding_ = (byte)(*(uint *)((longlong)&this->_padding_ + 4) >> 7) & 2;
    }
  }
  return;
}

// SetBlendDestinationCaptureIsDirty @ 1479e6bc0

void __thiscall USkyLightComponent::SetBlendDestinationCaptureIsDirty(USkyLightComponent *this)

{
  USkyLightComponent *local_res8 [4];
  
  if ((((this->_padding_ & 0x20) != 0) && ((this->_padding_ & 0x100000000) != 0)) &&
     ((this->BlendDestinationCubemap).field0_0x0.DebugPtr != (UTextureCube *)0x0)) {
    local_res8[0] = this;
    TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<USkyLightComponent_*>
              (&SkyCapturesToUpdateBlendDestinations,local_res8);
    this->bSavedConstructionScriptValuesValid = false;
  }
  return;
}

// SetCaptureIsDirty @ 1479e6cd0

void __thiscall USkyLightComponent::SetCaptureIsDirty(USkyLightComponent *this)

{
  bool bVar1;
  USkyLightComponent *local_res8 [4];
  
  if (((this->_padding_ & 0x20) == 0) || ((this->_padding_ & 0x100000000) == 0)) {
    return;
  }
  bVar1 = ULightComponentBase::HasStaticLighting((ULightComponentBase *)this);
  if ((bVar1) &&
     ((bVar1 = IsRayTracingEnabled(), !bVar1 && (bVar1 = DoesProjectSupportDistanceFields(), !bVar1)
      ))) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
  local_res8[0] = this;
  TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<USkyLightComponent_*>
            (&SkyCapturesToUpdate,local_res8);
  this->bSavedConstructionScriptValuesValid = false;
                    /* WARNING: Could not recover jumptable at 0x0001479e6d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
  return;
}

// SetCubemap @ 1479e7120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyLightComponent::SetCubemap(USkyLightComponent *this,UTextureCube *param_1)

{
  UTextureCube *pUVar1;
  bool bVar2;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((bVar2) || ((this->_padding_ & 1) == 0)) ||
     (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
    pUVar1 = (this->Cubemap).field0_0x0.DebugPtr;
    if (pUVar1 == (UTextureCube *)0x0) {
      bVar2 = param_1 == (UTextureCube *)0x0;
    }
    else {
      bVar2 = pUVar1 == param_1;
    }
    if (!bVar2) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTextureCube *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->Cubemap).field0_0x0.DebugPtr = param_1;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      SetCaptureIsDirty(this);
    }
  }
  return;
}

// SetCubemapBlend @ 1479e71b0

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
USkyLightComponent::SetCubemapBlend
          (USkyLightComponent *this,UTextureCube *param_1,UTextureCube *param_2,float param_3)

{
  UTextureCube *pUVar1;
  UTextureCube *pUVar2;
  code *pcVar3;
  bool bVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  code **ppcVar6;
  ulonglong uVar7;
  undefined1 auStack_108 [32];
  TSHVectorRGB<3> *local_e8;
  TSHVectorRGB<3> *pTStack_e0;
  float *local_d8;
  float *pfStack_d0;
  float local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  FLinearColor *local_b8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  bVar4 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((bVar4) || ((this->_padding_ & 1) == 0)) ||
     (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
    pUVar1 = (this->Cubemap).field0_0x0.DebugPtr;
    if (pUVar1 == (UTextureCube *)0x0) {
      bVar4 = param_1 == (UTextureCube *)0x0;
    }
    else {
      bVar4 = pUVar1 == param_1;
    }
    if (bVar4) {
      pUVar2 = (this->BlendDestinationCubemap).field0_0x0.DebugPtr;
      if (pUVar2 == (UTextureCube *)0x0) {
        bVar4 = param_2 == (UTextureCube *)0x0;
      }
      else {
        bVar4 = pUVar2 == param_2;
      }
      if ((bVar4) && (param_3 == this->BlendFraction)) {
        return;
      }
    }
    if ((this->SourceType).Value == '\x01') {
      if (pUVar1 == (UTextureCube *)0x0) {
        bVar4 = param_1 == (UTextureCube *)0x0;
      }
      else {
        bVar4 = pUVar1 == param_1;
      }
      if (!bVar4) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTextureCube *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        (this->Cubemap).field0_0x0.DebugPtr = param_1;
        SetCaptureIsDirty(this);
      }
      pUVar1 = (this->BlendDestinationCubemap).field0_0x0.DebugPtr;
      if (pUVar1 == (UTextureCube *)0x0) {
        bVar4 = param_2 == (UTextureCube *)0x0;
      }
      else {
        bVar4 = pUVar1 == param_2;
      }
      if (!bVar4) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UTextureCube *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        (this->BlendDestinationCubemap).field0_0x0.DebugPtr = param_2;
        SetBlendDestinationCaptureIsDirty(this);
      }
      if (param_3 != this->BlendFraction) {
        uStack_c0 = this->SceneProxy;
        this->BlendFraction = param_3;
        if (uStack_c0 != (FSkyLightSceneProxy *)0x0) {
          local_e8 = &this->IrradianceEnvironmentMap;
          pTStack_e0 = &this->BlendDestinationIrradianceEnvironmentMap;
          local_a8[0] = (code *)0x0;
          local_d8 = &this->AverageBrightness;
          pfStack_d0 = &this->BlendDestinationAverageBrightness;
          local_b8 = &this->SpecifiedCubemapColorScale;
          local_80 = FMemory::Malloc(0x40,8);
          *local_80 = (code *)&UE::Core::Private::Function::
                               TFunction_OwnedObject<`USkyLightComponent::SetCubemapBlend'::`17'::<lambda_1>,1,1>
                               ::_vftable_;
          local_80[1] = (code *)local_e8;
          local_80[2] = (code *)pTStack_e0;
          local_80[3] = (code *)local_d8;
          local_80[4] = (code *)pfStack_d0;
          *(float *)(local_80 + 5) = param_3;
          *(undefined4 *)((longlong)local_80 + 0x2c) = uStack_c4;
          *(undefined4 *)(local_80 + 6) = (undefined4)uStack_c0;
          *(undefined4 *)((longlong)local_80 + 0x34) = uStack_c0._4_4_;
          local_80[7] = (code *)local_b8;
          if (local_80 + 1 != (code **)0x0) {
            local_a8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`USkyLightComponent::SetCubemapBlend'::__l17::<lambda_1>,void,FRHICommandListImmediate_&>
                          ::Call;
          }
          local_c8 = param_3;
          this_00 = FRenderCommandList::GetInstanceTLS();
          if (this_00 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_USkyLightComponent::SetCubemapBlend_::__l17::TSTR_FUpdateSkyProxy1060>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
          }
          else {
            this_01 = FRenderCommandList::GetRenderThread(this_00);
            local_78._0_8_ = local_a8[0];
            local_50 = local_80;
            local_80 = (code **)0x0;
            local_78._16_8_ = local_98[0];
            local_78._24_8_ = local_98[1];
            local_78._32_8_ = local_98[2];
            local_a8[0] = (code *)0x0;
            local_48 = 2;
            pFVar5 = (FRenderCommandTag *)
                     TRenderCommandTag<`USkyLightComponent::SetCubemapBlend'::__l17::TSTR_FUpdateSkyProxy1060>
                     ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_78,pFVar5);
            uVar7 = (ulonglong)local_48;
            if ((2 < uVar7) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar7] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_78._0_8_ != (code *)0x0) {
                ppcVar6 = (code **)(local_78 + 0x10);
                if (local_50 != (code **)0x0) {
                  ppcVar6 = local_50;
                }
                (**(code **)(*ppcVar6 + 0x10))();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar7])(local_78);
            }
          }
          if (local_a8[0] != (code *)0x0) {
            ppcVar6 = local_a8 + 2;
            if (local_80 != (code **)0x0) {
              ppcVar6 = local_80;
            }
            (**(code **)(*ppcVar6 + 0x10))();
          }
        }
      }
    }
  }
  return;
}

// SetIndirectLightingIntensity @ 1479e8a60

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
USkyLightComponent::SetIndirectLightingIntensity(USkyLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != *(float *)((longlong)&this->_padding_ + 4))) {
    *(float *)((longlong)&this->_padding_ + 4) = param_1;
    UpdateLimitedRenderingStateFast(this);
  }
  return;
}

// SetIntensity @ 1479e8be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyLightComponent::SetIntensity(USkyLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != *(float *)((longlong)&this->_padding_ + 4))) {
    *(float *)((longlong)&this->_padding_ + 4) = param_1;
    UpdateLimitedRenderingStateFast(this);
  }
  return;
}

// SetLightColor @ 1479e8da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyLightComponent::SetLightColor(USkyLightComponent *this,FLinearColor *param_1)

{
  bool bVar1;
  int local_res18;
  
  FLinearColor::ToFColorSRGB(param_1);
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && ((int)this->_padding_ != local_res18))
  {
    *(int *)&this->_padding_ = local_res18;
    UpdateLimitedRenderingStateFast(this);
  }
  return;
}

// SetLowerHemisphereColor @ 1479e92f0

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
USkyLightComponent::SetLowerHemisphereColor(USkyLightComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((((param_1->field0_0x0)._s_0.R != (this->LowerHemisphereColor).field0_0x0._s_0.R ||
       ((param_1->field0_0x0)._s_0.G != (this->LowerHemisphereColor).field0_0x0._s_0.G)) ||
      (((param_1->field0_0x0)._s_0.B != (this->LowerHemisphereColor).field0_0x0._s_0.B ||
       ((param_1->field0_0x0)._s_0.A != (this->LowerHemisphereColor).field0_0x0._s_0.A)))))) {
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    *(undefined8 *)&(this->LowerHemisphereColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
    *(undefined8 *)((longlong)&(this->LowerHemisphereColor).field0_0x0 + 8) = uVar1;
    UpdateLimitedRenderingStateFast(this);
  }
  return;
}

// SetMinOcclusion @ 1479e98b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyLightComponent::SetMinOcclusion(USkyLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->MinOcclusion)) {
    this->MinOcclusion = param_1;
    UpdateOcclusionRenderingStateFast(this);
  }
  return;
}

// SetOcclusionContrast @ 1479e9980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyLightComponent::SetOcclusionContrast(USkyLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->Contrast)) {
    this->Contrast = param_1;
    UpdateOcclusionRenderingStateFast(this);
  }
  return;
}

// SetOcclusionExponent @ 1479e99e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyLightComponent::SetOcclusionExponent(USkyLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->OcclusionExponent))
  {
    this->OcclusionExponent = param_1;
    UpdateOcclusionRenderingStateFast(this);
  }
  return;
}

// SetOcclusionTint @ 1479e9a40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyLightComponent::SetOcclusionTint(USkyLightComponent *this,FColor *param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((this->OcclusionTint).field0_0x0.Bits != (param_1->field0_0x0).Bits)) {
    (this->OcclusionTint).field0_0x0._s_0 = (FColor_u_0_s_0)(param_1->field0_0x0).Bits;
    UpdateOcclusionRenderingStateFast(this);
  }
  return;
}

// SetRealTimeCapture @ 1479ea8c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyLightComponent::SetRealTimeCapture(USkyLightComponent *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->bRealTimeCapture)) {
    this->bRealTimeCapture = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    SetCaptureIsDirty(this);
  }
  return;
}

// SetRealTimeCaptureEnabled @ 1479ea920

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyLightComponent::SetRealTimeCaptureEnabled(USkyLightComponent *this,bool param_1)

{
  this->bRealTimeCapture = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  SetCaptureIsDirty(this);
  return;
}

// SetSourceCubemapAngle @ 1479eb020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyLightComponent::SetSourceCubemapAngle(USkyLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->SourceCubemapAngle))
  {
    this->SourceCubemapAngle = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    SetCaptureIsDirty(this);
  }
  return;
}

// SetVolumetricScatteringIntensity @ 1479ed150

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
USkyLightComponent::SetVolumetricScatteringIntensity(USkyLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != *(float *)&this->_padding_)) {
    *(float *)&this->_padding_ = param_1;
    UpdateLimitedRenderingStateFast(this);
  }
  return;
}

// StaticRegisterNativesUSkyLightComponent @ 1479edea0

void __cdecl USkyLightComponent::StaticRegisterNativesUSkyLightComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_USkyLightComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateLimitedRenderingStateFast @ 1479f16c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USkyLightComponent::UpdateLimitedRenderingStateFast(USkyLightComponent *this)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  code *pcVar8;
  bool bVar9;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar10;
  code **ppcVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  code *local_108;
  code *pcStack_100;
  code *local_f8 [2];
  code *local_e8 [3];
  code **local_d0;
  undefined1 local_c8 [40];
  code **local_a0;
  byte local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128 = this->SceneProxy;
  if (local_128 != (FSkyLightSceneProxy *)0x0) {
    fVar1 = *(float *)((longlong)&this->_padding_ + 4);
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    fVar3 = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)&this->_padding_ + 2)];
    uVar4 = (undefined4)this->_padding_;
    pcVar7 = *(code **)&(this->LowerHemisphereColor).field0_0x0;
    pcVar8 = *(code **)((longlong)&(this->LowerHemisphereColor).field0_0x0 + 8);
    local_f8[0] = (code *)0x0;
    fVar5 = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)&this->_padding_ + 1)];
    fVar6 = FLinearColor::sRGBToLinearTable[(byte)this->_padding_];
    fVar13 = (float)*(byte *)((longlong)&this->_padding_ + 3) * __real_3b808081 * fVar1;
    local_108 = pcVar7;
    pcStack_100 = pcVar8;
    local_d0 = FMemory::Malloc(0x38,8);
    *local_d0 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`USkyLightComponent::UpdateLimitedRenderingStateFast'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    *(undefined4 *)(local_d0 + 1) = (undefined4)local_128;
    *(undefined4 *)((longlong)local_d0 + 0xc) = local_128._4_4_;
    *(float *)(local_d0 + 2) = fVar1 * fVar3;
    *(float *)((longlong)local_d0 + 0x14) = fVar1 * fVar5;
    *(float *)(local_d0 + 3) = fVar1 * fVar6;
    *(float *)((longlong)local_d0 + 0x1c) = fVar13;
    *(undefined4 *)(local_d0 + 4) = uVar2;
    *(undefined4 *)((longlong)local_d0 + 0x24) = uVar4;
    local_d0[5] = pcVar7;
    local_d0[6] = pcVar8;
    if (local_d0 + 1 != (code **)0x0) {
      local_f8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USkyLightComponent::UpdateLimitedRenderingStateFast'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    fStack_120 = fVar1 * fVar3;
    fStack_11c = fVar1 * fVar5;
    local_118 = fVar1 * fVar6;
    fStack_114 = fVar13;
    uStack_110 = uVar2;
    uStack_10c = uVar4;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_USkyLightComponent::UpdateLimitedRenderingStateFast_::__l5::TSTR_FFastUpdateSkyLightCommand493>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_f8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_c8._0_8_ = local_f8[0];
      local_a0 = local_d0;
      local_d0 = (code **)0x0;
      local_c8._16_8_ = local_e8[0];
      local_c8._24_8_ = local_e8[1];
      local_c8._32_8_ = local_e8[2];
      local_f8[0] = (code *)0x0;
      local_98 = 2;
      pFVar10 = (FRenderCommandTag *)
                TRenderCommandTag<`USkyLightComponent::UpdateLimitedRenderingStateFast'::__l5::TSTR_FFastUpdateSkyLightCommand493>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_c8,pFVar10);
      uVar12 = (ulonglong)local_98;
      if (2 < uVar12) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar12] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_c8._0_8_ != (code *)0x0) {
          ppcVar11 = (code **)(local_c8 + 0x10);
          if (local_a0 != (code **)0x0) {
            ppcVar11 = local_a0;
          }
          (**(code **)(*ppcVar11 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar12])(local_c8);
      }
    }
    if (local_f8[0] != (code *)0x0) {
      ppcVar11 = local_f8 + 2;
      if (local_d0 != (code **)0x0) {
        ppcVar11 = local_d0;
      }
      (**(code **)(*ppcVar11 + 0x10))();
    }
  }
  return;
}

// UpdateOcclusionRenderingStateFast @ 1479f2100

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

void __thiscall USkyLightComponent::UpdateOcclusionRenderingStateFast(USkyLightComponent *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FColor_u_0 FVar4;
  FSkyLightSceneProxy *pFVar5;
  code *pcVar6;
  bool bVar7;
  FSceneInterface *pFVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  code **ppcVar10;
  ulonglong uVar11;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (this->SceneProxy != (FSkyLightSceneProxy *)0x0) {
    pFVar8 = UActorComponent::GetScene((UActorComponent *)this);
    if ((pFVar8 == (FSceneInterface *)0x0) || (1 < (int)pFVar8->FeatureLevel)) {
      pFVar5 = this->SceneProxy;
      fVar1 = this->Contrast;
      fVar2 = this->OcclusionExponent;
      fVar3 = this->MinOcclusion;
      FVar4 = (this->OcclusionTint).field0_0x0;
      local_b8[0] = (code *)0x0;
      local_90 = FMemory::Malloc(0x20,8);
      *local_90 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`USkyLightComponent::UpdateOcclusionRenderingStateFast'::`5'::<lambda_1>,1,1>
                           ::_vftable_;
      local_90[1] = (code *)pFVar5;
      *(float *)(local_90 + 2) = fVar1;
      *(float *)((longlong)local_90 + 0x14) = fVar2;
      *(float *)(local_90 + 3) = fVar3;
      *(FColor_u_0 *)((longlong)local_90 + 0x1c) = FVar4;
      if (local_90 + 1 != (code **)0x0) {
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`USkyLightComponent::UpdateOcclusionRenderingStateFast'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_USkyLightComponent::UpdateOcclusionRenderingStateFast_::__l5::TSTR_FFastUpdateSkyLightOcclusionCommand513>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_88._0_8_ = local_b8[0];
        local_60 = local_90;
        local_90 = (code **)0x0;
        local_88._16_8_ = local_a8[0];
        local_88._24_8_ = local_a8[1];
        local_88._32_8_ = local_a8[2];
        local_b8[0] = (code *)0x0;
        local_58 = 2;
        pFVar9 = (FRenderCommandTag *)
                 TRenderCommandTag<`USkyLightComponent::UpdateOcclusionRenderingStateFast'::__l5::TSTR_FFastUpdateSkyLightOcclusionCommand513>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_88,pFVar9);
        uVar11 = (ulonglong)local_58;
        if (2 < uVar11) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_88._0_8_ != (code *)0x0) {
            ppcVar10 = (code **)(local_88 + 0x10);
            if (local_60 != (code **)0x0) {
              ppcVar10 = local_60;
            }
            (**(code **)(*ppcVar10 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11])(local_88);
        }
      }
      if (local_b8[0] != (code *)0x0) {
        ppcVar10 = local_b8 + 2;
        if (local_90 != (code **)0x0) {
          ppcVar10 = local_90;
        }
        (**(code **)(*ppcVar10 + 0x10))();
      }
    }
  }
  return;
}

// UpdateSkyCaptureContents @ 1479f2d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl USkyLightComponent::UpdateSkyCaptureContents(UWorld *param_1)

{
  USkyLightComponent *this;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_static_void___cdecl_USkyLightComponent::UpdateSkyCaptureContents(UWorld_*)_::_5_::FStat_STAT_SkylightCaptures>
  FVar9;
  UClass *pUVar10;
  FName FVar11;
  longlong lVar12;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  TObjectIterator<USkyLightComponent> local_40;
  
  if (param_1 == (UWorld *)0x0) {
    return;
  }
  if (param_1->Scene == (FSceneInterface *)0x0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SkylightCaptures ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_USkyLightComponent::UpdateSkyCaptureContents(UWorld_*)_::_5_::FStat_STAT_SkylightCaptures>
         )0x0) {
      pFVar8 = ::FName::FName(&local_res20,"STAT_SkylightCaptures");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkylightCaptures,*pFVar8,
                 L"STAT_SkylightCaptures","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_SkylightCaptures;
  if (StatPtr_STAT_SkylightCaptures ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_USkyLightComponent::UpdateSkyCaptureContents(UWorld_*)_::_5_::FStat_STAT_SkylightCaptures>
       )0x0) {
    pFVar8 = ::FName::FName(&local_58,"STAT_SkylightCaptures");
    FVar9 = (FThreadSafeStaticStat<_public:_static_void___cdecl_USkyLightComponent::UpdateSkyCaptureContents(UWorld_*)_::_5_::FStat_STAT_SkylightCaptures>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkylightCaptures,*pFVar8,
                         L"STAT_SkylightCaptures","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                         ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  bVar2 = false;
  bVar4 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  if ((FVar11.ComparisonIndex.Value.Value != 0) || (FVar11.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar11.ComparisonIndex.Value.Value;
        local_res10.Number = FVar11.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyLightComponent.cpp"
                   ,0x390);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      goto LAB_1479f2eea;
    }
  }
  bVar3 = false;
  FVar11 = local_50;
LAB_1479f2eea:
  if (GUpdateSkylightsEveryFrame != 0) {
    local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ObjectArray.ArrayNum = 0;
    local_40.ObjectArray.ArrayMax = 0;
    local_40.Index = 0xffffffff;
    EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar10 = StaticClass();
    GetObjectsOfClass(pUVar10,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                      EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<USkyLightComponent>::Advance(&local_40);
      lVar12 = (longlong)local_40.Index;
      if ((local_40.Index < 0) || (local_40.ObjectArray.ArrayNum <= local_40.Index)) break;
      uVar7 = 0;
      if (local_40.Index < local_40.ObjectArray.ArrayNum) {
        uVar7 = (uint)~local_40.Index >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this = *(USkyLightComponent **)(local_40.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
      bVar5 = UWorld::ContainsActor(param_1,(AActor *)this->_padding_);
      if ((bVar5) && (((uint)this->_padding_ >> 0x1e & 1) == 0)) {
        SetCaptureIsDirty(this);
      }
    }
    if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
    }
  }
  if (0 < SkyCapturesToUpdate.ArrayNum) {
    EnterCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
    local_res18 = (FName)param_1;
    TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_>::
    RemoveAll<_USkyLightComponent::UpdateSkyCaptureContents_::__l16::<lambda_1>_>
              (&SkyCapturesToUpdate,(<lambda_1> *)&local_res18);
    UpdateSkyCaptureContentsArray(param_1,&SkyCapturesToUpdate,true);
    LeaveCriticalSection((LPCRITICAL_SECTION)&SkyCapturesToUpdateLock);
  }
  if (0 < SkyCapturesToUpdateBlendDestinations.ArrayNum) {
    UpdateSkyCaptureContentsArray(param_1,&SkyCapturesToUpdateBlendDestinations,false);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar11,CycleScopeEnd);
  }
  return;
}

// UpdateSkyCaptureContentsArray @ 1479f3150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
USkyLightComponent::UpdateSkyCaptureContentsArray
          (UWorld *param_1,TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  ulonglong uVar1;
  UActorComponent *this;
  AActor *this_00;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  FShaderCompilingManager *this_01;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  UWorld *pUVar10;
  ULevel *pUVar11;
  FSkyTextureCubeResource *pFVar12;
  FPhysScene_Chaos *pFVar13;
  FSceneInterface *pFVar14;
  uint uVar15;
  UActorComponent *pUVar16;
  code *pcVar17;
  longlong lVar18;
  int *piVar19;
  UActorComponent *pUVar20;
  
  this_01 = GShaderCompilingManager;
  if ((GShaderCompilingManager == (FShaderCompilingManager *)0x0) ||
     ((((iVar7 = FShaderCompilingManager::GetNumOutstandingJobs(GShaderCompilingManager), iVar7 < 1
        && (*(int *)&(this_01->ShaderMapJobs).field_0x8 -
            *(int *)&(this_01->ShaderMapJobs).field_0x34 < 1)) &&
       (*(int *)&(this_01->PendingFinalizeShaderMaps).field_0x8 -
        *(int *)&(this_01->PendingFinalizeShaderMaps).field_0x34 < 1)) &&
      ((iVar7 = FShaderCompilingManager::GetNumPendingJobs(this_01), iVar7 < 1 &&
       (this_01->NumExternalJobs < 1)))))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  uVar15 = param_2->ArrayNum - 1;
  if (-1 < (int)uVar15) {
    lVar18 = (longlong)(int)uVar15 * 8;
    do {
      uVar8 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      this = *(UActorComponent **)((param_2->AllocatorInstance).Data + lVar18);
      pUVar10 = this->WorldPrivate;
      this_00 = this->OwnerPrivate;
      if (pUVar10 == (UWorld *)0x0) {
        pUVar10 = UActorComponent::GetWorld_Uncached(this);
      }
      if ((pUVar10 == param_1) &&
         (((*(FLinearColor_u_0 *)&this[5].AssetUserData.ArrayMax =
                 (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0, this_00 == (AActor *)0x0 ||
           (pUVar11 = AActor::GetLevel(this_00), pUVar11 == (ULevel *)0x0)) ||
          (pUVar11 = AActor::GetLevel(this_00), pUVar11->bIsVisible != '\0')))) {
        if (bVar5) {
          if (*(char *)((longlong)&this[3].PrimaryComponentTick._padding_ + 1) != '\x01')
          goto LAB_1479f35e1;
LAB_1479f32b3:
          if (this[3].PrimaryComponentTick.Target != (UActorComponent *)0x0) goto LAB_1479f32c1;
        }
        else {
          if (*(char *)((longlong)&this[3].PrimaryComponentTick._padding_ + 1) == '\x01')
          goto LAB_1479f32b3;
LAB_1479f32c1:
          if (param_3) {
            plVar2 = *(longlong **)&this[3].field_0xb8;
            if (plVar2 != (longlong *)0x0) {
              pcVar17 = *(code **)(*plVar2 + 0x38);
              iVar7 = (**(code **)(*plVar2 + 0x30))(plVar2);
              iVar9 = (*pcVar17)(plVar2);
              if ((iVar7 != iVar9) &&
                 (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<5301840666794394398>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyLightComponent.cpp"
                                     ,0x31e,
                                     "!CaptureComponent->ProcessedSkyTexture || CaptureComponent->ProcessedSkyTexture->GetSizeX() == CaptureComponent->ProcessedSkyTexture->GetSizeY()"
                                    ), bVar6)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
            }
            if ((*(longlong **)&this[3].field_0xb8 == (longlong *)0x0) ||
               (iVar7 = *(int *)((longlong)&this[3].ComponentTags.AllocatorInstance.Data + 4),
               iVar9 = (**(code **)(**(longlong **)&this[3].field_0xb8 + 0x30))(), iVar9 != iVar7))
            {
              pFVar12 = ::operator_new(0x80);
              if (pFVar12 == (FSkyTextureCubeResource *)0x0) {
                pFVar12 = (FSkyTextureCubeResource *)0x0;
              }
              else {
                FTexture::FTexture((FTexture *)pFVar12);
                pFVar12->_padding_ = (longlong)&FSkyTextureCubeResource::_vftable__for__FTexture__;
                pFVar12->_padding_ =
                     (longlong)&FSkyTextureCubeResource::_vftable__for__FDeferredCleanupInterface__;
                pFVar12->Size = 0;
                pFVar12->NumMips = 0;
                pFVar12->Format = PF_Unknown;
                (pFVar12->TextureCubeRHI).Reference = (FRHITexture *)0x0;
                pFVar12->NumRefs = 0;
              }
              TRefCountPtr<FSkyTextureCubeResource>::operator=
                        ((TRefCountPtr<FSkyTextureCubeResource> *)&this[3].field_0xb8,pFVar12);
              iVar7 = *(int *)((longlong)&this[3].ComponentTags.AllocatorInstance.Data + 4);
              lVar3 = *(longlong *)&this[3].field_0xb8;
              iVar9 = 1;
              if (iVar7 != 0) {
                iVar9 = iVar7;
              }
              *(int *)(lVar3 + 0x60) = iVar7;
              *(undefined1 *)(lVar3 + 0x68) = 10;
              uVar1 = (ulonglong)(iVar9 - 1) * 2 + 1;
              lVar4 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                }
              }
              *(int *)(lVar3 + 100) = (int)lVar4 + 1;
              BeginInitResource(*(FRenderResource **)&this[3].field_0xb8,(FRenderCommandPipe *)0x0);
              UActorComponent::MarkRenderStateDirty(this);
            }
            pFVar14 = param_1->Scene;
            piVar19 = &this[4].UCSSerializationIndex;
            pUVar20 = this + 4;
            pUVar16 = this[3].PrimaryComponentTick.Target;
            pcVar17 = *(code **)(pFVar14->_padding_ + 400);
            pFVar13 = *(FPhysScene_Chaos **)&this[3].field_0xb8;
          }
          else {
            pFVar13 = this[4].PhysicsStateAsyncCreationScene;
            if (pFVar13 != (FPhysScene_Chaos *)0x0) {
              pcVar17 = *(code **)(pFVar13->_padding_ + 0x38);
              iVar7 = (**(code **)(pFVar13->_padding_ + 0x30))(pFVar13);
              iVar9 = (*pcVar17)(pFVar13);
              if ((iVar7 != iVar9) &&
                 (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<5301840666794394413>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyLightComponent.cpp"
                                     ,0x32d,
                                     "!CaptureComponent->BlendDestinationProcessedSkyTexture || CaptureComponent->BlendDestinationProcessedSkyTexture->GetSizeX() == CaptureComponent->BlendDestinationProcessedSkyTexture->GetSizeY()"
                                    ), bVar6)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
            }
            if ((this[4].PhysicsStateAsyncCreationScene == (FPhysScene_Chaos *)0x0) ||
               (iVar7 = *(int *)((longlong)&this[3].ComponentTags.AllocatorInstance.Data + 4),
               iVar9 = (**(code **)((this[4].PhysicsStateAsyncCreationScene)->_padding_ + 0x30))(),
               iVar9 != iVar7)) {
              pFVar12 = ::operator_new(0x80);
              if (pFVar12 == (FSkyTextureCubeResource *)0x0) {
                pFVar12 = (FSkyTextureCubeResource *)0x0;
              }
              else {
                FTexture::FTexture((FTexture *)pFVar12);
                pFVar12->_padding_ = (longlong)&FSkyTextureCubeResource::_vftable__for__FTexture__;
                pFVar12->_padding_ =
                     (longlong)&FSkyTextureCubeResource::_vftable__for__FDeferredCleanupInterface__;
                pFVar12->Size = 0;
                pFVar12->NumMips = 0;
                pFVar12->Format = PF_Unknown;
                (pFVar12->TextureCubeRHI).Reference = (FRHITexture *)0x0;
                pFVar12->NumRefs = 0;
              }
              TRefCountPtr<FSkyTextureCubeResource>::operator=
                        ((TRefCountPtr<FSkyTextureCubeResource> *)
                         &this[4].PhysicsStateAsyncCreationScene,pFVar12);
              iVar7 = *(int *)((longlong)&this[3].ComponentTags.AllocatorInstance.Data + 4);
              pFVar13 = this[4].PhysicsStateAsyncCreationScene;
              iVar9 = 1;
              if (iVar7 != 0) {
                iVar9 = iVar7;
              }
              *(int *)&pFVar13->_padding_ = iVar7;
              *(undefined1 *)&pFVar13->_padding_ = 10;
              uVar1 = (ulonglong)(iVar9 - 1) * 2 + 1;
              lVar3 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              *(int *)((longlong)&pFVar13->_padding_ + 4) = (int)lVar3 + 1;
              BeginInitResource((FRenderResource *)this[4].PhysicsStateAsyncCreationScene,
                                (FRenderCommandPipe *)0x0);
              UActorComponent::MarkRenderStateDirty(this);
            }
            pFVar14 = param_1->Scene;
            piVar19 = &this[5].AssetUserData.ArrayNum;
            pUVar20 = (UActorComponent *)&this[4].WorldPrivate;
            pUVar16 = *(UActorComponent **)&this[4].field_0x98;
            pcVar17 = *(code **)(pFVar14->_padding_ + 400);
            pFVar13 = this[4].PhysicsStateAsyncCreationScene;
          }
          (*pcVar17)(pFVar14,this,(char)this[3].ComponentTags.ArrayMax,pUVar16,pFVar13,piVar19,
                     pUVar20,0,&this[5].AssetUserData.ArrayMax);
          FRenderCommandFence::BeginFence((FRenderCommandFence *)&this[5].field_0x98,RenderThread);
          *(undefined1 *)((longlong)&this[3].WorldPrivate + 2) = 1;
          UActorComponent::MarkRenderStateDirty(this);
        }
        TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_>::RemoveAt(param_2,uVar15,Default);
      }
LAB_1479f35e1:
      lVar18 = lVar18 + -8;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  return;
}

// execRecaptureSky @ 147a03730

void __cdecl USkyLightComponent::execRecaptureSky(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCaptureIsDirty((USkyLightComponent *)param_1);
  return;
}

// execSetCubemap @ 147a04330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USkyLightComponent::execSetCubemap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if (((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) {
    if (*(UObject **)&param_1[0x10].field_0x20 == (UObject *)0x0) {
      bVar3 = pUVar2 == (UObject *)0x0;
    }
    else {
      bVar3 = *(UObject **)&param_1[0x10].field_0x20 == pUVar2;
    }
    if (!bVar3) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(UObject **)&param_1[0x10].field_0x20 = pUVar2;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
      SetCaptureIsDirty((USkyLightComponent *)param_1);
    }
  }
  return;
}

// execSetCubemapBlend @ 147a04420

void __cdecl USkyLightComponent::execSetCubemapBlend(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  UTextureCube *local_res20;
  UTextureCube *local_18 [2];
  
  local_18[0] = (UTextureCube *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20 = (UTextureCube *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCubemapBlend((USkyLightComponent *)param_1,local_18[0],local_res20,local_res10[0]);
  return;
}

// execSetIndirectLightingIntensity @ 147a06400

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
USkyLightComponent::execSetIndirectLightingIntensity(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)&param_1[0x10].field_0xc)) {
    *(float *)&param_1[0x10].field_0xc = fVar2;
    UpdateLimitedRenderingStateFast((USkyLightComponent *)param_1);
  }
  return;
}

// execSetIntensity @ 147a06690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USkyLightComponent::execSetIntensity(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)&param_1[0xf].field_0x1c)) {
    *(float *)&param_1[0xf].field_0x1c = fVar2;
    UpdateLimitedRenderingStateFast((USkyLightComponent *)param_1);
  }
  return;
}

// execSetLightColor @ 147a069a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USkyLightComponent::execSetLightColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._0_8_ = local_28;
  local_18._8_8_ = uStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_18._s_0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (*(int *)&param_1[0xf].field_0x20 != local_res10)) {
    *(int *)&param_1[0xf].field_0x20 = local_res10;
    UpdateLimitedRenderingStateFast((USkyLightComponent *)param_1);
  }
  return;
}

// execSetLowerHemisphereColor @ 147a06bd0

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
USkyLightComponent::execSetLowerHemisphereColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float *pfVar6;
  float local_18 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  pfVar6 = local_18;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar6 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar5 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar5) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (((*pfVar6 != *(float *)&param_1[0x11].field_0x10 ||
       (pfVar6[1] != *(float *)&param_1[0x11].field_0x14)) ||
      ((pfVar6[2] != *(float *)&param_1[0x11].field_0x18 ||
       (pfVar6[3] != *(float *)&param_1[0x11].field_0x1c)))))) {
    fVar2 = pfVar6[1];
    fVar3 = pfVar6[2];
    fVar4 = pfVar6[3];
    *(float *)&param_1[0x11].field_0x10 = pfVar6[0];
    *(float *)&param_1[0x11].field_0x14 = fVar2;
    *(float *)&param_1[0x11].field_0x18 = fVar3;
    *(float *)&param_1[0x11].field_0x1c = fVar4;
    UpdateLimitedRenderingStateFast((USkyLightComponent *)param_1);
  }
  return;
}

// execSetMinOcclusion @ 147a073b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USkyLightComponent::execSetMinOcclusion(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)&param_1[0x12].field_0x4)) {
    *(float *)&param_1[0x12].field_0x4 = fVar2;
    UpdateOcclusionRenderingStateFast((USkyLightComponent *)param_1);
  }
  return;
}

// execSetOcclusionContrast @ 147a07530

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
USkyLightComponent::execSetOcclusionContrast(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)&param_1[0x11].field_0x24)) {
    *(float *)&param_1[0x11].field_0x24 = fVar2;
    UpdateOcclusionRenderingStateFast((USkyLightComponent *)param_1);
  }
  return;
}

// execSetOcclusionExponent @ 147a075f0

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
USkyLightComponent::execSetOcclusionExponent(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)(param_1 + 0x12))) {
    *(float *)(param_1 + 0x12) = fVar2;
    UpdateOcclusionRenderingStateFast((USkyLightComponent *)param_1);
  }
  return;
}

// execSetOcclusionTint @ 147a076b0

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
USkyLightComponent::execSetOcclusionTint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int *piVar3;
  int local_18 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  piVar3 = local_18;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (*(int *)&param_1[0x12].field_0x8 != *piVar3)) {
    *(int *)&param_1[0x12].field_0x8 = *piVar3;
    UpdateOcclusionRenderingStateFast((USkyLightComponent *)param_1);
  }
  return;
}

// execSetRealTimeCapture @ 147a08120

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
USkyLightComponent::execSetRealTimeCapture(UObject *param_1,FFrame *param_2,void *param_3)

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
     (bVar3 != (bool)param_1[0x10].field_0x18)) {
    param_1[0x10].field_0x18 = bVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    SetCaptureIsDirty((USkyLightComponent *)param_1);
  }
  return;
}

// execSetSourceCubemapAngle @ 147a09070

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
USkyLightComponent::execSetSourceCubemapAngle(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)(param_1 + 0x11))) {
    *(float *)(param_1 + 0x11) = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    SetCaptureIsDirty((USkyLightComponent *)param_1);
  }
  return;
}

// execSetVolumetricScatteringIntensity @ 147a0b0d0

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
USkyLightComponent::execSetVolumetricScatteringIntensity
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
     (fVar2 != *(float *)&param_1[0x10].field_0x10)) {
    *(float *)&param_1[0x10].field_0x10 = fVar2;
    UpdateLimitedRenderingStateFast((USkyLightComponent *)param_1);
  }
  return;
}

