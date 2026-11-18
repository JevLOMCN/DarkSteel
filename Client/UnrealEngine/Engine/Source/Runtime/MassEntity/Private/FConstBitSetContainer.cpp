// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// operator== @ 1471e2720

bool __thiscall
FStructTypeBitSet::FConstBitSetContainer::operator==
          (FConstBitSetContainer *this,FConstBitSetContainer *param_1)

{
  bool bVar1;
  int iVar2;
  FConstBitSetContainer *_Buf1;
  
  bVar1 = IsEmpty(this);
  if ((bVar1) && (bVar1 = IsEmpty(param_1), bVar1)) {
    return true;
  }
  if (*(int *)&this->field_0x18 == *(int *)&param_1->field_0x18) {
    if (*(FConstBitSetContainer **)&param_1->field_0x10 != (FConstBitSetContainer *)0x0) {
      param_1 = *(FConstBitSetContainer **)&param_1->field_0x10;
    }
    _Buf1 = this;
    if (*(FConstBitSetContainer **)&this->field_0x10 != (FConstBitSetContainer *)0x0) {
      _Buf1 = *(FConstBitSetContainer **)&this->field_0x10;
    }
    iVar2 = memcmp(_Buf1,param_1,(ulonglong)(*(int *)&this->field_0x18 + 0x1fU >> 5) << 2);
    if (iVar2 == 0) {
      return true;
    }
  }
  return false;
}

// HasAll @ 14722a3a0

bool __thiscall
FStructTypeBitSet::FConstBitSetContainer::HasAll
          (FConstBitSetContainer *this,TBitArray<FDefaultBitArrayAllocator> *param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FConstBitSetContainer *pFVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  
  pFVar10 = this;
  if (*(FConstBitSetContainer **)&this->field_0x10 != (FConstBitSetContainer *)0x0) {
    pFVar10 = *(FConstBitSetContainer **)&this->field_0x10;
  }
  iVar13 = 0;
  iVar6 = *(uint *)&this->field_0x18 + 0x1f;
  iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5;
  uVar11 = *(uint *)&this->field_0x18 & 0x8000001f;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
  }
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  uVar3 = 0xffffffff >> ((byte)(0x20 - uVar11) & 0x1f);
  if (0x1f < (int)(0x20 - uVar11)) {
    uVar3 = 0xffffffff;
  }
  uVar11 = 0xffffffff;
  if (iVar6 == 1) {
    uVar11 = uVar3;
  }
  FVar14 = (ForElementType<unsigned_int>)param_1;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar14 = FVar2;
  }
  iVar7 = param_1->NumBits + 0x1f;
  iVar12 = 0;
  iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
  uVar8 = param_1->NumBits & 0x8000001f;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
  }
  iVar1 = iVar7 + -1;
  iVar5 = iVar1;
  uVar4 = 0xffffffff >> ((byte)(0x20 - uVar8) & 0x1f);
  if (0x1f < (int)(0x20 - uVar8)) {
    uVar4 = 0xffffffff;
  }
  do {
    uVar8 = 0xffffffff;
    if (iVar5 == 0) {
      uVar8 = uVar4;
    }
    if (iVar13 < iVar6) {
      uVar9 = *(uint *)(&pFVar10->field_0x0 + (longlong)iVar13 * 4) & uVar11;
      if (uVar11 == 0xffffffff) {
        uVar9 = *(uint *)(&pFVar10->field_0x0 + (longlong)iVar13 * 4);
      }
      if (iVar12 < iVar7) goto LAB_14722a48f;
      uVar11 = 0;
    }
    else {
      if (iVar7 <= iVar12) {
        return true;
      }
      uVar9 = 0;
LAB_14722a48f:
      uVar11 = *(uint *)((longlong)FVar14 + (longlong)iVar12 * 4);
      if (uVar8 != 0xffffffff) {
        uVar11 = uVar11 & uVar8;
      }
    }
    if ((uVar11 & uVar9) != uVar11) {
      return false;
    }
    iVar13 = iVar13 + 1;
    uVar11 = 0xffffffff;
    if (iVar13 == iVar6 + -1) {
      uVar11 = uVar3;
    }
    iVar12 = iVar12 + 1;
    iVar5 = iVar12 - iVar1;
  } while( true );
}

// HasAny @ 14722a4f0

bool __thiscall
FStructTypeBitSet::FConstBitSetContainer::HasAny
          (FConstBitSetContainer *this,TBitArray<FDefaultBitArrayAllocator> *param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FConstBitSetContainer *pFVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  
  pFVar10 = this;
  if (*(FConstBitSetContainer **)&this->field_0x10 != (FConstBitSetContainer *)0x0) {
    pFVar10 = *(FConstBitSetContainer **)&this->field_0x10;
  }
  iVar13 = 0;
  iVar6 = *(uint *)&this->field_0x18 + 0x1f;
  iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5;
  uVar11 = *(uint *)&this->field_0x18 & 0x8000001f;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
  }
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  uVar3 = 0xffffffff >> ((byte)(0x20 - uVar11) & 0x1f);
  if (0x1f < (int)(0x20 - uVar11)) {
    uVar3 = 0xffffffff;
  }
  uVar11 = 0xffffffff;
  if (iVar6 == 1) {
    uVar11 = uVar3;
  }
  FVar14 = (ForElementType<unsigned_int>)param_1;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar14 = FVar2;
  }
  iVar7 = param_1->NumBits + 0x1f;
  iVar12 = 0;
  iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
  uVar9 = param_1->NumBits & 0x8000001f;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
  }
  iVar1 = iVar7 + -1;
  iVar5 = iVar1;
  uVar4 = 0xffffffff >> ((byte)(0x20 - uVar9) & 0x1f);
  if (0x1f < (int)(0x20 - uVar9)) {
    uVar4 = 0xffffffff;
  }
  do {
    uVar9 = 0xffffffff;
    if (iVar5 == 0) {
      uVar9 = uVar4;
    }
    if (iVar13 < iVar6) {
      uVar8 = *(uint *)(&pFVar10->field_0x0 + (longlong)iVar13 * 4) & uVar11;
      if (uVar11 == 0xffffffff) {
        uVar8 = *(uint *)(&pFVar10->field_0x0 + (longlong)iVar13 * 4);
      }
      if (iVar12 < iVar7) goto LAB_14722a5e7;
      uVar11 = 0;
    }
    else {
      if (iVar7 <= iVar12) {
        return false;
      }
      uVar8 = 0;
LAB_14722a5e7:
      uVar11 = *(uint *)((longlong)FVar14 + (longlong)iVar12 * 4);
      if (uVar9 != 0xffffffff) {
        uVar11 = uVar11 & uVar9;
      }
    }
    if ((uVar8 & uVar11) != 0) {
      return true;
    }
    iVar13 = iVar13 + 1;
    uVar11 = 0xffffffff;
    if (iVar13 == iVar6 + -1) {
      uVar11 = uVar3;
    }
    iVar12 = iVar12 + 1;
    iVar5 = iVar12 - iVar1;
  } while( true );
}

// IsEmpty @ 147232190

bool __thiscall FStructTypeBitSet::FConstBitSetContainer::IsEmpty(FConstBitSetContainer *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  FConstBitSetContainer *pFVar6;
  
  pFVar6 = this;
  if (*(FConstBitSetContainer **)&this->field_0x10 != (FConstBitSetContainer *)0x0) {
    pFVar6 = *(FConstBitSetContainer **)&this->field_0x10;
  }
  uVar4 = 0;
  iVar2 = *(uint *)&this->field_0x18 + 0x1f;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
  uVar5 = *(uint *)&this->field_0x18 & 0x8000001f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
  }
  uVar1 = 0xffffffff >> ((byte)(0x20 - uVar5) & 0x1f);
  if (0x1f < (int)(0x20 - uVar5)) {
    uVar1 = 0xffffffff;
  }
  uVar5 = 0xffffffff;
  if (iVar2 == 1) {
    uVar5 = uVar1;
  }
  if (0 < iVar2) {
    do {
      if (uVar5 == 0xffffffff) {
        uVar5 = *(uint *)(&pFVar6->field_0x0 + uVar4 * 4);
      }
      else {
        uVar5 = uVar5 & *(uint *)(&pFVar6->field_0x0 + uVar4 * 4);
      }
      if (uVar5 != 0) break;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = 0xffffffff;
      if (uVar3 == iVar2 - 1U) {
        uVar5 = uVar1;
      }
    } while ((int)uVar3 < iVar2);
  }
  return iVar2 <= (int)uVar4;
}

