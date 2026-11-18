// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Rand3 @ 148fc7e40

TVector<float> * __thiscall
FNDIRandomInfoPolicy::Rand3
          (FNDIRandomInfoPolicy *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  FVectorVMExternalFunctionContext *pFVar1;
  int **ppiVar2;
  FRandomStream *pFVar3;
  float fVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  fVar4 = __real_3f800000;
  pFVar1 = this->Context;
  if ((this->RandInfo).Seed3 == -1) {
    uVar9 = pFVar1->RandStream->Seed * 0xbb38435 + 0x3619636b;
    pFVar1->RandStream->Seed = uVar9;
    pFVar3 = this->Context->RandStream;
    uVar5 = pFVar3->Seed;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(uVar9 >> 9 | 0x3f800000) - fVar4;
    uVar9 = uVar5 * 0xbb38435 + 0x3619636b;
    pFVar3->Seed = uVar9;
    pFVar3 = this->Context->RandStream;
    uVar5 = pFVar3->Seed * 0xbb38435 + 0x3619636b;
    pFVar3->Seed = uVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(uVar5 >> 9 | 0x3f800000) - fVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(uVar9 >> 9 | 0x3f800000) - fVar4;
  }
  else {
    ppiVar2 = pFVar1->RandCounters;
    if (*ppiVar2 == (int *)0x0) {
      piVar6 = FMemory::MallocZeroed((longlong)pFVar1->NumInstances << 2,0);
      *ppiVar2 = piVar6;
    }
    fVar4 = __real_33800000;
    uVar5 = (*pFVar1->RandCounters)[param_1];
    (*pFVar1->RandCounters)[param_1] = uVar5 + 1;
    iVar10 = (this->RandInfo).Seed2 * 0x19660d + 0x3c6ef35f;
    iVar8 = ((this->RandInfo).Seed3 << 0x10 | uVar5) * 0x19660d + 0x3c6ef35f;
    iVar7 = (this->RandInfo).Seed1 * 0x19660d + 0x3c6ef35f + iVar8 * iVar10;
    iVar10 = iVar8 * iVar7 + iVar10;
    iVar8 = iVar10 * iVar7 + iVar8;
    iVar7 = iVar8 * iVar10 + iVar7;
    iVar10 = iVar7 * iVar8 + iVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(iVar7 >> 8 & 0xffffff) * fVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(iVar10 >> 8 & 0xffffff) * fVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (float)(iVar10 * iVar7 + iVar8 >> 8 & 0xffffff) * fVar4;
  }
  return __return_storage_ptr__;
}

