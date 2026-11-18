// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 5

// CanBeOccluded @ 149696680

bool __thiscall
FGizmoLineHandleComponentSceneProxy::CanBeOccluded(FGizmoLineHandleComponentSceneProxy *this)

{
  return false;
}

// GetDynamicMeshElements @ 1496a0f10

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
FGizmoLineHandleComponentSceneProxy::GetDynamicMeshElements
          (FGizmoLineHandleComponentSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ISceneViewInterface IVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  bool bVar26;
  uint uVar27;
  FPrimitiveDrawInterface *pFVar28;
  int iVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  float fVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  ISceneViewInterface local_1a8;
  double dStack_1a0;
  double local_198;
  undefined1 local_188 [16];
  TOptional<double> local_178;
  TVector<double>_u_0 local_168;
  undefined1 local_148 [16];
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
  double local_e8;
  double local_e0;
  
  fVar25 = __real_3c360b61;
  dVar24 = __real_3fe0000000000000;
  local_1a8 = (ISceneViewInterface)(this->Direction).field0_0x0._s_0.X;
  dStack_1a0 = (this->Direction).field0_0x0._s_0.Y;
  local_198 = (this->Direction).field0_0x0._s_0.Z;
  dVar34 = dStack_1a0;
  local_178.TypedValue = local_198;
  IVar11 = local_1a8;
  if (this->ExternalDistance != (float *)0x0) {
    local_178.TypedValue = (double)*this->ExternalDistance;
    IVar11 = (ISceneViewInterface)((double)local_1a8 * local_178.TypedValue);
    dVar34 = dStack_1a0 * local_178.TypedValue;
    local_178.TypedValue = local_198 * local_178.TypedValue;
  }
  dVar12 = (double)this->_padding_;
  dVar13 = (double)this->_padding_;
  dVar14 = (double)this->_padding_;
  dVar15 = (double)this->_padding_;
  dVar16 = (double)this->_padding_;
  dVar17 = (double)this->_padding_;
  dVar18 = (double)this->_padding_;
  dVar19 = (double)this->_padding_;
  dVar20 = (double)this->_padding_;
  dVar21 = (double)this->_padding_;
  dVar22 = (double)this->_padding_;
  dVar23 = (double)this->_padding_;
  dVar9 = (double)this->HandleSize;
  dVar7 = dVar9 * (this->Normal).field0_0x0._s_0.X + (double)IVar11;
  dVar3 = dVar9 * (this->Normal).field0_0x0._s_0.Y + dVar34;
  dVar10 = dVar9 * (this->Normal).field0_0x0._s_0.Z + local_178.TypedValue;
  dVar9 = dVar14 * dVar3 + dVar12 * dVar7;
  dVar8 = dVar15 * dVar3 + dVar13 * dVar7;
  auVar4._8_4_ = SUB84(dVar8,0);
  auVar4._0_8_ = dVar9;
  auVar4._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_188._8_8_ = auVar4._8_8_;
  dVar9 = dVar9 + dVar16 * dVar10;
  dVar8 = (double)local_188._8_8_ + dVar17 * dVar10;
  auVar2._8_4_ = SUB84(dVar8,0);
  auVar2._0_8_ = dVar9;
  auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_188._8_8_ = auVar2._8_8_;
  dVar9 = dVar9 + dVar18 * __real_3ff0000000000000;
  dVar8 = (double)local_188._8_8_ + dVar19 * __real_3ff0000000000000;
  auVar5._8_4_ = SUB84(dVar8,0);
  auVar5._0_8_ = dVar9;
  auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar8 = dVar21 * dVar3 + dVar20 * dVar7;
  dVar3 = (double)this->_padding_ * dVar3 + (double)this->_padding_ * dVar7;
  auVar6._8_4_ = SUB84(dVar3,0);
  auVar6._0_8_ = dVar8;
  auVar6._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_148._8_8_ = auVar6._8_8_;
  dVar3 = (double)local_148._8_8_ + (double)this->_padding_ * dVar10 +
          (double)this->_padding_ * __real_3ff0000000000000;
  local_148._8_4_ = SUB84(dVar3,0);
  local_148._0_8_ = dVar8 + dVar22 * dVar10 + dVar23 * __real_3ff0000000000000;
  local_148._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  iVar29 = param_1->ArrayNum;
  uVar30 = 0;
  local_168._s_0.X =
       dVar14 * dVar34 + dVar12 * (double)IVar11 + dVar16 * local_178.TypedValue +
       dVar18 * __real_3ff0000000000000;
  local_168._s_0.Y =
       dVar15 * dVar34 + dVar13 * (double)IVar11 + dVar17 * local_178.TypedValue +
       dVar19 * __real_3ff0000000000000;
  uVar35 = SUB84(__real_3ff0000000000000,0);
  uVar36 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_168._s_0.Z =
       dVar21 * dVar34 + dVar20 * (double)IVar11 + dVar22 * local_178.TypedValue +
       dVar23 * __real_3ff0000000000000;
  local_120 = dVar14 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
              dVar12 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
              dVar16 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
              dVar18 * __real_3ff0000000000000;
  local_118 = dVar15 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
              dVar13 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
              dVar17 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
              dVar19 * __real_3ff0000000000000;
  local_110 = dVar21 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
              dVar20 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
              dVar22 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
              dVar23 * __real_3ff0000000000000;
  if (0 < iVar29) {
    lVar31 = 0;
    uVar32 = 1;
    fVar33 = __real_3f800000;
    local_188 = auVar5;
    do {
      if ((param_3 & uVar32) != 0) {
        uVar27 = 0;
        if ((int)uVar30 < iVar29) {
          uVar27 = ~uVar30 >> 0x1f;
        }
        if (uVar27 == 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar26) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        dVar8 = *(double *)((param_1->AllocatorInstance).Data + lVar31);
        pFVar28 = FMeshElementCollector::GetPDI(param_4,uVar30);
        dVar34 = *(double *)((longlong)dVar8 + 0x428);
        dVar3 = *(double *)((longlong)dVar8 + 0x428);
        if ((this->bExternalIsViewDependent != (bool *)0x0) &&
           (*this->bExternalIsViewDependent != false)) {
          local_178.TypedValue = (double)CONCAT44(uVar36,uVar35);
          local_1a8 = (ISceneViewInterface)&___7FSceneViewWrapper_GizmoRenderingUtil_UE__6B_;
          local_178.bIsSet = true;
          dStack_1a0 = dVar8;
          fVar33 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
                             (&local_1a8,(TVector<double> *)&local_168._s_0,true,&local_178);
        }
        dVar12 = auVar5._8_8_ - local_168._s_0.Y;
        dVar10 = (double)(float)((uint)fVar33 ^ __xmm_80000000800000008000000080000000);
        local_f0 = (dVar9 - local_168._s_0.X) * dVar10 + local_168._s_0.X;
        local_e8 = dVar12 * dVar10 + local_168._s_0.Y;
        dVar7 = (double)fVar33;
        local_e0 = ((double)local_148._0_8_ - local_168._s_0.Z) * dVar10 + local_168._s_0.Z;
        local_108 = (dVar9 - local_168._s_0.X) * dVar7 + local_168._s_0.X;
        local_100 = dVar12 * dVar7 + local_168._s_0.Y;
        local_f8 = ((double)local_148._0_8_ - local_168._s_0.Z) * dVar7 + local_168._s_0.Z;
        local_138 = (local_108 + local_f0) * dVar24;
        local_130 = (local_100 + local_e8) * dVar24;
        local_128 = (local_f8 + local_e0) * dVar24;
        if ((this->bExternalHoverState == (bool *)0x0) || (*this->bExternalHoverState != true)) {
          fVar33 = this->Thickness;
        }
        else {
          fVar33 = this->HoverThicknessMultiplier * this->Thickness;
        }
        if (dVar3 <= (double)CONCAT44(uVar36,uVar35) && (double)CONCAT44(uVar36,uVar35) != dVar34) {
          fVar33 = fVar33 * *(float *)((longlong)dVar8 + 0xde8) * fVar25;
        }
        (**(code **)(pFVar28->_padding_ + 0x30))
                  (pFVar28,&local_120,&local_138,&this->Color,1,fVar33,0,1);
        (**(code **)(pFVar28->_padding_ + 0x30))
                  (pFVar28,&local_f0,&local_108,&this->Color,1,fVar33 + fVar33,0,1);
        uVar35 = SUB84(__real_3ff0000000000000,0);
        uVar36 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        dVar9 = local_188._0_8_;
        fVar33 = __real_3f800000;
      }
      iVar29 = param_1->ArrayNum;
      uVar30 = uVar30 + 1;
      uVar32 = uVar32 << 1 | (uint)((int)uVar32 < 0);
      lVar31 = lVar31 + 8;
    } while ((int)uVar30 < iVar29);
  }
  return;
}

// GetMemoryFootprint @ 1496a37b0

uint __thiscall
FGizmoLineHandleComponentSceneProxy::GetMemoryFootprint(FGizmoLineHandleComponentSceneProxy *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = (longlong)*(int *)((longlong)&this->_padding_ + 4) * 4 + 0x2f0;
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

// GetTypeHash @ 1496a9290

ulong64 __thiscall
FGizmoLineHandleComponentSceneProxy::GetTypeHash(FGizmoLineHandleComponentSceneProxy *this)

{
  return 0x155284810;
}

// GetViewRelevance @ 1496aae30

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
FGizmoLineHandleComponentSceneProxy::GetViewRelevance
          (FGizmoLineHandleComponentSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__
          ,FSceneView *param_1)

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

