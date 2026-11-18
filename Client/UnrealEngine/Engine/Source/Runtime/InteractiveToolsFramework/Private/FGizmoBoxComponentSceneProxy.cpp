// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 5

// CanBeOccluded @ 14964cfe0

bool __thiscall FGizmoBoxComponentSceneProxy::CanBeOccluded(FGizmoBoxComponentSceneProxy *this)

{
  return false;
}

// GetDynamicMeshElements @ 149653090

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGizmoBoxComponentSceneProxy::GetDynamicMeshElements
          (FGizmoBoxComponentSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  double *pdVar1;
  FLinearColor *pFVar2;
  FSceneView *pFVar3;
  code *pcVar4;
  bool bVar5;
  FPrimitiveDrawInterface *pFVar6;
  int iVar7;
  int *piVar8;
  int **ppiVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  longlong lVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  double dVar23;
  uint uVar25;
  double dVar24;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStackY_3a8 [32];
  bool local_328;
  bool local_327;
  bool local_326 [6];
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  uint local_2d0;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  longlong local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  FMeshElementCollector *local_248;
  TVector<double>_u_0 local_240;
  longlong *local_228;
  double local_220;
  double local_218;
  FGizmoBoxComponentSceneProxy *local_210;
  code *local_208;
  longlong **local_200;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  TVector<double>_u_0 local_1c8;
  double local_1a8 [4];
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  uVar26 = SUB84(__real_3ff0000000000000,0);
  uVar27 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar10 = 0;
  iVar7 = param_1->ArrayNum;
  local_248 = param_4;
  local_240._s_0.X =
       (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * (double)this->_padding_ +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * (double)this->_padding_ +
       __real_3ff0000000000000 * (double)this->_padding_;
  local_240._s_0.Y =
       (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * (double)this->_padding_ +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * (double)this->_padding_ +
       __real_3ff0000000000000 * (double)this->_padding_;
  local_240._s_0.Z =
       (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
       (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
       (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
       (double)this->_padding_ * __real_3ff0000000000000;
  if (0 < iVar7) {
    uVar11 = 1;
    local_290 = 0;
    fVar14 = __real_3f800000;
    local_2d0 = param_3;
    local_2c8 = param_1;
    local_210 = this;
    do {
      lVar13 = local_290;
      if ((param_3 & uVar11) != 0) {
        uVar22 = 0;
        if ((int)uVar10 < iVar7) {
          uVar22 = ~uVar10 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = *(FSceneView **)((local_2c8->AllocatorInstance).Data + lVar13);
        pFVar6 = FMeshElementCollector::GetPDI(param_4,uVar10);
        if (this->bExternalWorldLocalState == (bool *)0x0) {
          bVar5 = false;
        }
        else {
          bVar5 = *this->bExternalWorldLocalState;
        }
        local_326[0] = false;
        local_327 = false;
        local_328 = false;
        bVar12 = false;
        if (this->bExternalIsViewDependent != (bool *)0x0) {
          bVar12 = *this->bExternalIsViewDependent;
        }
        local_228 = &this->_padding_;
        local_200 = &local_228;
        local_208 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGizmoBoxComponentSceneProxy::GetDynamicMeshElements'::__l7::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                    ::Call;
        GizmoBoxComponentLocals::GetBoxDirections<FSceneView>
                  (bVar12,pFVar3,(TVector<double> *)&local_240._s_0,&this->DirectionX,
                   &this->DirectionY,&this->DirectionZ,this->bEnableFlipping,bVar5,
                   (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                    *)&local_208,(TVector<double> *)&local_1f8._s_0,
                   (TVector<double> *)&local_1e0._s_0,(TVector<double> *)&local_1c8._s_0,local_326,
                   &local_327,&local_328);
        if (bVar12 != false) {
          fVar14 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
                             (pFVar3,(TVector<double> *)&local_240._s_0,
                              (double)CONCAT44(uVar27,uVar26));
        }
        dVar23 = (double)fVar14;
        local_218 = local_240._s_0.X;
        dVar16 = dVar23 * (this->LocalCenter).field0_0x0._s_0.X;
        dVar17 = dVar23 * (this->LocalCenter).field0_0x0._s_0.Y;
        dVar20 = dVar23 * (this->LocalCenter).field0_0x0._s_0.Z;
        local_220 = local_1f8._s_0.X * dVar16 + local_240._s_0.X + local_1e0._s_0.X * dVar17 +
                    local_1c8._s_0.X * dVar20;
        local_110 = local_1f8._s_0.Y * dVar16 + local_240._s_0.Y + local_1e0._s_0.Y * dVar17 +
                    local_1c8._s_0.Y * dVar20;
        local_108 = local_1f8._s_0.Z * dVar16 + local_240._s_0.Z + local_1e0._s_0.Z * dVar17 +
                    local_1c8._s_0.Z * dVar20;
        local_2f8 = dVar23 * (this->Dimensions).field0_0x0._s_0.Y * __real_3fe0000000000000;
        dVar15 = dVar23 * (this->Dimensions).field0_0x0._s_0.X * __real_3fe0000000000000;
        dVar20 = dVar23 * (this->Dimensions).field0_0x0._s_0.Z * __real_3fe0000000000000;
        local_2d8 = local_1e0._s_0.Z * local_2f8;
        dVar17 = local_1e0._s_0.X * local_2f8;
        local_2f8 = local_1e0._s_0.Y * local_2f8;
        dVar16 = local_1c8._s_0.X * dVar20;
        uVar22 = SUB84(dVar15,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar25 = (uint)((ulonglong)dVar15 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        dVar23 = local_1c8._s_0.Z * dVar20;
        dVar24 = (double)CONCAT44(uVar25,uVar22) * local_1f8._s_0.Z;
        dVar21 = (double)CONCAT44(uVar25,uVar22) * local_1f8._s_0.Y;
        dVar18 = (double)CONCAT44(uVar25,uVar22) * local_1f8._s_0.X;
        local_258 = dVar18 - dVar17;
        local_2e0 = dVar21 - local_2f8;
        local_288 = dVar24 - local_2d8;
        dVar20 = local_1c8._s_0.Y * dVar20;
        local_280 = local_258 - dVar16;
        local_278 = local_2e0 - dVar20;
        local_2c0 = local_288 - dVar23;
        local_300 = local_1f8._s_0.Z * dVar15 - local_2d8;
        local_320 = local_1f8._s_0.Y * dVar15 - local_2f8;
        local_308 = local_1f8._s_0.X * dVar15 - dVar17;
        local_270 = local_308 - dVar16;
        local_2b8 = local_320 - dVar20;
        local_2b0 = local_300 - dVar23;
        local_250 = local_1f8._s_0.X * dVar15 + dVar17;
        local_310 = local_1f8._s_0.Y * dVar15 + local_2f8;
        local_2f0 = local_1f8._s_0.Z * dVar15 + local_2d8;
        dVar17 = dVar17 + dVar18;
        local_2d8 = local_2d8 + dVar24;
        local_268 = local_250 - dVar16;
        local_2a8 = local_310 - dVar20;
        local_2a0 = local_2f0 - dVar23;
        local_2f8 = local_2f8 + dVar21;
        local_260 = dVar17 - dVar16;
        local_258 = dVar16 + local_258;
        local_2e8 = local_2f8 - dVar20;
        local_2e0 = dVar20 + local_2e0;
        local_298 = local_2d8 - dVar23;
        local_288 = dVar23 + local_288;
        local_308 = dVar16 + local_308;
        local_320 = dVar20 + local_320;
        local_300 = dVar23 + local_300;
        local_250 = dVar16 + local_250;
        dVar16 = dVar16 + dVar17;
        local_310 = dVar20 + local_310;
        dVar20 = dVar20 + local_2f8;
        local_318 = dVar23 + local_2f0;
        dVar23 = dVar23 + local_2d8;
        if (this->bRemoveHiddenLines == false) {
          local_138 = local_288 + local_108;
          local_1a8[2] = local_2c0 + local_108;
          local_1a8[0] = local_280 + local_220;
          local_1a8[1] = local_278 + local_110;
          local_148 = local_258 + local_220;
          local_120 = local_300 + local_108;
          local_100 = dVar16 + local_220;
          local_f8 = dVar20 + local_110;
          local_188 = local_2b8 + local_110;
          local_f0 = dVar23 + local_108;
          local_130 = local_308 + local_220;
          pFVar2 = &this->Color;
          local_1a8[3] = local_270 + local_220;
          ppiVar9 = &`public:_virtual_void___cdecl_FGizmoBoxComponentSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                     ::__l2::Lines;
          local_180 = local_2b0 + local_108;
          local_118 = local_250 + local_220;
          local_160 = local_260 + local_220;
          local_178 = local_268 + local_220;
          local_170 = local_2a8 + local_110;
          local_168 = local_2a0 + local_108;
          local_158 = local_2e8 + local_110;
          local_150 = local_298 + local_108;
          local_140 = local_2e0 + local_110;
          local_128 = local_320 + local_110;
          local_110 = local_310 + local_110;
          local_108 = local_318 + local_108;
          do {
            (**(code **)(pFVar6->_padding_ + 0x30))
                      (pFVar6,local_1a8 + (longlong)*(int *)ppiVar9 * 3,
                       local_1a8 + (longlong)*(int *)((longlong)ppiVar9 + 4) * 3,pFVar2);
            ppiVar9 = ppiVar9 + 1;
            this = local_210;
          } while ((longlong)ppiVar9 < 0x151e75430);
        }
        else {
          pdVar1 = (pFVar3->ViewMatrices).ProjectionMatrix.M[3] + 3;
          if (__real_3ff0000000000000 < *pdVar1 || __real_3ff0000000000000 == *pdVar1) {
            dVar17 = (pFVar3->ViewMatrices).ViewMatrix.M[2][2];
            dVar15 = (pFVar3->ViewMatrices).ViewMatrix.M[1][2];
            dVar18 = (pFVar3->ViewMatrices).ViewMatrix.M[0][2];
          }
          else {
            dVar18 = local_240._s_0.X - (pFVar3->ViewLocation).field0_0x0._s_0.X;
            dVar17 = local_240._s_0.Z - (pFVar3->ViewLocation).field0_0x0._s_0.Z;
            dVar15 = local_240._s_0.Y - (pFVar3->ViewLocation).field0_0x0._s_0.Y;
          }
          local_2f8 = __real_c12e847e00000000;
          dVar21 = dVar15 * local_278 + dVar18 * local_280 + dVar17 * local_2c0;
          if (__real_c12e847e00000000 < dVar21) {
            local_2f8 = dVar21;
          }
          local_1a8[0] = local_220 + local_280;
          local_1a8[1] = local_110 + local_278;
          local_1a8[2] = local_108 + local_2c0;
          local_1a8[3] = local_220 + local_270;
          dVar19 = local_2b8 * dVar15 + local_270 * dVar18 + local_2b0 * dVar17;
          local_188 = local_110 + local_2b8;
          local_180 = local_108 + local_2b0;
          dVar24 = dVar19;
          if (dVar19 <= local_2f8) {
            dVar24 = local_2f8;
          }
          local_178 = local_268 + local_220;
          iVar7 = (__real_c12e847e00000000 < dVar21) - 1;
          if (local_2f8 < dVar19) {
            iVar7 = 1;
          }
          local_170 = local_2a8 + local_110;
          dVar19 = local_2a8 * dVar15 + local_268 * dVar18 + dVar17 * local_2a0;
          local_168 = local_2a0 + local_108;
          dVar21 = dVar19;
          if (dVar19 <= dVar24) {
            dVar21 = dVar24;
          }
          if (dVar24 < dVar19) {
            iVar7 = 2;
          }
          local_160 = local_260 + local_220;
          local_158 = local_2e8 + local_110;
          dVar24 = dVar18 * local_260 + dVar15 * local_2e8 + local_298 * dVar17;
          local_150 = local_298 + local_108;
          if (dVar21 < dVar24) {
            iVar7 = 3;
            dVar21 = dVar24;
          }
          local_148 = local_258 + local_220;
          piVar8 = (int *)((longlong)
                           &`public:_virtual_void___cdecl_FGizmoBoxComponentSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                            ::__l2::Lines + 4);
          lVar13 = 0xc;
          local_140 = local_2e0 + local_110;
          dVar19 = dVar15 * local_2e0 + dVar18 * local_258 + dVar17 * local_288;
          local_138 = local_288 + local_108;
          dVar24 = dVar19;
          if (dVar19 <= dVar21) {
            dVar24 = dVar21;
          }
          if (dVar21 < dVar19) {
            iVar7 = 4;
          }
          local_130 = local_308 + local_220;
          local_128 = local_320 + local_110;
          dVar19 = dVar15 * local_320 + dVar18 * local_308 + dVar17 * local_300;
          local_120 = local_300 + local_108;
          dVar21 = dVar24;
          if (dVar24 <= dVar19) {
            dVar21 = dVar19;
          }
          if (dVar24 < dVar19) {
            iVar7 = 5;
          }
          local_f0 = dVar23 + local_108;
          local_118 = local_250 + local_220;
          local_f8 = dVar20 + local_110;
          local_100 = dVar16 + local_220;
          local_110 = local_310 + local_110;
          dVar24 = dVar15 * local_310 + dVar18 * local_250 + dVar17 * local_318;
          local_108 = local_318 + local_108;
          if (dVar21 < dVar24) {
            iVar7 = 6;
            dVar21 = dVar24;
          }
          if (dVar21 < dVar15 * dVar20 + dVar18 * dVar16 + dVar17 * dVar23) {
            iVar7 = 7;
          }
          do {
            if ((piVar8[-1] != iVar7) && (*piVar8 != iVar7)) {
              (**(code **)(pFVar6->_padding_ + 0x30))
                        (pFVar6,local_1a8 + (longlong)piVar8[-1] * 3,
                         local_1a8 + (longlong)*piVar8 * 3,&this->Color);
            }
            piVar8 = piVar8 + 2;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        uVar26 = SUB84(__real_3ff0000000000000,0);
        uVar27 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        param_1 = local_2c8;
        param_4 = local_248;
        fVar14 = __real_3f800000;
        param_3 = local_2d0;
      }
      iVar7 = param_1->ArrayNum;
      local_290 = local_290 + 8;
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    } while ((int)uVar10 < iVar7);
  }
  return;
}

// GetMemoryFootprint @ 149655120

uint __thiscall FGizmoBoxComponentSceneProxy::GetMemoryFootprint(FGizmoBoxComponentSceneProxy *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = (longlong)*(int *)((longlong)&this->_padding_ + 4) * 4 + 0x330;
  if (uVar1 != (uVar1 & 0xffffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (uint)uVar1;
}

// GetTypeHash @ 149658b40

ulong64 __thiscall FGizmoBoxComponentSceneProxy::GetTypeHash(FGizmoBoxComponentSceneProxy *this)

{
  return 0x155283878;
}

// GetViewRelevance @ 149658c70

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
FGizmoBoxComponentSceneProxy::GetViewRelevance
          (FGizmoBoxComponentSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar4 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  puVar3 = &__return_storage_ptr__->field_0x8;
  __return_storage_ptr__->bDynamicRelevance = 1;
  __return_storage_ptr__->bShadowRelevance = 0;
  __return_storage_ptr__->bDrawRelevance = bVar4;
  bVar4 = FPrimitiveSceneProxy::UseEditorCompositing((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bEditorPrimitiveRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 8;
  bVar4 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 5;
  return __return_storage_ptr__;
}

