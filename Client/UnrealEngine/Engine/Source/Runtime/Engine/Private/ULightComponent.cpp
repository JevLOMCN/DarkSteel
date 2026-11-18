// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 108

// StaticClass @ 14788fd00

UClass * __cdecl ULightComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightComponent",
               &Z_Registration_Info_UClass_ULightComponent.InnerSingleton,
               StaticRegisterNativesULightComponent,0x3c0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULightComponent>,InternalVTableHelperCtorCaller<ULightComponent>,
               local_res8,ULightComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightComponent.InnerSingleton;
}

// ULightComponent @ 1478a9860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ULightComponent * __thiscall
ULightComponent::ULightComponent(ULightComponent *this,FVTableHelper *param_1)

{
  FLightingChannels *pFVar1;
  FLightingChannels *pFVar2;
  FViewLightingChannels *pFVar3;
  FViewLightingChannels *pFVar4;
  FLightingChannels FVar5;
  
  ULightComponentBase::ULightComponentBase((ULightComponentBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->LightFunctionMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->IESTexture).field0_0x0.DebugPtr = (UTextureLightProfile *)0x0;
  pFVar2 = &this->LightingChannels;
  pFVar2->bChannel0 = '\x01';
  pFVar2->bChannel2 = '\0';
  pFVar2->bChannel1 = '\0';
  pFVar4 = &this->ViewLightingChannels;
  pFVar4->bViewChannel0 = '\x01';
  pFVar4->bViewChannel4 = '\0';
  pFVar4->bViewChannel3 = '\0';
  pFVar4->bViewChannel2 = '\0';
  pFVar4->bViewChannel1 = '\0';
  FTexture::FTexture((FTexture *)&this->StaticShadowDepthMap);
  (this->StaticShadowDepthMap).Data = (FStaticShadowDepthMapData *)0x0;
  (this->StaticShadowDepthMap)._padding_ = (longlong)&___7FStaticShadowDepthMap__6B_;
  FRenderCommandFence::FRenderCommandFence(&this->DestroyFence);
  return this;
}

// ULightComponent @ 1478a9910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ULightComponent * __thiscall
ULightComponent::ULightComponent(ULightComponent *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  FLightingChannels *pFVar2;
  FLightingChannels *pFVar3;
  FViewLightingChannels *pFVar4;
  FViewLightingChannels *pFVar5;
  FLightingChannels FVar6;
  FViewLightingChannels FVar7;
  uint uVar8;
  FColor FVar9;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x40490fdb;
  this->_padding_ = (longlong)&ULightComponentBase::_vftable__for__UObject__;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x40490fdb;
  this->_padding_ = (longlong)&ULightComponentBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&ULightComponentBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FVar9 = FColor::White;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 0x10f;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 3;
  *(FColor_u_0 *)&this->_padding_ = (FColor_u_0_s_0)FVar9.field0_0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined4 *)&this->_padding_ = 0x3f000000;
  (this->LightFunctionMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  pFVar3 = &this->LightingChannels;
  pFVar3->bChannel0 = '\x01';
  pFVar3->bChannel2 = '\0';
  pFVar3->bChannel1 = '\0';
  (this->IESTexture).field0_0x0.DebugPtr = (UTextureLightProfile *)0x0;
  pFVar5 = &this->ViewLightingChannels;
  pFVar5->bViewChannel0 = '\x01';
  pFVar5->bViewChannel4 = '\0';
  pFVar5->bViewChannel3 = '\0';
  pFVar5->bViewChannel2 = '\0';
  pFVar5->bViewChannel1 = '\0';
  FTexture::FTexture((FTexture *)&this->StaticShadowDepthMap);
  (this->StaticShadowDepthMap).Data = (FStaticShadowDepthMapData *)0x0;
  (this->StaticShadowDepthMap)._padding_ = (longlong)&___7FStaticShadowDepthMap__6B_;
  FRenderCommandFence::FRenderCommandFence(&this->DestroyFence);
  uVar8 = *(uint *)((longlong)&this->_padding_ + 4);
  this->bUseTemperature = 0;
  this->ContactShadowLengthInWS = 0;
  this->bAllowMegaLights = 1;
  this->bOverrideRayEndBias = 0;
  this->bUseIESBrightness = 0;
  *(uint *)((longlong)&this->_padding_ + 4) = uVar8 & 0xffffffdf | 0x10;
  this->Temperature = 6500.0;
  this->PreviewShadowMapChannel = -1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  this->ShadowResolutionScale = 1.0;
  this->ShadowBias = 0.5;
  this->ShadowSlopeBias = 0.5;
  this->ShadowSharpen = 0.0;
  this->ContactShadowLength = 0.0;
  this->ContactShadowCastingIntensity = 1.0;
  this->ContactShadowNonCastingIntensity = 0.0;
  (this->MegaLightsShadowMethod).Value = '\0';
  (this->IESTexture).field0_0x0.DebugPtr = (UTextureLightProfile *)0x0;
  this->RayEndBias = 0.0;
  this->IESBrightnessScale = 1.0;
  (this->LightFunctionScale).field0_0x0._s_0.X = 1024.0;
  (this->LightFunctionScale).field0_0x0._s_0.Y = 1024.0;
  (this->LightFunctionScale).field0_0x0._s_0.Z = 1024.0;
  this->bEnableLightShaftBloom = 0;
  this->LightFunctionFadeDistance = 100000.0;
  this->DisabledBrightness = 0.5;
  this->SpecularScale = 1.0;
  this->DiffuseScale = 1.0;
  this->BloomScale = 0.2;
  this->BloomThreshold = 0.0;
  this->BloomMaxBrightness = 100.0;
  (this->BloomTint).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  this->RayStartOffsetDepthScale = 0.003;
  this->MaxDrawDistance = 0.0;
  this->MaxDistanceFadeRange = 0.0;
  this->bAddedToSceneVisible = 0;
  this->bForceCachedShadowsForMovablePrimitives = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  return this;
}

// ~ULightComponent @ 1478ac060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::~ULightComponent(ULightComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FRenderCommandFence::~FRenderCommandFence(&this->DestroyFence);
  FTexture::~FTexture((FTexture *)&this->StaticShadowDepthMap);
  ULightComponentBase::~ULightComponentBase((ULightComponentBase *)this);
  return;
}

// AffectsBounds @ 1478b38f0

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
ULightComponent::AffectsBounds(ULightComponent *this,TBoxSphereBounds<double,double> *param_1)

{
  return true;
}

// AffectsPrimitive @ 1478b3970

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
ULightComponent::AffectsPrimitive(ULightComponent *this,UPrimitiveComponent *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001478b397a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x648))(this,&param_1->field_0x110);
  return (bool)uVar1;
}

// ApplyComponentInstanceData @ 1478b49f0

/* WARNING: Type propagation algorithm not settling */
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
ULightComponent::ApplyComponentInstanceData
          (ULightComponent *this,FPrecomputedLightInstanceData *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  undefined4 in_EAX;
  int iVar12;
  undefined7 extraout_var;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  longlong local_68 [5];
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  
  pcVar17 = (char *)this;
  if (param_1 == (FPrecomputedLightInstanceData *)0x0) {
    pcVar17 = "LightMapData";
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("LightMapData",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\LightComponent.cpp"
                        ,0x5b9,L"");
    in_EAX = (undefined4)CONCAT71(extraout_var,bVar11);
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  dVar19 = (param_1->Transform).Translation.ZW.m128d_f64[0] - (double)this->_padding_;
  dVar21 = (param_1->Transform).Translation.ZW.m128d_f64[1] - (double)this->_padding_;
  dVar23 = (param_1->Transform).Translation.XY.m128d_f64[0] - (double)this->_padding_;
  dVar25 = (param_1->Transform).Translation.XY.m128d_f64[1] - (double)this->_padding_;
  lVar18 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar21,0) & _UNK_15061cc88));
  auVar3._8_4_ = (int)lVar18;
  auVar3._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar3._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  uVar14 = movmskpd((int)pcVar17,auVar3);
  lVar18 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar25,0) & _UNK_15061cc88));
  auVar8._8_4_ = (int)lVar18;
  auVar8._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  iVar12 = movmskpd(in_EAX,auVar8);
  if ((uVar14 & 0x3fffffff) == 0 && iVar12 == 0) {
    dVar23 = (param_1->Transform).Rotation.ZW.m128d_f64[0];
    dVar25 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
    dVar19 = (param_1->Transform).Rotation.XY.m128d_f64[0];
    dVar21 = (param_1->Transform).Rotation.XY.m128d_f64[1];
    dVar24 = dVar19 - (double)this->_padding_;
    dVar26 = dVar21 - (double)this->_padding_;
    dVar19 = dVar19 + (double)this->_padding_;
    dVar21 = dVar21 + (double)this->_padding_;
    dVar20 = dVar23 - (double)this->_padding_;
    dVar22 = dVar25 - (double)this->_padding_;
    dVar23 = dVar23 + (double)this->_padding_;
    dVar25 = dVar25 + (double)this->_padding_;
    lVar18 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar22,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar18;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    iVar15 = movmskpd(0,auVar4);
    lVar18 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar26,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar18;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    uVar14 = movmskpd(iVar12,auVar5);
    uVar16 = iVar15 << 2 | uVar14;
    if (uVar16 != 0) {
      lVar18 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar25,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar18;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar23,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      uVar16 = movmskpd(uVar16,auVar6);
      lVar18 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar21,0) & _UNK_15061cc88));
      auVar9._8_4_ = (int)lVar18;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar19,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar9._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      uVar14 = movmskpd(uVar14,auVar9);
      if ((uVar16 & 0x3fffffff) != 0 || uVar14 != 0) {
        return;
      }
    }
    dVar19 = (param_1->Transform).Scale3D.ZW.m128d_f64[0] - (double)this->_padding_;
    dVar21 = (param_1->Transform).Scale3D.ZW.m128d_f64[1] - (double)this->_padding_;
    dVar23 = (param_1->Transform).Scale3D.XY.m128d_f64[0] - (double)this->_padding_;
    dVar25 = (param_1->Transform).Scale3D.XY.m128d_f64[1] - (double)this->_padding_;
    lVar18 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar7._8_4_ = (int)lVar18;
    auVar7._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar7._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    uVar16 = movmskpd(0,auVar7);
    lVar18 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar25,0) & _UNK_15061cc88));
    auVar10._8_4_ = (int)lVar18;
    auVar10._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar10._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    iVar12 = movmskpd(uVar14,auVar10);
    if ((uVar16 & 0x3fffffff) == 0 && iVar12 == 0) {
      cVar1 = *(char *)((longlong)&this->_padding_ + 3);
      if ((cVar1 == '\x02') || (this->_padding_ == 0)) {
        local_68[0] = 0;
        plVar13 = local_68;
        local_68[1] = 0;
      }
      else {
        plVar13 = local_68 + 4;
        local_68[4]._0_4_ = (param_1->OriginalLightGuid).A;
        local_68[4]._4_4_ = (param_1->OriginalLightGuid).B;
        uStack_40._0_4_ = (param_1->OriginalLightGuid).C;
        uStack_40._4_4_ = (param_1->OriginalLightGuid).D;
      }
      lVar18 = plVar13[1];
      this->_padding_ = *plVar13;
      this->_padding_ = lVar18;
      if ((cVar1 == '\x02') || (this->_padding_ == 0)) {
        local_68[2] = 0;
        plVar13 = local_68 + 2;
        local_68[3] = 0;
      }
      else {
        plVar13 = &local_38;
        local_38._0_4_ = (param_1->LightGuid).A;
        local_38._4_4_ = (param_1->LightGuid).B;
        uStack_30._0_4_ = (param_1->LightGuid).C;
        uStack_30._4_4_ = (param_1->LightGuid).D;
      }
      lVar18 = plVar13[1];
      this->_padding_ = *plVar13;
      this->_padding_ = lVar18;
      this->PreviewShadowMapChannel = param_1->PreviewShadowMapChannel;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// BeginDestroy @ 1478b6250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::BeginDestroy(ULightComponent *this)

{
  USceneComponent::BeginDestroy((USceneComponent *)this);
  BeginReleaseResource((FRenderResource *)&this->StaticShadowDepthMap,(FRenderCommandPipe *)0x0);
  FRenderCommandFence::BeginFence(&this->DestroyFence,RenderThread);
  return;
}

// CanTraceDistanceFieldShadows @ 1478b88d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall ULightComponent::CanTraceDistanceFieldShadows(ULightComponent *this)

{
  bool bVar1;
  
  if ((((byte)*(undefined4 *)((longlong)&this->_padding_ + 4) & 10) == 10) &&
     (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
    bVar1 = DoesProjectSupportDistanceFields();
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// ClearLightFunctionMaterial @ 1478b95c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::ClearLightFunctionMaterial(ULightComponent *this)

{
  (this->LightFunctionMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return;
}

// ComputeLightBrightness @ 1478bc000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall ULightComponent::ComputeLightBrightness(ULightComponent *this)

{
  char cVar1;
  float fVar2;
  
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  if ((this->IESTexture).field0_0x0.DebugPtr != (UTextureLightProfile *)0x0) {
    cVar1 = (**(code **)(this->_padding_ + 0x680))();
    if (cVar1 == '\x03') {
      fVar2 = powf(__real_40000000,*(float *)((longlong)&this->_padding_ + 4));
    }
    if (this->bUseIESBrightness != 0) {
      fVar2 = this->IESBrightnessScale * ((this->IESTexture).field0_0x0.DebugPtr)->Brightness;
    }
    fVar2 = fVar2 * ((this->IESTexture).field0_0x0.DebugPtr)->TextureMultiplier;
    if (cVar1 == '\x03') {
      fVar2 = logf(fVar2);
      return fVar2 * __real_3fb8aa3b;
    }
  }
  return fVar2;
}

// CreateRenderState_Concurrent @ 1478c1a30

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
ULightComponent::CreateRenderState_Concurrent
          (ULightComponent *this,FRegisterComponentContext *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  UWorld *pUVar4;
  
  UActorComponent::CreateRenderState_Concurrent((UActorComponent *)this,param_1);
  if ((this->_padding_ & 0x100000000) != 0) {
    pUVar4 = (UWorld *)this->_padding_;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if ((0.0 < *(float *)((longlong)&this->_padding_ + 4)) ||
       (cVar2 = (**(code **)(this->_padding_ + 0x680))(this), cVar2 == '\x03')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    bVar3 = USceneComponent::ShouldComponentAddToScene((USceneComponent *)this);
    if (((bVar3) && (bVar3 = USceneComponent::ShouldRender((USceneComponent *)this), bVar3)) &&
       (bVar1)) {
      InitializeStaticShadowDepthMap(this);
      (**(code **)(pUVar4->Scene->_padding_ + 0xf0))(pUVar4->Scene,this);
      this->bAddedToSceneVisible = 1;
    }
  }
  return;
}

// CreateSceneProxy @ 1478c2370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightSceneProxy * __thiscall ULightComponent::CreateSceneProxy(ULightComponent *this)

{
  return (FLightSceneProxy *)0x0;
}

// DestroyRenderState_Concurrent @ 1478c32a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::DestroyRenderState_Concurrent(ULightComponent *this)

{
  FSceneInterface *pFVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  
  UActorComponent::DestroyRenderState_Concurrent((UActorComponent *)this);
  pUVar4 = (UWorld *)this->_padding_;
  if (((pUVar4 == (UWorld *)0x0) &&
      (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar4 == (UWorld *)0x0
      )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("MyWorld != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\LightComponent.cpp"
                                ,0x3ca,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = pUVar4->Scene;
  if (pFVar1 == (FSceneInterface *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3526046276024009675>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\LightComponent.cpp"
                       ,0x3cb,"MyWorld->Scene != nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    (**(code **)(pFVar1->_padding_ + 0xf8))(pFVar1,this);
  }
  this->bAddedToSceneVisible = 0;
  return;
}

// GetAtmosphereSunDiskColorScale @ 1478cf9a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLinearColor * __thiscall
ULightComponent::GetAtmosphereSunDiskColorScale
          (ULightComponent *this,FLinearColor *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// GetAtmosphereSunLightIndex @ 1478cf9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

uchar __thiscall ULightComponent::GetAtmosphereSunLightIndex(ULightComponent *this)

{
  return '\0';
}

// GetBoundingBox @ 1478cffc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TBox<double> * __thiscall
ULightComponent::GetBoundingBox(ULightComponent *this,TBox<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = -4398046511104.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = -4398046511104.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = -4398046511104.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 4398046511104.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 4398046511104.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 4398046511104.0;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetBoundingSphere @ 1478d0090

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
ULightComponent::GetBoundingSphere(ULightComponent *this,TSphere<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->W = 8796093022208.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = (double)uVar1;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetColorTemperature @ 1478d0520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLinearColor * __thiscall
ULightComponent::GetColorTemperature(ULightComponent *this,FLinearColor *__return_storage_ptr__)

{
  FColorSpace *this_00;
  
  this_00 = UE::Color::FColorSpace::GetWorking();
  UE::Color::FColorSpace::MakeFromColorTemperature(this_00,__return_storage_ptr__,this->Temperature)
  ;
  return __return_storage_ptr__;
}

// GetColoredLightBrightness @ 1478d0560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLinearColor * __thiscall
ULightComponent::GetColoredLightBrightness
          (ULightComponent *this,FLinearColor *__return_storage_ptr__)

{
  undefined1 uVar1;
  FColorSpace *this_00;
  float fVar2;
  FLinearColor_u_0 local_18;
  
  fVar2 = (float)(**(code **)(this->_padding_ + 0x6a0))();
  local_18._s_0.R = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)&this->_padding_ + 2)];
  local_18._s_0.G = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)&this->_padding_ + 1)];
  local_18._s_0.B = FLinearColor::sRGBToLinearTable[(byte)this->_padding_];
  local_18._s_0.A = (float)*(byte *)((longlong)&this->_padding_ + 3) * __real_3b808081;
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar2 * local_18._s_0.R;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar2 * local_18._s_0.G;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar2 * local_18._s_0.B;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar2 * local_18._s_0.A;
  if (this->bUseTemperature != 0) {
    this_00 = UE::Color::FColorSpace::GetWorking();
    UE::Color::FColorSpace::MakeFromColorTemperature
              (this_00,(FLinearColor *)&local_18._s_0,this->Temperature);
    (__return_storage_ptr__->field0_0x0)._s_0.R =
         local_18._s_0.R * (__return_storage_ptr__->field0_0x0)._s_0.R;
    (__return_storage_ptr__->field0_0x0)._s_0.G =
         local_18._s_0.G * (__return_storage_ptr__->field0_0x0)._s_0.G;
    (__return_storage_ptr__->field0_0x0)._s_0.B =
         local_18._s_0.B * (__return_storage_ptr__->field0_0x0)._s_0.B;
    (__return_storage_ptr__->field0_0x0)._s_0.A =
         local_18._s_0.A * (__return_storage_ptr__->field0_0x0)._s_0.A;
  }
  return __return_storage_ptr__;
}

// GetComponentInstanceData @ 1478d0870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TStructOnScope<FActorComponentInstanceData> * __thiscall
ULightComponent::GetComponentInstanceData
          (ULightComponent *this,TStructOnScope<FActorComponentInstanceData> *__return_storage_ptr__
          )

{
  longlong lVar1;
  UScriptStruct *pUVar2;
  uint uVar3;
  UPackage *pUVar4;
  FSceneComponentInstanceData *this_00;
  int iVar5;
  uint uVar6;
  UScriptStruct *local_res8;
  
  FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
  *(undefined ***)__return_storage_ptr__ = &___7__TStructOnScope_UFActorComponentInstanceData____6B_
  ;
  FStructOnScope::Destroy((FStructOnScope *)__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FPrecomputedLightInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPrecomputedLightInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData,(UObject *)pUVar4,
                         L"PrecomputedLightInstanceData");
    if (Z_Registration_Info_UScriptStruct_FPrecomputedLightInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return __return_storage_ptr__;
    }
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FPrecomputedLightInstanceData.OuterSingleton;
  local_res8 = Z_Registration_Info_UScriptStruct_FPrecomputedLightInstanceData.OuterSingleton;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable
              ((UObject *)
               Z_Registration_Info_UScriptStruct_FPrecomputedLightInstanceData.OuterSingleton);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res8);
  iVar5 = (int)*(short *)((longlong)&pUVar2->_padding_ + 4);
  uVar6 = (int)pUVar2->_padding_ + -1 + iVar5 & ~(iVar5 - 1U);
  uVar3 = 1;
  if (uVar6 != 0) {
    uVar3 = uVar6;
  }
  this_00 = FMemory::Malloc((longlong)(int)uVar3,0);
  *(FSceneComponentInstanceData **)&__return_storage_ptr__->field_0x10 = this_00;
  FSceneComponentInstanceData::FSceneComponentInstanceData(this_00,(USceneComponent *)this);
  this_00->_padding_ = (longlong)&___7FPrecomputedLightInstanceData__6B_;
  lVar1 = this->_padding_;
  this_00[1]._padding_ = this->_padding_;
  this_00[1]._padding_ = lVar1;
  lVar1 = this->_padding_;
  this_00[1]._padding_ = this->_padding_;
  this_00[1]._padding_ = lVar1;
  lVar1 = this->_padding_;
  this_00[1]._padding_ = this->_padding_;
  this_00[1]._padding_ = lVar1;
  lVar1 = this->_padding_;
  this_00[1]._padding_ = this->_padding_;
  this_00[1]._padding_ = lVar1;
  lVar1 = this->_padding_;
  this_00[1]._padding_ = this->_padding_;
  this_00[1]._padding_ = lVar1;
  lVar1 = this->_padding_;
  this_00[1]._padding_ = this->_padding_;
  this_00[1]._padding_ = lVar1;
  lVar1 = this->_padding_;
  *(longlong *)&this_00[1].AttachedInstanceComponents = this->_padding_;
  *(longlong *)&this_00[1].AttachedInstanceComponents.field_0x8 = lVar1;
  lVar1 = this->_padding_;
  *(longlong *)&this_00[1].AttachedInstanceComponents.field_0x10 = this->_padding_;
  *(longlong *)&this_00[1].AttachedInstanceComponents.field_0x18 = lVar1;
  *(int *)&this_00[1].AttachedInstanceComponents.field_0x20 = this->PreviewShadowMapChannel;
  __return_storage_ptr__->field_0x20 = 1;
  return __return_storage_ptr__;
}

// GetDirection @ 1478d0fa0

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

TVector<double> * __thiscall
ULightComponent::GetDirection(ULightComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar13._0_8_ = this->_padding_;
  auVar13._8_8_ = this->_padding_;
  dVar3 = (double)this->_padding_;
  auVar4._0_8_ = this->_padding_;
  auVar4._8_8_ = this->_padding_;
  dVar17 = __xmm_00000000000000003ff0000000000000._8_8_;
  auVar7 = blendpd(auVar4,auVar13,2);
  auVar15._0_8_ =
       dVar17 * (double)auVar4._0_8_ -
       (double)auVar4._8_8_ * (double)__xmm_00000000000000003ff0000000000000;
  auVar15._8_8_ = (double)auVar4._8_8_ * 0.0 - (double)auVar13._0_8_ * dVar17;
  auVar4 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
  auVar5._0_8_ = auVar4._0_8_ * (double)auVar13._0_8_ - auVar7._0_8_ * 0.0;
  auVar5._8_8_ = auVar4._8_8_ * (double)auVar13._8_8_ - auVar7._8_8_ * 0.0;
  auVar7._0_8_ = this->_padding_;
  auVar7._8_8_ = this->_padding_;
  auVar4 = blendpd(auVar15,auVar5,2);
  dVar1 = auVar15._8_8_ + auVar15._8_8_;
  dVar2 = auVar5._0_8_ + auVar5._0_8_;
  uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar16._0_8_ = auVar4._0_8_ + auVar4._0_8_;
  auVar16._8_8_ = auVar4._8_8_ + auVar4._8_8_;
  auVar11._8_4_ = SUB84(dVar2,0);
  auVar11._0_8_ = dVar1;
  auVar11._12_4_ = uVar14;
  auVar8._8_4_ = SUB84(dVar2,0);
  auVar8._0_8_ = dVar1;
  auVar8._12_4_ = uVar14;
  auVar9 = blendpd(auVar8,auVar16,2);
  auVar12._0_8_ = auVar11._8_8_ * (double)auVar7._0_8_ - (double)auVar7._8_8_ * dVar1;
  auVar12._8_8_ = auVar16._0_8_ * (double)auVar7._8_8_ - (double)auVar13._0_8_ * dVar2;
  auVar6._8_4_ = SUB84(auVar12._8_8_,0);
  auVar6._0_8_ = auVar12._0_8_;
  auVar6._12_4_ = (int)((ulonglong)auVar12._8_8_ >> 0x20);
  auVar4 = blendpd(auVar7,auVar13,2);
  auVar10._0_8_ = auVar9._0_8_ * (double)auVar13._0_8_ - auVar4._0_8_ * auVar16._0_8_;
  auVar10._8_8_ = auVar9._8_8_ * (double)auVar13._8_8_ - auVar4._8_8_ * auVar16._8_8_;
  auVar13 = blendpd(auVar12,auVar10,2);
  dVar2 = dVar2 * dVar3 + dVar17 + auVar10._0_8_;
  auVar9._8_4_ = SUB84(dVar2,0);
  auVar9._0_8_ = dVar1 * dVar3 + (double)__xmm_00000000000000003ff0000000000000 + auVar6._8_8_;
  auVar9._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar16._0_8_ * dVar3 + auVar13._0_8_;
  return __return_storage_ptr__;
}

// GetLightComponentMapBuildData @ 1478d5260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightComponentMapBuildData * __thiscall
ULightComponent::GetLightComponentMapBuildData(ULightComponent *this)

{
  ULevel *pUVar1;
  UMapBuildDataRegistry *this_00;
  FLightComponentMapBuildData *pFVar2;
  FGuid local_18;
  
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar1 = AActor::GetLevel((AActor *)this->_padding_);
    if ((pUVar1 != (ULevel *)0x0) && ((pUVar1->OwningWorld).field0_0x0.DebugPtr != (UWorld *)0x0)) {
      this_00 = UMapBuildDataRegistry::Get((UActorComponent *)this);
      if (this_00 != (UMapBuildDataRegistry *)0x0) {
        local_18._0_8_ = this->_padding_;
        local_18._8_8_ = this->_padding_;
        pFVar2 = UMapBuildDataRegistry::GetLightBuildData(this_00,&local_18);
        return pFVar2;
      }
    }
  }
  return (FLightComponentMapBuildData *)0x0;
}

// GetLightPosition @ 1478d54e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TVector4<double> * __thiscall
ULightComponent::GetLightPosition(ULightComponent *this,TVector4<double> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\LightComponent.h"
             ,0x1ab,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// GetLightType @ 1478d5a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ELightComponentType __thiscall ULightComponent::GetLightType(ULightComponent *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\LightComponent.h"
             ,0x1b0,L"Pure virtual not implemented (%s)");
  return LightType_MAX;
}

// GetLightUnits @ 1478d5a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ELightUnits __thiscall ULightComponent::GetLightUnits(ULightComponent *this)

{
  return Unitless;
}

// GetLightmassSettings @ 1478d5ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightmassLightSettings * __thiscall
ULightComponent::GetLightmassSettings
          (ULightComponent *this,FLightmassLightSettings *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\LightComponent.h"
             ,0x1b2,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->IndirectLightingSaturation = 1.0;
  __return_storage_ptr__->ShadowExponent = 2.0;
  __return_storage_ptr__->bUseAreaShadowsForStationaryLight = false;
  return __return_storage_ptr__;
}

// GetMaterial @ 1478d5ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

UMaterialInterface * __thiscall ULightComponent::GetMaterial(ULightComponent *this,int param_1)

{
  if (param_1 == 0) {
    return (this->LightFunctionMaterial).field0_0x0.DebugPtr;
  }
  return (UMaterialInterface *)0x0;
}

// GetNumMaterials @ 1478d66d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

int __thiscall ULightComponent::GetNumMaterials(ULightComponent *this)

{
  return 1;
}

// GetPrivateStaticClass @ 1478d95f0

UClass * __cdecl ULightComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightComponent",
               &Z_Registration_Info_UClass_ULightComponent.InnerSingleton,
               StaticRegisterNativesULightComponent,0x3c0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULightComponent>,InternalVTableHelperCtorCaller<ULightComponent>,
               local_res8,ULightComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightComponent.InnerSingleton;
}

// GetUniformPenumbraSize @ 1478ddb60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall ULightComponent::GetUniformPenumbraSize(ULightComponent *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\LightComponent.h"
             ,0x1b4,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// InitializeStaticShadowDepthMap @ 1478dffa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::InitializeStaticShadowDepthMap(ULightComponent *this)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  ULevel *pUVar4;
  UMapBuildDataRegistry *this_00;
  FLightComponentMapBuildData *pFVar5;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  FLightComponentMapBuildData *pFVar9;
  undefined1 auStack_b8 [32];
  FGuid local_98;
  code *local_88 [2];
  undefined **local_78;
  FStaticShadowDepthMap *pFStack_70;
  FLightComponentMapBuildData *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FStaticShadowDepthMap *pFStack_40;
  FLightComponentMapBuildData *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  cVar1 = *(char *)((longlong)&this->_padding_ + 3);
  if (((cVar1 != '\x02') && ((AActor *)this->_padding_ != (AActor *)0x0)) && (cVar1 != '\0')) {
    pUVar4 = AActor::GetLevel((AActor *)this->_padding_);
    pFVar9 = (FLightComponentMapBuildData *)0x0;
    pFVar5 = pFVar9;
    if (((pUVar4 != (ULevel *)0x0) && ((pUVar4->OwningWorld).field0_0x0.DebugPtr != (UWorld *)0x0))
       && (this_00 = UMapBuildDataRegistry::Get((UActorComponent *)this),
          this_00 != (UMapBuildDataRegistry *)0x0)) {
      local_98._0_8_ = this->_padding_;
      local_98._8_8_ = this->_padding_;
      pFVar5 = UMapBuildDataRegistry::GetLightBuildData(this_00,&local_98);
    }
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`ULightComponent::InitializeStaticShadowDepthMap'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68 = (FLightComponentMapBuildData *)&pFVar5->DepthMap;
    if (pFVar5 == (FLightComponentMapBuildData *)0x0) {
      local_68 = pFVar9;
    }
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ULightComponent::InitializeStaticShadowDepthMap'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = &this->StaticShadowDepthMap;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_ULightComponent::InitializeStaticShadowDepthMap_::__l5::TSTR_SetDepthMapData1542>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`ULightComponent::InitializeStaticShadowDepthMap'::__l5::TSTR_SetDepthMapData1542>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar6);
      uVar8 = (ulonglong)local_28;
      if ((2 < uVar8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar7 = local_30;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar7 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar7 = local_60;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    BeginInitResource((FRenderResource *)&this->StaticShadowDepthMap,(FRenderCommandPipe *)0x0);
  }
  return;
}

// InvalidateLightingCacheDetailed @ 1478e0d90

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
ULightComponent::InvalidateLightingCacheDetailed(ULightComponent *this,bool param_1,bool param_2)

{
  if ((*(char *)((longlong)&this->_padding_ + 3) != '\x02') && (this->_padding_ != 0)) {
    BeginReleaseResource((FRenderResource *)&this->StaticShadowDepthMap,(FRenderCommandPipe *)0x0);
    (**(code **)(this->_padding_ + 0x640))(this);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// IsPrecomputedLightingValid @ 1478e1710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall ULightComponent::IsPrecomputedLightingValid(ULightComponent *this)

{
  ULevel *pUVar1;
  UMapBuildDataRegistry *this_00;
  FLightComponentMapBuildData *pFVar2;
  FGuid local_18;
  
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar1 = AActor::GetLevel((AActor *)this->_padding_);
    if ((pUVar1 != (ULevel *)0x0) && ((pUVar1->OwningWorld).field0_0x0.DebugPtr != (UWorld *)0x0)) {
      this_00 = UMapBuildDataRegistry::Get((UActorComponent *)this);
      if (this_00 != (UMapBuildDataRegistry *)0x0) {
        local_18._0_8_ = this->_padding_;
        local_18._8_8_ = this->_padding_;
        pFVar2 = UMapBuildDataRegistry::GetLightBuildData(this_00,&local_18);
        if (((pFVar2 != (FLightComponentMapBuildData *)0x0) &&
            (*(char *)((longlong)&this->_padding_ + 3) != '\x02')) && (this->_padding_ != 0)) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsReadyForFinishDestroy @ 1478e1920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall ULightComponent::IsReadyForFinishDestroy(ULightComponent *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->DestroyFence);
  return bVar1;
}

// IsShadowCast @ 1478e1a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall ULightComponent::IsShadowCast(ULightComponent *this,UPrimitiveComponent *param_1)

{
  byte bVar1;
  bool bVar2;
  
  bVar2 = UPrimitiveComponent::HasStaticLighting(param_1);
  bVar1 = (byte)*(undefined4 *)((longlong)&this->_padding_ + 4);
  if (bVar2) {
    return (bVar1 & 6) == 6;
  }
  return (bVar1 & 10) == 10;
}

// IsUsedAsAtmosphereSunLight @ 1478e1ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall ULightComponent::IsUsedAsAtmosphereSunLight(ULightComponent *this)

{
  return false;
}

// OnRegister @ 1478e5ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::OnRegister(ULightComponent *this)

{
  longlong *plVar1;
  char cVar2;
  AActor *pAVar3;
  longlong lVar4;
  FGuid *pFVar5;
  UMapBuildDataRegistry *this_00;
  FLightComponentMapBuildData *pFVar6;
  FGuid local_28;
  FGuid local_18;
  
  plVar1 = &this->_padding_;
  if ((((int)this->_padding_ == 0 && *(int *)((longlong)&this->_padding_ + 4) == 0) &&
      *(int *)((longlong)&this->_padding_ + 4) == 0) && (int)*plVar1 == 0) {
    (**(code **)(this->_padding_ + 0x640))();
  }
  if (((((int)this->_padding_ == 0 && (int)*plVar1 == 0) &&
       *(int *)((longlong)&this->_padding_ + 4) == 0) &&
       *(int *)((longlong)&this->_padding_ + 4) == 0) ||
     (pAVar3 = (AActor *)this->_padding_, pAVar3 == (AActor *)0x0)) {
    local_28.A = 0;
    local_28.B = 0;
    local_28.C = 0;
    local_28.D = 0;
    pFVar5 = &local_28;
  }
  else {
    pFVar5 = FActorInstanceGuid::GetActorInstanceGuid(&local_28,pAVar3);
    pFVar5 = FGuid::Combine(&local_18,(FGuid *)plVar1,pFVar5);
  }
  lVar4 = *(longlong *)&pFVar5->C;
  this->_padding_ = *(longlong *)pFVar5;
  this->_padding_ = lVar4;
  if (((((((int)this->_padding_ != 0 || (int)*plVar1 != 0) ||
         *(int *)((longlong)&this->_padding_ + 4) != 0) ||
         *(int *)((longlong)&this->_padding_ + 4) != 0) &&
       (cVar2 = *(char *)((longlong)&this->_padding_ + 3), cVar2 != '\0')) && (cVar2 != '\x02')) &&
     (this->_padding_ != 0)) {
    this_00 = UMapBuildDataRegistry::Get((UActorComponent *)this);
    if (this_00 != (UMapBuildDataRegistry *)0x0) {
      local_28._0_8_ = this->_padding_;
      local_28._8_8_ = this->_padding_;
      pFVar6 = UMapBuildDataRegistry::GetLightBuildData(this_00,&local_28);
      if (pFVar6 != (FLightComponentMapBuildData *)0x0) {
        this->PreviewShadowMapChannel = pFVar6->ShadowMapChannel;
      }
    }
  }
  USceneComponent::OnRegister((USceneComponent *)this);
  return;
}

// PostLoad @ 1478e7640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::PostLoad(ULightComponent *this)

{
  UTextureLightProfile *pUVar1;
  char cVar2;
  FPackageFileVersion FVar3;
  float fVar4;
  
  UActorComponent::PostLoad((UActorComponent *)this);
  if ((((this->LightFunctionMaterial).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) &&
      (*(char *)((longlong)&this->_padding_ + 3) == '\0')) && (this->_padding_ != 0)) {
    (this->LightFunctionMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  }
  this->PreviewShadowMapChannel = -1;
  cVar2 = (**(code **)(this->_padding_ + 0x680))(this);
  if (cVar2 != '\x03') {
    fVar4 = *(float *)((longlong)&this->_padding_ + 4);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)((longlong)&this->_padding_ + 4) = fVar4;
  }
  FVar3 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  fVar4 = __real_400ccccd;
  if ((*(int *)FVar3 < 0xe4) &&
     (pUVar1 = (this->IESTexture).field0_0x0.DebugPtr, pUVar1 != (UTextureLightProfile *)0x0)) {
    *(float *)((longlong)&this->_padding_ + 4) =
         *(float *)((longlong)&this->_padding_ + 4) / pUVar1->TextureMultiplier;
    fVar4 = powf(this->IESBrightnessScale,fVar4);
    this->IESBrightnessScale = fVar4;
    this->IESBrightnessScale = fVar4 / pUVar1->TextureMultiplier;
  }
  return;
}

// PropagateLightingScenarioChange @ 1478e8540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::PropagateLightingScenarioChange(ULightComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  FString local_38;
  FComponentRecreateRenderStateContext local_28;
  
  local_28.ScenesToUpdateAllPrimitiveSceneInfos =
       (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)0x0;
  local_28.Component = (UActorComponent *)0x0;
  local_28.ComponentInterface = (IPrimitiveComponent *)0x0;
  if ((this == (ULightComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                         ,0x28,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InComponent->IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                       ,0x29,L"%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->_padding_ & 3) == 3) {
    (**(code **)(this->_padding_ + 0x3a8))(this);
    local_28.Component = (UActorComponent *)this;
    UpdateAllPrimitiveSceneInfosForSingleComponent
              ((UActorComponent *)this,local_28.ScenesToUpdateAllPrimitiveSceneInfos);
  }
  BeginReleaseResource((FRenderResource *)&this->StaticShadowDepthMap,(FRenderCommandPipe *)0x0);
  FComponentRecreateRenderStateContext::~FComponentRecreateRenderStateContext(&local_28);
  return;
}

// PushSelectionToProxy @ 1478e8720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::PushSelectionToProxy(ULightComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  FLightSceneProxy *pFStack_70;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FLightSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (this->SceneProxy == (FLightSceneProxy *)0x0) {
    return;
  }
  bVar2 = UObject::IsSelected((UObject *)this);
  if ((bVar2) || (bVar2 = UActorComponent::IsOwnerSelected((UActorComponent *)this), bVar2)) {
    local_68 = 1;
  }
  else {
    local_68 = 0;
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`ULightComponent::PushSelectionToProxy'::`5'::<lambda_1>,1,0>::
              _vftable_;
  pFStack_70 = this->SceneProxy;
  uStack_67 = auStack_b8._41_4_;
  uStack_63 = auStack_b8._45_2_;
  uStack_61 = auStack_b8[0x2f];
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ULightComponent::PushSelectionToProxy'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_ULightComponent::PushSelectionToProxy_::__l5::TSTR_SetLightSelection1600>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._1_4_ = uStack_67;
    local_38._0_1_ = local_68;
    local_38._5_2_ = uStack_63;
    local_38._7_1_ = uStack_61;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`ULightComponent::PushSelectionToProxy'::__l5::TSTR_SetLightSelection1600>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SendRenderTransform_Concurrent @ 1478ed930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SendRenderTransform_Concurrent(ULightComponent *this)

{
  UWorld *pUVar1;
  
  pUVar1 = (UWorld *)this->_padding_;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  (**(code **)(pUVar1->Scene->_padding_ + 600))(pUVar1->Scene,this);
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  return;
}

// Serialize @ 1478ee840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::Serialize(ULightComponent *this,FArchive *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  double dVar4;
  int iVar5;
  FLightComponentMapBuildData *pFVar6;
  FLightComponentMapBuildData *pFVar7;
  FLightComponentLegacyMapBuildData local_28;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  pFVar7 = (FLightComponentMapBuildData *)0x0;
  if (iVar5 < 0x96) {
    uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar3 = this->_padding_;
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(int *)&this->_padding_ = (int)this->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar1;
    *(int *)&this->_padding_ = (int)lVar3;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar2;
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  if (*(int *)&param_1->field_0x40 < 0x154) {
    *(int *)((longlong)&this->_padding_ + 4) = (int)this->_padding_;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar5 < 0x35)) {
    *(byte *)&this->_padding_ =
         (byte)((uint)*(undefined4 *)((longlong)&this->_padding_ + 4) >> 8) & 1;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  if (((0x179 < *(int *)&param_1->field_0x40) && ((param_1->field_0x28 & 1) != 0)) &&
     (iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID),
     iVar5 < 9)) {
    pFVar6 = ::operator_new(0xb0);
    if (pFVar6 != (FLightComponentMapBuildData *)0x0) {
      pFVar6->ShadowMapChannel = -1;
      dVar4 = UE::Math::TMatrix<double>::Identity.M[0][1];
      (pFVar6->DepthMap).WorldToLight.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
      (pFVar6->DepthMap).WorldToLight.M[0][1] = dVar4;
      dVar4 = UE::Math::TMatrix<double>::Identity.M[0][3];
      (pFVar6->DepthMap).WorldToLight.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
      (pFVar6->DepthMap).WorldToLight.M[0][3] = dVar4;
      dVar4 = UE::Math::TMatrix<double>::Identity.M[1][1];
      (pFVar6->DepthMap).WorldToLight.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
      (pFVar6->DepthMap).WorldToLight.M[1][1] = dVar4;
      dVar4 = UE::Math::TMatrix<double>::Identity.M[1][3];
      (pFVar6->DepthMap).WorldToLight.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
      (pFVar6->DepthMap).WorldToLight.M[1][3] = dVar4;
      dVar4 = UE::Math::TMatrix<double>::Identity.M[2][1];
      (pFVar6->DepthMap).WorldToLight.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
      (pFVar6->DepthMap).WorldToLight.M[2][1] = dVar4;
      dVar4 = UE::Math::TMatrix<double>::Identity.M[2][3];
      (pFVar6->DepthMap).WorldToLight.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
      (pFVar6->DepthMap).WorldToLight.M[2][3] = dVar4;
      dVar4 = UE::Math::TMatrix<double>::Identity.M[3][1];
      (pFVar6->DepthMap).WorldToLight.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
      (pFVar6->DepthMap).WorldToLight.M[3][1] = dVar4;
      dVar4 = UE::Math::TMatrix<double>::Identity.M[3][3];
      (pFVar6->DepthMap).WorldToLight.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
      (pFVar6->DepthMap).WorldToLight.M[3][3] = dVar4;
      (pFVar6->DepthMap).DepthSamples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->DepthMap).DepthSamples.ArrayNum = 0;
      (pFVar6->DepthMap).DepthSamples.ArrayMax = 0;
      (pFVar6->DepthMap).ShadowMapSizeX = 0;
      (pFVar6->DepthMap).ShadowMapSizeY = 0;
      pFVar7 = pFVar6;
    }
    ::operator<<(param_1,&pFVar7->DepthMap);
    pFVar7->ShadowMapChannel = this->ShadowMapChannel_DEPRECATED;
    local_28.Id._0_8_ = this->_padding_;
    local_28.Id._8_8_ = this->_padding_;
    local_28.Data = pFVar7;
    FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::AddAnnotation
              (&GLightComponentsWithLegacyBuildData,(UObjectBase *)this,&local_28);
  }
  if (__real_3f800000 == this->MinRoughness_DEPRECATED) {
    this->MinRoughness_DEPRECATED = 0.0;
    this->SpecularScale = 0.0;
  }
  return;
}

// Serialize @ 1478eea40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::Serialize(ULightComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetAffectTranslucentLighting @ 1478ef790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetAffectTranslucentLighting(ULightComponent *this,bool param_1)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (uVar1 = *(uint *)((longlong)&this->_padding_ + 4), (uVar1 >> 4 & 1) != (uint)param_1)) {
    *(uint *)((longlong)&this->_padding_ + 4) = uVar1 & 0xffffffef | (uint)param_1 << 4;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetBloomMaxBrightness @ 1478efb60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetBloomMaxBrightness(ULightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->BloomMaxBrightness))
  {
    this->BloomMaxBrightness = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetBloomScale @ 1478efbc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetBloomScale(ULightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->BloomScale)) {
    this->BloomScale = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetBloomThreshold @ 1478efc20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetBloomThreshold(ULightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->BloomThreshold)) {
    this->BloomThreshold = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetBloomTint @ 1478efc80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetBloomTint(ULightComponent *this,FColor param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((FColor_u_0)(this->BloomTint).field0_0x0.Bits != param_1.field0_0x0)) {
    (this->BloomTint).field0_0x0._s_0 = (FColor_u_0_s_0)param_1.field0_0x0;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetDiffuseScale @ 1478f1ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetDiffuseScale(ULightComponent *this,float param_1)

{
  bool bVar1;
  
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->DiffuseScale)) {
    this->DiffuseScale = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetEnableLightShaftBloom @ 1478f2100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetEnableLightShaftBloom(ULightComponent *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((bVar1) || ((this->_padding_ & 1) == 0)) ||
     (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
    if (ZPULL(*(undefined4 *)&this->field_0x328,0,1) != (uint)param_1) {
      *(uint *)&this->field_0x328 = *(undefined4 *)&this->field_0x328 & 0xfffffffe | (uint)param_1;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// SetForceCachedShadowsForMovablePrimitives @ 1478f2860

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
ULightComponent::SetForceCachedShadowsForMovablePrimitives(ULightComponent *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (ZPULL(*(undefined4 *)&this->field_0x2dc,3,1) != (uint)param_1)) {
    *(uint *)&this->field_0x2dc = *(undefined4 *)&this->field_0x2dc & 0xfffffff7 | (uint)param_1 * 8
    ;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetIESBrightnessScale @ 1478f2ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetIESBrightnessScale(ULightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->IESBrightnessScale))
  {
    this->IESBrightnessScale = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetIESTexture @ 1478f2d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetIESTexture(ULightComponent *this,UTextureLightProfile *param_1)

{
  UTextureLightProfile *pUVar1;
  bool bVar2;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((bVar2) || ((this->_padding_ & 1) == 0)) ||
     (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
    pUVar1 = (this->IESTexture).field0_0x0.DebugPtr;
    if (pUVar1 == (UTextureLightProfile *)0x0) {
      bVar2 = param_1 == (UTextureLightProfile *)0x0;
    }
    else {
      bVar2 = pUVar1 == param_1;
    }
    if (!bVar2) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UTextureLightProfile *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->IESTexture).field0_0x0.DebugPtr = param_1;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// SetIndirectLightingIntensity @ 1478f2d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetIndirectLightingIntensity(ULightComponent *this,float param_1)

{
  FSceneInterface *pFVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((!bVar2) && ((this->_padding_ & 1) != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    return;
  }
  if (param_1 != *(float *)((longlong)&this->_padding_ + 4)) {
    pUVar3 = (UWorld *)this->_padding_;
    *(float *)((longlong)&this->_padding_ + 4) = param_1;
    if (((pUVar3 != (UWorld *)0x0) ||
        (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar3 != (UWorld *)0x0)) && (pFVar1 = pUVar3->Scene, pFVar1 != (FSceneInterface *)0x0)) {
      (**(code **)(pFVar1->_padding_ + 0x260))(pFVar1,this);
    }
    TMulticastDelegate<void___cdecl(ULightComponent_&),FDefaultDelegateUserPolicy>::Broadcast
              (&UpdateColorAndBrightnessEvent,this);
    return;
  }
  return;
}

// SetIntensity @ 1478f2f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetIntensity(ULightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != *(float *)((longlong)&this->_padding_ + 4))) {
    *(float *)((longlong)&this->_padding_ + 4) = param_1;
    UpdateColorAndBrightness(this);
  }
  return;
}

// SetLightColor @ 1478f3220

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
ULightComponent::SetLightColor(ULightComponent *this,FLinearColor *param_1,bool param_2)

{
  undefined4 local_res20;
  
  FLinearColor::ToFColor(param_1,true);
  SetLightFColor(this,local_res20);
  return;
}

// SetLightFColor @ 1478f3260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetLightFColor(ULightComponent *this,FColor param_1)

{
  FSceneInterface *pFVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((!bVar2) && ((this->_padding_ & 1) != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    return;
  }
  if ((FColor_u_0)*(FColor_u_0 *)&this->_padding_ != param_1.field0_0x0) {
    *(FColor_u_0 *)&this->_padding_ = (FColor_u_0_s_0)param_1.field0_0x0;
    pUVar3 = (UWorld *)this->_padding_;
    if (((pUVar3 != (UWorld *)0x0) ||
        (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar3 != (UWorld *)0x0)) && (pFVar1 = pUVar3->Scene, pFVar1 != (FSceneInterface *)0x0)) {
      (**(code **)(pFVar1->_padding_ + 0x260))(pFVar1,this);
    }
    TMulticastDelegate<void___cdecl(ULightComponent_&),FDefaultDelegateUserPolicy>::Broadcast
              (&UpdateColorAndBrightnessEvent,this);
    return;
  }
  return;
}

// SetLightFunctionDisabledBrightness @ 1478f3350

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
ULightComponent::SetLightFunctionDisabledBrightness(ULightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->DisabledBrightness))
  {
    this->DisabledBrightness = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetLightFunctionFadeDistance @ 1478f33b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetLightFunctionFadeDistance(ULightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != this->LightFunctionFadeDistance)) {
    this->LightFunctionFadeDistance = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetLightFunctionMaterial @ 1478f3410

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
ULightComponent::SetLightFunctionMaterial(ULightComponent *this,UMaterialInterface *param_1)

{
  UMaterialInterface *pUVar1;
  bool bVar2;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((bVar2) || ((this->_padding_ & 1) == 0)) ||
     (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
    pUVar1 = (this->LightFunctionMaterial).field0_0x0.DebugPtr;
    if (pUVar1 == (UMaterialInterface *)0x0) {
      bVar2 = param_1 == (UMaterialInterface *)0x0;
    }
    else {
      bVar2 = pUVar1 == param_1;
    }
    if (!bVar2) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->LightFunctionMaterial).field0_0x0.DebugPtr = param_1;
      if (this->SceneProxy != (FLightSceneProxy *)0x0) {
        FLightSceneProxy::SetLightFunctionMaterial_GameThread(this->SceneProxy,this);
      }
    }
  }
  return;
}

// SetLightFunctionScale @ 1478f34a0

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
ULightComponent::SetLightFunctionScale(ULightComponent *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar3) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((((this->LightFunctionScale).field0_0x0._s_0.X != (param_1->field0_0x0)._s_0.X ||
       ((this->LightFunctionScale).field0_0x0._s_0.Y != (param_1->field0_0x0)._s_0.Y)) ||
      ((this->LightFunctionScale).field0_0x0._s_0.Z != (param_1->field0_0x0)._s_0.Z)))) {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (this->LightFunctionScale).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->LightFunctionScale).field0_0x0._s_0.Y = dVar2;
    (this->LightFunctionScale).field0_0x0._s_0.Z = dVar1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetLightingChannels @ 1478f3890

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
ULightComponent::SetLightingChannels(ULightComponent *this,bool param_1,bool param_2,bool param_3)

{
  FLightingChannels *pFVar1;
  
  pFVar1 = &this->LightingChannels;
  if (((param_1 == pFVar1->bChannel0) && (param_2 == pFVar1->bChannel1)) &&
     (param_3 == pFVar1->bChannel2)) {
    return;
  }
  this->LightingChannels =
       (FLightingChannels)((byte)*pFVar1 & 0xf8 | param_1 | param_2 * '\x02' | param_3 << 2);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetMaterial @ 1478f3bb0

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
ULightComponent::SetMaterial(ULightComponent *this,int param_1,UMaterialInterface *param_2)

{
  if (param_1 == 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (this->LightFunctionMaterial).field0_0x0.DebugPtr = param_2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetMaxDistanceFadeRange @ 1478f4040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetMaxDistanceFadeRange(ULightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != this->MaxDistanceFadeRange)) {
    this->MaxDistanceFadeRange = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetMaxDrawDistance @ 1478f40a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetMaxDrawDistance(ULightComponent *this,float param_1)

{
  bool bVar1;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->MaxDrawDistance)) {
    this->MaxDrawDistance = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetShadowBias @ 1478f5050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetShadowBias(ULightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->ShadowBias)) {
    this->ShadowBias = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetShadowSlopeBias @ 1478f50f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetShadowSlopeBias(ULightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->ShadowSlopeBias)) {
    this->ShadowSlopeBias = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetSpecularScale @ 1478f5430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetSpecularScale(ULightComponent *this,float param_1)

{
  bool bVar1;
  
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->SpecularScale)) {
    this->SpecularScale = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetTemperature @ 1478f57e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetTemperature(ULightComponent *this,float param_1)

{
  FSceneInterface *pFVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((!bVar2) && ((this->_padding_ & 1) != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    return;
  }
  if (param_1 != this->Temperature) {
    pUVar3 = (UWorld *)this->_padding_;
    this->Temperature = param_1;
    if (((pUVar3 != (UWorld *)0x0) ||
        (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar3 != (UWorld *)0x0)) && (pFVar1 = pUVar3->Scene, pFVar1 != (FSceneInterface *)0x0)) {
      (**(code **)(pFVar1->_padding_ + 0x260))(pFVar1,this);
    }
    TMulticastDelegate<void___cdecl(ULightComponent_&),FDefaultDelegateUserPolicy>::Broadcast
              (&UpdateColorAndBrightnessEvent,this);
    return;
  }
  return;
}

// SetTransmission @ 1478f5a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetTransmission(ULightComponent *this,bool param_1)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (uVar1 = *(uint *)((longlong)&this->_padding_ + 4), (uVar1 >> 5 & 1) != (uint)param_1)) {
    *(uint *)((longlong)&this->_padding_ + 4) = uVar1 & 0xffffffdf | (uint)param_1 << 5;
    if (this->SceneProxy != (FLightSceneProxy *)0x0) {
      FLightSceneProxy::SetTransmission_GameThread(this->SceneProxy,this);
    }
  }
  return;
}

// SetUseIESBrightness @ 1478f60a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetUseIESBrightness(ULightComponent *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((bVar1) || ((this->_padding_ & 1) == 0)) ||
     (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
    if (ZPULL(*(undefined4 *)&this->field_0x318,0,1) != (uint)param_1) {
      *(uint *)&this->field_0x318 = *(undefined4 *)&this->field_0x318 & 0xfffffffe | (uint)param_1;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// SetUseRayTracedDistanceFieldShadows @ 1478f6160

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
ULightComponent::SetUseRayTracedDistanceFieldShadows(ULightComponent *this,bool param_1)

{
  bool bVar1;
  bool bVar2;
  
  if (((param_1) && (((byte)*(undefined4 *)((longlong)&this->_padding_ + 4) & 10) == 10)) &&
     (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
    bVar1 = DoesProjectSupportDistanceFields();
    if (bVar1) {
      bVar1 = true;
      goto LAB_1478f6198;
    }
  }
  bVar1 = false;
LAB_1478f6198:
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (bVar1 != this->bUseRayTracedDistanceFieldShadows)) {
    this->bUseRayTracedDistanceFieldShadows = bVar1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetUseTemperature @ 1478f61e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::SetUseTemperature(ULightComponent *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((bVar1) || ((this->_padding_ & 1) == 0)) ||
     (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
    if (ZPULL(*(undefined4 *)&this->field_0x2a4,0,1) != (uint)param_1) {
      *(uint *)&this->field_0x2a4 = *(undefined4 *)&this->field_0x2a4 & 0xfffffffe | (uint)param_1;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// SetVolumetricScatteringIntensity @ 1478f6870

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
ULightComponent::SetVolumetricScatteringIntensity(ULightComponent *this,float param_1)

{
  FSceneInterface *pFVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((!bVar2) && ((this->_padding_ & 1) != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    return;
  }
  if (param_1 != *(float *)&this->_padding_) {
    pUVar3 = (UWorld *)this->_padding_;
    *(float *)&this->_padding_ = param_1;
    if (((pUVar3 != (UWorld *)0x0) ||
        (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar3 != (UWorld *)0x0)) && (pFVar1 = pUVar3->Scene, pFVar1 != (FSceneInterface *)0x0)) {
      (**(code **)(pFVar1->_padding_ + 0x260))(pFVar1,this);
    }
    TMulticastDelegate<void___cdecl(ULightComponent_&),FDefaultDelegateUserPolicy>::Broadcast
              (&UpdateColorAndBrightnessEvent,this);
    return;
  }
  return;
}

// StaticRegisterNativesULightComponent @ 1478f7fd0

void __cdecl ULightComponent::StaticRegisterNativesULightComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1e;
  local_18.DataPtr = Z_Construct_UClass_ULightComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateColorAndBrightness @ 1478fb0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULightComponent::UpdateColorAndBrightness(ULightComponent *this)

{
  bool bVar1;
  char cVar2;
  UWorld *pUVar3;
  
  pUVar3 = (UWorld *)this->_padding_;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar3 == (UWorld *)0x0) goto LAB_1478fb147;
  }
  if (pUVar3->Scene == (FSceneInterface *)0x0) goto LAB_1478fb147;
  if (0.0 < *(float *)((longlong)&this->_padding_ + 4)) {
LAB_1478fb130:
    bVar1 = true;
  }
  else {
    cVar2 = (**(code **)(this->_padding_ + 0x680))(this);
    if (cVar2 == '\x03') goto LAB_1478fb130;
    bVar1 = false;
  }
  if (this->bAddedToSceneVisible == 0) {
    if (!bVar1) goto LAB_1478fb147;
  }
  else if (bVar1) {
    (**(code **)(pUVar3->Scene->_padding_ + 0x260))(pUVar3->Scene,this);
    goto LAB_1478fb147;
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
LAB_1478fb147:
  TMulticastDelegate<void___cdecl(ULightComponent_&),FDefaultDelegateUserPolicy>::Broadcast
            (&UpdateColorAndBrightnessEvent,this);
  return;
}

// UpdateProxy @ 1478fe1f0

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
ULightComponent::UpdateProxy
          (ULightComponent *this,TFunction<void___cdecl(FLightSceneProxy_*)> *param_1)

{
  FSceneInterface *pFVar1;
  UWorld *pUVar2;
  
  if (this->SceneProxy != (FLightSceneProxy *)0x0) {
    pUVar2 = (UWorld *)this->_padding_;
    if ((pUVar2 == (UWorld *)0x0) &&
       (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar2 == (UWorld *)0x0)) {
      return;
    }
    pFVar1 = pUVar2->Scene;
    if (pFVar1 != (FSceneInterface *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x268))(pFVar1,this,param_1);
    }
  }
  return;
}

// execSetAffectTranslucentLighting @ 1479085a0

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
ULightComponent::execSetAffectTranslucentLighting(UObject *param_1,FFrame *param_2,void *param_3)

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
     ((*(uint *)&param_1[0xf].field_0x24 >> 4 & 1) != (uint)bVar3)) {
    *(uint *)&param_1[0xf].field_0x24 =
         *(uint *)&param_1[0xf].field_0x24 & 0xffffffef | (uint)bVar3 << 4;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetBloomMaxBrightness @ 1479091d0

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
ULightComponent::execSetBloomMaxBrightness(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)&param_1[0x14].field_0x14)) {
    *(float *)&param_1[0x14].field_0x14 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetBloomScale @ 147909290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULightComponent::execSetBloomScale(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)&param_1[0x14].field_0xc)) {
    *(float *)&param_1[0x14].field_0xc = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetBloomThreshold @ 147909350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULightComponent::execSetBloomThreshold(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)&param_1[0x14].field_0x10)) {
    *(float *)&param_1[0x14].field_0x10 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetBloomTint @ 147909410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULightComponent::execSetBloomTint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [6];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (*(int *)&param_1[0x14].field_0x18 != local_res10[0])) {
    *(int *)&param_1[0x14].field_0x18 = local_res10[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetDiffuseScale @ 14790b990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULightComponent::execSetDiffuseScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
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
  fVar3 = local_res10[0];
  if (__real_3f800000 <= local_res10[0]) {
    fVar3 = __real_3f800000;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar3 != *(float *)&param_1[0x11].field_0x10)) {
    *(float *)&param_1[0x11].field_0x10 = fVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetEnableLightShaftBloom @ 14790c0d0

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
ULightComponent::execSetEnableLightShaftBloom(UObject *param_1,FFrame *param_2,void *param_3)

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
    if ((*(uint *)&param_1[0x14].field_0x8 & 1) != (uint)bVar3) {
      *(uint *)&param_1[0x14].field_0x8 =
           *(uint *)&param_1[0x14].field_0x8 & 0xfffffffe | (uint)bVar3;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    }
  }
  return;
}

// execSetForceCachedShadowsForMovablePrimitives @ 14790d250

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
ULightComponent::execSetForceCachedShadowsForMovablePrimitives
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
     ((*(uint *)&param_1[0x12].field_0xc >> 3 & 1) != (uint)bVar3)) {
    *(uint *)&param_1[0x12].field_0xc =
         *(uint *)&param_1[0x12].field_0xc & 0xfffffff7 | (uint)bVar3 * 8;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetIESBrightnessScale @ 14790dce0

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
ULightComponent::execSetIESBrightnessScale(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)&param_1[0x13].field_0x24)) {
    *(float *)&param_1[0x13].field_0x24 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetIESTexture @ 14790dda0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULightComponent::execSetIESTexture(UObject *param_1,FFrame *param_2,void *param_3)

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
    if (*(UObject **)&param_1[0x13].field_0x18 == (UObject *)0x0) {
      bVar3 = pUVar2 == (UObject *)0x0;
    }
    else {
      bVar3 = *(UObject **)&param_1[0x13].field_0x18 == pUVar2;
    }
    if (!bVar3) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(UObject **)&param_1[0x13].field_0x18 = pUVar2;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    }
  }
  return;
}

// execSetIndirectLightingIntensity @ 14790df20

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
ULightComponent::execSetIndirectLightingIntensity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSceneInterface *pFVar2;
  float fVar3;
  bool bVar4;
  UWorld *pUVar5;
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
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if (((!bVar4) && ((param_1[3].field_0x20 & 1) != 0)) && (param_1[10].field_0x1b == '\0')) {
    return;
  }
  if (fVar3 != *(float *)&param_1[0x10].field_0xc) {
    pUVar5 = *(UWorld **)&param_1[4].field_0x10;
    *(float *)&param_1[0x10].field_0xc = fVar3;
    if (((pUVar5 != (UWorld *)0x0) ||
        (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
        pUVar5 != (UWorld *)0x0)) && (pFVar2 = pUVar5->Scene, pFVar2 != (FSceneInterface *)0x0)) {
      (**(code **)(pFVar2->_padding_ + 0x260))(pFVar2,param_1);
    }
    TMulticastDelegate<void___cdecl(ULightComponent_&),FDefaultDelegateUserPolicy>::Broadcast
              (&UpdateColorAndBrightnessEvent,(ULightComponent *)param_1);
    return;
  }
  return;
}

// execSetIntensity @ 14790e250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULightComponent::execSetIntensity(UObject *param_1,FFrame *param_2,void *param_3)

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
    UpdateColorAndBrightness((ULightComponent *)param_1);
  }
  return;
}

// execSetLightColor @ 14790e5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl ULightComponent::execSetLightColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FColor_u_0 local_res10;
  int local_res20 [2];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
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
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_18._s_0.R = local_28;
  local_18._s_0.G = fStack_24;
  local_18._s_0.B = fStack_20;
  local_18._s_0.A = fStack_1c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20[0] == 0) {
    if (fStack_20 <= 0.0) {
      fStack_20 = 0.0;
    }
    if (__real_3f800000 <= fStack_20) {
      fStack_20 = __real_3f800000;
    }
    if (fStack_24 <= 0.0) {
      fStack_24 = 0.0;
    }
    if (__real_3f800000 <= fStack_24) {
      fStack_24 = __real_3f800000;
    }
    if (local_28 <= 0.0) {
      local_28 = 0.0;
    }
    local_res10._s_0.G = (char)(int)(fStack_24 * __real_437f0000 + __real_3f000000);
    local_res10._s_0.B = (char)(int)(fStack_20 * __real_437f0000 + __real_3f000000);
    if (fStack_1c <= 0.0) {
      fStack_1c = 0.0;
    }
    if (__real_3f800000 <= local_28) {
      local_28 = __real_3f800000;
    }
    if (__real_3f800000 <= fStack_1c) {
      fStack_1c = __real_3f800000;
    }
    local_res10._s_0.R = (char)(int)(local_28 * __real_437f0000 + __real_3f000000);
    local_res10._s_0.A = (char)(int)(fStack_1c * __real_437f0000 + __real_3f000000);
  }
  else {
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_18._s_0);
  }
  SetLightFColor((ULightComponent *)param_1,(FColor)local_res10);
  return;
}

// execSetLightFColor @ 14790e740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl ULightComponent::execSetLightFColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FColor_u_0 local_res10 [6];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLightFColor((ULightComponent *)param_1,(FColor)local_res10[0]);
  return;
}

// execSetLightFunctionDisabledBrightness @ 14790e880

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
ULightComponent::execSetLightFunctionDisabledBrightness
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
     (fVar2 != *(float *)&param_1[0x14].field_0x4)) {
    *(float *)&param_1[0x14].field_0x4 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetLightFunctionFadeDistance @ 14790e940

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
ULightComponent::execSetLightFunctionFadeDistance(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)(param_1 + 0x14))) {
    *(float *)(param_1 + 0x14) = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetLightFunctionMaterial @ 14790ea00

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
ULightComponent::execSetLightFunctionMaterial(UObject *param_1,FFrame *param_2,void *param_3)

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
    if (*(UObject **)&param_1[0x12].field_0x20 == (UObject *)0x0) {
      bVar3 = pUVar2 == (UObject *)0x0;
    }
    else {
      bVar3 = *(UObject **)&param_1[0x12].field_0x20 == pUVar2;
    }
    if (!bVar3) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(UObject **)&param_1[0x12].field_0x20 = pUVar2;
      if (*(FLightSceneProxy **)(param_1 + 0x15) != (FLightSceneProxy *)0x0) {
        FLightSceneProxy::SetLightFunctionMaterial_GameThread
                  (*(FLightSceneProxy **)(param_1 + 0x15),(ULightComponent *)param_1);
      }
    }
  }
  return;
}

// execSetLightFunctionScale @ 14790eaf0

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
ULightComponent::execSetLightFunctionScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  double local_68;
  double dStack_60;
  double local_58;
  double local_38;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_38 = local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (((local_68 != *(double *)(param_1 + 0x13) ||
       (dStack_60 != *(double *)&param_1[0x13].field_0x8)) ||
      (local_38 != *(double *)&param_1[0x13].field_0x10)))) {
    *(double *)(param_1 + 0x13) = local_68;
    *(double *)&param_1[0x13].field_0x8 = dStack_60;
    *(double *)&param_1[0x13].field_0x10 = local_58;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetLightingChannels @ 14790f0a0

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
ULightComponent::execSetLightingChannels(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  int local_res20 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = param_1[0x12].field_0x1c;
  if (((bVar3 != (bool)(bVar1 & 1)) || (bVar4 != (bool)(bVar1 >> 1 & 1))) ||
     ((local_res20[0] != 0) != (bool)(bVar1 >> 2 & 1))) {
    param_1[0x12].field_0x1c = bVar1 & 0xf8 | bVar3 | bVar4 * '\x02' | (local_res20[0] != 0) << 2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetMaxDistanceFadeRange @ 14790f990

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
ULightComponent::execSetMaxDistanceFadeRange(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)&param_1[0x10].field_0x20)) {
    *(float *)&param_1[0x10].field_0x20 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetMaxDrawDistance @ 14790fa50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULightComponent::execSetMaxDrawDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
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
  fVar3 = local_res10[0];
  if (local_res10[0] <= 0.0) {
    fVar3 = 0.0;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar3 != *(float *)&param_1[0x10].field_0x1c)) {
    *(float *)&param_1[0x10].field_0x1c = fVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetShadowBias @ 147911810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULightComponent::execSetShadowBias(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)&param_1[0x11].field_0x18)) {
    *(float *)&param_1[0x11].field_0x18 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetShadowSlopeBias @ 147911a10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULightComponent::execSetShadowSlopeBias(UObject *param_1,FFrame *param_2,void *param_3)

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
     (fVar2 != *(float *)&param_1[0x11].field_0x1c)) {
    *(float *)&param_1[0x11].field_0x1c = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetSpecularScale @ 147912120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULightComponent::execSetSpecularScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
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
  fVar3 = local_res10[0];
  if (__real_3f800000 <= local_res10[0]) {
    fVar3 = __real_3f800000;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar3 != *(float *)&param_1[0x11].field_0xc)) {
    *(float *)&param_1[0x11].field_0xc = fVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetTemperature @ 1479124b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULightComponent::execSetTemperature(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSceneInterface *pFVar2;
  float fVar3;
  bool bVar4;
  UWorld *pUVar5;
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
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if (((!bVar4) && ((param_1[3].field_0x20 & 1) != 0)) && (param_1[10].field_0x1b == '\0')) {
    return;
  }
  if (fVar3 != *(float *)&param_1[0x10].field_0x18) {
    pUVar5 = *(UWorld **)&param_1[4].field_0x10;
    *(float *)&param_1[0x10].field_0x18 = fVar3;
    if (((pUVar5 != (UWorld *)0x0) ||
        (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
        pUVar5 != (UWorld *)0x0)) && (pFVar2 = pUVar5->Scene, pFVar2 != (FSceneInterface *)0x0)) {
      (**(code **)(pFVar2->_padding_ + 0x260))(pFVar2,param_1);
    }
    TMulticastDelegate<void___cdecl(ULightComponent_&),FDefaultDelegateUserPolicy>::Broadcast
              (&UpdateColorAndBrightnessEvent,(ULightComponent *)param_1);
    return;
  }
  return;
}

// execSetTransmission @ 1479127c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULightComponent::execSetTransmission(UObject *param_1,FFrame *param_2,void *param_3)

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
     ((*(uint *)&param_1[0xf].field_0x24 >> 5 & 1) != (uint)bVar3)) {
    *(uint *)&param_1[0xf].field_0x24 =
         *(uint *)&param_1[0xf].field_0x24 & 0xffffffdf | (uint)bVar3 << 5;
    if (*(FLightSceneProxy **)(param_1 + 0x15) != (FLightSceneProxy *)0x0) {
      FLightSceneProxy::SetTransmission_GameThread
                (*(FLightSceneProxy **)(param_1 + 0x15),(ULightComponent *)param_1);
    }
  }
  return;
}

// execSetUseIESBrightness @ 147912ac0

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
ULightComponent::execSetUseIESBrightness(UObject *param_1,FFrame *param_2,void *param_3)

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
    if ((*(uint *)&param_1[0x13].field_0x20 & 1) != (uint)bVar3) {
      *(uint *)&param_1[0x13].field_0x20 =
           *(uint *)&param_1[0x13].field_0x20 & 0xfffffffe | (uint)bVar3;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    }
  }
  return;
}

// execSetUseRayTracedDistanceFieldShadows @ 147912d60

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
ULightComponent::execSetUseRayTracedDistanceFieldShadows
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  char cVar3;
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
  if (((local_res10[0] != 0) && (((byte)*(undefined4 *)&param_1[0xf].field_0x24 & 10) == 10)) &&
     (param_1[10].field_0x1b != '\0')) {
    bVar2 = DoesProjectSupportDistanceFields();
    if (bVar2) {
      cVar3 = '\x01';
      goto LAB_147912df5;
    }
  }
  cVar3 = '\0';
LAB_147912df5:
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (cVar3 != param_1[0x14].field_0x1c)) {
    param_1[0x14].field_0x1c = cVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetUseTemperature @ 147912e40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULightComponent::execSetUseTemperature(UObject *param_1,FFrame *param_2,void *param_3)

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
    if ((*(uint *)&param_1[0x10].field_0x24 & 1) != (uint)bVar3) {
      *(uint *)&param_1[0x10].field_0x24 =
           *(uint *)&param_1[0x10].field_0x24 & 0xfffffffe | (uint)bVar3;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    }
  }
  return;
}

// execSetVolumetricScatteringIntensity @ 147913b00

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
ULightComponent::execSetVolumetricScatteringIntensity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSceneInterface *pFVar2;
  float fVar3;
  bool bVar4;
  UWorld *pUVar5;
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
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if (((!bVar4) && ((param_1[3].field_0x20 & 1) != 0)) && (param_1[10].field_0x1b == '\0')) {
    return;
  }
  if (fVar3 != *(float *)&param_1[0x10].field_0x10) {
    pUVar5 = *(UWorld **)&param_1[4].field_0x10;
    *(float *)&param_1[0x10].field_0x10 = fVar3;
    if (((pUVar5 != (UWorld *)0x0) ||
        (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
        pUVar5 != (UWorld *)0x0)) && (pFVar2 = pUVar5->Scene, pFVar2 != (FSceneInterface *)0x0)) {
      (**(code **)(pFVar2->_padding_ + 0x260))(pFVar2,param_1);
    }
    TMulticastDelegate<void___cdecl(ULightComponent_&),FDefaultDelegateUserPolicy>::Broadcast
              (&UpdateColorAndBrightnessEvent,(ULightComponent *)param_1);
    return;
  }
  return;
}

