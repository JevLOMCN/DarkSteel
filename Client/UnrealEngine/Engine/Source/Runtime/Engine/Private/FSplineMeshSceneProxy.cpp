// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// FSplineMeshSceneProxy @ 1479a4860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSplineMeshSceneProxy * __thiscall
`USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::FSplineMeshSceneProxy
          (void *this,USplineComponent *param_1)

{
  FInterpCurve<UE::Math::TVector<double>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  FLinearColor_u_0 *this_01;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  FColor FVar18;
  uint uVar19;
  FInterpCurveVector *pFVar20;
  undefined8 uVar21;
  FSplineMeshSceneProxy *pFVar22;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FRenderCommandList *pFVar23;
  FCommandList *pFVar24;
  FRenderCommandTag *pFVar25;
  undefined ***pppuVar26;
  uint uVar27;
  FLinearColor_u_0 *this_02;
  ulonglong uVar28;
  int iVar29;
  longlong lVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStackY_428 [32];
  longlong local_3f0;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  int local_3d0;
  FLinearColor_u_0 *local_3c8;
  undefined8 local_3c0;
  FSplineMeshSceneProxy *local_3b8;
  TVector<double>_u_0 local_3a0;
  void *local_388;
  undefined4 *local_380;
  undefined4 *local_378;
  void *local_370;
  undefined4 *local_368;
  undefined4 *local_360;
  double local_348;
  double local_340;
  TVector<double>_u_0 local_338;
  TVector<double>_u_0 local_318;
  TVector<double>_u_0 local_2f8;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_268;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  double dStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  double local_1d8;
  code *local_1c8 [2];
  undefined **local_1b8;
  FSplineMeshSceneProxy *pFStack_1b0;
  undefined8 local_1a8;
  undefined ***local_1a0;
  code *local_198 [2];
  undefined **local_188;
  FSplineMeshSceneProxy *pFStack_180;
  undefined8 local_178;
  undefined ***local_170;
  undefined1 local_168 [16];
  undefined **local_158;
  FSplineMeshSceneProxy *pFStack_150;
  undefined8 local_148;
  undefined ***local_140;
  byte local_138;
  undefined1 local_128 [16];
  undefined **local_118;
  FSplineMeshSceneProxy *pFStack_110;
  undefined8 local_108;
  undefined ***local_100;
  byte local_f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_3c0 = 0;
  local_3b8 = this;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy(this,(UPrimitiveComponent *)param_1,(FName)0x0);
  *(undefined ***)this = &CreateSceneProxy'::`2'::FSplineMeshSceneProxy::_vftable_;
  *(bool *)((longlong)this + 0x280) = param_1->bDrawDebug;
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar17 = FSpline::IsEnabledStatic(), bVar17)) {
    pFVar20 = FSpline::GetSplinePointsPosition(&param_1->Spline);
  }
  else {
    pFVar20 = &(param_1->SplineCurves).Position;
  }
  this_00 = (FInterpCurve<UE::Math::TVector<double>_> *)((longlong)this + 0x288);
  FInterpCurveVector::FInterpCurveVector((FInterpCurveVector *)this_00,pFVar20);
  local_3c8 = (FLinearColor_u_0 *)((longlong)this + 0x2a0);
  local_3c8->_s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(undefined8 *)((longlong)this + 0x2b0) = 0;
  *(undefined8 *)((longlong)this + 0x2b8) = 0;
  *(undefined8 *)((longlong)this + 0x2c0) = 0;
  FLocalVertexFactory::FLocalVertexFactory
            ((FLocalVertexFactory *)((longlong)this + 0x2c8),
             *(Type *)(*(longlong *)((longlong)this + 0x220) + 8),"FSplineProxyLineVertexFactory");
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer
            ((FStaticMeshVertexBuffer *)((longlong)this + 0x4f8));
  FPositionVertexBuffer::FPositionVertexBuffer((FPositionVertexBuffer *)((longlong)this + 0x5b0));
  FColorVertexBuffer::FColorVertexBuffer((FColorVertexBuffer *)((longlong)this + 0x600));
  FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32
            ((FDynamicMeshIndexBuffer32 *)((longlong)this + 0x650));
  *(undefined8 *)((longlong)this + 0x690) = 0;
  *(undefined8 *)((longlong)this + 0x698) = 0;
  *(undefined8 *)((longlong)this + 0x6a0) = 0;
  FLocalVertexFactory::FLocalVertexFactory
            ((FLocalVertexFactory *)((longlong)this + 0x6a8),
             *(Type *)(*(longlong *)((longlong)this + 0x220) + 8),"FSplineProxyPointVertexFactory");
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer
            ((FStaticMeshVertexBuffer *)((longlong)this + 0x8d8));
  FPositionVertexBuffer::FPositionVertexBuffer((FPositionVertexBuffer *)((longlong)this + 0x990));
  FColorVertexBuffer::FColorVertexBuffer((FColorVertexBuffer *)((longlong)this + 0x9e0));
  FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32
            ((FDynamicMeshIndexBuffer32 *)((longlong)this + 0xa30));
  if (__CsvProfilerStat2866 == false) {
    FCsvProfilerTrace::OutputInlineStat("FSplineSceneProxy_FSplineSceneProxy",0);
    __CsvProfilerStat2866 = true;
  }
  FCsvProfiler::BeginStat
            ("FSplineSceneProxy_FSplineSceneProxy",0,"CSV_FSplineSceneProxy_FSplineSceneProxy");
  iVar1 = *(int *)((longlong)this + 0x290);
  iVar31 = iVar1;
  if (*(char *)((longlong)this + 0x298) == '\0') {
    iVar31 = iVar1 + -1;
  }
  uVar27 = iVar1 * 4;
  iVar29 = 0;
  if (0 < iVar31) {
    iVar29 = iVar31;
  }
  uVar33 = iVar29 * 0x54;
  FPositionVertexBuffer::Init((FPositionVertexBuffer *)((longlong)this + 0x5b0),uVar33,true);
  FStaticMeshVertexBuffer::Init((FStaticMeshVertexBuffer *)((longlong)this + 0x4f8),uVar33,1,true);
  FColorVertexBuffer::Init((FColorVertexBuffer *)((longlong)this + 0x600),uVar33,true);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x678),
             iVar29 * 0x7e,Default);
  *(undefined4 *)((longlong)this + 0x2c0) = 0;
  local_3e0 = 0;
  local_3dc = 0;
  *(uint *)((longlong)this + 0x2c4) = uVar33 - 1;
  iVar31 = 0;
  *(undefined4 *)((longlong)this + 0x2b8) = 0;
  *(int *)((longlong)this + 700) = iVar29 * 0x2a;
  uVar21 = (**(code **)(((param_1->LineMaterialLifetimePtr).field0_0x0.DebugPtr)->_padding_ + 0x310)
           )();
  *(undefined8 *)((longlong)this + 0x2b0) = uVar21;
  FPositionVertexBuffer::Init((FPositionVertexBuffer *)((longlong)this + 0x990),uVar27,true);
  FStaticMeshVertexBuffer::Init((FStaticMeshVertexBuffer *)((longlong)this + 0x8d8),uVar27,1,true);
  FColorVertexBuffer::Init((FColorVertexBuffer *)((longlong)this + 0x9e0),uVar27,true);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0xa58),iVar1 * 6,
             Default);
  *(undefined4 *)((longlong)this + 0x6a0) = 0;
  *(uint *)((longlong)this + 0x6a4) = uVar27 - 1;
  *(int *)((longlong)this + 0x69c) = iVar1 * 2;
  *(undefined4 *)((longlong)this + 0x698) = 0;
  local_3d8 = 0;
  local_3d4 = 0;
  uVar21 = (**(code **)(((param_1->PointMaterialLifetimePtr).field0_0x0.DebugPtr)->_padding_ + 0x310
                       ))();
  *(undefined8 *)((longlong)this + 0x690) = uVar21;
  local_380 = &local_3e0;
  local_378 = &local_3dc;
  local_368 = &local_3d8;
  local_360 = &local_3d4;
  local_3d0 = iVar29 + 1;
  pFVar22 = this;
  local_388 = this;
  local_370 = this;
  if (0 < local_3d0) {
    lVar30 = -0x58;
    uVar39 = (undefined4)__real_3ff0000000000000;
    uVar42 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar43 = (undefined4)__real_3e45798ee0000000;
    uVar44 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    local_3f0 = 0;
    this_02 = (FLinearColor_u_0 *)((longlong)this + 0x2a0);
    fVar40 = __real_40c00000;
    fVar47 = __real_3fb33333;
    fVar48 = __real_3d430c31;
    fVar49 = __real_3f800000;
    do {
      if ((longlong)iVar1 < 1) break;
      iVar32 = *(int *)&(pFVar22->SplineInfo).field_0x8;
      if (iVar31 < iVar32) {
        if ((iVar31 < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar3 = (code *)swi(3);
          pFVar22 = (FSplineMeshSceneProxy *)(*pcVar3)();
          return pFVar22;
        }
        fVar41 = *(float *)((this_00->Points).AllocatorInstance.Data + lVar30 + 0x58);
      }
      else {
        uVar27 = 0;
        if ((int)(iVar32 - 1U) < iVar32) {
          uVar27 = ~(iVar32 - 1U) >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar3 = (code *)swi(3);
          pFVar22 = (FSplineMeshSceneProxy *)(*pcVar3)();
          return pFVar22;
        }
        fVar41 = *(float *)((this_00->Points).AllocatorInstance.Data +
                           (longlong)*(int *)((longlong)this + 0x290) * 0x58 + -0x58) +
                 *(float *)&(pFVar22->SplineInfo).field_0x14;
      }
      local_338._s_0.Z = 0.0;
      local_338._s_0.X = 0.0;
      local_338._s_0.Y = 0.0;
      FInterpCurve<UE::Math::TVector<double>_>::Eval
                (this_00,(TVector<double> *)&local_3a0._s_0,fVar41,
                 (TVector<double> *)&local_338._s_0);
      if (local_3f0 < iVar1) {
        FVar18 = FLinearColor::ToFColorSRGB((FLinearColor *)&this_02->_s_0);
        local_318._s_0.X = local_3a0._s_0.X;
        local_318._s_0.Y = local_3a0._s_0.Y;
        local_318._s_0.Z = local_3a0._s_0.Z;
        ``USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::FSplineMeshSceneProxy'::
        __l2::<lambda_2>::operator()
                  (&local_370,(TVector<double> *)&local_318._s_0,
                   (FColor)((FColor_u_0 *)CONCAT44(extraout_var,FVar18.field0_0x0))->_s_0,fVar40,0.0
                  );
      }
      if (iVar31 != 0) {
        iVar32 = iVar31 + -1;
        uVar33 = (uint)-iVar31 >> 0x1f;
        uVar27 = 0;
        if (iVar32 < *(int *)&(pFVar22->SplineInfo).field_0x8) {
          uVar27 = uVar33;
        }
        if ((uVar27 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar3 = (code *)swi(3);
          pFVar22 = (FSplineMeshSceneProxy *)(*pcVar3)();
          return pFVar22;
        }
        pFVar2 = (this_00->Points).AllocatorInstance.Data;
        local_248 = *(undefined8 *)(pFVar2 + lVar30);
        uVar21 = *(undefined8 *)(pFVar2 + lVar30 + 8);
        local_218 = *(undefined8 *)(pFVar2 + lVar30 + 0x30);
        uStack_210 = *(undefined8 *)(pFVar2 + lVar30 + 0x30 + 8);
        auVar36 = *(undefined1 (*) [16])(pFVar2 + lVar30 + 0x10);
        uStack_240 = (undefined4)uVar21;
        uStack_23c = (undefined4)((ulonglong)uVar21 >> 0x20);
        local_228 = *(undefined8 *)(pFVar2 + lVar30 + 0x20);
        uStack_220 = *(undefined8 *)(pFVar2 + lVar30 + 0x20 + 8);
        local_1f8 = *(undefined8 *)(pFVar2 + lVar30 + 0x50);
        pFVar2 = pFVar2 + lVar30 + 0x40;
        local_208 = *(undefined8 *)pFVar2;
        uStack_200 = *(undefined4 *)(pFVar2 + 8);
        uStack_1fc = *(undefined4 *)(pFVar2 + 0xc);
        local_238 = auVar36._0_4_;
        uStack_234 = auVar36._4_4_;
        dStack_230 = auVar36._8_8_;
        dVar5 = dStack_230;
        uVar27 = 0;
        if (iVar32 < *(int *)((longlong)this + 0x290)) {
          uVar27 = uVar33;
        }
        if ((uVar27 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar3 = (code *)swi(3);
          pFVar22 = (FSplineMeshSceneProxy *)(*pcVar3)();
          return pFVar22;
        }
        this_01 = local_3c8;
        if ((this_00->Points).AllocatorInstance.Data[lVar30 + 0x50] == (FScriptContainerElement)0x2)
        {
          dVar7 = local_3a0._s_0.Y - auVar36._0_8_;
          dVar11 = (double)CONCAT44(uStack_23c,uStack_240);
          auVar12._8_4_ = local_238;
          auVar12._0_8_ = dVar11;
          auVar12._12_4_ = uStack_234;
          dVar4 = auVar12._8_8_;
          dVar6 = local_3a0._s_0.X - dVar11;
          dVar8 = local_3a0._s_0.Z - dVar5;
          auVar35._0_8_ = dVar6 * dVar6;
          auVar35._8_8_ = 0;
          dVar34 = dVar7 * dVar7 + auVar35._0_8_ + dVar8 * dVar8;
          auVar36._8_8_ = 0;
          auVar36._0_8_ = dVar34;
          auVar36 = sqrtpd(auVar35,auVar36);
          uVar21 = dVar7;
          uVar9 = dVar6;
          uVar10 = dVar8;
          if ((dVar34 != (double)CONCAT44(uVar42,uVar39)) &&
             (uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
             uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
             uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
             (double)CONCAT44(uVar44,uVar43) <= dVar34)) {
            local_340 = (double)CONCAT44(uVar42,uVar39) / SQRT(dVar34);
            uVar21 = dVar7 * local_340;
            uVar9 = dVar6 * local_340;
            uVar10 = dVar8 * local_340;
          }
          uVar27 = 1;
          auVar37._8_8_ = dVar4;
          auVar37._0_8_ = dVar4;
          dVar34 = (double)((float)auVar36._0_8_ * __real_3d430c31);
          local_348 = dVar5;
          do {
            dVar7 = local_348;
            uVar28 = (ulonglong)dVar4 >> 0x20;
            uVar39 = SUB84(dVar4,0);
            dVar5 = dVar11 + (double)uVar9 * dVar34;
            dVar6 = local_348 + (double)uVar10 * dVar34;
            dVar4 = (double)uVar21 * dVar34 + auVar37._0_8_;
            uVar19 = 0;
            if (iVar32 < *(int *)((longlong)this + 0x290)) {
              uVar19 = uVar33;
            }
            if ((uVar19 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar3 = (code *)swi(3);
              pFVar22 = (FSplineMeshSceneProxy *)(*pcVar3)();
              return pFVar22;
            }
            fVar40 = __real_3fb33333;
            if (((this_00->Points).AllocatorInstance.Data[lVar30 + 0x50] ==
                 (FScriptContainerElement)0x2) && ((uVar27 & 1) == 0)) {
              fVar40 = 0.0;
            }
            FVar18 = FLinearColor::ToFColorSRGB((FLinearColor *)&this_01->_s_0);
            local_2d8._8_4_ = uVar39;
            local_2d8._0_8_ = dVar11;
            local_2d8._12_4_ = (int)uVar28;
            local_2f8._s_0.X = dVar5;
            local_2f8._s_0.Y = dVar4;
            local_2f8._s_0.Z = dVar6;
            local_2d8._s_0.Z = dVar7;
            local_1d8 = dVar6;
            ``USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::
            FSplineMeshSceneProxy'::__l2::<lambda_1>::operator()
                      (&local_388,(TVector<double> *)&local_2d8._s_0,
                       (TVector<double> *)&local_2f8._s_0,
                       (FColor)((FColor_u_0 *)CONCAT44(extraout_var_00,FVar18.field0_0x0))->_s_0,
                       fVar40,0.0);
            uVar27 = uVar27 + 1;
            auVar37._8_8_ = 0;
            auVar37._0_8_ = dVar4;
            dVar11 = dVar5;
            local_348 = dVar6;
          } while ((int)uVar27 < 0x16);
          this_02 = &(local_3b8->LineColor).field0_0x0;
          fVar47 = __real_3fb33333;
          fVar48 = __real_3d430c31;
          fVar49 = __real_3f800000;
        }
        else {
          iVar32 = 1;
          fVar40 = (float)local_248;
          uVar39 = uStack_240;
          uVar42 = uStack_23c;
          uVar43 = local_238;
          uVar44 = uStack_234;
          uVar45 = auVar36._8_4_;
          uVar46 = auVar36._12_4_;
          do {
            local_2b8._s_0.Z = 0.0;
            local_2b8._s_0.X = 0.0;
            local_2b8._s_0.Y = 0.0;
            FInterpCurve<UE::Math::TVector<double>_>::Eval
                      (this_00,(TVector<double> *)&local_2a0._s_0,
                       (fVar49 - (float)iVar32 * fVar48) * fVar40 + (float)iVar32 * fVar48 * fVar41,
                       (TVector<double> *)&local_2b8._s_0);
            FVar18 = FLinearColor::ToFColorSRGB((FLinearColor *)&this_01->_s_0);
            uVar16 = local_2a0._12_4_;
            uVar15 = local_2a0._8_4_;
            uVar14 = local_2a0._4_4_;
            uVar13 = local_2a0._0_4_;
            uVar38 = SUB84(local_2a0._s_0.Z,0);
            uVar28 = (ulonglong)local_2a0._16_8_ >> 0x20;
            local_288._0_4_ = local_2a0._0_4_;
            local_288._4_4_ = local_2a0._4_4_;
            local_288._8_4_ = local_2a0._8_4_;
            local_288._12_4_ = local_2a0._12_4_;
            local_288._16_8_ = local_2a0._s_0.Z;
            local_268._s_0.Z = (double)CONCAT44(uVar46,uVar45);
            local_268._0_4_ = uVar39;
            local_268._4_4_ = uVar42;
            local_268._8_4_ = uVar43;
            local_268._12_4_ = uVar44;
            ``USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::
            FSplineMeshSceneProxy'::__l2::<lambda_1>::operator()
                      (&local_388,(TVector<double> *)&local_268._s_0,
                       (TVector<double> *)&local_288._s_0,
                       (FColor)((FColor_u_0 *)CONCAT44(extraout_var_01,FVar18.field0_0x0))->_s_0,
                       fVar47,0.0);
            iVar32 = iVar32 + 1;
            this_02 = local_3c8;
            uVar39 = uVar13;
            uVar42 = uVar14;
            uVar43 = uVar15;
            uVar44 = uVar16;
            uVar45 = uVar38;
            uVar46 = (int)uVar28;
          } while (iVar32 < 0x16);
        }
        uVar43 = (undefined4)__real_3e45798ee0000000;
        uVar44 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        uVar39 = (undefined4)__real_3ff0000000000000;
        uVar42 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        pFVar22 = local_3b8;
        fVar40 = __real_40c00000;
      }
      local_3f0 = local_3f0 + 1;
      iVar31 = iVar31 + 1;
      lVar30 = lVar30 + 0x58;
    } while (iVar31 < local_3d0);
  }
  if (0 < iVar29 * 0x15) {
    local_1a0 = (undefined ***)0x0;
    local_1b8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``USplineComponent::CreateSceneProxy'::`2'::FSplineMeshSceneProxy::FSplineMeshSceneProxy'::`25'::<lambda_3>,1,0>
                 ::_vftable_;
    local_1c8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<``USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::FSplineMeshSceneProxy'::__l25::<lambda_3>,void,FRHICommandListImmediate_&>
                   ::Call;
    pFStack_1b0 = pFVar22;
    pFVar23 = FRenderCommandList::GetInstanceTLS();
    if (pFVar23 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<__USplineComponent::CreateSceneProxy_::__l2::FSplineMeshSceneProxy::FSplineMeshSceneProxy_::__l25::TSTR_LineSetVertexBuffersInit3061>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_1c8);
    }
    else {
      pFVar24 = FRenderCommandList::GetRenderThread(pFVar23);
      local_168._0_8_ = local_1c8[0];
      local_140 = local_1a0;
      local_158 = local_1b8;
      pFStack_150 = pFStack_1b0;
      local_148 = local_1a8;
      local_1c8[0] = (code *)0x0;
      local_138 = 2;
      pFVar25 = (FRenderCommandTag *)
                TRenderCommandTag<``USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::FSplineMeshSceneProxy'::__l25::TSTR_LineSetVertexBuffersInit3061>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar24,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_168,pFVar25);
      uVar28 = (ulonglong)local_138;
      if ((2 < uVar28) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar17)) {
        pcVar3 = (code *)swi(3);
        pFVar22 = (FSplineMeshSceneProxy *)(*pcVar3)();
        return pFVar22;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar28] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_168._0_8_ != (code *)0x0) {
          pppuVar26 = (undefined ***)(local_168 + 0x10);
          if (local_140 != (undefined ***)0x0) {
            pppuVar26 = local_140;
          }
          (*(code *)(*pppuVar26)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar28])(local_168);
      }
    }
    if (local_1c8[0] != (code *)0x0) {
      pppuVar26 = &local_1b8;
      if (local_1a0 != (undefined ***)0x0) {
        pppuVar26 = local_1a0;
      }
      (*(code *)(*pppuVar26)[2])();
    }
  }
  if (0 < iVar1) {
    local_170 = (undefined ***)0x0;
    local_188 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``USplineComponent::CreateSceneProxy'::`2'::FSplineMeshSceneProxy::FSplineMeshSceneProxy'::`28'::<lambda_4>,1,0>
                 ::_vftable_;
    local_198[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<``USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::FSplineMeshSceneProxy'::__l28::<lambda_4>,void,FRHICommandListImmediate_&>
                   ::Call;
    pFStack_180 = pFVar22;
    pFVar23 = FRenderCommandList::GetInstanceTLS();
    if (pFVar23 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<__USplineComponent::CreateSceneProxy_::__l2::FSplineMeshSceneProxy::FSplineMeshSceneProxy_::__l28::TSTR_OverlayVertexBuffersInit3082>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_198);
    }
    else {
      pFVar24 = FRenderCommandList::GetRenderThread(pFVar23);
      local_128._0_8_ = local_198[0];
      local_100 = local_170;
      local_118 = local_188;
      pFStack_110 = pFStack_180;
      local_108 = local_178;
      local_198[0] = (code *)0x0;
      local_f8 = 2;
      pFVar25 = (FRenderCommandTag *)
                TRenderCommandTag<``USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::FSplineMeshSceneProxy'::__l28::TSTR_OverlayVertexBuffersInit3082>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar24,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_128,pFVar25);
      uVar28 = (ulonglong)local_f8;
      if ((2 < uVar28) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar17)) {
        pcVar3 = (code *)swi(3);
        pFVar22 = (FSplineMeshSceneProxy *)(*pcVar3)();
        return pFVar22;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar28] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_128._0_8_ != (code *)0x0) {
          pppuVar26 = (undefined ***)(local_128 + 0x10);
          if (local_100 != (undefined ***)0x0) {
            pppuVar26 = local_100;
          }
          (*(code *)(*pppuVar26)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar28])(local_128);
      }
    }
    if (local_198[0] != (code *)0x0) {
      pppuVar26 = &local_188;
      if (local_170 != (undefined ***)0x0) {
        pppuVar26 = local_170;
      }
      (*(code *)(*pppuVar26)[2])();
    }
  }
  FCsvProfiler::EndStat("FSplineSceneProxy_FSplineSceneProxy",0);
  return pFVar22;
}

// ~FSplineMeshSceneProxy @ 1479a9000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::~FSplineMeshSceneProxy
          (void *this)

{
  FStaticMeshVertexBuffer *this_00;
  FStaticMeshVertexBuffer *this_01;
  
  this_00 = (FStaticMeshVertexBuffer *)((longlong)this + 0x4f8);
  *(undefined ***)this = &CreateSceneProxy'::`2'::FSplineMeshSceneProxy::_vftable_;
  if (*(int *)((longlong)this + 0x5c8) != -1) {
    (**(code **)(*(longlong *)((longlong)this + 0x5b0) + 0x20))((longlong)this + 0x5b0);
    (**(code **)(this_00->_padding_ + 0x20))(this_00);
    (**(code **)(*(longlong *)((longlong)this + 0x600) + 0x20))((longlong)this + 0x600);
    (**(code **)(*(longlong *)((longlong)this + 0x650) + 0x20))
              ((longlong *)((longlong)this + 0x650));
    (**(code **)(*(longlong *)((longlong)this + 0x2c8) + 0x20))
              ((longlong *)((longlong)this + 0x2c8));
  }
  this_01 = (FStaticMeshVertexBuffer *)((longlong)this + 0x8d8);
  if (*(int *)((longlong)this + 0x9a8) != -1) {
    (**(code **)(*(longlong *)((longlong)this + 0x990) + 0x20))((longlong)this + 0x990);
    (**(code **)(this_01->_padding_ + 0x20))(this_01);
    (**(code **)(*(longlong *)((longlong)this + 0x9e0) + 0x20))((longlong)this + 0x9e0);
    (**(code **)(*(longlong *)((longlong)this + 0xa30) + 0x20))
              ((longlong *)((longlong)this + 0xa30));
    (**(code **)(*(longlong *)((longlong)this + 0x6a8) + 0x20))();
  }
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32
            ((FDynamicMeshIndexBuffer32 *)((longlong)this + 0xa30));
  FColorVertexBuffer::~FColorVertexBuffer((FColorVertexBuffer *)((longlong)this + 0x9e0));
  FPositionVertexBuffer::~FPositionVertexBuffer((FPositionVertexBuffer *)((longlong)this + 0x990));
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(this_01);
  FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)((longlong)this + 0x6a8));
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32
            ((FDynamicMeshIndexBuffer32 *)((longlong)this + 0x650));
  FColorVertexBuffer::~FColorVertexBuffer((FColorVertexBuffer *)((longlong)this + 0x600));
  FPositionVertexBuffer::~FPositionVertexBuffer((FPositionVertexBuffer *)((longlong)this + 0x5b0));
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(this_00);
  FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)((longlong)this + 0x2c8));
  if (*(void **)((longlong)this + 0x288) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x288));
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy(this);
  return;
}

// operator() @ 1479ab3b0

void __thiscall
``USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::FSplineMeshSceneProxy'::__l2::
<lambda_1>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2,FColor param_3,float param_4
          ,float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  TVector2<float>_u_0 local_res8;
  double local_res10;
  byte bStackX_21;
  byte bStackX_22;
  TVector<float>_u_0 local_158;
  TVector<float>_u_0 local_148;
  TVector<float>_u_0 local_138;
  TVector<float>_u_0 local_128;
  TVector<float>_u_0 local_118;
  TVector<float>_u_0 local_108;
  TVector<float>_u_0 local_f8;
  TVector<float>_u_0 local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8;
  TVector<float>_u_0 local_b8;
  TVector<float>_u_0 local_a8 [10];
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  dVar11 = dVar3 - dVar1;
  dVar12 = dVar4 - dVar2;
  dVar6 = (param_2->field0_0x0)._s_0.Z;
  dVar13 = dVar6 - dVar5;
  dVar28 = dVar12 * dVar12 + dVar11 * dVar11 + dVar13 * dVar13;
  uVar14 = dVar11;
  uVar15 = dVar12;
  uVar16 = dVar13;
  if ((dVar28 != __real_3ff0000000000000) &&
     (uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar28)) {
    local_res10 = __real_3ff0000000000000 / SQRT(dVar28);
    uVar14 = dVar11 * local_res10;
    uVar15 = dVar12 * local_res10;
    uVar16 = dVar13 * local_res10;
  }
  uVar18 = (ulonglong)(uint)(*(int *)(*(longlong *)this + 0x5f0) * **(int **)((longlong)this + 8));
  lVar9 = *(longlong *)(*(longlong *)this + 0x5e8);
  local_res8._s_0.X = param_4;
  local_res8._s_0.Y = param_5;
  fVar22 = (float)dVar3;
  fVar26 = (float)dVar4;
  fVar29 = (float)dVar1;
  fVar30 = (float)dVar2;
  *(float *)(uVar18 + lVar9) = fVar29;
  *(float *)(uVar18 + 4 + lVar9) = fVar30;
  fVar31 = (float)dVar5;
  fVar27 = (float)dVar6;
  *(float *)(uVar18 + 8 + lVar9) = fVar31;
  lVar9 = *(longlong *)(*(longlong *)this + 0x5e8);
  uVar18 = (ulonglong)
           (uint)((**(int **)((longlong)this + 8) + 1) * *(int *)(*(longlong *)this + 0x5f0));
  *(float *)(uVar18 + lVar9) = fVar22;
  *(float *)(uVar18 + 4 + lVar9) = fVar26;
  *(float *)(uVar18 + 8 + lVar9) = fVar27;
  lVar9 = *(longlong *)(*(longlong *)this + 0x5e8);
  uVar18 = (ulonglong)
           (uint)((**(int **)((longlong)this + 8) + 2) * *(int *)(*(longlong *)this + 0x5f0));
  *(float *)(uVar18 + lVar9) = fVar22;
  *(float *)(uVar18 + 4 + lVar9) = fVar26;
  *(float *)(uVar18 + 8 + lVar9) = fVar27;
  lVar9 = *(longlong *)(*(longlong *)this + 0x5e8);
  uVar18 = (ulonglong)
           (uint)((**(int **)((longlong)this + 8) + 3) * *(int *)(*(longlong *)this + 0x5f0));
  *(float *)(uVar18 + lVar9) = fVar29;
  *(float *)(uVar18 + 4 + lVar9) = fVar30;
  *(float *)(uVar18 + 8 + lVar9) = fVar31;
  uVar21 = (uint)__xmm_80000000000000008000000000000000;
  uVar20 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  fVar27 = (float)(double)CONCAT44((uint)((ulonglong)uVar14 >> 0x20) ^ uVar20,(uint)uVar14 ^ uVar21)
  ;
  local_118._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_108._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar26 = (float)(double)CONCAT44((uint)((ulonglong)uVar15 >> 0x20) ^ uVar20,(uint)uVar15 ^ uVar21)
  ;
  fVar22 = (float)(double)CONCAT44((uint)((ulonglong)uVar16 >> 0x20) ^ uVar20,(uint)uVar16 ^ uVar21)
  ;
  local_118._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_108._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_158._s_0.X = fVar27;
  local_158._s_0.Y = fVar26;
  local_158._s_0.Z = fVar22;
  FStaticMeshVertexBuffer::SetVertexTangents
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4f8),**(uint **)((longlong)this + 8),
             (TVector<float> *)&local_108._s_0,(TVector<float> *)&local_118._s_0,
             (TVector<float> *)&local_158._s_0);
  local_f8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_f8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_e8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_e8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_148._s_0.X = fVar27;
  local_148._s_0.Y = fVar26;
  local_148._s_0.Z = fVar22;
  FStaticMeshVertexBuffer::SetVertexTangents
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4f8),
             **(int **)((longlong)this + 8) + 1,(TVector<float> *)&local_e8._s_0,
             (TVector<float> *)&local_f8._s_0,(TVector<float> *)&local_148._s_0);
  local_d8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_c8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_d8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_c8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_138._s_0.X = (float)(double)uVar14;
  local_138._s_0.Y = (float)(double)uVar15;
  local_138._s_0.Z = (float)(double)uVar16;
  FStaticMeshVertexBuffer::SetVertexTangents
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4f8),
             **(int **)((longlong)this + 8) + 2,(TVector<float> *)&local_c8._s_0,
             (TVector<float> *)&local_d8._s_0,(TVector<float> *)&local_138._s_0);
  local_b8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_a8[0]._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_b8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_a8[0]._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_128._s_0.X = (float)(double)uVar14;
  local_128._s_0.Y = (float)(double)uVar15;
  local_128._s_0.Z = (float)(double)uVar16;
  FStaticMeshVertexBuffer::SetVertexTangents
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4f8),
             **(int **)((longlong)this + 8) + 3,(TVector<float> *)&local_a8[0]._s_0,
             (TVector<float> *)&local_b8._s_0,(TVector<float> *)&local_128._s_0);
  FStaticMeshVertexBuffer::SetVertexUV
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4f8),**(uint **)((longlong)this + 8),
             0,(TVector2<float> *)&local_res8._s_0,false);
  FStaticMeshVertexBuffer::SetVertexUV
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4f8),
             **(int **)((longlong)this + 8) + 1,0,(TVector2<float> *)&local_res8._s_0,false);
  FStaticMeshVertexBuffer::SetVertexUV
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4f8),
             **(int **)((longlong)this + 8) + 2,0,(TVector2<float> *)&local_res8._s_0,false);
  FStaticMeshVertexBuffer::SetVertexUV
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4f8),
             **(int **)((longlong)this + 8) + 3,0,(TVector2<float> *)&local_res8._s_0,false);
  auVar23._4_8_ = 0;
  auVar23._0_4_ = FLinearColor::sRGBToLinearTable[(uint)param_3.field0_0x0 & 0xff];
  if (FLinearColor::sRGBToLinearTable[(uint)param_3.field0_0x0 & 0xff] <= 0.0) {
    auVar23 = ZEXT812(0) << 0x20;
  }
  if (__real_3f800000 <= auVar23._0_4_) {
    auVar23._4_8_ = auVar23._4_8_;
    auVar23._0_4_ = __real_3f800000;
  }
  bStackX_21 = param_3.field0_0x0._1_1_;
  auVar24._4_8_ = 0;
  auVar24._0_4_ = FLinearColor::sRGBToLinearTable[bStackX_21];
  if (FLinearColor::sRGBToLinearTable[bStackX_21] <= 0.0) {
    auVar24 = ZEXT812(0) << 0x20;
  }
  if (__real_3f800000 <= auVar24._0_4_) {
    auVar24._4_8_ = auVar24._4_8_;
    auVar24._0_4_ = __real_3f800000;
  }
  bStackX_22 = param_3.field0_0x0._2_1_;
  auVar25._4_8_ = 0;
  auVar25._0_4_ = FLinearColor::sRGBToLinearTable[bStackX_22];
  if (FLinearColor::sRGBToLinearTable[bStackX_22] <= 0.0) {
    auVar25 = ZEXT812(0) << 0x20;
  }
  if (__real_3f800000 <= auVar25._0_4_) {
    auVar25._4_8_ = auVar25._4_8_;
    auVar25._0_4_ = __real_3f800000;
  }
  fVar22 = (float)((uint)param_3.field0_0x0 >> 0x18) * __real_3b808081;
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  if (__real_3f800000 <= fVar22) {
    fVar22 = __real_3f800000;
  }
  uVar7 = CONCAT13((char)(int)(fVar22 * __real_437f0000 + __real_3f000000),
                   CONCAT12((char)(int)(auVar25._0_4_ * __real_437f0000 + __real_3f000000),
                            CONCAT11((char)(int)(auVar24._0_4_ * __real_437f0000 + __real_3f000000),
                                     (char)(int)(auVar23._0_4_ * __real_437f0000 + __real_3f000000))
                           ));
  *(undefined4 *)
   ((ulonglong)(uint)(*(int *)(*(longlong *)this + 0x640) * **(int **)((longlong)this + 8)) +
   *(longlong *)(*(longlong *)this + 0x638)) = uVar7;
  *(undefined4 *)
   ((ulonglong)(uint)((**(int **)((longlong)this + 8) + 1) * *(int *)(*(longlong *)this + 0x640)) +
   *(longlong *)(*(longlong *)this + 0x638)) = uVar7;
  *(undefined4 *)
   ((ulonglong)(uint)((**(int **)((longlong)this + 8) + 2) * *(int *)(*(longlong *)this + 0x640)) +
   *(longlong *)(*(longlong *)this + 0x638)) = uVar7;
  *(undefined4 *)
   ((ulonglong)(uint)((**(int **)((longlong)this + 8) + 3) * *(int *)(*(longlong *)this + 0x640)) +
   *(longlong *)(*(longlong *)this + 0x638)) = uVar7;
  lVar9 = *(longlong *)this;
  uVar7 = **(undefined4 **)((longlong)this + 8);
  uVar21 = **(uint **)((longlong)this + 0x10);
  uVar19 = 0;
  uVar20 = uVar19;
  if ((int)uVar21 < *(int *)(lVar9 + 0x680)) {
    uVar20 = ~uVar21 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined4 *)(*(longlong *)(lVar9 + 0x678) + (longlong)(int)uVar21 * 4) = uVar7;
  lVar9 = *(longlong *)this;
  iVar8 = **(int **)((longlong)this + 8);
  uVar20 = **(int **)((longlong)this + 0x10) + 1;
  uVar21 = uVar19;
  if ((int)uVar20 < *(int *)(lVar9 + 0x680)) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(int *)(*(longlong *)(lVar9 + 0x678) + (longlong)(int)uVar20 * 4) = iVar8 + 1;
  lVar9 = *(longlong *)this;
  iVar8 = **(int **)((longlong)this + 8);
  uVar20 = **(int **)((longlong)this + 0x10) + 2;
  uVar21 = uVar19;
  if ((int)uVar20 < *(int *)(lVar9 + 0x680)) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(int *)(*(longlong *)(lVar9 + 0x678) + (longlong)(int)uVar20 * 4) = iVar8 + 2;
  lVar9 = *(longlong *)this;
  iVar8 = **(int **)((longlong)this + 8);
  uVar20 = **(int **)((longlong)this + 0x10) + 3;
  uVar21 = uVar19;
  if ((int)uVar20 < *(int *)(lVar9 + 0x680)) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(int *)(*(longlong *)(lVar9 + 0x678) + (longlong)(int)uVar20 * 4) = iVar8 + 2;
  lVar9 = *(longlong *)this;
  iVar8 = **(int **)((longlong)this + 8);
  uVar20 = **(int **)((longlong)this + 0x10) + 4;
  uVar21 = uVar19;
  if ((int)uVar20 < *(int *)(lVar9 + 0x680)) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(int *)(*(longlong *)(lVar9 + 0x678) + (longlong)(int)uVar20 * 4) = iVar8 + 3;
  lVar9 = *(longlong *)this;
  uVar7 = **(undefined4 **)((longlong)this + 8);
  uVar21 = **(int **)((longlong)this + 0x10) + 5;
  if ((int)uVar21 < *(int *)(lVar9 + 0x680)) {
    uVar19 = ~uVar21 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined4 *)(*(longlong *)(lVar9 + 0x678) + (longlong)(int)uVar21 * 4) = uVar7;
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 4;
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 6;
  return;
}

// operator() @ 1479ac190

void __thiscall
``USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::FSplineMeshSceneProxy'::__l2::
<lambda_2>::operator()
          (void *this,TVector<double> *param_1,FColor param_2,float param_3,float param_4)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  TVector2<float>_u_0 local_res8;
  byte bStackX_19;
  byte bStackX_1a;
  TVector<float>_u_0 local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8;
  TVector<float>_u_0 local_b8;
  TVector<float>_u_0 local_a8;
  TVector<float>_u_0 local_98;
  TVector<float>_u_0 local_88;
  TVector<float>_u_0 local_78;
  TVector<float>_u_0 local_68;
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_48;
  TVector<float>_u_0 local_38;
  
  local_res8._s_0.Y = param_4;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar13 = (float)(param_1->field0_0x0)._s_0.X;
  uVar7 = (ulonglong)(uint)(*(int *)(*(longlong *)this + 0x9d0) * **(int **)((longlong)this + 8));
  lVar4 = *(longlong *)(*(longlong *)this + 0x9c8);
  fVar14 = (float)(param_1->field0_0x0)._s_0.Y;
  *(float *)(uVar7 + lVar4) = fVar13;
  *(float *)(uVar7 + 4 + lVar4) = fVar14;
  fVar11 = (float)dVar1;
  *(float *)(uVar7 + 8 + lVar4) = fVar11;
  lVar4 = *(longlong *)(*(longlong *)this + 0x9c8);
  uVar7 = (ulonglong)
          (uint)((**(int **)((longlong)this + 8) + 1) * *(int *)(*(longlong *)this + 0x9d0));
  *(float *)(uVar7 + lVar4) = fVar13;
  *(float *)(uVar7 + 4 + lVar4) = fVar14;
  *(float *)(uVar7 + 8 + lVar4) = fVar11;
  lVar4 = *(longlong *)(*(longlong *)this + 0x9c8);
  uVar7 = (ulonglong)
          (uint)((**(int **)((longlong)this + 8) + 2) * *(int *)(*(longlong *)this + 0x9d0));
  *(float *)(uVar7 + lVar4) = fVar13;
  *(float *)(uVar7 + 4 + lVar4) = fVar14;
  *(float *)(uVar7 + 8 + lVar4) = fVar11;
  lVar4 = *(longlong *)(*(longlong *)this + 0x9c8);
  uVar7 = (ulonglong)
          (uint)((**(int **)((longlong)this + 8) + 3) * *(int *)(*(longlong *)this + 0x9d0));
  *(float *)(uVar7 + lVar4) = fVar13;
  *(float *)(uVar7 + 4 + lVar4) = fVar14;
  *(float *)(uVar7 + 8 + lVar4) = fVar11;
  local_res8._s_0.X = param_3;
  FStaticMeshVertexBuffer::SetVertexUV
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x8d8),**(uint **)((longlong)this + 8),
             0,(TVector2<float> *)&local_res8._s_0,false);
  FStaticMeshVertexBuffer::SetVertexUV
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x8d8),
             **(int **)((longlong)this + 8) + 1,0,(TVector2<float> *)&local_res8._s_0,false);
  FStaticMeshVertexBuffer::SetVertexUV
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x8d8),
             **(int **)((longlong)this + 8) + 2,0,(TVector2<float> *)&local_res8._s_0,false);
  FStaticMeshVertexBuffer::SetVertexUV
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x8d8),
             **(int **)((longlong)this + 8) + 3,0,(TVector2<float> *)&local_res8._s_0,false);
  local_e8._s_0.X = 1.0;
  local_e8._s_0.Y = -1.0;
  fVar11 = FLinearColor::sRGBToLinearTable[(uint)param_2.field0_0x0 & 0xff];
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_e8._s_0.Z = 0.0;
  if (__real_3f800000 <= fVar11) {
    fVar11 = __real_3f800000;
  }
  bStackX_19 = param_2.field0_0x0._1_1_;
  fVar13 = FLinearColor::sRGBToLinearTable[bStackX_19];
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (__real_3f800000 <= fVar13) {
    fVar13 = __real_3f800000;
  }
  bStackX_1a = param_2.field0_0x0._2_1_;
  fVar14 = FLinearColor::sRGBToLinearTable[bStackX_1a];
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if (__real_3f800000 <= fVar14) {
    fVar14 = __real_3f800000;
  }
  fVar12 = (float)((uint)param_2.field0_0x0 >> 0x18) * __real_3b808081;
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_3f800000 <= fVar12) {
    fVar12 = __real_3f800000;
  }
  uVar2 = CONCAT13((char)(int)(fVar12 * __real_437f0000 + __real_3f000000),
                   CONCAT12((char)(int)(fVar14 * __real_437f0000 + __real_3f000000),
                            CONCAT11((char)(int)(fVar13 * __real_437f0000 + __real_3f000000),
                                     (char)(int)(fVar11 * __real_437f0000 + __real_3f000000))));
  *(undefined4 *)
   ((ulonglong)(uint)(*(int *)(*(longlong *)this + 0xa20) * **(int **)((longlong)this + 8)) +
   *(longlong *)(*(longlong *)this + 0xa18)) = uVar2;
  *(undefined4 *)
   ((ulonglong)(uint)((**(int **)((longlong)this + 8) + 1) * *(int *)(*(longlong *)this + 0xa20)) +
   *(longlong *)(*(longlong *)this + 0xa18)) = uVar2;
  *(undefined4 *)
   ((ulonglong)(uint)((**(int **)((longlong)this + 8) + 2) * *(int *)(*(longlong *)this + 0xa20)) +
   *(longlong *)(*(longlong *)this + 0xa18)) = uVar2;
  *(undefined4 *)
   ((ulonglong)(uint)((**(int **)((longlong)this + 8) + 3) * *(int *)(*(longlong *)this + 0xa20)) +
   *(longlong *)(*(longlong *)this + 0xa18)) = uVar2;
  local_a8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_98._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_a8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_98._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  FStaticMeshVertexBuffer::SetVertexTangents
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x8d8),**(uint **)((longlong)this + 8),
             (TVector<float> *)&local_98._s_0,(TVector<float> *)&local_a8._s_0,
             (TVector<float> *)&local_e8._s_0);
  local_88._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_78._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_d8._s_0.X = 1.0;
  local_d8._4_8_ = 0x3f800000;
  local_88._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_78._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  FStaticMeshVertexBuffer::SetVertexTangents
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x8d8),
             **(int **)((longlong)this + 8) + 1,(TVector<float> *)&local_78._s_0,
             (TVector<float> *)&local_88._s_0,(TVector<float> *)&local_d8._s_0);
  local_68._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_58._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_c8._s_0.X = -1.0;
  local_c8._4_8_ = 0x3f800000;
  local_68._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_58._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  FStaticMeshVertexBuffer::SetVertexTangents
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x8d8),
             **(int **)((longlong)this + 8) + 2,(TVector<float> *)&local_58._s_0,
             (TVector<float> *)&local_68._s_0,(TVector<float> *)&local_c8._s_0);
  local_48._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_38._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_b8._s_0.X = -1.0;
  local_b8._s_0.Y = -1.0;
  local_b8._s_0.Z = 0.0;
  local_48._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_38._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  FStaticMeshVertexBuffer::SetVertexTangents
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x8d8),
             **(int **)((longlong)this + 8) + 3,(TVector<float> *)&local_38._s_0,
             (TVector<float> *)&local_48._s_0,(TVector<float> *)&local_b8._s_0);
  uVar8 = 0;
  lVar4 = *(longlong *)this;
  uVar2 = **(undefined4 **)((longlong)this + 8);
  uVar10 = **(uint **)((longlong)this + 0x10);
  uVar9 = uVar8;
  if ((int)uVar10 < *(int *)(lVar4 + 0xa60)) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar4 + 0xa58) + (longlong)(int)uVar10 * 4) = uVar2;
  lVar4 = *(longlong *)this;
  iVar3 = **(int **)((longlong)this + 8);
  uVar9 = **(int **)((longlong)this + 0x10) + 1;
  uVar10 = uVar8;
  if ((int)uVar9 < *(int *)(lVar4 + 0xa60)) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(int *)(*(longlong *)(lVar4 + 0xa58) + (longlong)(int)uVar9 * 4) = iVar3 + 1;
  lVar4 = *(longlong *)this;
  iVar3 = **(int **)((longlong)this + 8);
  uVar9 = **(int **)((longlong)this + 0x10) + 2;
  uVar10 = uVar8;
  if ((int)uVar9 < *(int *)(lVar4 + 0xa60)) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(int *)(*(longlong *)(lVar4 + 0xa58) + (longlong)(int)uVar9 * 4) = iVar3 + 2;
  lVar4 = *(longlong *)this;
  iVar3 = **(int **)((longlong)this + 8);
  uVar9 = **(int **)((longlong)this + 0x10) + 3;
  uVar10 = uVar8;
  if ((int)uVar9 < *(int *)(lVar4 + 0xa60)) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(int *)(*(longlong *)(lVar4 + 0xa58) + (longlong)(int)uVar9 * 4) = iVar3 + 2;
  lVar4 = *(longlong *)this;
  iVar3 = **(int **)((longlong)this + 8);
  uVar9 = **(int **)((longlong)this + 0x10) + 4;
  uVar10 = uVar8;
  if ((int)uVar9 < *(int *)(lVar4 + 0xa60)) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(int *)(*(longlong *)(lVar4 + 0xa58) + (longlong)(int)uVar9 * 4) = iVar3 + 3;
  lVar4 = *(longlong *)this;
  uVar2 = **(undefined4 **)((longlong)this + 8);
  uVar10 = **(int **)((longlong)this + 0x10) + 5;
  if ((int)uVar10 < *(int *)(lVar4 + 0xa60)) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar4 + 0xa58) + (longlong)(int)uVar10 * 4) = uVar2;
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 4;
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 6;
  return;
}

// operator() @ 1479ac870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
``USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::FSplineMeshSceneProxy'::__l25::
<lambda_3>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  (**(code **)(*(longlong *)(*(longlong *)this + 0x5b0) + 0x18))();
  (**(code **)(*(longlong *)(*(longlong *)this + 0x4f8) + 0x18))
            ((longlong *)(*(longlong *)this + 0x4f8),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x600) + 0x18))
            ((longlong *)(*(longlong *)this + 0x600),param_1);
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)this + 0x5b0),
             (FVertexFactory *)(*(longlong *)this + 0x2c8),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4f8),
             (FVertexFactory *)(*(longlong *)this + 0x2c8),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4f8),
             (FVertexFactory *)(*(longlong *)this + 0x2c8),(FStaticMeshDataType *)&local_e8,-1);
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(*(longlong *)this + 0x600),
             (FVertexFactory *)(*(longlong *)this + 0x2c8),(FStaticMeshDataType *)&local_e8);
  FLocalVertexFactory::SetData
            ((FLocalVertexFactory *)(*(longlong *)this + 0x2c8),(FRHICommandListBase *)param_1,
             &local_e8);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x2c8) + 0x18))
            ((longlong *)(*(longlong *)this + 0x2c8),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x650) + 0x18))
            ((longlong *)(*(longlong *)this + 0x650),param_1);
  return;
}

// operator() @ 1479aca10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
``USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::FSplineMeshSceneProxy'::__l28::
<lambda_4>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  (**(code **)(*(longlong *)(*(longlong *)this + 0x990) + 0x18))();
  (**(code **)(*(longlong *)(*(longlong *)this + 0x8d8) + 0x18))
            ((longlong *)(*(longlong *)this + 0x8d8),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x9e0) + 0x18))
            ((longlong *)(*(longlong *)this + 0x9e0),param_1);
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)this + 0x990),
             (FVertexFactory *)(*(longlong *)this + 0x6a8),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x8d8),
             (FVertexFactory *)(*(longlong *)this + 0x6a8),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x8d8),
             (FVertexFactory *)(*(longlong *)this + 0x6a8),(FStaticMeshDataType *)&local_e8,-1);
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(*(longlong *)this + 0x9e0),
             (FVertexFactory *)(*(longlong *)this + 0x6a8),(FStaticMeshDataType *)&local_e8);
  FLocalVertexFactory::SetData
            ((FLocalVertexFactory *)(*(longlong *)this + 0x6a8),(FRHICommandListBase *)param_1,
             &local_e8);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x6a8) + 0x18))
            ((longlong *)(*(longlong *)this + 0x6a8),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0xa30) + 0x18))
            ((longlong *)(*(longlong *)this + 0xa30),param_1);
  return;
}

// GetDynamicMeshElements @ 1479c7450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::GetDynamicMeshElements
          (void *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  byte bVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  FDynamicPrimitiveUniformBuffer *pFVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_USplineComponent::CreateSceneProxy(void)_::_2_::FSplineMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_SplineSceneProxy_GetDynamicMeshElements>
  FVar14;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar15;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar16;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar17;
  FName FVar18;
  ForElementType<FMeshBatchElement> FVar19;
  ForElementType<FMeshBatchElement> FVar20;
  uint local_80;
  FColor_u_0 local_78 [2];
  FDynamicPrimitiveUniformBuffer *local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_48;
  FName local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SplineSceneProxy_GetDynamicMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_USplineComponent::CreateSceneProxy(void)_::_2_::FSplineMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_SplineSceneProxy_GetDynamicMeshElements>
         )0x0) {
      pFVar13 = ::FName::FName(&local_48,"STAT_SplineSceneProxy_GetDynamicMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SplineSceneProxy_GetDynamicMeshElements,
                 *pFVar13,L"STAT_SplineSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_SplineSceneProxy_GetDynamicMeshElements;
  if (StatPtr_STAT_SplineSceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_USplineComponent::CreateSceneProxy(void)_::_2_::FSplineMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_SplineSceneProxy_GetDynamicMeshElements>
       )0x0) {
    pFVar13 = ::FName::FName(&local_40,"STAT_SplineSceneProxy_GetDynamicMeshElements");
    FVar14 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_USplineComponent::CreateSceneProxy(void)_::_2_::FSplineMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_SplineSceneProxy_GetDynamicMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SplineSceneProxy_GetDynamicMeshElements,*pFVar13,
                          L"STAT_SplineSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar5 = false;
  bVar6 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  bVar8 = false;
  bVar9 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_78[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_68.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                   ,0xc35);
        bVar5 = true;
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_60 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar8 = true;
      goto LAB_1479c7608;
    }
  }
  bVar6 = bVar9;
  bVar5 = bVar8;
  bVar8 = false;
  local_60 = local_58;
  FVar18 = local_58;
LAB_1479c7608:
  local_80 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      if ((param_3 >> (local_80 & 0x1f) & 1) != 0) {
        if (*(int *)((longlong)this + 0x5c8) != -1) {
          iVar11 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                   ::Add(&param_4->MeshBatchStorage,1);
          uVar4 = iVar11 / 0x49;
          uVar12 = 0;
          if ((int)uVar4 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
            uVar12 = ~uVar4 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar20 = (ForElementType<FMeshBatchElement>)
                   ((ulonglong)(uint)(iVar11 % 0x49) * 0xe0 +
                   (longlong)
                   (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar4]);
          if ((*(int *)((longlong)FVar20 + 0xa0) < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar19 = FVar20;
          if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar20 + 0x98) !=
              (ForElementType<FMeshBatchElement>)0x0) {
            FVar19 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar20 + 0x98);
          }
          *(longlong *)((longlong)FVar19 + 0x18) = (longlong)this + 0x650;
          *(uint *)((longlong)FVar20 + 0xd4) = *(uint *)((longlong)FVar20 + 0xd4) & 0xffffffbf;
          *(longlong *)((longlong)FVar20 + 0xa8) = (longlong)this + 0x2c8;
          *(undefined8 *)((longlong)FVar20 + 0xb0) = *(undefined8 *)((longlong)this + 0x2b0);
          paVar2 = &param_4->OneFrameResources->Next;
          aVar15 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
          *(undefined8 *)((longlong)aVar15 + 8) = 0;
          local_70 = (FDynamicPrimitiveUniformBuffer *)((longlong)aVar15 + 0x10);
          *(undefined ***)aVar15 =
               &
               ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
          ;
          TVar16.Next = *paVar2;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar15 + 8) = TVar16.Next;
            LOCK();
            aVar17 = *paVar2;
            bVar9 = TVar16.Next == aVar17;
            if (bVar9) {
              *paVar2 = aVar15;
              aVar17 = TVar16.Next;
            }
            UNLOCK();
            TVar16.Next = aVar17;
          } while (!bVar9);
          FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer(local_70);
          bVar1 = *(byte *)((longlong)this + 0x82);
          if (((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) || ((bVar1 & 3) == 3)) ||
             ((bVar1 & 0x60) != 0)) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RHICmdList",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                  ,0x46,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar7 = local_70;
          FDynamicPrimitiveUniformBuffer::Set
                    (local_70,(FRHICommandListBase *)param_4->RHICmdList,
                     (TMatrix<double> *)((longlong)this + 0x110),
                     (TMatrix<double> *)((longlong)this + 0x110),
                     (TBoxSphereBounds<double,double> *)((longlong)this + 400),
                     (TBoxSphereBounds<double,double> *)((longlong)this + 0x1c8),false,false,bVar9);
          *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)((longlong)FVar19 + 8) =
               &pFVar7->UniformBuffer;
          *(undefined4 *)((longlong)FVar19 + 0x58) = *(undefined4 *)((longlong)this + 0x2b8);
          *(undefined4 *)((longlong)FVar19 + 0x5c) = *(undefined4 *)((longlong)this + 700);
          *(undefined4 *)((longlong)FVar19 + 0x68) = *(undefined4 *)((longlong)this + 0x2c0);
          *(undefined4 *)((longlong)FVar19 + 0x6c) = *(undefined4 *)((longlong)this + 0x2c4);
          *(uint *)((longlong)FVar20 + 0xd4) =
               (*(byte *)((longlong)this + 0x78) & 1 ^
               *(uint *)((longlong)FVar20 + 0xd4) & 0xfffffffe) & 0xffffc07f;
          FMeshElementCollector::AddMesh(param_4,local_80,(FMeshBatch *)FVar20);
        }
        if (*(int *)((longlong)this + 0x9a8) != -1) {
          iVar11 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                   ::Add(&param_4->MeshBatchStorage,1);
          uVar4 = iVar11 / 0x49;
          uVar12 = 0;
          if ((int)uVar4 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
            uVar12 = ~uVar4 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar20 = (ForElementType<FMeshBatchElement>)
                   ((ulonglong)(uint)(iVar11 % 0x49) * 0xe0 +
                   (longlong)
                   (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar4]);
          if ((*(int *)((longlong)FVar20 + 0xa0) < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar19 = FVar20;
          if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar20 + 0x98) !=
              (ForElementType<FMeshBatchElement>)0x0) {
            FVar19 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar20 + 0x98);
          }
          *(longlong *)((longlong)FVar19 + 0x18) = (longlong)this + 0xa30;
          *(uint *)((longlong)FVar20 + 0xd4) = *(uint *)((longlong)FVar20 + 0xd4) & 0xffffffbf;
          *(longlong *)((longlong)FVar20 + 0xa8) = (longlong)this + 0x6a8;
          *(undefined8 *)((longlong)FVar20 + 0xb0) = *(undefined8 *)((longlong)this + 0x690);
          paVar2 = &param_4->OneFrameResources->Next;
          aVar15 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
          *(undefined8 *)((longlong)aVar15 + 8) = 0;
          local_70 = (FDynamicPrimitiveUniformBuffer *)((longlong)aVar15 + 0x10);
          *(undefined ***)aVar15 =
               &
               ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
          ;
          TVar16.Next = *paVar2;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar15 + 8) = TVar16.Next;
            LOCK();
            aVar17 = *paVar2;
            bVar9 = TVar16.Next == aVar17;
            if (bVar9) {
              *paVar2 = aVar15;
              aVar17 = TVar16.Next;
            }
            UNLOCK();
            TVar16.Next = aVar17;
          } while (!bVar9);
          FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer(local_70);
          bVar1 = *(byte *)((longlong)this + 0x82);
          if (((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) || ((bVar1 & 3) == 3)) ||
             ((bVar1 & 0x60) != 0)) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RHICmdList",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                  ,0x46,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar7 = local_70;
          FDynamicPrimitiveUniformBuffer::Set
                    (local_70,(FRHICommandListBase *)param_4->RHICmdList,
                     (TMatrix<double> *)((longlong)this + 0x110),
                     (TMatrix<double> *)((longlong)this + 0x110),
                     (TBoxSphereBounds<double,double> *)((longlong)this + 400),
                     (TBoxSphereBounds<double,double> *)((longlong)this + 0x1c8),true,false,bVar9);
          *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)((longlong)FVar19 + 8) =
               &pFVar7->UniformBuffer;
          *(undefined4 *)((longlong)FVar19 + 0x58) = *(undefined4 *)((longlong)this + 0x698);
          *(undefined4 *)((longlong)FVar19 + 0x5c) = *(undefined4 *)((longlong)this + 0x69c);
          *(undefined4 *)((longlong)FVar19 + 0x68) = *(undefined4 *)((longlong)this + 0x6a0);
          *(undefined4 *)((longlong)FVar19 + 0x6c) = *(undefined4 *)((longlong)this + 0x6a4);
          *(uint *)((longlong)FVar20 + 0xd4) =
               (*(byte *)((longlong)this + 0x78) & 1 ^
               *(uint *)((longlong)FVar20 + 0xd4) & 0xfffffffe) & 0xffffc07f;
          FMeshElementCollector::AddMesh(param_4,local_80,(FMeshBatch *)FVar20);
        }
      }
      local_80 = local_80 + 1;
      FVar18 = local_60;
    } while ((int)local_80 < param_1->ArrayNum);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 1479cbb90

uint __thiscall
`USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::GetMemoryFootprint(void *this)

{
  return *(int *)((longlong)this + 0x104) * 4 + 0xa70;
}

// GetTypeHash @ 1479d3ba0

ulong64 __thiscall
`USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::GetTypeHash(void *this)

{
  return 0x1551ffc90;
}

// GetViewRelevance @ 1479d4ec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
`USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::GetViewRelevance
          (void *this,FPrimitiveViewRelevance *__return_storage_ptr__,FSceneView *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  if ((*(char *)((longlong)this + 0x280) != '\0') && ((*(byte *)((longlong)this + 0x79) & 6) == 0))
  {
    bVar3 = FPrimitiveSceneProxy::IsShown(this,param_1);
    if ((bVar3) && (uVar5 = 4, (param_1->Family->EngineShowFlags).Splines != 0)) goto LAB_1479d4f28;
  }
  uVar5 = 0;
LAB_1479d4f28:
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | uVar5 | 2;
  bVar3 = FPrimitiveSceneProxy::IsShadowCast(this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar3 << 3;
  bVar3 = FPrimitiveSceneProxy::UseEditorCompositing(this,param_1);
  __return_storage_ptr__->bEditorPrimitiveRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar3 << 8;
  uVar5 = 0;
  uVar4 = ((uint)*(byte *)((longlong)this + 0x7b) << 4 ^ *(uint *)&__return_storage_ptr__->field_0x8
          ) & 0x80 ^ *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4;
  if (*(char *)((longlong)this + 0x89) != '\x01') {
    uVar5 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5 | uVar4 & 0xffffdfff;
  bVar3 = FPrimitiveSceneProxy::ShouldRenderCustomDepth(this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar3 << 5;
  uVar2 = *(undefined4 *)&__return_storage_ptr__->field_0x8;
  uVar5 = ((uint)*(byte *)((longlong)this + 0x7f) << 0xe ^
          *(uint *)&__return_storage_ptr__->field_0x8) & 0x4000 ^ uVar2;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5;
  if (((((*(char *)((longlong)this + 0x68) == '\x02') ||
        (*(char *)((longlong)this + 0x68) == '\x01')) ||
       ((*(byte *)((longlong)this + 0x86) & 1) != 0)) ||
      (((char)*(byte *)((longlong)this + 0x82) < '\0' ||
       (uVar4 = 0, (*(byte *)((longlong)this + 0x82) & 0x72) != 0)))) &&
     ((uVar4 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      ((char)(ZPULL(uVar2,7,1) << 7) < '\0')))) {
    uVar4 = 0x10;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5 & 0xffffffef | uVar4;
  return __return_storage_ptr__;
}

// FSplineMeshSceneProxy @ 148711580

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSplineMeshSceneProxy * __thiscall
FSplineMeshSceneProxy::FSplineMeshSceneProxy
          (FSplineMeshSceneProxy *this,FStaticMeshSceneProxyDesc *param_1,
          FSplineMeshSceneProxyDesc *param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  FGenericStaticFeatureLevel FVar4;
  FStaticMeshRayTracingProxy *pFVar5;
  code *pcVar6;
  TVector2<float>_u_0 TVar7;
  FStaticMeshSceneProxyDesc *pFVar8;
  char cVar9;
  bool bVar10;
  FStaticShaderPlatform FVar11;
  uint uVar12;
  UMaterial *pUVar13;
  FSplineMeshShaderParams *pFVar14;
  FSplineMeshSceneProxy *pFVar15;
  int *piVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  int *piVar21;
  undefined1 local_res8 [8];
  FStaticMeshSceneProxyDesc *local_res10;
  FSplineMeshSceneProxyDesc *local_res18;
  undefined1 local_res20 [8];
  FSplineMeshShaderParams local_f8;
  
  local_res10 = param_1;
  local_res18 = param_2;
  FStaticMeshSceneProxy::FStaticMeshSceneProxy((FStaticMeshSceneProxy *)this,param_1,false);
  this->_padding_ = (longlong)&___7__TSplineMeshSceneProxyCommon_VFSplineMeshSceneProxy____6B_;
  FSingleInstanceDataBuffers::FSingleInstanceDataBuffers
            ((FSingleInstanceDataBuffers *)&this->_padding_);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  memset(&this->_padding_,0,0xb0);
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  pbVar2 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar2 = *pbVar2 & 0xfe;
  pbVar2 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar2 = *pbVar2 | 0x20;
  pbVar2 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar2 = *pbVar2 & 0xfb;
  this->_padding_ = (longlong)&_vftable__for__FStaticMeshSceneProxy__;
  (this->LODResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODResources).ArrayNum = 0;
  (this->LODResources).ArrayMax = 0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 10;
  this->_padding_ = (longlong)&_vftable__for__TSplineMeshSceneProxyCommon<FSplineMeshSceneProxy>__;
  lVar18 = this->_padding_;
  iVar19 = (int)this->_padding_;
  lVar20 = (longlong)iVar19 * 0x80 + lVar18;
  piVar21 = (int *)(lVar18 + 0x50);
  while( true ) {
    if ((int)this->_padding_ != iVar19) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FStaticMeshSceneProxy::FLODInfo,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (lVar18 == lVar20) break;
    piVar16 = *(int **)(piVar21 + -2);
    iVar3 = *piVar21;
    if (piVar16 == (int *)0x0) {
      piVar16 = piVar21 + -8;
    }
    piVar1 = piVar16 + (longlong)iVar3 * 6;
    while( true ) {
      if (*piVar21 != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FStaticMeshSceneProxy::FLODInfo::FSectionInfo,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res20);
      }
      if (piVar16 == piVar1) break;
      cVar9 = (**(code **)(**(longlong **)piVar16 + 0x378))(*(longlong **)piVar16,6);
      if (cVar9 == '\0') {
        pUVar13 = UMaterial::GetDefaultMaterial(MD_Surface);
        *(UMaterial **)piVar16 = pUVar13;
      }
      piVar16 = piVar16 + 6;
    }
    lVar18 = lVar18 + 0x80;
    piVar21 = piVar21 + 0x20;
  }
  pFVar14 = FSplineMeshSceneProxyDesc::CalculateShaderParams(local_res18,&local_f8);
  pFVar8 = local_res10;
  iVar19 = 0;
  lVar18 = *(longlong *)((longlong)&(pFVar14->StartPos).field0_0x0 + 8);
  this->_padding_ = *(longlong *)&(pFVar14->StartPos).field0_0x0;
  this->_padding_ = lVar18;
  lVar18 = *(longlong *)&(pFVar14->StartTangent).field0_0x0;
  this->_padding_ = *(longlong *)((longlong)&(pFVar14->EndPos).field0_0x0 + 4);
  this->_padding_ = lVar18;
  lVar18 = *(longlong *)((longlong)&(pFVar14->EndTangent).field0_0x0 + 4);
  this->_padding_ = *(longlong *)((longlong)&(pFVar14->StartTangent).field0_0x0 + 8);
  this->_padding_ = lVar18;
  TVar7 = (pFVar14->EndOffset).field0_0x0;
  this->_padding_ = (longlong)(pFVar14->StartOffset).field0_0x0;
  this->_padding_ = (longlong)TVar7;
  TVar7 = (pFVar14->StartScale).field0_0x0;
  this->_padding_ = *(longlong *)&pFVar14->StartRoll;
  this->_padding_ = (longlong)TVar7;
  lVar18 = *(longlong *)&pFVar14->MeshZScale;
  this->_padding_ = (longlong)(pFVar14->EndScale).field0_0x0;
  this->_padding_ = lVar18;
  lVar18 = *(longlong *)&pFVar14->bSmoothInterpRollScale;
  this->_padding_ = (longlong)(pFVar14->MeshDeformScaleMinMax).field0_0x0;
  this->_padding_ = lVar18;
  lVar18 = *(longlong *)&(pFVar14->MeshDir).field0_0x0;
  this->_padding_ = *(longlong *)((longlong)&(pFVar14->SplineUpDir).field0_0x0 + 4);
  this->_padding_ = lVar18;
  lVar18 = *(longlong *)((longlong)&(pFVar14->MeshX).field0_0x0 + 4);
  this->_padding_ = *(longlong *)((longlong)&(pFVar14->MeshDir).field0_0x0 + 8);
  this->_padding_ = lVar18;
  lVar18 = *(longlong *)((longlong)&(pFVar14->MeshY).field0_0x0 + 8);
  this->_padding_ = *(longlong *)&(pFVar14->MeshY).field0_0x0;
  this->_padding_ = lVar18;
  lVar18 = *(longlong *)&pFVar14->SplineDistToTexelOffset;
  this->_padding_ = *(longlong *)((longlong)&(pFVar14->TextureCoord).field0_0x0 + 4);
  this->_padding_ = lVar18;
  FVar4.FeatureLevel = ((FSceneInterface *)this->_padding_)->FeatureLevel;
  if (1 < (int)FVar4.FeatureLevel) {
    FVar11.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
    bVar10 = UseGPUScene(FVar11,FVar4);
    if (bVar10) {
      FSplineMeshSceneInstanceDataBuffers::Setup
                ((FSplineMeshSceneInstanceDataBuffers *)&this->_padding_,
                 (FSplineMeshShaderParams *)&this->_padding_);
      FPrimitiveSceneProxy::SetupInstanceSceneDataBuffers
                ((FPrimitiveSceneProxy *)this,(FInstanceSceneDataBuffers *)&this->_padding_);
    }
  }
  uVar17 = 0;
  if (0 < (int)this->_padding_) {
    lVar18 = 0;
    do {
      FSplineMeshSceneProxyDesc::InitVertexFactory
                (pFVar8->StaticMesh,FVar4.FeatureLevel,uVar17,(FColorVertexBuffer *)0x0);
      if ((-1 < (int)uVar17) && ((int)uVar17 < (pFVar8->LODData).ArrayNum)) {
        uVar12 = 0;
        if ((int)uVar17 < (pFVar8->LODData).ArrayNum) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        if (uVar12 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            pFVar15 = (FSplineMeshSceneProxy *)(*pcVar6)();
            return pFVar15;
          }
        }
        if (*(longlong *)((longlong)&((pFVar8->LODData).DataPtr)->OverrideVertexColors + lVar18) !=
            0) {
          uVar12 = 0;
          if ((int)uVar17 < (pFVar8->LODData).ArrayNum) {
            uVar12 = ~uVar17 >> 0x1f;
          }
          if (uVar12 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              pFVar15 = (FSplineMeshSceneProxy *)(*pcVar6)();
              return pFVar15;
            }
          }
          FSplineMeshSceneProxyDesc::InitVertexFactory
                    (pFVar8->StaticMesh,FVar4.FeatureLevel,uVar17,
                     *(FColorVertexBuffer **)
                      ((longlong)&((pFVar8->LODData).DataPtr)->OverrideVertexColors + lVar18));
        }
      }
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 0x50;
    } while ((int)uVar17 < (int)this->_padding_);
  }
  if (((((this->_padding_ & 1) != 0) && (pFVar8->StaticMesh != (UStaticMesh *)0x0)) &&
      (pFVar5 = ((pFVar8->StaticMesh->RenderData).Ptr)->RayTracingProxy,
      pFVar5->bUsingRenderingLODs == false)) && (iVar3 = (pFVar5->LODs).Array.ArrayNum, 0 < iVar3))
  {
    do {
      FSplineMeshSceneProxyDesc::InitRayTracingProxyVertexFactory
                (pFVar8->StaticMesh,FVar4.FeatureLevel,iVar19,(FColorVertexBuffer *)0x0);
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar3);
  }
  return this;
}

// FSplineMeshSceneProxy @ 148711990

FSplineMeshSceneProxy * __thiscall
FSplineMeshSceneProxy::FSplineMeshSceneProxy
          (FSplineMeshSceneProxy *this,USplineMeshComponent *param_1)

{
  FSplineMeshSceneProxyDesc *pFVar1;
  FStaticMeshSceneProxyDesc *pFVar2;
  FStaticMeshSceneProxyDesc local_2a8;
  FSplineMeshSceneProxyDesc local_118;
  
  pFVar1 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_118,param_1);
  pFVar2 = FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc
                     (&local_2a8,(UStaticMeshComponent *)param_1);
  FSplineMeshSceneProxy(this,pFVar2,pFVar1);
  FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc(&local_2a8);
  this->_padding_ = (longlong)&_vftable__for__FStaticMeshSceneProxy__;
  this->_padding_ = (longlong)&_vftable__for__TSplineMeshSceneProxyCommon<FSplineMeshSceneProxy>__;
  return this;
}

// Downcast @ 148730700

FSplineMeshSceneProxy * __thiscall FSplineMeshSceneProxy::Downcast(FSplineMeshSceneProxy *this)

{
  return (FSplineMeshSceneProxy *)&this[-1]._padding_;
}

// GetCollisionMeshElement @ 14873a290

bool __thiscall
FSplineMeshSceneProxy::GetCollisionMeshElement
          (FSplineMeshSceneProxy *this,int param_1,int param_2,int param_3,uchar param_4,
          FMaterialRenderProxy *param_5,FMeshBatch *param_6)

{
  bool bVar1;
  
  bVar1 = FStaticMeshSceneProxy::GetCollisionMeshElement
                    ((FStaticMeshSceneProxy *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  if (bVar1) {
    SetupMeshBatchForSpline(this,param_1,param_6);
    return true;
  }
  return false;
}

// GetDynamicRayTracingInstances @ 14873af60

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
FSplineMeshSceneProxy::GetDynamicRayTracingInstances
          (FSplineMeshSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  FRHIResource *pFVar7;
  FMeshBatch *pFVar8;
  code *pcVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  byte bVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  UMaterial *pUVar16;
  FMaterialRenderProxy *pFVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  FMeshBatch *pFVar22;
  FRWBuffer *pFVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  byte bVar26;
  uint uVar27;
  longlong *plVar28;
  FRayTracingGeometry *this_00;
  undefined1 auStackY_2e8 [32];
  undefined4 uStack_264;
  undefined4 uStack_254;
  FRayTracingInstance local_250;
  FRayTracingDynamicGeometryUpdateParams local_1d8;
  undefined1 local_11d;
  uint *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  FRayTracingGeometry *local_b8;
  FRWBuffer *local_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  float local_98 [2];
  float afStack_90 [2];
  float local_88 [2];
  float afStack_80 [2];
  float local_78 [2];
  float afStack_70 [2];
  float local_68 [2];
  float afStack_60 [2];
  undefined1 local_58;
  FRHIResource *local_50;
  ulonglong local_48;
  
  pTVar10 = CVarRayTracingSplineMeshes.Ref;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (pTVar10->ShadowedValue[1] == 0) {
    return;
  }
  if ((this->_padding_ & 1) == 0) {
    return;
  }
  if (((int)this->_padding_ == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!DynamicRayTracingGeometries.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshSceneProxy.cpp"
                          ,0xd9,L"DynamicRayTracingGeometries has not been initialized correctly"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((this->_padding_ & 0x2000) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!HasViewDependentDPG()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\PrimitiveSceneProxy.h"
                          ,0x29e,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar26 = *(byte *)((longlong)&this->_padding_ + 2);
  iVar2 = (param_1->Views).ArrayNum;
  pFVar24 = (param_1->Views).AllocatorInstance.Data;
  plVar28 = *(longlong **)(this->_padding_ + 0x48);
  iVar25 = (int)plVar28[1];
  if ((iVar2 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar3 = param_1->VisibilityMap;
  uVar20 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
    }
  }
  uVar19 = 0x20;
  if (uVar3 != 0) {
    uVar19 = uVar20;
  }
  if ((((int)uVar19 < 0) || (iVar2 <= (int)uVar19)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Views.IsValidIndex(FirstActiveViewIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshSceneProxy.cpp"
                          ,0xe7,
                          L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar20 = 0;
  if ((int)uVar19 < iVar2) {
    uVar20 = ~uVar19 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar20 = 0;
  if (*(char *)(*(longlong *)(this->_padding_ + 0x48) + 0x18) != '\0') {
    uVar27 = iVar25 - 1;
    iVar21 = 0;
    if (0 < iVar2) {
      uVar20 = 1;
      do {
        uVar15 = uVar27;
        if ((uVar3 & uVar20) != 0) {
          if ((iVar21 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((*(char *)(*(longlong *)(this->_padding_ + 0x48) + 0x18) != '\0') &&
             (uVar15 = FStaticMeshSceneProxy::GetLOD
                                 ((FStaticMeshSceneProxy *)this,*(FSceneView **)pFVar24),
             (int)uVar27 < (int)uVar15)) {
            uVar15 = uVar27;
          }
        }
        uVar27 = uVar15;
        iVar21 = iVar21 + 1;
        uVar20 = uVar20 << 1 | (uint)((int)uVar20 < 0);
        pFVar24 = pFVar24 + 8;
      } while (iVar21 < iVar2);
    }
    bVar12 = FStaticMeshSceneProxy::GetCurrentFirstLODIdx_Internal((FStaticMeshSceneProxy *)this);
    uVar20 = (uint)bVar12;
    if ((int)(uint)bVar12 < (int)uVar27) {
      uVar20 = uVar27;
    }
  }
  if (*(char *)(*(longlong *)(this->_padding_ + 0x48) + 0x18) == '\0') {
    FRayTracingInstanceCollector::AddReferencedGeometryGroupForDynamicUpdate
              (param_1,*(int *)(this->_padding_ + 0x88));
    for (; (int)uVar20 < iVar25; uVar20 = uVar20 + 1) {
      uVar27 = 0;
      if ((int)uVar20 < (int)plVar28[1]) {
        uVar27 = ~uVar20 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      plVar5 = *(longlong **)(*plVar28 + (longlong)(int)uVar20 * 8);
      if (((*(byte *)((longlong)plVar5 + 0x5c) & 4) != 0) ||
         (cVar13 = (**(code **)(*plVar5 + 0x18))(), cVar13 != '\0')) break;
    }
  }
  FRayTracingInstanceCollector::AddReferencedGeometryGroup(param_1,*(int *)(this->_padding_ + 0x88))
  ;
  if (uVar20 == 0xffffffff) {
    return;
  }
  if (iVar25 <= (int)uVar20) {
    return;
  }
  uVar15 = ~uVar20 >> 0x1f;
  uVar27 = 0;
  if ((int)uVar20 < (int)plVar28[1]) {
    uVar27 = uVar15;
  }
  if ((uVar27 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar6 = *(longlong *)(*plVar28 + (longlong)(int)uVar20 * 8);
  uVar27 = 0;
  if ((int)uVar20 < (int)this->_padding_) {
    uVar27 = uVar15;
  }
  if ((uVar27 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar27 = (uint)this->_padding_;
  local_11d = 1;
  plVar28 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar28 = &this->_padding_;
  }
  local_108 = (uint *)0x0;
  this_00 = (FRayTracingGeometry *)(plVar28 + (longlong)(int)uVar20 * 0x20);
  iStack_100 = 0;
  uVar4 = *(uint *)(*(longlong *)(lVar6 + 0x10) + 0x28);
  if ((uVar4 == uVar27) && ((int)(short)this->_padding_ == uVar20)) {
    local_11d = 0;
  }
  else {
    plVar28 = &this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
      DestructItems<FMeshBatch,int>((FMeshBatch *)*plVar28,uVar27);
      *(undefined4 *)&this->_padding_ = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,0,(ForAnyElementType *)plVar28,0,piVar1);
      }
    }
    else {
      DestructItems<FMeshBatch,int>((FMeshBatch *)*plVar28,uVar27);
      *(undefined4 *)&this->_padding_ = 0;
    }
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (*piVar1 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,8,uVar4,(ForAnyElementType *)plVar28,(int)this->_padding_,piVar1);
    }
    iVar25 = 0;
    if (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 0x28)) {
      bVar26 = bVar26 & 7;
      do {
        iVar21 = (int)this->_padding_;
        if (iVar21 == *(int *)((longlong)&this->_padding_ + 4)) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8e0,(ForAnyElementType *)plVar28,
                              (int *)((longlong)&this->_padding_ + 4));
        }
        *(int *)&this->_padding_ = iVar21 + 1;
        pFVar22 = (FMeshBatch *)(*plVar28 + (longlong)iVar21 * 0xe0);
        DefaultConstructItems<FMeshBatch,int>(pFVar22,1);
        if (*(char *)(*(longlong *)(this->_padding_ + 0x48) + 0x18) == '\0') {
          bVar11 = FStaticMeshSceneProxy::GetRayTracingMeshElement
                             ((FStaticMeshSceneProxy *)this,uVar20,0,iVar25,bVar26,pFVar22);
          if (!bVar11) goto LAB_14873b543;
          SetupRayTracingMeshBatchForSpline(this,uVar20,pFVar22);
          bVar11 = true;
        }
        else {
          bVar11 = FStaticMeshSceneProxy::GetMeshElement
                             ((FStaticMeshSceneProxy *)this,uVar20,0,iVar25,bVar26,false,false,
                              pFVar22);
          if (bVar11) {
            SetupMeshBatchForSpline(this,uVar20,pFVar22);
            bVar11 = true;
          }
          else {
LAB_14873b543:
            bVar11 = false;
          }
        }
        if (!bVar11) {
          pUVar16 = UMaterial::GetDefaultMaterial(MD_Surface);
          pFVar17 = (FMaterialRenderProxy *)(**(code **)(pUVar16->_padding_ + 0x310))(pUVar16);
          pFVar22->MaterialRenderProxy = pFVar17;
          plVar5 = *(longlong **)(*(longlong *)(this->_padding_ + 0x48) + 0x10);
          uVar27 = 0;
          if ((int)uVar20 < (int)plVar5[1]) {
            uVar27 = uVar15;
          }
          if ((uVar27 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar22->VertexFactory = (FVertexFactory *)((longlong)(int)uVar20 * 0x470 + *plVar5);
        }
        lVar18 = this->_padding_;
        pFVar22->SegmentIndex = iVar25;
        pFVar22->MeshIdInPrimitive = (ushort)iVar25;
        iVar25 = iVar25 + 1;
        *(uint *)&pFVar22->field_0xd4 =
             ((uint)lVar18 >> 1 ^ ZPULL(*(undefined4 *)&pFVar22->field_0xd4,0,1)) & 1 ^
             *(undefined4 *)&pFVar22->field_0xd4;
      } while (iVar25 < *(int *)(*(longlong *)(lVar6 + 0x10) + 0x28));
    }
    *(short *)&this->_padding_ = (short)uVar20;
  }
  iVar25 = (int)this->_padding_;
  pFVar22 = (FMeshBatch *)this->_padding_;
  if ((iVar25 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = CVarRayTracingSplineMeshesForceUpdate.Ref;
  if ((this->_padding_ & 0x40000) == 0) {
    bVar11 = IsInParallelRenderingThread();
    if ((!bVar11) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (pTVar10->ShadowedValue[1] != 0) goto LAB_14873b851;
    bVar11 = false;
    if (((((char)this->_padding_ == '\0') &&
         (this_00->DynamicGeometrySharedBufferGenerationID == -1)) &&
        (bVar14 = FRayTracingGeometry::IsValid(this_00), bVar14)) &&
       ((bVar14 = FRayTracingGeometry::IsEvicted(this_00), !bVar14 &&
        ((this_00->GeometryState & RequiresBuild) == Invalid)))) goto LAB_14873b712;
  }
  else {
LAB_14873b851:
    bVar11 = true;
  }
  plVar28 = &this->_padding_;
  pFVar23 = (FRWBuffer *)plVar28;
  if (bVar11) {
    pFVar23 = (FRWBuffer *)0x0;
    *(undefined4 *)&this->_padding_ = 0;
    pFVar7 = (FRHIResource *)*plVar28;
    if (pFVar7 != (FRHIResource *)0x0) {
      *plVar28 = 0;
      FRHIResource::Release(pFVar7);
    }
    pFVar7 = (FRHIResource *)this->_padding_;
    if (pFVar7 != (FRHIResource *)0x0) {
      this->_padding_ = 0;
      FRHIResource::Release(pFVar7);
    }
    pFVar7 = (FRHIResource *)this->_padding_;
    if (pFVar7 != (FRHIResource *)0x0) {
      this->_padding_ = 0;
      FRHIResource::Release(pFVar7);
    }
  }
  lVar18 = this->_padding_;
  uVar27 = 0;
  if ((int)uVar20 < *(int *)(lVar18 + 0x18)) {
    uVar27 = uVar15;
  }
  if ((uVar27 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar18 = (**(code **)(*(longlong *)((longlong)(int)uVar20 * 0x470 + *(longlong *)(lVar18 + 0x10))
                       + 0x30))();
  if ((*(uint *)(lVar18 + 0x38) & 0x400) != 0) {
    iVar21 = (int)this->_padding_;
    pFVar8 = (FMeshBatch *)this->_padding_;
    local_d8.Data = (FScriptContainerElement *)0x0;
    uVar20 = *(uint *)(*(longlong *)(lVar6 + 0x18) + 0xfc);
    if (iVar21 == 0) {
      local_1d8.MeshBatches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.MeshBatches.ArrayNum = iVar21;
      local_1d8.MeshBatches.ArrayMax = 0;
    }
    else {
      local_d0._0_4_ = iVar21;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,8,iVar21,0,&local_d8,iVar21,(int *)((longlong)&local_d0 + 4));
      ConstructItems<FMeshBatch,FMeshBatch,int>(local_d8.Data,pFVar8,iVar21);
      local_1d8.MeshBatches.AllocatorInstance.Data = local_d8.Data;
      local_1d8.MeshBatches.ArrayNum = (int)local_d0;
      local_1d8.MeshBatches.ArrayMax = local_d0._4_4_;
    }
    local_1d8.NumTriangles = (this_00->Initializer).TotalPrimitiveCount;
    local_1d8.VertexBufferSize = uVar20 * 0xc;
    local_c8 = 0;
    local_a8 = 1;
    local_a4 = 0;
    local_98[0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_98[1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    afStack_90[0] = UE::Math::TMatrix<float>::Identity.M[0][2];
    afStack_90[1] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_88[0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_88[1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    afStack_80[0] = UE::Math::TMatrix<float>::Identity.M[1][2];
    afStack_80[1] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_78[0] = UE::Math::TMatrix<float>::Identity.M[2][0];
    local_78[1] = UE::Math::TMatrix<float>::Identity.M[2][1];
    afStack_70[0] = UE::Math::TMatrix<float>::Identity.M[2][2];
    afStack_70[1] = UE::Math::TMatrix<float>::Identity.M[2][3];
    local_68[0] = UE::Math::TMatrix<float>::Identity.M[3][0];
    local_68[1] = UE::Math::TMatrix<float>::Identity.M[3][1];
    afStack_60[0] = UE::Math::TMatrix<float>::Identity.M[3][2];
    afStack_60[1] = UE::Math::TMatrix<float>::Identity.M[3][3];
    local_58 = 0;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    local_1d8.bUsingIndirectDraw = false;
    local_1d8.bApplyWorldPositionOffset = true;
    local_1d8.InstanceId = 0;
    local_1d8.WorldToInstance.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_1d8.WorldToInstance.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    local_1d8.WorldToInstance.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
    local_1d8.WorldToInstance.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_1d8.WorldToInstance.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_1d8.WorldToInstance.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    local_1d8.WorldToInstance.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
    local_1d8.WorldToInstance.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_1d8.WorldToInstance.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
    local_1d8.WorldToInstance.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
    local_1d8.WorldToInstance.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
    local_1d8.WorldToInstance.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
    local_1d8.WorldToInstance.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
    local_1d8.WorldToInstance.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
    local_1d8.WorldToInstance.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
    local_1d8.WorldToInstance.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
    local_1d8.bAlphaMasked = false;
    local_1d8.IndexBuffer.Reference = (FRHIBuffer *)0x0;
    local_50 = (FRHIResource *)0x0;
    local_1d8.NumVertices = uVar20;
    local_1d8.Geometry = this_00;
    local_1d8.Buffer = pFVar23;
    local_c4 = uVar20;
    local_c0 = local_1d8.VertexBufferSize;
    local_bc = local_1d8.NumTriangles;
    local_b8 = this_00;
    local_b0 = pFVar23;
    FRayTracingInstanceCollector::AddRayTracingGeometryUpdate(param_1,uVar19,&local_1d8);
    if (local_50 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_50);
    }
    DestructItems<FMeshBatch,int>((FMeshBatch *)local_d8.Data,(int)local_d0);
    if ((FMeshBatch *)local_d8.Data != (FMeshBatch *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    *(undefined1 *)&this->_padding_ = 0;
  }
LAB_14873b712:
  uVar20 = 0;
  if (((int)this->_padding_ != iVar25) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CachedRayTracingMaterials.Num() == RayTracingInstance.GetMaterials().Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshSceneProxy.cpp"
                          ,0x182,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((this_00->Initializer).Segments.ArrayNum != (int)this->_padding_) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("RayTracingInstance.Geometry->Initializer.Segments.Num() == CachedRayTracingMaterials.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshSceneProxy.cpp"
                          ,0x186,
                          L"Segments/Materials mismatch. Number of segments: %d. Number of Materials: %d. LOD Index: %d"
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (0 < iVar2) {
    do {
      if ((uVar3 >> (uVar20 & 0x1f) & 1) != 0) {
        local_250.MaterialsView._12_4_ = uStack_264;
        local_250.MaterialsView.ArrayNum = iVar25;
        local_250.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_250.PrimitiveInstanceIndicesView._12_4_ = uStack_fc;
        local_250.PrimitiveInstanceIndicesView.ArrayNum = iStack_100;
        local_250.PrimitiveInstanceIndicesView.DataPtr = local_108;
        local_250.Materials.ArrayNum = 0;
        local_250.Materials.ArrayMax = 0;
        local_250.InstanceTransformsView._12_4_ = uStack_254;
        local_250.InstanceTransformsView.ArrayNum = 1;
        local_250.bApplyLocalBoundsTransform = false;
        local_250.bThinGeometry = false;
        local_250.InstanceLayer = NearField;
        local_250.bInstanceMaskAndFlagsDirty = (bool)local_11d;
        local_250.NumTransforms = 0;
        local_250.PrimitiveInstanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_250.PrimitiveInstanceIndices.ArrayNum = 0;
        local_250.PrimitiveInstanceIndices.ArrayMax = 0;
        local_250.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_250.InstanceTransforms.ArrayNum = 0;
        local_250.InstanceTransforms.ArrayMax = 0;
        local_250.Geometry = this_00;
        local_250.MaterialsView.DataPtr = pFVar22;
        local_250.InstanceTransformsView.DataPtr = (TMatrix<double> *)&this->_padding_;
        FRayTracingInstanceCollector::AddRayTracingInstance(param_1,uVar20,&local_250);
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar2);
  }
  DestructItems<FMeshBatch,int>((FMeshBatch *)0x0,0);
  return;
}

// GetMeshElement @ 14873c990

bool __thiscall
FSplineMeshSceneProxy::GetMeshElement
          (FSplineMeshSceneProxy *this,int param_1,int param_2,int param_3,uchar param_4,
          bool param_5,bool param_6,FMeshBatch *param_7)

{
  bool bVar1;
  
  bVar1 = FStaticMeshSceneProxy::GetMeshElement
                    ((FStaticMeshSceneProxy *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7);
  if (bVar1) {
    SetupMeshBatchForSpline(this,param_1,param_7);
    return true;
  }
  return false;
}

// GetRayTracingMeshElement @ 14873ec80

bool __thiscall
FSplineMeshSceneProxy::GetRayTracingMeshElement
          (FSplineMeshSceneProxy *this,int param_1,int param_2,int param_3,uchar param_4,
          FMeshBatch *param_5)

{
  bool bVar1;
  
  bVar1 = FStaticMeshSceneProxy::GetRayTracingMeshElement
                    ((FStaticMeshSceneProxy *)this,param_1,param_2,param_3,param_4,param_5);
  if (bVar1) {
    SetupRayTracingMeshBatchForSpline(this,param_1,param_5);
    return true;
  }
  return false;
}

// GetShadowMeshElement @ 14873f540

bool __thiscall
FSplineMeshSceneProxy::GetShadowMeshElement
          (FSplineMeshSceneProxy *this,int param_1,int param_2,uchar param_3,FMeshBatch *param_4,
          bool param_5)

{
  bool bVar1;
  
  bVar1 = FStaticMeshSceneProxy::GetShadowMeshElement
                    ((FStaticMeshSceneProxy *)this,param_1,param_2,param_3,param_4,param_5);
  if (bVar1) {
    SetupMeshBatchForSpline(this,param_1,param_4);
    return true;
  }
  return false;
}

// GetTypeHash @ 148741300

ulong64 __thiscall FSplineMeshSceneProxy::GetTypeHash(FSplineMeshSceneProxy *this)

{
  return 0x155249030;
}

// GetWireframeMeshElement @ 1487424c0

bool __thiscall
FSplineMeshSceneProxy::GetWireframeMeshElement
          (FSplineMeshSceneProxy *this,int param_1,int param_2,FMaterialRenderProxy *param_3,
          uchar param_4,bool param_5,FMeshBatch *param_6)

{
  bool bVar1;
  
  bVar1 = FStaticMeshSceneProxy::GetWireframeMeshElement
                    ((FStaticMeshSceneProxy *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  if (bVar1) {
    SetupMeshBatchForSpline(this,param_1,param_6);
    return true;
  }
  return false;
}

// HasRayTracingRepresentation @ 148742b40

bool __thiscall FSplineMeshSceneProxy::HasRayTracingRepresentation(FSplineMeshSceneProxy *this)

{
  return true;
}

// IsRayTracingRelevant @ 14874b6c0

bool __thiscall FSplineMeshSceneProxy::IsRayTracingRelevant(FSplineMeshSceneProxy *this)

{
  return true;
}

// OnTransformChanged @ 14874d340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSplineMeshSceneProxy::OnTransformChanged(FSplineMeshSceneProxy *this,FRHICommandListBase *param_1)

{
  TVector<float>_u_0 local_48;
  float local_3c;
  float local_38;
  float local_34;
  
  local_48._s_0.X = (float)((double)this->_padding_ - (double)this->_padding_);
  local_48._s_0.Y = (float)((double)this->_padding_ - (double)this->_padding_);
  local_48._s_0.Z = (float)((double)this->_padding_ - (double)this->_padding_);
  local_3c = (float)((double)this->_padding_ + (double)this->_padding_);
  local_38 = (float)((double)this->_padding_ + (double)this->_padding_);
  local_34 = (float)((double)this->_padding_ + (double)this->_padding_);
  FSingleInstanceDataBuffers::UpdateDefaultInstance
            ((FSingleInstanceDataBuffers *)&this->_padding_,(TMatrix<double> *)&this->_padding_,
             (FRenderBounds *)&local_48._s_0);
  return;
}

// SetupMeshBatchForSpline @ 14875bbb0

void __thiscall
FSplineMeshSceneProxy::SetupMeshBatchForSpline
          (FSplineMeshSceneProxy *this,int param_1,FMeshBatch *param_2)

{
  float *pfVar1;
  longlong lVar2;
  ForElementType<FMeshBatchElement> FVar3;
  FVertexFactory *pFVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<FMeshBatchElement> FVar7;
  uint uVar8;
  
  lVar2 = this->_padding_;
  uVar8 = 0;
  if (param_1 < *(int *)(lVar2 + 0x18)) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x10);
  if ((param_2->Elements).ArrayNum != 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutMeshBatch.Elements.Num() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshSceneProxy.cpp"
                       ,0x7e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((param_2->Elements).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar3 = (param_2->Elements).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FMeshBatchElement>)param_2;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar7 = FVar3;
  }
  pFVar4 = *(FVertexFactory **)
            ((((ulonglong)(*(uint *)((longlong)FVar7 + 0x7c) & 0x100) | 0x8c00) >> 5) +
            (longlong)param_1 * 0x470 + lVar2);
  param_2->VertexFactory = pFVar4;
  if (pFVar4 == (FVertexFactory *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutMeshBatch.VertexFactory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshSceneProxy.cpp"
                       ,0x80,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((param_2->Elements).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar3 = (param_2->Elements).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FMeshBatchElement>)param_2;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar7 = FVar3;
  }
  *(FSplineMeshSceneProxy **)((longlong)FVar7 + 0x30) = this;
  if ((param_2->Elements).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar3 = (param_2->Elements).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FMeshBatchElement>)param_2;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar7 = FVar3;
  }
  *(uint *)((longlong)FVar7 + 0x7c) = *(uint *)((longlong)FVar7 + 0x7c) | 0x200;
  lVar2 = this->_padding_;
  if ((param_2->Elements).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar3 = (param_2->Elements).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FMeshBatchElement>)param_2;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar7 = FVar3;
  }
  *(longlong *)FVar7 = lVar2;
  pfVar1 = (float *)((longlong)&this->_padding_ + 4);
  *(uint *)&param_2->field_0xd4 =
       *(uint *)&param_2->field_0xd4 ^
       (uint)((*pfVar1 <= 0.0 && *pfVar1 != 0.0) !=
             (*(float *)&this->_padding_ <= 0.0 && *(float *)&this->_padding_ != 0.0));
  return;
}

// SetupRayTracingMeshBatchForSpline @ 14875c4e0

void __thiscall
FSplineMeshSceneProxy::SetupRayTracingMeshBatchForSpline
          (FSplineMeshSceneProxy *this,int param_1,FMeshBatch *param_2)

{
  float *pfVar1;
  longlong *plVar2;
  longlong lVar3;
  ForElementType<FMeshBatchElement> FVar4;
  FVertexFactory *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ForElementType<FMeshBatchElement> FVar9;
  
  plVar2 = *(longlong **)(*(longlong *)(this->_padding_ + 0x48) + 0x10);
  uVar8 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar3 = *plVar2;
  if ((param_2->Elements).ArrayNum != 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutMeshBatch.Elements.Num() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshSceneProxy.cpp"
                       ,0x8a,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((param_2->Elements).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar4 = (param_2->Elements).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<FMeshBatchElement>)param_2;
  if (FVar4 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar9 = FVar4;
  }
  pFVar5 = *(FVertexFactory **)
            ((((ulonglong)(*(uint *)((longlong)FVar9 + 0x7c) & 0x100) | 0x8c00) >> 5) +
            (longlong)param_1 * 0x470 + lVar3);
  param_2->VertexFactory = pFVar5;
  if (pFVar5 == (FVertexFactory *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutMeshBatch.VertexFactory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshSceneProxy.cpp"
                       ,0x8c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((param_2->Elements).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar4 = (param_2->Elements).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<FMeshBatchElement>)param_2;
  if (FVar4 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar9 = FVar4;
  }
  *(FSplineMeshSceneProxy **)((longlong)FVar9 + 0x30) = this;
  if ((param_2->Elements).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar4 = (param_2->Elements).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<FMeshBatchElement>)param_2;
  if (FVar4 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar9 = FVar4;
  }
  *(uint *)((longlong)FVar9 + 0x7c) = *(uint *)((longlong)FVar9 + 0x7c) | 0x200;
  lVar3 = this->_padding_;
  if ((param_2->Elements).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar4 = (param_2->Elements).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<FMeshBatchElement>)param_2;
  if (FVar4 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar9 = FVar4;
  }
  *(longlong *)FVar9 = lVar3;
  pfVar1 = (float *)((longlong)&this->_padding_ + 4);
  *(uint *)&param_2->field_0xd4 =
       *(uint *)&param_2->field_0xd4 ^
       (uint)((*pfVar1 <= 0.0 && *pfVar1 != 0.0) !=
             (*(float *)&this->_padding_ <= 0.0 && *(float *)&this->_padding_ != 0.0));
  return;
}

