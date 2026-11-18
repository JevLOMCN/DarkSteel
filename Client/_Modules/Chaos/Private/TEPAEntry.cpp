// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// IsOriginProjectedInside @ 1438c33a0

bool __thiscall
Chaos::TEPAEntry<double>::IsOriginProjectedInside
          (TEPAEntry<double> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          double param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar17 = this->Distance;
  dVar15 = *(double *)&(this->PlaneNormal).field_0x8 * dVar17;
  iVar3 = this->IdxBuffer[0];
  dVar1 = *(double *)&(this->PlaneNormal).field_0x10;
  dVar2 = *(double *)&this->PlaneNormal;
  iVar4 = this->IdxBuffer[1];
  dVar14 = dVar1 * dVar17;
  dVar7 = (*(double *)&param_1[iVar3].field_0x8 - *(double *)&param_2[iVar3].field_0x8) - dVar15;
  dVar17 = dVar2 * dVar17;
  iVar5 = this->IdxBuffer[2];
  dVar8 = (*(double *)&param_1[iVar3].field_0x10 - *(double *)&param_2[iVar3].field_0x10) - dVar14;
  dVar9 = (*(double *)(param_1 + iVar3) - *(double *)(param_2 + iVar3)) - dVar17;
  dVar10 = (*(double *)(param_1 + iVar4) - *(double *)(param_2 + iVar4)) - dVar17;
  dVar12 = (*(double *)&param_1[iVar4].field_0x10 - *(double *)&param_2[iVar4].field_0x10) - dVar14;
  dVar11 = (*(double *)&param_1[iVar4].field_0x8 - *(double *)&param_2[iVar4].field_0x8) - dVar15;
  dVar14 = (*(double *)&param_1[iVar5].field_0x10 - *(double *)&param_2[iVar5].field_0x10) - dVar14;
  dVar15 = (*(double *)&param_1[iVar5].field_0x8 - *(double *)&param_2[iVar5].field_0x8) - dVar15;
  dVar17 = (*(double *)(param_1 + iVar5) - *(double *)(param_2 + iVar5)) - dVar17;
  dVar6 = (dVar14 * dVar7 - dVar15 * dVar8) * dVar2 +
          (dVar8 * dVar17 - dVar14 * dVar9) * *(double *)&(this->PlaneNormal).field_0x8 +
          (dVar15 * dVar9 - dVar7 * dVar17) * dVar1;
  dVar16 = (double)CONCAT44((uint)((ulonglong)param_3 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(param_3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  dVar17 = (dVar15 * dVar12 - dVar14 * dVar11) * dVar2 +
           (dVar14 * dVar10 - dVar12 * dVar17) * *(double *)&(this->PlaneNormal).field_0x8 +
           (dVar11 * dVar17 - dVar15 * dVar10) * dVar1;
  if ((((dVar6 < dVar16) && (param_3 < dVar17)) || ((param_3 < dVar6 && (dVar17 < dVar16)))) ||
     ((dVar17 = (dVar9 * dVar12 - dVar8 * dVar10) * *(double *)&(this->PlaneNormal).field_0x8 +
                (dVar8 * dVar11 - dVar7 * dVar12) * dVar2 +
                (dVar7 * dVar10 - dVar9 * dVar11) * dVar1, dVar6 < dVar16 && (param_3 < dVar17)))) {
    bVar13 = false;
  }
  else if (dVar6 <= param_3) {
    bVar13 = true;
  }
  else {
    bVar13 = dVar16 <= dVar17;
  }
  return bVar13;
}

