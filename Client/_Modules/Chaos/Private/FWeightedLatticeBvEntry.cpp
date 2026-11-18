// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// BoundingBox @ 143eb7be0

TAABB<double,3> * __thiscall
Chaos::FWeightedLatticeBvEntry::BoundingBox
          (FWeightedLatticeBvEntry *this,TAABB<double,3> *__return_storage_ptr__)

{
  double dVar1;
  FWeightedLatticeImplicitObject *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TAABB<double,3> *pTVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  *(undefined8 *)&__return_storage_ptr__->MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = 0x7fefffffffffffff;
  iVar11 = 0;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&__return_storage_ptr__->MMax = 0xffefffffffffffff;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = 0xffefffffffffffff;
  do {
    iVar12 = 0;
    do {
      iVar9 = 0;
      do {
        pFVar2 = this->Lattice;
        uVar10 = (((this->CellIndex).field0_0x0._s_0.X + iVar11) *
                  *(int *)&(pFVar2->DeformedPoints).field_0x4 + (this->CellIndex).field0_0x0._s_0.Y
                 + iVar12) * *(int *)&(pFVar2->DeformedPoints).field_0x8 +
                 (this->CellIndex).field0_0x0._s_0.Z + iVar9;
        uVar6 = 0;
        if ((int)uVar10 < *(int *)&(pFVar2->DeformedPoints).field_0x18) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TAABB<double,3> *)(*pcVar4)();
            return pTVar7;
          }
        }
        lVar8 = (longlong)(int)uVar10;
        iVar9 = iVar9 + 1;
        lVar3 = *(longlong *)&(pFVar2->DeformedPoints).field_0x10;
        dVar13 = *(double *)(lVar3 + lVar8 * 0x18);
        dVar14 = *(double *)(lVar3 + 8 + lVar8 * 0x18);
        dVar15 = *(double *)(lVar3 + 0x10 + lVar8 * 0x18);
        if (*(double *)&__return_storage_ptr__->MMin <= dVar13) {
          dVar13 = *(double *)&__return_storage_ptr__->MMin;
        }
        dVar1 = *(double *)&(__return_storage_ptr__->MMin).field_0x8;
        if (dVar1 <= dVar14) {
          dVar14 = dVar1;
        }
        dVar1 = *(double *)&(__return_storage_ptr__->MMin).field_0x10;
        if (dVar1 <= dVar15) {
          dVar15 = dVar1;
        }
        *(double *)&__return_storage_ptr__->MMin = dVar13;
        *(double *)&(__return_storage_ptr__->MMin).field_0x8 = dVar14;
        *(double *)&(__return_storage_ptr__->MMin).field_0x10 = dVar15;
        dVar13 = *(double *)(lVar3 + lVar8 * 0x18);
        dVar14 = *(double *)(lVar3 + 8 + lVar8 * 0x18);
        dVar15 = *(double *)&(__return_storage_ptr__->MMax).field_0x10;
        if (dVar13 <= *(double *)&__return_storage_ptr__->MMax) {
          dVar13 = *(double *)&__return_storage_ptr__->MMax;
        }
        dVar1 = *(double *)&(__return_storage_ptr__->MMax).field_0x8;
        if (dVar14 <= dVar1) {
          dVar14 = dVar1;
        }
        dVar1 = *(double *)(lVar3 + 0x10 + lVar8 * 0x18);
        if (dVar15 <= dVar1) {
          dVar15 = dVar1;
        }
        *(double *)&__return_storage_ptr__->MMax = dVar13;
        *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dVar14;
        *(double *)&(__return_storage_ptr__->MMax).field_0x10 = dVar15;
      } while (iVar9 < 2);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 2);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 2);
  return __return_storage_ptr__;
}

// VectorAABB @ 143ed6c20

FVectorAABB * __thiscall
Chaos::FWeightedLatticeBvEntry::VectorAABB
          (FWeightedLatticeBvEntry *this,FVectorAABB *__return_storage_ptr__)

{
  double *pdVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  FWeightedLatticeImplicitObject *pFVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  FVectorAABB *pFVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  pFVar6 = this->Lattice;
  uVar22 = (*(int *)&(pFVar6->DeformedPoints).field_0x4 * (this->CellIndex).field0_0x0._s_0.X +
           (this->CellIndex).field0_0x0._s_0.Y) * *(int *)&(pFVar6->DeformedPoints).field_0x8 +
           (this->CellIndex).field0_0x0._s_0.Z;
  uVar21 = 0;
  if ((int)uVar22 < *(int *)&(pFVar6->DeformedPoints).field_0x18) {
    uVar21 = ~uVar22 >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar8 = (code *)swi(3);
      pFVar19 = (FVectorAABB *)(*pcVar8)();
      return pFVar19;
    }
  }
  iVar24 = 0;
  lVar7 = *(longlong *)&(pFVar6->DeformedPoints).field_0x10;
  pdVar1 = (double *)(lVar7 + (longlong)(int)uVar22 * 0x18);
  dVar15 = *pdVar1;
  dVar16 = pdVar1[1];
  dVar2 = *(double *)(lVar7 + 0x10 + (longlong)(int)uVar22 * 0x18);
  (__return_storage_ptr__->Min).XY.m128d_f64[0] = dVar15;
  (__return_storage_ptr__->Min).XY.m128d_f64[1] = dVar16;
  (__return_storage_ptr__->Min).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Min).ZW.m128d_f64[1] = 0.0;
  dVar2 = (__return_storage_ptr__->Min).ZW.m128d_f64[0];
  dVar17 = (__return_storage_ptr__->Min).ZW.m128d_f64[1];
  (__return_storage_ptr__->Max).XY.m128d_f64[0] = dVar15;
  (__return_storage_ptr__->Max).XY.m128d_f64[1] = dVar16;
  (__return_storage_ptr__->Max).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Max).ZW.m128d_f64[1] = dVar17;
  do {
    iVar23 = 0;
    do {
      pFVar6 = this->Lattice;
      uVar22 = (((this->CellIndex).field0_0x0._s_0.X + iVar24) *
                *(int *)&(pFVar6->DeformedPoints).field_0x4 + iVar23 +
               (this->CellIndex).field0_0x0._s_0.Y) * *(int *)&(pFVar6->DeformedPoints).field_0x8 +
               (this->CellIndex).field0_0x0._s_0.Z;
      uVar21 = 0;
      if ((int)uVar22 < *(int *)&(pFVar6->DeformedPoints).field_0x18) {
        uVar21 = ~uVar22 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar8 = (code *)swi(3);
          pFVar19 = (FVectorAABB *)(*pcVar8)();
          return pFVar19;
        }
      }
      lVar20 = (longlong)(int)uVar22;
      lVar7 = *(longlong *)&(pFVar6->DeformedPoints).field_0x10;
      uVar3 = *(undefined8 *)(lVar7 + 8 + lVar20 * 0x18);
      uVar4 = *(undefined8 *)(lVar7 + lVar20 * 0x18);
      uVar5 = *(ulonglong *)(lVar7 + 0x10 + lVar20 * 0x18);
      auVar11._8_8_ = uVar3;
      auVar11._0_8_ = uVar4;
      auVar25 = minpd(*(undefined1 (*) [16])(__return_storage_ptr__->Min).XY.m128d_f64,auVar11);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar5;
      auVar26 = minpd(*(undefined1 (*) [16])(__return_storage_ptr__->Min).ZW.m128d_f64,auVar26);
      *(undefined1 (*) [16])(__return_storage_ptr__->Min).XY.m128d_f64 = auVar25;
      *(undefined1 (*) [16])(__return_storage_ptr__->Min).ZW.m128d_f64 = auVar26;
      auVar12._8_8_ = uVar3;
      auVar12._0_8_ = uVar4;
      auVar26 = maxpd(*(undefined1 (*) [16])(__return_storage_ptr__->Max).XY.m128d_f64,auVar12);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar5;
      auVar25 = maxpd(*(undefined1 (*) [16])(__return_storage_ptr__->Max).ZW.m128d_f64,auVar25);
      *(undefined1 (*) [16])(__return_storage_ptr__->Max).XY.m128d_f64 = auVar26;
      *(undefined1 (*) [16])(__return_storage_ptr__->Max).ZW.m128d_f64 = auVar25;
      pFVar6 = this->Lattice;
      uVar22 = (this->CellIndex).field0_0x0._s_0.Z + 1 +
               (((this->CellIndex).field0_0x0._s_0.X + iVar24) *
                *(int *)&(pFVar6->DeformedPoints).field_0x4 + iVar23 +
               (this->CellIndex).field0_0x0._s_0.Y) * *(int *)&(pFVar6->DeformedPoints).field_0x8;
      uVar21 = 0;
      if ((int)uVar22 < *(int *)&(pFVar6->DeformedPoints).field_0x18) {
        uVar21 = ~uVar22 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar8 = (code *)swi(3);
          pFVar19 = (FVectorAABB *)(*pcVar8)();
          return pFVar19;
        }
      }
      iVar23 = iVar23 + 1;
      lVar20 = (longlong)(int)uVar22;
      lVar7 = *(longlong *)&(pFVar6->DeformedPoints).field_0x10;
      uVar3 = *(undefined8 *)(lVar7 + 8 + lVar20 * 0x18);
      uVar4 = *(undefined8 *)(lVar7 + lVar20 * 0x18);
      uVar5 = *(ulonglong *)(lVar7 + 0x10 + lVar20 * 0x18);
      auVar13._8_8_ = uVar3;
      auVar13._0_8_ = uVar4;
      auVar26 = minpd(*(undefined1 (*) [16])(__return_storage_ptr__->Min).XY.m128d_f64,auVar13);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar5;
      auVar25 = minpd(*(undefined1 (*) [16])(__return_storage_ptr__->Min).ZW.m128d_f64,auVar9);
      *(undefined1 (*) [16])(__return_storage_ptr__->Min).XY.m128d_f64 = auVar26;
      *(undefined1 (*) [16])(__return_storage_ptr__->Min).ZW.m128d_f64 = auVar25;
      auVar14._8_8_ = uVar3;
      auVar14._0_8_ = uVar4;
      auVar26 = maxpd(*(undefined1 (*) [16])(__return_storage_ptr__->Max).XY.m128d_f64,auVar14);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar5;
      auVar25 = maxpd(*(undefined1 (*) [16])(__return_storage_ptr__->Max).ZW.m128d_f64,auVar10);
      *(undefined1 (*) [16])(__return_storage_ptr__->Max).XY.m128d_f64 = auVar26;
      *(undefined1 (*) [16])(__return_storage_ptr__->Max).ZW.m128d_f64 = auVar25;
    } while (iVar23 < 2);
    iVar24 = iVar24 + 1;
  } while (iVar24 < 2);
  return __return_storage_ptr__;
}

