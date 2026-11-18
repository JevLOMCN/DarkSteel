// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// CompareSetBits<FDefaultBitArrayAllocator> @ 1470d7a90

bool __thiscall
TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
          (TBitArray<FDefaultBitArrayAllocator> *this,TBitArray<FDefaultBitArrayAllocator> *param_1,
          bool param_2)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar10 = (ForElementType<unsigned_int>)this;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar10 = FVar2;
  }
  iVar14 = this->NumBits + 0x1f;
  iVar13 = 0;
  iVar14 = (int)((iVar14 >> 0x1f & 0x1fU) + iVar14) >> 5;
  uVar11 = this->NumBits & 0x8000001f;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
  }
  iVar12 = 0;
  uVar5 = 0xffffffff >> ((byte)(0x20 - uVar11) & 0x1f);
  if (0x1f < (int)(0x20 - uVar11)) {
    uVar5 = 0xffffffff;
  }
  uVar11 = 0xffffffff;
  if (iVar14 == 1) {
    uVar11 = uVar5;
  }
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar9 = (ForElementType<unsigned_int>)param_1;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar9 = FVar2;
  }
  iVar6 = param_1->NumBits + 0x1f;
  iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5;
  uVar8 = param_1->NumBits & 0x8000001f;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
  }
  iVar1 = iVar6 + -1;
  iVar4 = iVar1;
  uVar3 = 0xffffffff >> ((byte)(0x20 - uVar8) & 0x1f);
  if (0x1f < (int)(0x20 - uVar8)) {
    uVar3 = 0xffffffff;
  }
  do {
    uVar8 = 0xffffffff;
    if (iVar4 == 0) {
      uVar8 = uVar3;
    }
    if (iVar13 < iVar14) {
      uVar7 = *(uint *)((longlong)FVar10 + (longlong)iVar13 * 4);
      if (uVar11 != 0xffffffff) {
        if (param_2) {
          uVar7 = ~uVar11 | uVar7 & uVar11;
        }
        else {
          uVar7 = uVar7 & uVar11;
        }
      }
      uVar11 = -(uint)param_2;
      if (iVar12 < iVar6) goto LAB_1470d7bb5;
    }
    else {
      uVar7 = -(uint)param_2;
      if (iVar6 <= iVar12) {
        return true;
      }
LAB_1470d7bb5:
      uVar11 = *(uint *)((longlong)FVar9 + (longlong)iVar12 * 4);
      if (uVar8 != 0xffffffff) {
        if (param_2) {
          uVar11 = ~uVar8 | uVar11 & uVar8;
        }
        else {
          uVar11 = uVar11 & uVar8;
        }
      }
    }
    if (uVar7 != uVar11) {
      return false;
    }
    iVar13 = iVar13 + 1;
    uVar11 = 0xffffffff;
    if (iVar13 == iVar14 + -1) {
      uVar11 = uVar5;
    }
    iVar12 = iVar12 + 1;
    iVar4 = iVar12 - iVar1;
  } while( true );
}

