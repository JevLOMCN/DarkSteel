// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 8

// ReorderVertexDataForSrcTri3d<UE::Math::TVector<double>_> @ 14c79ff70

TVector<double> * __thiscall
UE::Geometry::GeodesicSingleTriangleUtils::FTangentTri2::
ReorderVertexDataForSrcTri3d<UE::Math::TVector<double>_>
          (FTangentTri2 *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  
  uVar2 = (this->PermutedIndices).field0_0x0._s_0.A;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if (2 < uVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (__return_storage_ptr__->field0_0x0).XYZ[(int)uVar2] = dVar1;
  uVar2 = (this->PermutedIndices).field0_0x0._s_0.B;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  if (2 < uVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (__return_storage_ptr__->field0_0x0).XYZ[(int)uVar2] = dVar1;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar2 = (this->PermutedIndices).field0_0x0._s_0.C;
  if (2 < uVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (__return_storage_ptr__->field0_0x0).XYZ[(int)uVar2] = dVar1;
  return __return_storage_ptr__;
}

// FTangentTri2 @ 14c7b4400

FTangentTri2 * __thiscall
UE::Geometry::GeodesicSingleTriangleUtils::FTangentTri2::FTangentTri2
          (FTangentTri2 *this,FDynamicMesh3 *param_1,int param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  int local_f8 [4];
  undefined8 local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  
  *(undefined8 *)&(this->PermutedTriVIDs).field0_0x0 = 0xffffffffffffffff;
  *(undefined8 *)((longlong)&(this->PermutedTriVIDs).field0_0x0 + 8) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)&(this->PermutedTriEIDs).field0_0x0 + 4) = 0xffffffffffffffff;
  *(undefined8 *)&(this->PermutedIndices).field0_0x0 = 0xffffffffffffffff;
  *(undefined8 *)((longlong)&(this->PermutedIndices).field0_0x0 + 8) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)&(this->EdgeOrientationSign).field0_0x0 + 4) = 0xffffffffffffffff;
  this->Tri3ID = param_2;
  uVar18 = (ulonglong)(param_2 & 0x1ff);
  lVar25 = *(longlong *)
            ((param_1->Triangles).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_2 >> 9) * 8);
  local_e8 = *(undefined8 *)(lVar25 + uVar18 * 0xc);
  local_e0 = *(int *)(lVar25 + 8 + uVar18 * 0xc);
  lVar25 = *(longlong *)
            ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_2 >> 9) * 8);
  local_d0 = *(undefined4 *)(lVar25 + 8 + uVar18 * 0xc);
  local_d8 = *(undefined8 *)(lVar25 + uVar18 * 0xc);
  uVar6 = *(undefined8 *)
           (*(longlong *)
             ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_3 >> 9) * 8)
           + (ulonglong)(param_3 & 0x1ff) * 0x10);
  iVar22 = (int)local_e8;
  iVar15 = (int)uVar6;
  iVar21 = (int)((ulonglong)local_e8 >> 0x20);
  iVar19 = (int)((ulonglong)uVar6 >> 0x20);
  iVar17 = iVar21;
  if (((iVar15 == iVar22) || (iVar17 = iVar22, iVar15 == iVar21)) && (iVar19 == iVar17)) {
    lVar25 = 0;
  }
  else {
    iVar17 = local_e0;
    if (((iVar15 == iVar21) || (iVar17 = iVar21, iVar15 == local_e0)) && (iVar19 == iVar17)) {
      lVar25 = 4;
    }
    else if (((iVar15 == local_e0) || (bVar26 = iVar15 == iVar22, iVar22 = local_e0, bVar26)) &&
            (iVar19 == iVar22)) {
      lVar25 = 8;
    }
    else {
      lVar25 = -4;
    }
  }
  uVar3 = *(uint *)((longlong)&local_e8 + lVar25);
  lVar24 = (longlong)*(int *)((longlong)&DAT_1528c6df0 + lVar25);
  lVar23 = (longlong)*(int *)((longlong)&DAT_1528c6e00 + lVar25);
  local_f8[0] = 0;
  local_f8[1] = 1;
  uVar4 = *(uint *)((longlong)&local_e8 + lVar24 * 4);
  uVar5 = *(uint *)((longlong)&local_e8 + lVar23 * 4);
  local_f8[2] = 2;
  iVar22 = local_f8[lVar24];
  iVar17 = local_f8[lVar23];
  (this->PermutedIndices).field0_0x0._s_0.A = *(int *)((longlong)local_f8 + lVar25);
  iVar15 = *(int *)((longlong)&local_d8 + lVar24 * 4);
  (this->PermutedIndices).field0_0x0._s_0.B = iVar22;
  uVar16 = *(uint *)((longlong)&local_d8 + lVar25);
  (this->PermutedTriEIDs).field0_0x0._s_0.B = iVar15;
  iVar22 = *(int *)((longlong)&local_d8 + lVar23 * 4);
  (this->PermutedIndices).field0_0x0._s_0.C = iVar17;
  (this->PermutedTriEIDs).field0_0x0._s_0.C = iVar22;
  (this->PermutedTriEIDs).field0_0x0._s_0.A = uVar16;
  (this->PermutedTriVIDs).field0_0x0._s_0.A = uVar3;
  (this->PermutedTriVIDs).field0_0x0._s_0.B = uVar4;
  (this->PermutedTriVIDs).field0_0x0._s_0.C = uVar5;
  uVar6 = *(undefined8 *)
           (*(longlong *)
             ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8) +
           (ulonglong)(uVar16 & 0x1ff) * 0x10);
  uVar20 = (uint)uVar6;
  uVar16 = (uint)((ulonglong)uVar6 >> 0x20);
  if ((uVar3 == uVar20) && (uVar4 == uVar16)) {
    iVar22 = 0;
  }
  else if ((uVar4 == uVar20) && (uVar5 == uVar16)) {
    iVar22 = 1;
  }
  else if ((uVar5 != uVar20) || (iVar22 = 2, uVar3 != uVar16)) {
    iVar22 = -1;
  }
  iVar17 = 1;
  if (iVar22 == -1) {
    iVar17 = -1;
  }
  (this->EdgeOrientationSign).field0_0x0._s_0.A = iVar17;
  uVar16 = (this->PermutedTriEIDs).field0_0x0._s_0.B;
  uVar6 = *(undefined8 *)
           (*(longlong *)
             ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8) +
           (ulonglong)(uVar16 & 0x1ff) * 0x10);
  uVar20 = (uint)uVar6;
  uVar16 = (uint)((ulonglong)uVar6 >> 0x20);
  if ((uVar3 == uVar20) && (uVar4 == uVar16)) {
    iVar22 = 0;
  }
  else if ((uVar4 == uVar20) && (uVar5 == uVar16)) {
    iVar22 = 1;
  }
  else if ((uVar5 != uVar20) || (iVar22 = 2, uVar3 != uVar16)) {
    iVar22 = -1;
  }
  iVar17 = 1;
  if (iVar22 == -1) {
    iVar17 = -1;
  }
  (this->EdgeOrientationSign).field0_0x0._s_0.B = iVar17;
  uVar16 = (this->PermutedTriEIDs).field0_0x0._s_0.C;
  uVar6 = *(undefined8 *)
           (*(longlong *)
             ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8) +
           (ulonglong)(uVar16 & 0x1ff) * 0x10);
  uVar20 = (uint)uVar6;
  uVar16 = (uint)((ulonglong)uVar6 >> 0x20);
  if ((uVar3 == uVar20) && (uVar4 == uVar16)) {
    iVar22 = 0;
  }
  else if ((uVar4 == uVar20) && (uVar5 == uVar16)) {
    iVar22 = 1;
  }
  else if ((uVar5 != uVar20) || (iVar22 = 2, uVar3 != uVar16)) {
    iVar22 = -1;
  }
  iVar17 = 1;
  if (iVar22 == -1) {
    iVar17 = -1;
  }
  (this->EdgeOrientationSign).field0_0x0._s_0.C = iVar17;
  dVar27 = __real_3ff0000000000000;
  pFVar7 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
  pdVar1 = (double *)
           (*(longlong *)(pFVar7 + (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 0x18)
  ;
  dVar34 = *pdVar1;
  dVar12 = pdVar1[1];
  dVar2 = *(double *)
           (*(longlong *)(pFVar7 + (ulonglong)(uVar3 >> 9) * 8) + 0x10 +
           (ulonglong)(uVar3 & 0x1ff) * 0x18);
  uVar3 = (this->PermutedTriVIDs).field0_0x0._s_0.B;
  uVar18 = (ulonglong)(uVar3 & 0x1ff);
  auVar30 = *(undefined1 (*) [16])
             (*(longlong *)(pFVar7 + (ulonglong)(uVar3 >> 9) * 8) + uVar18 * 0x18);
  uVar4 = (this->PermutedTriVIDs).field0_0x0._s_0.C;
  dVar13 = *(double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar3 >> 9) * 8) + 0x10 + uVar18 * 0x18) -
           dVar2;
  dVar11 = auVar30._0_8_ - dVar34;
  dVar14 = auVar30._8_8_ - dVar12;
  uVar18 = (ulonglong)(uVar4 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + uVar18 * 0x18);
  dVar2 = *(double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar18 * 0x18) -
          dVar2;
  dVar34 = *pdVar1 - dVar34;
  dVar12 = pdVar1[1] - dVar12;
  (this->Tri2d).V[0].field0_0x0._s_0.X = 0.0;
  (this->Tri2d).V[0].field0_0x0._s_0.Y = 0.0;
  dVar32 = SQRT(dVar14 * dVar14 + dVar11 * dVar11 + dVar13 * dVar13);
  dVar27 = dVar27 / dVar32;
  (this->Tri2d).V[1].field0_0x0._s_0.X = dVar32;
  dVar14 = dVar14 * dVar27;
  (this->Tri2d).V[1].field0_0x0._s_0.Y = 0.0;
  dVar13 = dVar13 * dVar27;
  dVar11 = dVar11 * dVar27;
  dVar33 = dVar14 * dVar2 - dVar13 * dVar12;
  dVar32 = dVar13 * dVar34 - dVar11 * dVar2;
  auVar28._8_4_ = auVar30._8_4_;
  auVar28._0_8_ = dVar14;
  auVar28._12_4_ = auVar30._12_4_;
  auVar29._8_8_ = auVar28._8_8_;
  auVar29._0_8_ = dVar14 * dVar34;
  dVar27 = dVar11 * dVar12 - auVar29._0_8_;
  (this->Tri2d).V[2].field0_0x0._s_0.X = dVar14 * dVar12 + dVar11 * dVar34 + dVar13 * dVar2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar32 * dVar32 + dVar33 * dVar33 + dVar27 * dVar27;
  auVar30 = sqrtpd(auVar29,auVar8);
  (this->Tri2d).V[2].field0_0x0._s_0.Y = auVar30._0_8_;
  dVar2 = (this->Tri2d).V[1].field0_0x0._s_0.Y;
  this->Tri2dEdges[0].field0_0x0._s_0.X =
       (this->Tri2d).V[1].field0_0x0._s_0.X - (this->Tri2d).V[0].field0_0x0._s_0.X;
  this->Tri2dEdges[0].field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Tri2d).V[2].field0_0x0._s_0.Y;
  dVar27 = (this->Tri2d).V[1].field0_0x0._s_0.Y;
  this->Tri2dEdges[1].field0_0x0._s_0.X =
       (this->Tri2d).V[2].field0_0x0._s_0.X - (this->Tri2d).V[1].field0_0x0._s_0.X;
  this->Tri2dEdges[1].field0_0x0._s_0.Y = dVar2 - dVar27;
  dVar2 = (this->Tri2d).V[0].field0_0x0._s_0.Y;
  dVar27 = (this->Tri2d).V[2].field0_0x0._s_0.Y;
  this->Tri2dEdges[2].field0_0x0._s_0.X =
       (this->Tri2d).V[0].field0_0x0._s_0.X - (this->Tri2d).V[2].field0_0x0._s_0.X;
  this->Tri2dEdges[2].field0_0x0._s_0.Y = dVar2 - dVar27;
  dVar2 = this->Tri2dEdges[0].field0_0x0._s_0.Y;
  dVar27 = this->Tri2dEdges[0].field0_0x0._s_0.X;
  auVar31._0_8_ = dVar27 * dVar27;
  auVar31._8_8_ = 0;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = dVar2 * dVar2 + auVar31._0_8_;
  auVar30 = sqrtpd(auVar31,auVar30);
  (this->Tri2dLengths).field0_0x0._s_0.X = auVar30._0_8_;
  dVar2 = this->Tri2dEdges[1].field0_0x0._s_0.Y;
  dVar27 = this->Tri2dEdges[1].field0_0x0._s_0.X;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar2 * dVar2 + dVar27 * dVar27;
  auVar30 = sqrtpd(auVar30,auVar9);
  (this->Tri2dLengths).field0_0x0._s_0.Y = auVar30._0_8_;
  dVar2 = this->Tri2dEdges[2].field0_0x0._s_0.Y;
  dVar27 = this->Tri2dEdges[2].field0_0x0._s_0.X;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar2 * dVar2 + dVar27 * dVar27;
  auVar30 = sqrtpd(auVar30,auVar10);
  (this->Tri2dLengths).field0_0x0._s_0.Z = auVar30._0_8_;
  return this;
}

// ChangeBasis @ 14c7e8020

TVector2<double> * __thiscall
UE::Geometry::GeodesicSingleTriangleUtils::FTangentTri2::ChangeBasis
          (FTangentTri2 *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          int param_2)

{
  double dVar1;
  code *pcVar2;
  TVector2<double>_u_0 TVar3;
  bool bVar4;
  TVector2<double> *pTVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (2 < (uint)param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector2<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = __real_3ff0000000000000 /
          (((TVector<double> *)(this->Tri2dEdges + 3))->field0_0x0).XYZ[param_2];
  dVar9 = (param_1->field0_0x0)._s_0.X;
  auVar6._0_8_ = dVar8 * this->Tri2dEdges[param_2].field0_0x0._s_0.X;
  auVar6._8_8_ = 0;
  dVar8 = dVar8 * this->Tri2dEdges[param_2].field0_0x0._s_0.Y;
  dVar10 = dVar1 * auVar6._0_8_ - dVar9 * dVar8;
  dVar1 = dVar1 * dVar8 + dVar9 * auVar6._0_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar10 * dVar10 + dVar1 * dVar1;
  auVar7 = sqrtpd(auVar6,auVar7);
  if (auVar7._0_8_ <= 0.0) {
    dVar9 = 0.0;
    dVar10 = 0.0;
  }
  else {
    dVar9 = __real_3ff0000000000000 / auVar7._0_8_;
    dVar10 = dVar9 * dVar10;
    dVar9 = dVar9 * dVar1;
  }
  TVar3._8_4_ = SUB84(dVar10,0);
  TVar3._s_0.X = dVar9;
  TVar3._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar3;
  return __return_storage_ptr__;
}

// DistanceToEdge @ 14c800840

double __thiscall
UE::Geometry::GeodesicSingleTriangleUtils::FTangentTri2::DistanceToEdge
          (FTangentTri2 *this,int param_1,TVector2<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar3 = (double)(*pcVar1)();
      return dVar3;
    }
  }
  return (((param_2->field0_0x0)._s_0.Y - (this->Tri2d).V[param_1].field0_0x0._s_0.Y) *
          this->Tri2dEdges[param_1].field0_0x0._s_0.X -
         ((param_2->field0_0x0)._s_0.X - (this->Tri2d).V[param_1].field0_0x0._s_0.X) *
         this->Tri2dEdges[param_1].field0_0x0._s_0.Y) /
         (((TVector<double> *)(this->Tri2dEdges + 3))->field0_0x0).XYZ[param_1];
}

// GetBarycentricCoords @ 14c80dbe0

TVector<double> * __thiscall
UE::Geometry::GeodesicSingleTriangleUtils::FTangentTri2::GetBarycentricCoords
          (FTangentTri2 *this,TVector<double> *__return_storage_ptr__,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar6 = __real_3ff0000000000000;
  dVar1 = (this->Tri2d).V[2].field0_0x0._s_0.X;
  dVar2 = (this->Tri2d).V[2].field0_0x0._s_0.Y;
  dVar8 = (this->Tri2d).V[1].field0_0x0._s_0.Y - dVar2;
  dVar7 = (this->Tri2d).V[0].field0_0x0._s_0.Y - dVar2;
  dVar9 = (param_1->field0_0x0)._s_0.X - dVar1;
  dVar3 = (this->Tri2d).V[0].field0_0x0._s_0.X - dVar1;
  dVar1 = (this->Tri2d).V[1].field0_0x0._s_0.X - dVar1;
  dVar2 = (param_1->field0_0x0)._s_0.Y - dVar2;
  dVar5 = dVar7 * dVar7 + dVar3 * dVar3;
  dVar4 = dVar8 * dVar7 + dVar1 * dVar3;
  dVar10 = dVar8 * dVar8 + dVar1 * dVar1;
  dVar3 = dVar2 * dVar7 + dVar9 * dVar3;
  dVar1 = dVar2 * dVar8 + dVar9 * dVar1;
  dVar7 = __real_3ff0000000000000 / (dVar10 * dVar5 - dVar4 * dVar4);
  dVar2 = (dVar1 * dVar5 - dVar3 * dVar4) * dVar7;
  dVar7 = (dVar3 * dVar10 - dVar1 * dVar4) * dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar6 - dVar7) - dVar2;
  return __return_storage_ptr__;
}

// GetBarycentricCoordsInSrcTri @ 14c80dd50

TVector<double> * __thiscall
UE::Geometry::GeodesicSingleTriangleUtils::FTangentTri2::GetBarycentricCoordsInSrcTri
          (FTangentTri2 *this,TVector<double> *__return_storage_ptr__,TVector2<double> *param_1)

{
  double dVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  TVector<double> *pTVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar10 = (this->Tri2d).V[2].field0_0x0._s_0.X;
  dVar1 = (this->Tri2d).V[2].field0_0x0._s_0.Y;
  dVar9 = (this->Tri2d).V[0].field0_0x0._s_0.Y - dVar1;
  dVar12 = (this->Tri2d).V[1].field0_0x0._s_0.Y - dVar1;
  uVar2 = (this->PermutedIndices).field0_0x0._s_0.A;
  dVar13 = (param_1->field0_0x0)._s_0.X - dVar10;
  dVar4 = (this->Tri2d).V[0].field0_0x0._s_0.X - dVar10;
  dVar10 = (this->Tri2d).V[1].field0_0x0._s_0.X - dVar10;
  dVar1 = (param_1->field0_0x0)._s_0.Y - dVar1;
  dVar6 = dVar9 * dVar9 + dVar4 * dVar4;
  dVar5 = dVar12 * dVar9 + dVar10 * dVar4;
  dVar11 = dVar12 * dVar12 + dVar10 * dVar10;
  dVar4 = dVar1 * dVar9 + dVar13 * dVar4;
  dVar1 = dVar1 * dVar12 + dVar13 * dVar10;
  dVar10 = __real_3ff0000000000000 / (dVar11 * dVar6 - dVar5 * dVar5);
  dVar6 = (dVar1 * dVar6 - dVar4 * dVar5) * dVar10;
  dVar10 = (dVar4 * dVar11 - dVar1 * dVar5) * dVar10;
  dVar1 = __real_3ff0000000000000 - dVar10;
  if (2 < uVar2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar3)();
      return pTVar8;
    }
  }
  (__return_storage_ptr__->field0_0x0).XYZ[(int)uVar2] = dVar10;
  uVar2 = (this->PermutedIndices).field0_0x0._s_0.B;
  if (2 < uVar2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar3)();
      return pTVar8;
    }
  }
  (__return_storage_ptr__->field0_0x0).XYZ[(int)uVar2] = dVar6;
  uVar2 = (this->PermutedIndices).field0_0x0._s_0.C;
  if (2 < uVar2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar3)();
      return pTVar8;
    }
  }
  (__return_storage_ptr__->field0_0x0).XYZ[(int)uVar2] = dVar1 - dVar6;
  return __return_storage_ptr__;
}

// ProjectOnEdge @ 14c820190

double __thiscall
UE::Geometry::GeodesicSingleTriangleUtils::FTangentTri2::ProjectOnEdge
          (FTangentTri2 *this,int param_1,TVector2<double> *param_2)

{
  double *pdVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  lVar4 = (longlong)param_1;
  pdVar1 = (double *)
           ((longlong)&((TVector<double> *)(this->Tri2dEdges + 3))->field0_0x0 + lVar4 * 8);
  if ((uint)param_1 < 3) {
    uVar6 = SUB84(*pdVar1,0);
    uVar7 = (undefined4)((ulonglong)*pdVar1 >> 0x20);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar5 = (double)(*pcVar2)();
      return dVar5;
    }
    uVar6 = SUB84(*pdVar1,0);
    uVar7 = (undefined4)((ulonglong)*pdVar1 >> 0x20);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar5 = (double)(*pcVar2)();
      return dVar5;
    }
  }
  return (((param_2->field0_0x0)._s_0.Y - (this->Tri2d).V[lVar4].field0_0x0._s_0.Y) *
          this->Tri2dEdges[lVar4].field0_0x0._s_0.Y +
         ((param_2->field0_0x0)._s_0.X - (this->Tri2d).V[lVar4].field0_0x0._s_0.X) *
         this->Tri2dEdges[lVar4].field0_0x0._s_0.X) / ((double)CONCAT44(uVar7,uVar6) * *pdVar1);
}

// Reset @ 14c824860

void __thiscall UE::Geometry::GeodesicSingleTriangleUtils::FTangentTri2::Reset(FTangentTri2 *this)

{
  this->Tri3ID = -1;
  return;
}

