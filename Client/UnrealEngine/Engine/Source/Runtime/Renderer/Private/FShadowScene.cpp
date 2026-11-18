// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// InitExtension @ 1455fa5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FShadowScene::InitExtension(FShadowScene *this,FScene *param_1)

{
  return;
}

// CreateUpdater @ 1455fa5d0

ISceneExtensionUpdater * __thiscall FShadowScene::CreateUpdater(FShadowScene *this)

{
  ISceneExtensionUpdater *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (ISceneExtensionUpdater *)0x0) {
    pIVar1[1] = (ISceneExtensionUpdater)this;
    *pIVar1 = (ISceneExtensionUpdater)&___7FUpdater_FShadowScene__6B_;
    return pIVar1;
  }
  return (ISceneExtensionUpdater *)0x0;
}

// CreateRenderer @ 1455fa610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ISceneExtensionRenderer * __thiscall
FShadowScene::CreateRenderer
          (FShadowScene *this,FSceneRendererBase *param_1,FEngineShowFlags *param_2)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  FSceneRendererBase *pFVar4;
  ISceneExtensionRenderer *pIVar5;
  longlong lVar6;
  
  pFVar4 = (FSceneRendererBase *)(**(code **)(param_1->_padding_ + 0x38))(param_1);
  if (pFVar4 == (FSceneRendererBase *)0x0) {
    return (ISceneExtensionRenderer *)0x0;
  }
  pIVar5 = ::operator_new(200);
  if (pIVar5 == (ISceneExtensionRenderer *)0x0) {
    return (ISceneExtensionRenderer *)0x0;
  }
  pIVar5->SceneRendererInternal = pFVar4;
  pIVar5->_padding_ = (longlong)&___7FShadowSceneRenderer__6B_;
  pIVar5[1]._padding_ = 0;
  pIVar5[1].SceneRendererInternal = (FSceneRendererBase *)0x0;
  pIVar5[2]._padding_ = 0;
  pIVar5[2].SceneRendererInternal = (FSceneRendererBase *)0x0;
  pIVar5[3]._padding_ = 0;
  pIVar5[3].SceneRendererInternal = (FSceneRendererBase *)0x0;
  pIVar5[4]._padding_ = 0;
  pIVar5[4].SceneRendererInternal = (FSceneRendererBase *)0x0;
  pIVar5[5]._padding_ = 0;
  pIVar5[5].SceneRendererInternal = (FSceneRendererBase *)0x0;
  pIVar5[6]._padding_ = (longlong)pFVar4;
  pIVar5[6].SceneRendererInternal = (FSceneRendererBase *)this->_padding_;
  pIVar5[7].SceneRendererInternal = (FSceneRendererBase *)&pFVar4[10].SceneExtensionsRenderers;
  pIVar5[7]._padding_ = (longlong)this;
  pIVar5[8]._padding_ = 0;
  pIVar5[8].SceneRendererInternal = (FSceneRendererBase *)0x0;
  pIVar5[9]._padding_ = 0;
  pIVar5[9].SceneRendererInternal = (FSceneRendererBase *)0x0;
  pIVar5[10]._padding_ = 0;
  *(undefined1 *)&pIVar5[10].SceneRendererInternal = 0;
  pTVar2 = CVarUseConservativeDistantLightThreshold.Ref;
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_1455fa6ed:
    lVar6 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    lVar6 = 1;
    if (bVar3) goto LAB_1455fa6ed;
  }
  *(bool *)((longlong)&pIVar5[10].SceneRendererInternal + 1) = pTVar2->ShadowedValue[lVar6];
  pTVar1 = CVarDistantLightMode.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar6 = 4;
    if (!bVar3) goto LAB_1455fa71b;
  }
  lVar6 = 0;
LAB_1455fa71b:
  *(undefined4 *)((longlong)&pIVar5[10].SceneRendererInternal + 4) =
       *(undefined4 *)((longlong)pTVar1->ShadowedValue + lVar6);
  *(undefined2 *)&pIVar5[0xb]._padding_ = 0;
  pIVar5[0xb].SceneRendererInternal = (FSceneRendererBase *)0x0;
  pIVar5[0xc]._padding_ = 0;
  return pIVar5;
}

// DebugRender @ 14562ae20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FShadowScene::DebugRender(FShadowScene *this,TArrayView<FViewInfo,int> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  FTaskBase *this_00;
  longlong *plVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  TVector<double>_u_0 *pTVar15;
  FViewInfo *pFVar16;
  int iVar17;
  FViewInfo *pFVar18;
  ForElementType<unsigned_int> FVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar33;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auStackY_1f8 [32];
  FLinearColor_u_0 local_198;
  ForElementType<unsigned_int> local_188;
  FViewInfo *local_180;
  FPrimitiveDrawInterface local_178;
  FViewInfo *local_168;
  undefined8 *local_160;
  undefined8 uStack_158;
  FGPUScenePrimitiveCollector *local_150;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  pTVar9 = CVarDebugDrawLightActiveStateTracking.Ref;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pTVar9->ShadowedValue[1] != 0) {
    this_00 = (this->SceneChangeUpdateTask).Pimpl.Reference;
    if (this_00 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(this_00);
    }
    fVar8 = __real_43480000;
    fVar7 = __real_42652ee0;
    fVar6 = __real_3b808081;
    fVar5 = __real_42c80000;
    pFVar16 = param_1->DataPtr;
    pFVar18 = pFVar16 + param_1->ArrayNum;
    if (pFVar16 != pFVar18) {
      local_188 = (ForElementType<unsigned_int>)&this->ActiveLights;
      local_180 = pFVar18;
      do {
        local_150 = &pFVar16->DynamicPrimitiveCollector;
        local_178._padding_ = (longlong)&___7FViewElementPDI__6B_;
        local_160 = (undefined8 *)0x0;
        uStack_158 = 0;
        iVar17 = 0;
        iVar21 = 0;
        uVar20 = *(uint *)((longlong)local_188 + 0x18);
        local_178.View = (FSceneView *)pFVar16;
        local_168 = pFVar16;
        if (uVar20 != 0) {
          FVar19 = local_188;
          if (*(ForElementType<unsigned_int> *)((longlong)local_188 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar19 = *(ForElementType<unsigned_int> *)((longlong)local_188 + 0x10);
          }
          uVar11 = *(uint *)FVar19;
          while (uVar11 == 0) {
            lVar13 = (longlong)iVar17;
            iVar21 = iVar21 + 0x20;
            iVar17 = iVar17 + 1;
            if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_14562b370;
            uVar11 = ((uint *)((longlong)FVar19 + 4))[lVar13];
          }
          uVar11 = -uVar11 & uVar11;
          uVar2 = (ulonglong)uVar11 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar14 = (int)lVar13 + -1 + iVar21;
          if (iVar14 < (int)uVar20) {
            uVar20 = 0xffffffff;
            do {
              lVar13 = *(longlong *)(this->_padding_ + 0x2a98);
              plVar3 = *(longlong **)(*(longlong *)((longlong)iVar14 * 0x40 + 0x30 + lVar13) + 0x28)
              ;
              fVar26 = GetLightMobilityFactor(this,iVar14);
              fVar27 = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
              auVar29 = ZEXT416((uint)fVar27);
              fVar35 = (float)FColor::Yellow.field0_0x0._3_1_ * fVar6;
              local_198._s_0.R =
                   (FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R] -
                   FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R]) * fVar26 +
                   FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
              local_198._s_0.G =
                   (FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G] - fVar27) *
                   fVar26 + fVar27;
              local_198._s_0.B =
                   (FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B] -
                   FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B]) * fVar26 +
                   FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
              local_198._s_0.A =
                   ((float)FColor::Blue.field0_0x0._3_1_ * fVar6 - fVar35) * fVar26 + fVar35;
              uVar12 = *(uint *)((longlong)iVar14 * 0x40 + 0x38 + lVar13) & 3;
              if (uVar12 == 0) {
                fVar27 = (float)(**(code **)(*plVar3 + 0x18))(plVar3);
                local_130._s_0.X = (double)plVar3[0x26];
                local_130._s_0.Y = (double)plVar3[0x27];
                if (fVar5 <= fVar27) {
                  fVar27 = fVar5;
                }
                local_130._s_0.Z = (double)plVar3[0x28];
                DrawWireSphereAutoSides
                          (&local_178,(TVector<double> *)&local_130._s_0,
                           (FLinearColor *)&local_198._s_0,(double)fVar27,'\0',0.0,0.0,false);
                fVar27 = (float)(**(code **)(*plVar3 + 0x18))(plVar3);
                local_118._s_0.X = (double)plVar3[0x26];
                local_118._s_0.Y = (double)plVar3[0x27];
                pTVar15 = &local_118;
                if (fVar8 <= fVar27) {
                  fVar27 = fVar8;
                }
                local_118._s_0.Z = (double)plVar3[0x28];
LAB_14562b2c0:
                DrawWireSphereAutoSides
                          (&local_178,(TVector<double> *)&pTVar15->_s_0,
                           (FLinearColor *)&local_198._s_0,(double)fVar27,'\0',0.0,0.0,false);
              }
              else {
                if (uVar12 != 2) {
                  fVar27 = (float)(**(code **)(*plVar3 + 0x18))(plVar3);
                  local_148._s_0.X = (double)plVar3[4];
                  local_148._s_0.Y = (double)plVar3[5];
                  pTVar15 = &local_148;
                  local_148._s_0.Z = (double)plVar3[6];
                  goto LAB_14562b2c0;
                }
                UE::Math::TTransform<double>::SetFromMatrix
                          (&local_f8,(TMatrix<double> *)(plVar3 + 0x1a));
                local_f8.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_f8.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_f8.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_f8.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                dVar31 = local_f8.Rotation.XY.m128d_f64[0] * local_f8.Rotation.XY.m128d_f64[0] +
                         local_f8.Rotation.ZW.m128d_f64[0] * local_f8.Rotation.ZW.m128d_f64[0];
                dVar33 = local_f8.Rotation.XY.m128d_f64[1] * local_f8.Rotation.XY.m128d_f64[1] +
                         local_f8.Rotation.ZW.m128d_f64[1] * local_f8.Rotation.ZW.m128d_f64[1];
                auVar34._8_4_ = SUB84(dVar33,0);
                auVar34._0_8_ = dVar31;
                auVar34._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
                auVar28._0_8_ = auVar34._8_8_ + dVar31;
                auVar28._8_8_ = dVar31 + dVar33;
                uVar22 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                          auVar28._0_8_);
                uVar24 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                          auVar28._8_8_);
                auVar34 = sqrtpd(auVar29,auVar28);
                uVar23 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                          auVar28._0_8_);
                uVar25 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                          auVar28._8_8_);
                auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                auVar34);
                auVar30._0_8_ =
                     (ulonglong)(auVar29._0_8_ * local_f8.Rotation.XY.m128d_f64[0]) & uVar22;
                uVar2 = uVar24 & (ulonglong)(auVar29._8_8_ * local_f8.Rotation.XY.m128d_f64[1]);
                auVar30._8_4_ = (undefined4)uVar2;
                auVar30._12_4_ = (undefined4)(uVar2 >> 0x20);
                auVar29._0_4_ =
                     ~(uint)uVar22 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
                auVar29._4_4_ =
                     ~(uint)(uVar22 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                auVar29._8_4_ =
                     ~(uint)uVar24 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
                auVar29._12_4_ =
                     ~(uint)(uVar24 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                local_f8.Rotation.XY.m128d_f64 = (double  [2])(auVar30 | auVar29);
                auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                auVar34);
                auVar32._0_8_ =
                     (ulonglong)(auVar29._0_8_ * local_f8.Rotation.ZW.m128d_f64[0]) & uVar23;
                uVar2 = uVar25 & (ulonglong)(auVar29._8_8_ * local_f8.Rotation.ZW.m128d_f64[1]);
                auVar32._8_4_ = (undefined4)uVar2;
                auVar32._12_4_ = (undefined4)(uVar2 >> 0x20);
                auVar36._0_4_ =
                     ~(uint)uVar23 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                auVar36._4_4_ =
                     ~(uint)(uVar23 >> 0x20) &
                     GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                auVar36._8_4_ =
                     ~(uint)uVar25 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                auVar36._12_4_ =
                     ~(uint)(uVar25 >> 0x20) &
                     GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                local_f8.Rotation.ZW.m128d_f64 = (double  [2])(auVar32 | auVar36);
                fVar27 = (float)(**(code **)(*plVar3 + 0x20))(plVar3);
                fVar26 = (float)(**(code **)(*plVar3 + 0x18))(plVar3);
                DrawWireSphereCappedCone
                          (&local_178,&local_f8,(double)fVar26,(double)(fVar27 * fVar7),0x10,4,8,
                           (FLinearColor *)&local_198._s_0,'\0');
              }
              uVar20 = ~uVar11 & uVar20;
              uVar12 = *(uint *)((longlong)local_188 + 0x18);
              FVar19 = local_188;
              if (*(ForElementType<unsigned_int> *)((longlong)local_188 + 0x10) !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar19 = *(ForElementType<unsigned_int> *)((longlong)local_188 + 0x10);
              }
              uVar11 = uVar20 & *(uint *)((longlong)FVar19 + (longlong)iVar17 * 4);
              while (pFVar18 = local_180, uVar11 == 0) {
                lVar13 = (longlong)iVar17;
                iVar21 = iVar21 + 0x20;
                iVar17 = iVar17 + 1;
                if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
                goto LAB_14562b370;
                uVar20 = 0xffffffff;
                uVar11 = ((uint *)((longlong)FVar19 + 4))[lVar13];
              }
              uVar11 = -uVar11 & uVar11;
              uVar2 = (ulonglong)uVar11 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar14 = (int)lVar13 + -1 + iVar21;
            } while ((iVar14 <= (int)uVar12) && (iVar14 < (int)uVar12));
          }
        }
LAB_14562b370:
        if (local_160 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_160 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_160)(local_160,1);
          }
        }
        pFVar16 = pFVar16 + 1;
      } while (pFVar16 != pFVar18);
    }
  }
  return;
}

// GetLightMobilityFactor @ 145636580

float __thiscall FShadowScene::GetLightMobilityFactor(FShadowScene *this,int param_1)

{
  FTaskBase *this_00;
  code *pcVar1;
  bool bVar2;
  ForElementType<unsigned_int> FVar3;
  float fVar4;
  
  this_00 = (this->SceneChangeUpdateTask).Pimpl.Reference;
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(this_00);
  }
  if ((param_1 < 0) || ((this->ActiveLights).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  FVar3 = (this->ActiveLights).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<unsigned_int>)0x0) {
    FVar3 = (ForElementType<unsigned_int>)&this->ActiveLights;
  }
  if ((*(uint *)((longlong)FVar3 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4)
       >> (param_1 & 0x1fU) & 1) != 0) {
    return *(float *)(*(longlong *)&this->LightsCommonData + 4 + (longlong)param_1 * 8);
  }
  return 0.0;
}

// ShouldCreateExtension @ 145648460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl FShadowScene::ShouldCreateExtension(FScene *param_1)

{
  return true;
}

// UpdateForRenderedFrame @ 14564a990

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FShadowScene::UpdateForRenderedFrame(FShadowScene *this,FRDGBuilder *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  int iVar3;
  FTaskBase *this_00;
  FName FVar4;
  code *pcVar5;
  uint uVar6;
  float fVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ActiveLightCount> FVar13;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ForElementType<unsigned_int> FVar20;
  ForElementType<unsigned_int> FVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  float fVar26;
  FName local_78;
  FName local_70;
  FStatMessage local_68 [3];
  
  this_00 = (this->SceneChangeUpdateTask).Pimpl.Reference;
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(this_00);
  }
  pTVar8 = CVarShadowSceneLightActiveFrameCount.Ref;
  bVar9 = IsInParallelRenderingThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar7 = __real_3f800000;
  pTVar1 = &this->ActiveLights;
  iVar24 = (this->ActiveLights).NumBits;
  iVar11 = pTVar8->ShadowedValue[1];
  if (pTVar8->ShadowedValue[1] < 1) {
    iVar11 = 1;
  }
  iVar17 = 0;
  iVar18 = 0;
  iVar3 = *(int *)(this->_padding_ + 0x508c);
  if (iVar24 != 0) {
    FVar20 = (this->ActiveLights).AllocatorInstance.SecondaryData;
    if (FVar20 == (ForElementType<unsigned_int>)0x0) {
      FVar20 = (ForElementType<unsigned_int>)pTVar1;
    }
    uVar10 = *(uint *)FVar20;
    while (uVar10 == 0) {
      lVar14 = (longlong)iVar17;
      iVar18 = iVar18 + 0x20;
      iVar17 = iVar17 + 1;
      if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14564ac41;
      uVar10 = *(uint *)((uchar *)((longlong)FVar20 + 4) + lVar14 * 4);
    }
    uVar10 = -uVar10 & uVar10;
    uVar22 = (ulonglong)uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar19 = iVar18 + -1 + (int)lVar14;
    if (iVar19 < iVar24) {
      uVar23 = 0xffffffff;
      do {
        lVar14 = *(longlong *)&this->LightsCommonData;
        lVar25 = (longlong)iVar19;
        iVar24 = *(int *)(lVar14 + lVar25 * 8);
        if (iVar24 == -1) {
          *(int *)(lVar14 + lVar25 * 8) = iVar3;
          fVar26 = fVar7;
        }
        else {
          iVar24 = iVar3 - iVar24;
          if (iVar24 < iVar11) {
            fVar26 = (float)iVar24 / (float)iVar11;
            if (fVar7 <= fVar26) {
              fVar26 = fVar7;
            }
            if (fVar26 <= 0.0) {
              fVar26 = 0.0;
            }
            fVar26 = fVar7 - fVar26;
          }
          else {
            if (((iVar19 < 0) || ((this->ActiveLights).NumBits <= iVar19)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar20 = (this->ActiveLights).AllocatorInstance.SecondaryData;
            FVar21 = (ForElementType<unsigned_int>)pTVar1;
            if (FVar20 != (ForElementType<unsigned_int>)0x0) {
              FVar21 = FVar20;
            }
            iVar24 = iVar19;
            if (iVar19 < 0) {
              iVar24 = iVar19 + 0x1f;
            }
            fVar26 = 0.0;
            puVar2 = (uint *)((longlong)FVar21 + (longlong)(iVar24 >> 5) * 4);
            *puVar2 = *puVar2 & ~(1 << ((byte)iVar19 & 0x1f));
          }
        }
        *(float *)(lVar14 + 4 + lVar25 * 8) = fVar26;
        FVar20 = (this->ActiveLights).AllocatorInstance.SecondaryData;
        uVar23 = uVar23 & ~uVar10;
        iVar24 = (this->ActiveLights).NumBits;
        FVar21 = (ForElementType<unsigned_int>)pTVar1;
        if (FVar20 != (ForElementType<unsigned_int>)0x0) {
          FVar21 = FVar20;
        }
        uVar16 = uVar23 & *(uint *)((longlong)FVar21 + (longlong)iVar17 * 4);
        while (uVar16 == 0) {
          lVar14 = (longlong)iVar17;
          iVar18 = iVar18 + 0x20;
          iVar17 = iVar17 + 1;
          iVar19 = iVar24;
          if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14564ac25;
          uVar23 = 0xffffffff;
          uVar16 = *(uint *)((uchar *)((longlong)FVar21 + 4) + lVar14 * 4);
        }
        uVar10 = -uVar16 & uVar16;
        uVar22 = (ulonglong)uVar10 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar19 = (int)lVar14 + -1 + iVar18;
        if (iVar24 < iVar19) {
          iVar19 = iVar24;
        }
LAB_14564ac25:
      } while (iVar19 < (this->ActiveLights).NumBits);
    }
  }
LAB_14564ac41:
  iVar24 = 0;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar13 = StatPtr_STAT_ActiveLightCount;
    if (StatPtr_STAT_ActiveLightCount == (FThreadSafeStaticStat<FStat_STAT_ActiveLightCount>)0x0) {
      pFVar12 = ::FName::FName(&local_70,"STAT_ActiveLightCount");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_ActiveLightCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ActiveLightCount,*pFVar12,
                          L"Active Light Count","STATGROUP_ShadowRendering","STATCAT_Advanced",
                          L"Shadow Rendering",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar4 = *(FName *)FVar13;
    uVar22 = 0;
    FVar20 = (this->ActiveLights).AllocatorInstance.SecondaryData;
    uVar10 = (this->ActiveLights).NumBits;
    if (FVar20 == (ForElementType<unsigned_int>)0x0) {
      FVar20 = (ForElementType<unsigned_int>)&this->ActiveLights;
    }
    iVar11 = uVar10 + 0x1f;
    iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5;
    uVar10 = uVar10 & 0x8000001f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
    }
    uVar23 = 0xffffffff >> ((byte)(0x20 - uVar10) & 0x1f);
    if (0x1f < (int)(0x20 - uVar10)) {
      uVar23 = 0xffffffff;
    }
    uVar10 = 0xffffffff;
    if (iVar11 == 1) {
      uVar10 = uVar23;
    }
    if (0 < iVar11) {
      do {
        uVar16 = *(uint *)((longlong)FVar20 + uVar22 * 4);
        uVar6 = uVar16 & uVar10;
        if (uVar10 == 0xffffffff) {
          uVar6 = uVar16;
        }
        uVar16 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar16;
        uVar15 = (ulonglong)uVar6 - ((ulonglong)(uVar6 >> 1) & 0x5555555555555555);
        uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
        iVar24 = iVar24 + (uint)(byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) *
                                       0x101010101010101 >> 0x38);
        uVar10 = 0xffffffff;
        if (uVar16 == iVar11 - 1U) {
          uVar10 = uVar23;
        }
      } while ((int)uVar16 < iVar11);
    }
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_68[0].NameAndInfo.Number = FVar4.Number & 0xffff8fff | 0x8000;
      local_78 = FVar4;
      local_68[0].StatData.Pad = (uchar  [8])(longlong)iVar24;
      local_68[0].NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,local_68);
      FStatsTrace::Set(&local_78,(longlong)iVar24);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// WaitForSceneLightsUpdateTask @ 14564c630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShadowScene::WaitForSceneLightsUpdateTask(FShadowScene *this)

{
  EExtendedTaskPriority EVar1;
  FTaskBase *this_00;
  Type TVar2;
  byte bVar3;
  bool bVar4;
  Type TVar5;
  FTaskGraphInterface *pFVar6;
  Type TVar7;
  bool bVar8;
  LARGE_INTEGER LStackX_10;
  LARGE_INTEGER aLStackX_18 [2];
  LARGE_INTEGER LStack_28;
  undefined8 uStack_20;
  
  this_00 = (this->SceneChangeUpdateTask).Pimpl.Reference;
  if (this_00 == (FTaskBase *)0x0) {
    return;
  }
  if (GTaskGraphAlwaysWaitWithNamedThreadSupport) {
LAB_141a99947:
    if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      bVar8 = CpuChannel->Enabled < 0;
      if (!bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId210,"FTaskBase::WaitWithNamedThreadsSupport",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                   ,0xd2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
      }
      TaskTrace::FWaitingScope::FWaitingScope
                ((FWaitingScope *)&LStackX_10.s,(ulong64)this_00->TraceId);
      QueryPerformanceCounter(aLStackX_18);
      LStack_28 = aLStackX_18[0];
      uStack_20 = 0xffffffffffffffff;
      UE::Tasks::Private::FTaskBase::TryRetractAndExecute(this_00,(FTimeout *)&LStack_28.s,0);
      if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
        bVar4 = UE::Tasks::Private::TryWaitOnNamedThread(this_00);
        if (!bVar4) {
          QueryPerformanceCounter(aLStackX_18);
          LStack_28 = aLStackX_18[0];
          uStack_20 = 0xffffffffffffffff;
          UE::Tasks::Private::FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
        }
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      else {
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  EVar1 = this_00->ExtendedPriority;
  if ('\x02' < (char)EVar1) {
    pFVar6 = FTaskGraphInterface::Get();
    bVar3 = (**(code **)((longlong)*pFVar6 + 0x10))(pFVar6,0);
    TVar7 = AnyNormalThreadNormalTask;
    if (bVar3 != AnyNormalThreadNormalTask) {
      TVar7 = (uint)bVar3;
    }
    if (TVar7 < NumThreadPriorities) {
      TVar5 = UE::Tasks::Private::TranslatePriority(EVar1);
      TVar2 = AnyNormalThreadNormalTask;
      if ((TVar5 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar2 = TVar5 & AnyNormalThreadNormalTask;
      }
      if (TVar2 == TVar7) goto LAB_141a99947;
    }
  }
  QueryPerformanceCounter(&LStackX_10);
  LStack_28 = LStackX_10;
  uStack_20 = 0xffffffffffffffff;
  UE::Tasks::Private::FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
  return;
}

