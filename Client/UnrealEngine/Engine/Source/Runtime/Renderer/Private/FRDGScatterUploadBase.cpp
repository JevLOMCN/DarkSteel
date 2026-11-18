// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Add_GetRef @ 145673130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __thiscall
FRDGScatterUploadBase::Add_GetRef(FRDGScatterUploadBase *this,uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iVar14;
  undefined8 uVar15;
  
  iVar8 = _UNK_150631e0c;
  iVar7 = _UNK_150631e08;
  iVar6 = __xmm_00000003000000020000000100000000._4_4_;
  iVar5 = (int)__xmm_00000003000000020000000100000000;
  puVar13 = this->ScatterData;
  uVar11 = this->NumScatters;
  uVar12 = 0;
  if (param_2 != 0) {
    if (0xf < param_2) {
      iVar14 = param_1 + 0xe;
      do {
        uVar3 = (-10 - param_1) + iVar14;
        iVar9 = (int)uVar12;
        iVar1 = iVar14 + -1;
        puVar4 = puVar13 + uVar11 + uVar12;
        *puVar4 = iVar9 + param_1 + iVar5;
        puVar4[1] = iVar9 + param_1 + iVar6;
        puVar4[2] = iVar9 + param_1 + iVar7;
        puVar4[3] = iVar9 + param_1 + iVar8;
        iVar2 = iVar14 + -2;
        uVar10 = iVar9 + 0x10;
        uVar12 = (ulonglong)uVar10;
        puVar4 = puVar13 + (ulonglong)uVar11 + (ulonglong)uVar3;
        *puVar4 = uVar3 + param_1 + iVar5;
        puVar4[1] = uVar3 + param_1 + iVar6;
        puVar4[2] = uVar3 + param_1 + iVar7;
        puVar4[3] = uVar3 + param_1 + iVar8;
        uVar3 = (-6 - param_1) + iVar14;
        puVar4 = puVar13 + (ulonglong)uVar11 + (ulonglong)uVar3;
        *puVar4 = uVar3 + param_1 + iVar5;
        puVar4[1] = uVar3 + param_1 + iVar6;
        puVar4[2] = uVar3 + param_1 + iVar7;
        puVar4[3] = uVar3 + param_1 + iVar8;
        uVar3 = (-2 - param_1) + iVar14;
        uVar15 = CONCAT44(iVar14 + 1,iVar14);
        iVar14 = iVar14 + 0x10;
        *(ulonglong *)(puVar13 + (ulonglong)uVar11 + (ulonglong)uVar3) = CONCAT44(iVar1,iVar2);
        *(undefined8 *)(puVar13 + (ulonglong)uVar11 + (ulonglong)uVar3 + 2) = uVar15;
      } while (uVar10 < (param_2 & 0xfffffff0));
      if (param_2 <= uVar10) goto LAB_145673271;
    }
    puVar13 = puVar13 + uVar11 + uVar12;
    do {
      iVar5 = (int)uVar12;
      uVar11 = iVar5 + 1;
      uVar12 = (ulonglong)uVar11;
      *puVar13 = iVar5 + param_1;
      puVar13 = puVar13 + 1;
    } while (uVar11 < param_2);
  }
LAB_145673271:
  uVar11 = this->NumScatters;
  this->NumScatters = uVar11 + param_2;
  return this->UploadData + uVar11 * this->NumBytesPerElement;
}

