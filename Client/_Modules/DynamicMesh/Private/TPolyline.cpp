// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// DistanceSquared @ 14c72d390

double __thiscall
UE::Geometry::TPolyline<double,3>::DistanceSquared
          (TPolyline<double,3> *this,TVector<double> *param_1,int *param_2,double *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  uint uVar25;
  TVector<double>_u_0 local_100;
  undefined8 local_e8;
  
  *param_2 = -1;
  *param_3 = 1.7976931348623157e+308;
  dVar8 = __real_bfe0000000000000;
  dVar7 = __real_3fe0000000000000;
  iVar10 = (this->Vertices).ArrayNum + -1;
  lVar15 = (longlong)iVar10;
  dVar16 = __real_7fefffffffffffff;
  if (0 < iVar10) {
    lVar13 = 0;
    uVar25 = (uint)__xmm_80000000000000008000000000000000;
    uVar6 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    uVar12 = 0;
    do {
      uVar14 = uVar12 + 1;
      uVar11 = 0;
      if ((int)uVar14 < (this->Vertices).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        dVar16 = (double)(*pcVar3)();
        return dVar16;
      }
      pFVar1 = (this->Vertices).AllocatorInstance.Data;
      uVar11 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        dVar16 = (double)(*pcVar3)();
        return dVar16;
      }
      pFVar2 = (this->Vertices).AllocatorInstance.Data;
      local_100._s_0.X = *(double *)(pFVar1 + lVar13 + 0x18) - *(double *)(pFVar2 + lVar13);
      local_e8 = 0;
      local_100._s_0.Y = *(double *)(pFVar1 + lVar13 + 0x20) - *(double *)(pFVar2 + lVar13 + 8);
      dVar17 = (*(double *)(pFVar2 + lVar13) + *(double *)(pFVar1 + lVar13 + 0x18)) * dVar7;
      dVar20 = (*(double *)(pFVar2 + lVar13 + 8) + *(double *)(pFVar1 + lVar13 + 0x20)) * dVar7;
      local_100._s_0.Z = *(double *)(pFVar1 + lVar13 + 0x28) - *(double *)(pFVar2 + lVar13 + 0x10);
      dVar18 = (*(double *)(pFVar2 + lVar13 + 0x10) + *(double *)(pFVar1 + lVar13 + 0x28)) * dVar7;
      dVar19 = Normalize<double>((TVector<double> *)&local_100._s_0,0.0);
      dVar23 = (param_1->field0_0x0)._s_0.X;
      dVar22 = (param_1->field0_0x0)._s_0.Y;
      dVar24 = (param_1->field0_0x0)._s_0.Z;
      dVar4 = (dVar23 - dVar17) * local_100._s_0.X + (dVar22 - dVar20) * local_100._s_0.Y +
              (dVar24 - dVar18) * local_100._s_0.Z;
      dVar21 = dVar19 * dVar7;
      dVar5 = dVar21;
      if ((dVar21 <= dVar4) || (dVar5 = dVar4, dVar19 * dVar8 < dVar4)) {
        dVar17 = local_100._s_0.X * dVar5 + dVar17;
        dVar20 = local_100._s_0.Y * dVar5 + dVar20;
        dVar18 = local_100._s_0.Z * dVar5 + dVar18;
      }
      else {
        dVar17 = dVar17 - local_100._s_0.X * dVar21;
        dVar20 = dVar20 - local_100._s_0.Y * dVar21;
        dVar18 = dVar18 - local_100._s_0.Z * dVar21;
      }
      dVar24 = dVar24 - dVar18;
      dVar23 = dVar23 - dVar17;
      dVar22 = dVar22 - dVar20;
      dVar23 = dVar22 * dVar22 + dVar23 * dVar23 + dVar24 * dVar24;
      if (dVar23 < dVar16) {
        dVar16 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) ^ (uint)uVar6,
                                  SUB84(dVar21,0) ^ uVar25);
        *param_2 = uVar12;
        if ((dVar16 <= dVar4) && (dVar16 = dVar21, dVar4 <= dVar21)) {
          dVar16 = dVar4;
        }
        *param_3 = dVar16;
        dVar16 = dVar23;
      }
      lVar13 = lVar13 + 0x18;
      lVar15 = lVar15 + -1;
      uVar12 = uVar14;
    } while (lVar15 != 0);
  }
  return dVar16;
}

