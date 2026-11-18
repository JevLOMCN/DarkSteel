// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// Apply @ 14c7dc9f0

void __thiscall UE::Geometry::FPlanarFlipsOptimization::Apply(FPlanarFlipsOptimization *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->Mesh == (FDynamicMesh3 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\PlanarFlipsOptimization.cpp"
                       ,0x1f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = 0;
  if (0 < this->NumPasses) {
    do {
      ApplySinglePass(this);
      iVar3 = iVar3 + 1;
    } while (iVar3 < this->NumPasses);
  }
  return;
}

// ApplySinglePass @ 14c7e17f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::FPlanarFlipsOptimization::ApplySinglePass(FPlanarFlipsOptimization *this)

{
  double *pdVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  double dVar13;
  undefined1 auVar14 [16];
  bool bVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  TVector<double> *pTVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  FFlatEdge *pFVar26;
  longlong lVar27;
  int iVar28;
  FDynamicMesh3 *pFVar29;
  FFlatEdge *pFVar30;
  uint uVar31;
  int iVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined8 uVar53;
  double dVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStack_2c8 [32];
  FFlatEdge *local_2a8;
  FFlatEdge *local_2a0;
  longlong local_298;
  longlong local_290;
  undefined8 local_288;
  undefined1 local_278 [8];
  TArray<double,TSizedDefaultAllocator<32>_> local_270;
  FDynamicMesh3 *local_260;
  FScriptContainerElement *local_258;
  ForAnyElementType local_250;
  int local_248;
  int iStack_244;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_240;
  undefined8 local_230;
  FFlatEdge *local_228;
  undefined8 local_220;
  undefined8 local_218;
  IndexIterator local_210;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  double local_1c8;
  double local_1c0;
  ulonglong local_1b8;
  double local_1a0;
  undefined1 local_198 [4];
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 local_184;
  undefined1 local_178 [16];
  double local_168;
  undefined1 local_158 [16];
  double local_138;
  double local_120;
  TVector<double> local_118;
  TVector<double> local_100;
  FFlatEdge local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.ArrayNum = 0;
  local_270.ArrayMax = 0;
  local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.ArrayNum = 0;
  local_240.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            (&local_270,
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_240,
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
  pFVar29 = this->Mesh;
  FRefCountVector::IndexIterator::IndexIterator
            (&local_210,&pFVar29->TriangleRefCounts,0,
             (pFVar29->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar29->TriangleRefCounts).RefCounts.CurBlockUsed);
  dVar37 = __real_3ff0000000000000;
  uVar25 = (pFVar29->TriangleRefCounts).RefCounts.CurBlock;
  uVar19 = (ulonglong)(uint)local_210._8_4_;
  uVar23 = (pFVar29->TriangleRefCounts).RefCounts.CurBlockUsed;
  auVar40 = extraout_XMM0;
  dVar33 = __real_3f847ae147ae147b;
  uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pFVar30 = local_2a0;
  uVar22 = local_210._8_4_;
  while (__real_3f847ae147ae147b = dVar33,
        UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X = (double)uVar53,
        uVar22 != uVar25 * 0x200 + uVar23) {
    uVar21 = (uint)uVar19;
    pFVar26 = (FFlatEdge *)(longlong)(int)uVar21;
    uVar16 = (ulonglong)(uVar21 & 0x1ff);
    lVar20 = *(longlong *)
              ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + (uVar19 >> 9) * 8);
    pFVar3 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
    uVar22 = *(uint *)(lVar20 + uVar16 * 0xc);
    uVar19 = (ulonglong)(uVar22 & 0x1ff);
    auVar47 = *(undefined1 (*) [16])
               (*(longlong *)(pFVar3 + (ulonglong)(uVar22 >> 9) * 8) + uVar19 * 0x18);
    local_258 = *(FScriptContainerElement **)
                 (*(longlong *)(pFVar3 + (ulonglong)(uVar22 >> 9) * 8) + 0x10 + uVar19 * 0x18);
    uVar22 = *(uint *)(lVar20 + 4 + uVar16 * 0xc);
    auVar12._4_8_ = auVar40._8_8_;
    auVar12._0_4_ = auVar47._4_4_;
    auVar40._0_8_ = auVar12._0_8_ << 0x20;
    auVar40._8_4_ = auVar47._8_4_;
    auVar40._12_4_ = auVar47._12_4_;
    local_1f8._0_8_ = auVar40._8_8_;
    uVar19 = (ulonglong)(uVar22 & 0x1ff);
    local_1f8._8_8_ = auVar47._8_8_;
    pdVar1 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar22 >> 9) * 8) + uVar19 * 0x18);
    dVar34 = *pdVar1;
    dVar43 = pdVar1[1];
    dVar33 = *(double *)
              (*(longlong *)(pFVar3 + (ulonglong)(uVar22 >> 9) * 8) + 0x10 + uVar19 * 0x18);
    uVar22 = *(uint *)(lVar20 + 8 + uVar16 * 0xc);
    dVar11 = auVar47._0_8_;
    dVar35 = dVar34 - dVar11;
    dVar9 = dVar43 - (double)local_1f8._0_8_;
    dVar10 = dVar33 - (double)local_258;
    uVar19 = (ulonglong)(uVar22 & 0x1ff);
    auVar40 = *(undefined1 (*) [16])
               (*(longlong *)(pFVar3 + (ulonglong)(uVar22 >> 9) * 8) + uVar19 * 0x18);
    dVar2 = *(double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar22 >> 9) * 8) + 0x10 + uVar19 * 0x18)
    ;
    dVar33 = dVar2 - dVar33;
    dVar42 = auVar40._8_8_;
    dVar43 = dVar42 - dVar43;
    dVar8 = SQRT(dVar9 * dVar9 + dVar35 * dVar35 + dVar10 * dVar10);
    dVar36 = auVar40._0_8_;
    dVar34 = dVar36 - dVar34;
    dVar34 = SQRT(dVar43 * dVar43 + dVar34 * dVar34 + dVar33 * dVar33);
    auVar46._0_8_ = (dVar11 - dVar36) * (dVar11 - dVar36);
    auVar46._8_8_ = auVar47._8_8_;
    auVar47._8_8_ = 0;
    auVar47._0_8_ =
         ((double)local_1f8._0_8_ - dVar42) * ((double)local_1f8._0_8_ - dVar42) + auVar46._0_8_ +
         ((double)local_258 - dVar2) * ((double)local_258 - dVar2);
    auVar47 = sqrtpd(auVar46,auVar47);
    dVar43 = auVar47._0_8_;
    dVar33 = (dVar34 + dVar8 + dVar43) * __real_3fe0000000000000;
    dVar33 = (dVar34 * dVar8 * dVar43) /
             ((dVar33 - dVar43) * (dVar33 - dVar34) * (dVar33 - dVar8) * __real_4020000000000000);
    if (dVar37 < dVar33) {
      dVar33 = dVar37 / dVar33;
      if (0.0 <= dVar33) {
        if (dVar37 <= dVar33) {
          dVar33 = dVar37;
        }
      }
      else {
        dVar33 = 0.0;
      }
    }
    local_2a0 = (FFlatEdge *)(longlong)local_270.ArrayNum;
    uVar22 = 0;
    if ((int)uVar21 < local_270.ArrayNum) {
      uVar22 = ~uVar21 >> 0x1f;
    }
    local_1a0 = dVar2;
    if ((uVar22 == 0) &&
       (local_2a8 = pFVar26,
       bVar15 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       pFVar30 = local_2a0, bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_2a0 = pFVar30;
    *(double *)(local_270.AllocatorInstance.Data + (longlong)pFVar26 * 8) = dVar33;
    dVar33 = (dVar42 - (double)local_1f8._0_8_) * dVar10 - (dVar2 - (double)local_258) * dVar9;
    dVar34 = (dVar2 - (double)local_258) * dVar35 - (dVar36 - dVar11) * dVar10;
    auVar38._8_4_ = auVar40._8_4_;
    auVar38._0_8_ = dVar33;
    auVar38._12_4_ = auVar40._12_4_;
    auVar39._8_8_ = auVar38._8_8_;
    auVar39._0_8_ = dVar33 * dVar33;
    dVar2 = (dVar36 - dVar11) * dVar9 - (dVar42 - (double)local_1f8._0_8_) * dVar35;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar34 * dVar34 + auVar39._0_8_ + dVar2 * dVar2;
    auVar40 = sqrtpd(auVar39,auVar5);
    if (auVar40._0_8_ <= 0.0) {
      dVar2 = 0.0;
      dVar34 = 0.0;
      dVar36 = 0.0;
    }
    else {
      dVar36 = dVar37 / auVar40._0_8_;
      dVar2 = dVar36 * dVar2;
      dVar34 = dVar36 * dVar34;
      dVar36 = dVar36 * dVar33;
    }
    uVar22 = 0;
    if ((int)uVar21 < local_240.ArrayNum) {
      uVar22 = ~uVar21 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (local_2a8 = pFVar26, local_2a0 = (FFlatEdge *)(longlong)local_240.ArrayNum,
       bVar15 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       auVar40 = extraout_XMM0_00, bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar26 * 0x18) = dVar36;
    *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar26 * 0x18 + 8) = dVar34;
    *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar26 * 0x18 + 0x10) = dVar2;
    local_210._8_4_ = local_210._8_4_ + 1;
    uVar19 = (ulonglong)(uint)local_210._8_4_;
    if ((int)local_210._8_4_ < (int)local_210._12_4_) {
      do {
        if ((*(short *)(*(longlong *)(*(longlong *)(local_210._0_8_ + 8) + (uVar19 >> 9) * 8) +
                       (ulonglong)(local_210._8_4_ & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(*(longlong *)(local_210._0_8_ + 8) + (uVar19 >> 9) * 8) +
                      (ulonglong)(local_210._8_4_ & 0x1ff) * 2) != -1)) break;
        local_210._8_4_ = (int)uVar19 + 1;
        uVar19 = (ulonglong)(uint)local_210._8_4_;
      } while ((int)local_210._8_4_ < (int)local_210._12_4_);
    }
    dVar33 = __real_3f847ae147ae147b;
    uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    pFVar30 = local_2a0;
    uVar22 = (uint)uVar19;
  }
  pFVar29 = this->Mesh;
  local_250.Data = (FScriptContainerElement *)0x0;
  local_248 = 0;
  iStack_244 = 0;
  uVar23 = (pFVar29->EdgeRefCounts).RefCounts.CurBlockUsed +
           (pFVar29->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  local_230 = (double)CONCAT44(local_230._4_4_,uVar23);
  uVar25 = 0;
  if (((uVar23 != 0) &&
      (pFVar3 = (pFVar29->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar25 = 0,
      0xfffd < (ushort)(**(short **)pFVar3 - 1U))) && (uVar25 = 1, 1 < (int)uVar23)) {
    do {
      lVar20 = *(longlong *)(pFVar3 + (ulonglong)(uVar25 >> 9) * 8);
      if ((*(short *)(lVar20 + (ulonglong)(uVar25 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar20 + (ulonglong)(uVar25 & 0x1ff) * 2) != -1)) break;
      uVar25 = uVar25 + 1;
    } while ((int)uVar25 < (int)uVar23);
  }
  local_2a0 = pFVar30;
  local_260 = pFVar29;
  if (uVar25 != uVar23) {
    uVar49 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar50 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z >> 0x20);
    uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
    uVar52 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y >> 0x20);
LAB_14c7e1d70:
    do {
      lVar20 = *(longlong *)
                ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar25 >> 9) * 8);
      if (*(int *)(lVar20 + 0xc + (ulonglong)(uVar25 & 0x1ff) * 0x10) != -1) {
        local_220 = *(longlong *)(lVar20 + 8 + (ulonglong)(uVar25 & 0x1ff) * 0x10);
        uVar22 = (uint)local_220;
        uVar21 = (uint)((ulonglong)local_220 >> 0x20);
        uVar23 = 0;
        if ((int)uVar22 < local_270.ArrayNum) {
          uVar23 = ~uVar22 >> 0x1f;
        }
        if (uVar23 == 0) {
          local_2a8 = (FFlatEdge *)(longlong)(int)uVar22;
          local_2a0 = (FFlatEdge *)(longlong)local_270.ArrayNum;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar52 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          uVar49 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar50 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        }
        uVar23 = local_220._4_4_;
        pFVar30 = (FFlatEdge *)(longlong)(int)local_220._4_4_;
        if (*(double *)(local_270.AllocatorInstance.Data + (longlong)(int)uVar22 * 8) <= dVar33 &&
            dVar33 != *(double *)(local_270.AllocatorInstance.Data + (longlong)(int)uVar22 * 8)) {
          uVar31 = 0;
          if ((int)uVar21 < local_270.ArrayNum) {
            uVar31 = ~uVar21 >> 0x1f;
          }
          if (uVar31 == 0) {
            local_2a8 = (FFlatEdge *)(longlong)(int)uVar21;
            local_2a0 = (FFlatEdge *)(longlong)local_270.ArrayNum;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
            uVar52 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
            uVar49 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar50 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          }
          pFVar29 = local_260;
          if (*(double *)(local_270.AllocatorInstance.Data + (longlong)pFVar30 * 8) <= dVar33 &&
              dVar33 != *(double *)(local_270.AllocatorInstance.Data + (longlong)pFVar30 * 8))
          goto LAB_14c7e22ac;
        }
        if (this->bRespectGroupBoundaries != false) {
          bVar15 = FDynamicMesh3::IsGroupBoundaryEdge(this->Mesh,uVar25);
          uVar49 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar50 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar52 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          pFVar29 = local_260;
          uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          if (bVar15) goto LAB_14c7e22ac;
        }
        uVar31 = ~uVar23 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar23 < local_270.ArrayNum) {
          uVar21 = uVar31;
        }
        if (uVar21 == 0) {
          local_2a8 = pFVar30;
          local_2a0 = (FFlatEdge *)(longlong)local_270.ArrayNum;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar52 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          uVar49 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar50 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        }
        uVar24 = ~uVar22 >> 0x1f;
        dVar37 = *(double *)(local_270.AllocatorInstance.Data + (longlong)pFVar30 * 8);
        uVar21 = 0;
        if ((int)uVar22 < local_270.ArrayNum) {
          uVar21 = uVar24;
        }
        if (uVar21 == 0) {
          local_2a8 = (FFlatEdge *)(longlong)(int)uVar22;
          local_2a0 = (FFlatEdge *)(longlong)local_270.ArrayNum;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar52 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          uVar49 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar50 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        }
        pFVar26 = (FFlatEdge *)(longlong)(int)uVar22;
        dVar2 = *(double *)(local_270.AllocatorInstance.Data + (longlong)pFVar26 * 8);
        uVar55 = SUB84(dVar2,0);
        uVar56 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar37 <= dVar2) {
          uVar55 = SUB84(dVar37,0);
          uVar56 = (int)((ulonglong)dVar37 >> 0x20);
        }
        uVar21 = 0;
        if ((int)uVar22 < local_240.ArrayNum) {
          uVar21 = uVar24;
        }
        local_228 = pFVar26;
        if (uVar21 == 0) {
          local_2a8 = pFVar26;
          local_2a0 = (FFlatEdge *)(longlong)local_240.ArrayNum;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar52 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          uVar49 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar50 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        }
        local_258 = local_240.AllocatorInstance.Data;
        uVar21 = 0;
        if ((int)uVar23 < local_240.ArrayNum) {
          uVar21 = uVar31;
        }
        if (uVar21 == 0) {
          local_2a8 = pFVar30;
          local_2a0 = (FFlatEdge *)(longlong)local_240.ArrayNum;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar52 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          uVar49 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar50 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        }
        dVar37 = *(double *)(local_258 + (longlong)pFVar26 * 0x18 + 8) *
                 *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar30 * 0x18 + 8) +
                 *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar30 * 0x18) *
                 *(double *)(local_258 + (longlong)pFVar26 * 0x18) +
                 *(double *)(local_258 + (longlong)pFVar26 * 0x18 + 0x10) *
                 *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar30 * 0x18 + 0x10);
        if (dVar37 < this->PlanarDotThresh || dVar37 == this->PlanarDotThresh) {
          uVar21 = 0;
          if ((int)uVar22 < local_240.ArrayNum) {
            uVar21 = uVar24;
          }
          if (uVar21 == 0) {
            local_2a8 = local_228;
            local_2a0 = (FFlatEdge *)(longlong)local_240.ArrayNum;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
            uVar52 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
            uVar49 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar50 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          }
          if ((((double)uVar53 !=
                *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar26 * 0x18)) ||
              ((double)CONCAT44(uVar52,uVar51) !=
               *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar26 * 0x18 + 8))) ||
             ((double)CONCAT44(uVar50,uVar49) !=
              *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar26 * 0x18 + 0x10))) {
            uVar22 = 0;
            if ((int)uVar23 < local_240.ArrayNum) {
              uVar22 = uVar31;
            }
            if (uVar22 == 0) {
              local_2a8 = pFVar30;
              local_2a0 = (FFlatEdge *)(longlong)local_240.ArrayNum;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
              uVar52 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
              uVar49 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar50 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            }
            pFVar29 = local_260;
            if ((((double)uVar53 !=
                  *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar30 * 0x18)) ||
                ((double)CONCAT44(uVar52,uVar51) !=
                 *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar30 * 0x18 + 8))) ||
               ((double)CONCAT44(uVar50,uVar49) !=
                *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar30 * 0x18 + 0x10)))
            goto LAB_14c7e22ac;
          }
        }
        local_e8.MinAspect = (double)CONCAT44(uVar56,uVar55);
        local_e8.eid = uVar25;
        if ((local_250.Data <= &local_e8) &&
           (&local_e8 < (FFlatEdge *)(local_250.Data + (longlong)iStack_244 * 0x10))) {
          local_290 = (longlong)local_248;
          local_288 = 0x10;
          local_2a8 = &local_e8;
          local_2a0 = (FFlatEdge *)local_250.Data;
          local_298 = (longlong)iStack_244;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (local_248 == iStack_244) {
          local_248 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_250,&iStack_244);
        }
        lVar20 = (longlong)local_248;
        auVar14._4_4_ = local_e8._4_4_;
        auVar14._0_4_ = local_e8.eid;
        auVar14._8_8_ = local_e8.MinAspect;
        local_248 = local_248 + 1;
        *(undefined1 (*) [16])(local_250.Data + lVar20 * 0x10) = auVar14;
        uVar49 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar50 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
        uVar52 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
        pFVar29 = local_260;
        uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
LAB_14c7e22ac:
      uVar25 = uVar25 + 1;
      if ((int)uVar25 < (int)(uint)local_230) {
        do {
          lVar20 = *(longlong *)
                    ((pFVar29->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar25 >> 9) * 8);
          if ((*(short *)(lVar20 + (ulonglong)(uVar25 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar20 + (ulonglong)(uVar25 & 0x1ff) * 2) != -1)) goto LAB_14c7e1d70;
          uVar25 = uVar25 + 1;
        } while ((int)uVar25 < (int)(uint)local_230);
      }
    } while (uVar25 != (uint)local_230);
  }
  local_278[0] = 0;
  AlgoImpl::
  IntroSortInternal<_UE::Geometry::FPlanarFlipsOptimization::ApplySinglePass_::__l2::FFlatEdge,int,FIdentityFunctor,TDereferenceWrapper<_UE::Geometry::FPlanarFlipsOptimization::ApplySinglePass_::__l2::FFlatEdge,_UE::Geometry::FPlanarFlipsOptimization::ApplySinglePass_::__l2::<lambda_1>_>_>
            ((FFlatEdge *)local_250.Data,local_248,(FIdentityFunctor)0x0,(<lambda_1> *)local_278);
  uVar25 = 0;
  local_258 = (FScriptContainerElement *)((ulonglong)local_258 & 0xffffffff00000000);
  if (0 < local_248) {
    local_220 = 0;
    do {
      lVar20 = local_220;
      uVar23 = 0;
      if ((int)uVar25 < local_248) {
        uVar23 = ~uVar25 >> 0x1f;
      }
      if (uVar23 == 0) {
        local_2a8 = (FFlatEdge *)(longlong)(int)uVar25;
        local_2a0 = (FFlatEdge *)(longlong)local_248;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar32 = 0;
      uVar25 = *(uint *)(local_250.Data + lVar20);
      local_1b8 = (ulonglong)uVar25;
      lVar20 = *(longlong *)
                ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar25 >> 9) * 8);
      uVar53 = *(undefined8 *)(lVar20 + (ulonglong)(uVar25 & 0x1ff) * 0x10);
      local_218 = *(double *)(lVar20 + 8 + (ulonglong)(uVar25 & 0x1ff) * 0x10);
      pFVar3 = (this->Mesh->Triangles).Blocks.AllocatorInstance.Data;
      iVar28 = 1;
      uVar25 = SUB84(local_218,0);
      lVar20 = *(longlong *)(pFVar3 + (((ulonglong)local_218 & 0xffffffff) >> 9) * 8);
      local_1e0 = *(undefined4 *)(lVar20 + 8 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
      uVar19 = (ulonglong)((uint)((ulonglong)local_218 >> 0x20) & 0x1ff);
      local_1e8 = *(undefined8 *)(lVar20 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
      lVar20 = *(longlong *)(pFVar3 + ((ulonglong)local_218 >> 0x29) * 8);
      lVar27 = 0;
      local_1d8 = *(undefined8 *)(lVar20 + uVar19 * 0xc);
      local_1d0 = *(undefined4 *)(lVar20 + 8 + uVar19 * 0xc);
      do {
        uVar23 = *(uint *)((longlong)&local_1e8 + lVar27 * 4);
        uVar22 = *(uint *)((longlong)&local_1e8 +
                          (longlong)
                          (iVar28 + (iVar28 / 3 + (iVar28 >> 0x1f) +
                                    (int)(((longlong)iVar28 / 3 + ((longlong)iVar28 >> 0x3f) &
                                          0xffffffffU) >> 0x1f)) * -3) * 4);
        uVar24 = (uint)uVar53;
        uVar31 = (uint)((ulonglong)uVar53 >> 0x20);
        uVar21 = uVar22;
        if (((uVar24 == uVar23) || (uVar21 = uVar23, uVar24 == uVar22)) && (uVar31 == uVar21)) {
          iVar32 = iVar32 + 2;
          local_260 = (FDynamicMesh3 *)
                      CONCAT44(local_260._4_4_,
                               *(undefined4 *)
                                ((longlong)&local_1e8 +
                                (longlong)
                                (iVar32 + (iVar32 / 3 + (iVar32 >> 0x1f) +
                                          (int)(((longlong)iVar32 / 3 + ((longlong)iVar32 >> 0x3f) &
                                                0xffffffffU) >> 0x1f)) * -3) * 4));
          goto LAB_14c7e2474;
        }
        iVar32 = iVar32 + 1;
        iVar28 = iVar28 + 1;
        lVar27 = lVar27 + 1;
      } while (lVar27 < 3);
      local_260 = (FDynamicMesh3 *)CONCAT44(local_260._4_4_,0xffffffff);
      uVar23 = uVar24;
      uVar22 = uVar31;
LAB_14c7e2474:
      iVar32 = 0;
      iVar28 = 1;
      lVar20 = 0;
      do {
        uVar21 = *(uint *)((longlong)&local_1d8 +
                          (longlong)
                          (iVar28 + (iVar28 / 3 + (iVar28 >> 0x1f) +
                                    (int)(((longlong)iVar28 / 3 + ((longlong)iVar28 >> 0x3f) &
                                          0xffffffffU) >> 0x1f)) * -3) * 4);
        uVar31 = *(uint *)((longlong)&local_1d8 + lVar20 * 4);
        if (((uVar23 == uVar31) || (bVar15 = uVar23 == uVar21, uVar21 = uVar31, bVar15)) &&
           (uVar22 == uVar21)) {
          iVar32 = iVar32 + 2;
          local_230 = (double)CONCAT44(local_230._4_4_,
                                       *(undefined4 *)
                                        ((longlong)&local_1d8 +
                                        (longlong)
                                        (iVar32 + (iVar32 / 3 + (iVar32 >> 0x1f) +
                                                  (int)(((longlong)iVar32 / 3 +
                                                         ((longlong)iVar32 >> 0x3f) & 0xffffffffU)
                                                       >> 0x1f)) * -3) * 4));
          goto LAB_14c7e24f1;
        }
        iVar32 = iVar32 + 1;
        iVar28 = iVar28 + 1;
        lVar20 = lVar20 + 1;
      } while (lVar20 < 3);
      local_230 = (double)CONCAT44(local_230._4_4_,0xffffffff);
LAB_14c7e24f1:
      uVar21 = 0;
      if ((int)uVar25 < local_270.ArrayNum) {
        uVar21 = ~uVar25 >> 0x1f;
      }
      if (uVar21 == 0) {
        local_2a8 = (FFlatEdge *)(longlong)(int)uVar25;
        local_2a0 = (FFlatEdge *)(longlong)local_270.ArrayNum;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar21 = local_218._4_4_;
      pFVar30 = (FFlatEdge *)(longlong)(int)local_218._4_4_;
      local_228 = (FFlatEdge *)(longlong)(int)uVar25;
      uVar24 = ~local_218._4_4_;
      dVar33 = *(double *)(local_270.AllocatorInstance.Data + (longlong)local_228 * 8);
      uVar31 = 0;
      if ((int)local_218._4_4_ < local_270.ArrayNum) {
        uVar31 = uVar24 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (local_2a8 = pFVar30, local_2a0 = (FFlatEdge *)(longlong)local_270.ArrayNum,
         bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_1c0 = *(double *)(local_270.AllocatorInstance.Data + (longlong)pFVar30 * 8);
      if (dVar33 <= *(double *)(local_270.AllocatorInstance.Data + (longlong)pFVar30 * 8)) {
        local_1c0 = dVar33;
      }
      if (dVar33 < *(double *)(local_270.AllocatorInstance.Data + (longlong)pFVar30 * 8) ||
          dVar33 == *(double *)(local_270.AllocatorInstance.Data + (longlong)pFVar30 * 8)) {
        uVar31 = 0;
        if ((int)uVar21 < local_240.ArrayNum) {
          uVar31 = uVar24 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (local_2a8 = pFVar30, local_2a0 = (FFlatEdge *)(longlong)local_240.ArrayNum,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar26 = pFVar30;
      }
      else {
        uVar31 = 0;
        if ((int)uVar25 < local_240.ArrayNum) {
          uVar31 = ~uVar25 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (local_2a8 = local_228, local_2a0 = (FFlatEdge *)(longlong)local_240.ArrayNum,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar26 = (FFlatEdge *)(longlong)(int)uVar25;
      }
      uVar19 = local_1b8;
      dVar33 = *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar26 * 0x18 + 0x10);
      dVar43 = *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar26 * 0x18);
      dVar42 = *(double *)(local_240.AllocatorInstance.Data + (longlong)pFVar26 * 0x18 + 8);
      local_1a0 = dVar33;
      pFVar3 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
      local_138 = *(double *)
                   (*(longlong *)(pFVar3 + (ulonglong)(uVar23 >> 9) * 8) + 0x10 +
                   (ulonglong)(uVar23 & 0x1ff) * 0x18);
      pdVar1 = (double *)
               (*(longlong *)(pFVar3 + (ulonglong)(uVar23 >> 9) * 8) +
               (ulonglong)(uVar23 & 0x1ff) * 0x18);
      dVar8 = *pdVar1;
      dVar13 = pdVar1[1];
      auVar40 = *(undefined1 (*) [16])
                 (*(longlong *)(pFVar3 + (ulonglong)(uVar22 >> 9) * 8) +
                 (ulonglong)(uVar22 & 0x1ff) * 0x18);
      local_218 = *(double *)
                   (*(longlong *)(pFVar3 + (ulonglong)(uVar22 >> 9) * 8) + 0x10 +
                   (ulonglong)(uVar22 & 0x1ff) * 0x18);
      uVar16 = (ulonglong)((uint)local_260 & 0x1ff);
      local_120 = local_218;
      lVar20 = *(longlong *)(pFVar3 + (ulonglong)((uint)local_260 >> 9) * 8);
      auVar47 = *(undefined1 (*) [16])(lVar20 + uVar16 * 0x18);
      uVar17 = (ulonglong)((uint)local_230 & 0x1ff);
      local_168 = *(double *)(lVar20 + 0x10 + uVar16 * 0x18);
      dVar10 = auVar47._8_8_;
      local_158._8_4_ = auVar47._8_4_;
      local_158._0_8_ = dVar10;
      local_158._12_4_ = auVar47._12_4_;
      lVar27 = *(longlong *)(pFVar3 + (ulonglong)((uint)local_230 >> 9) * 8);
      auVar46 = *(undefined1 (*) [16])(lVar27 + uVar17 * 0x18);
      dVar35 = auVar47._0_8_;
      local_228 = (FFlatEdge *)(auVar46._0_8_ - dVar35);
      dVar9 = *(double *)(lVar27 + 0x10 + uVar17 * 0x18) - local_168;
      dVar36 = auVar46._8_8_;
      local_1f8._8_4_ = auVar46._8_4_;
      local_1f8._0_8_ = dVar36;
      local_1f8._12_4_ = auVar46._12_4_;
      dVar11 = dVar36 - dVar10;
      dVar34 = local_218 - *(double *)(lVar27 + 0x10 + uVar17 * 0x18);
      dVar54 = SQRT(dVar11 * dVar11 + (double)local_228 * (double)local_228 + dVar9 * dVar9);
      dVar37 = auVar40._0_8_;
      dVar2 = dVar37 - auVar46._0_8_;
      dVar44 = auVar40._8_8_;
      local_178._8_4_ = auVar40._8_4_;
      local_178._0_8_ = dVar44;
      local_178._12_4_ = auVar40._12_4_;
      dVar34 = SQRT((dVar44 - dVar36) * (dVar44 - dVar36) + dVar2 * dVar2 + dVar34 * dVar34);
      dVar45 = SQRT((dVar10 - dVar44) * (dVar10 - dVar44) + (dVar35 - dVar37) * (dVar35 - dVar37) +
                    (local_168 - local_218) * (local_168 - local_218));
      dVar2 = (dVar34 + dVar54 + dVar45) * __real_3fe0000000000000;
      dVar2 = (dVar34 * dVar54 * dVar45) /
              ((dVar2 - dVar45) * (dVar2 - dVar34) * (dVar2 - dVar54) * __real_4020000000000000);
      if (__real_3ff0000000000000 < dVar2) {
        dVar2 = __real_3ff0000000000000 / dVar2;
        if (0.0 <= dVar2) {
          if (__real_3ff0000000000000 <= dVar2) {
            dVar2 = __real_3ff0000000000000;
          }
        }
        else {
          dVar2 = 0.0;
        }
      }
      local_260 = (FDynamicMesh3 *)
                  (*(double *)(lVar20 + 0x10 + uVar16 * 0x18) -
                  *(double *)(lVar27 + 0x10 + uVar17 * 0x18));
      local_230 = dVar35 - *(double *)(lVar27 + uVar17 * 0x18);
      local_1c8 = dVar10 - dVar36;
      dVar34 = local_138 - *(double *)(lVar20 + 0x10 + uVar16 * 0x18);
      dVar54 = SQRT(local_1c8 * local_1c8 + local_230 * local_230 +
                    (double)local_260 * (double)local_260);
      dVar45 = *(double *)(lVar27 + 0x10 + uVar17 * 0x18) - local_138;
      dVar35 = SQRT((dVar13 - dVar10) * (dVar13 - dVar10) + (dVar8 - dVar35) * (dVar8 - dVar35) +
                    dVar34 * dVar34);
      pdVar1 = (double *)(lVar27 + uVar17 * 0x18);
      dVar34 = *pdVar1 - dVar8;
      auVar48._0_8_ = dVar34 * dVar34;
      auVar48._8_8_ = pdVar1[1];
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (dVar36 - dVar13) * (dVar36 - dVar13) + auVar48._0_8_ + dVar45 * dVar45;
      auVar40 = sqrtpd(auVar48,auVar6);
      dVar45 = auVar40._0_8_;
      dVar34 = (dVar35 + dVar54 + dVar45) * __real_3fe0000000000000;
      dVar34 = (dVar35 * dVar54 * dVar45) /
               ((dVar34 - dVar45) * (dVar34 - dVar35) * (dVar34 - dVar54) * __real_4020000000000000)
      ;
      if (__real_3ff0000000000000 < dVar34) {
        dVar34 = __real_3ff0000000000000 / dVar34;
        if (0.0 <= dVar34) {
          if (__real_3ff0000000000000 <= dVar34) {
            dVar34 = __real_3ff0000000000000;
          }
        }
        else {
          dVar34 = 0.0;
        }
      }
      dVar37 = dVar37 - *(double *)(lVar20 + uVar16 * 0x18);
      dVar45 = local_218 - *(double *)(lVar20 + 0x10 + uVar16 * 0x18);
      dVar35 = (double)local_228 * dVar45 - dVar9 * dVar37;
      dVar9 = dVar9 * (dVar44 - dVar10) - dVar11 * dVar45;
      auVar41._0_8_ = dVar35 * dVar35;
      auVar41._8_8_ = 0;
      dVar37 = dVar11 * dVar37 - (double)local_228 * (dVar44 - dVar10);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar9 * dVar9 + auVar41._0_8_ + dVar37 * dVar37;
      auVar40 = sqrtpd(auVar41,auVar7);
      if (auVar40._0_8_ <= 0.0) {
        dVar10 = 0.0;
        dVar35 = 0.0;
        dVar37 = 0.0;
      }
      else {
        dVar10 = __real_3ff0000000000000 / auVar40._0_8_;
        dVar35 = dVar10 * dVar35;
        dVar37 = dVar10 * dVar37;
        dVar10 = dVar10 * dVar9;
      }
      dVar11 = local_138 - *(double *)(lVar27 + 0x10 + uVar17 * 0x18);
      dVar8 = dVar8 - *(double *)(lVar27 + uVar17 * 0x18);
      dVar9 = dVar11 * local_230 - dVar8 * (double)local_260;
      dVar8 = dVar8 * local_1c8 - (dVar13 - dVar36) * local_230;
      dVar11 = (dVar13 - dVar36) * (double)local_260 - dVar11 * local_1c8;
      dVar36 = SQRT(dVar11 * dVar11 + dVar9 * dVar9 + dVar8 * dVar8);
      if (dVar36 <= 0.0) {
        dVar11 = 0.0;
        dVar9 = 0.0;
        dVar36 = 0.0;
      }
      else {
        dVar36 = __real_3ff0000000000000 / dVar36;
        dVar11 = dVar36 * dVar11;
        dVar9 = dVar36 * dVar9;
        dVar36 = dVar36 * dVar8;
      }
      if ((this->PlanarDotThresh <= dVar42 * dVar35 + dVar43 * dVar10 + dVar33 * dVar37) &&
         (this->PlanarDotThresh <= dVar42 * dVar9 + dVar43 * dVar11 + dVar33 * dVar36)) {
        if (dVar34 <= dVar2) {
          dVar2 = dVar34;
        }
        if (local_1c0 < dVar2) {
          local_194 = ___xmm_ffffffffffffffffffffffffffffffff;
          uStack_18c = _UNK_15060db28;
          local_184 = 0xffffffffffffffff;
          iVar32 = (**(code **)(this->Mesh->_padding_ + 0x40))
                             (this->Mesh,local_1b8 & 0xffffffff,local_198);
          if (iVar32 == 0) {
            dVar37 = PlanarFlipsOptimizationLocals::UnitAspectRatio(this->Mesh,uVar25);
            uVar23 = 0;
            if ((int)uVar25 < local_270.ArrayNum) {
              uVar23 = ~uVar25 >> 0x1f;
            }
            if (uVar23 == 0) {
              local_2a8 = (FFlatEdge *)(longlong)(int)uVar25;
              local_2a0 = (FFlatEdge *)(longlong)local_270.ArrayNum;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            *(double *)(local_270.AllocatorInstance.Data + (longlong)(int)uVar25 * 8) = dVar37;
            dVar37 = PlanarFlipsOptimizationLocals::UnitAspectRatio(this->Mesh,uVar21);
            uVar23 = 0;
            if ((int)uVar21 < local_270.ArrayNum) {
              uVar23 = ~uVar21 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (local_2a8 = pFVar30, local_2a0 = (FFlatEdge *)(longlong)local_270.ArrayNum,
               bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(double *)(local_270.AllocatorInstance.Data + (longlong)pFVar30 * 8) = dVar37;
            pTVar18 = FDynamicMesh3::GetTriNormal(this->Mesh,&local_118,uVar25);
            if ((dVar42 * (pTVar18->field0_0x0)._s_0.Y + dVar43 * (pTVar18->field0_0x0)._s_0.X +
                 dVar33 * (pTVar18->field0_0x0)._s_0.Z < this->PlanarDotThresh) ||
               (pTVar18 = FDynamicMesh3::GetTriNormal(this->Mesh,&local_100,uVar21),
               dVar42 * (pTVar18->field0_0x0)._s_0.Y + dVar43 * (pTVar18->field0_0x0)._s_0.X +
               dVar33 * (pTVar18->field0_0x0)._s_0.Z < this->PlanarDotThresh)) {
              if (2 < (byte)LogTemp._0_1_) {
                Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
              }
              (**(code **)(this->Mesh->_padding_ + 0x40))(this->Mesh,uVar19 & 0xffffffff,local_198);
              dVar33 = PlanarFlipsOptimizationLocals::UnitAspectRatio(this->Mesh,uVar25);
              uVar23 = 0;
              if ((int)uVar25 < local_270.ArrayNum) {
                uVar23 = ~uVar25 >> 0x1f;
              }
              if (uVar23 == 0) {
                local_2a8 = (FFlatEdge *)(longlong)(int)uVar25;
                local_2a0 = (FFlatEdge *)(longlong)local_270.ArrayNum;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              *(double *)(local_270.AllocatorInstance.Data + (longlong)(int)uVar25 * 8) = dVar33;
              dVar33 = PlanarFlipsOptimizationLocals::UnitAspectRatio(this->Mesh,uVar21);
              uVar25 = 0;
              if ((int)uVar21 < local_270.ArrayNum) {
                uVar25 = ~uVar21 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (local_2a8 = pFVar30, local_2a0 = (FFlatEdge *)(longlong)local_270.ArrayNum,
                 bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar15)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              *(double *)(local_270.AllocatorInstance.Data + (longlong)pFVar30 * 8) = dVar33;
            }
          }
        }
      }
      uVar25 = (int)local_258 + 1;
      local_220 = local_220 + 0x10;
      local_258 = (FScriptContainerElement *)CONCAT44(local_258._4_4_,uVar25);
    } while ((int)uVar25 < local_248);
  }
  if ((FFlatEdge *)local_250.Data != (FFlatEdge *)0x0) {
    FMemory::Free(local_250.Data);
  }
  if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.AllocatorInstance.Data);
  }
  if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.AllocatorInstance.Data);
  }
  return;
}

