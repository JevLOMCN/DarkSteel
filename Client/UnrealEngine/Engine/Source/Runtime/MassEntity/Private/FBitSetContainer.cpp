// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// FBitSetContainer @ 1471d5700

FBitSetContainer * __thiscall
FStructTypeBitSet::FBitSetContainer::FBitSetContainer
          (FBitSetContainer *this,FBitSetContainer *param_1)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(longlong *)&param_1->field_0x10 == 0) {
    memmove(this,param_1,0x10);
  }
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  *(undefined4 *)&this->field_0x18 = *(undefined4 *)&param_1->field_0x18;
  *(undefined4 *)&this->field_0x1c = *(undefined4 *)&param_1->field_0x1c;
  *(undefined8 *)&param_1->field_0x18 = 0;
  return this;
}

// operator-= @ 1471e8b60

void __thiscall
FStructTypeBitSet::FBitSetContainer::operator-=
          (FBitSetContainer *this,TBitArray<FDefaultBitArrayAllocator> *param_1)

{
  longlong lVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  FBitSetContainer *pFVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ForElementType<unsigned_int> FVar14;
  
  pFVar10 = this;
  if (*(FBitSetContainer **)&this->field_0x10 != (FBitSetContainer *)0x0) {
    pFVar10 = *(FBitSetContainer **)&this->field_0x10;
  }
  uVar9 = 0;
  iVar5 = *(uint *)&this->field_0x18 + 0x1f;
  iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5;
  uVar11 = *(uint *)&this->field_0x18 & 0x8000001f;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
  }
  uVar3 = 0xffffffff >> ((byte)(0x20 - uVar11) & 0x1f);
  if (0x1f < (int)(0x20 - uVar11)) {
    uVar3 = 0xffffffff;
  }
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  uVar11 = 0xffffffff;
  if (iVar5 == 1) {
    uVar11 = uVar3;
  }
  FVar14 = (ForElementType<unsigned_int>)param_1;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar14 = FVar2;
  }
  iVar6 = param_1->NumBits + 0x1f;
  iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5;
  uVar7 = param_1->NumBits & 0x8000001f;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
  }
  uVar4 = 0xffffffff >> ((byte)(0x20 - uVar7) & 0x1f);
  if (0x1f < (int)(0x20 - uVar7)) {
    uVar4 = 0xffffffff;
  }
  uVar7 = 0xffffffff;
  if (iVar6 == 1) {
    uVar7 = uVar4;
  }
  uVar13 = uVar9;
  if (0 < iVar5) {
    do {
      iVar12 = (int)uVar13;
      if (iVar6 <= iVar12) {
        return;
      }
      lVar1 = uVar9 * 4;
      uVar8 = *(uint *)(&pFVar10->field_0x0 + uVar9 * 4) & uVar11;
      if (uVar11 == 0xffffffff) {
        uVar8 = *(uint *)(&pFVar10->field_0x0 + lVar1);
      }
      uVar11 = *(uint *)((longlong)FVar14 + (longlong)iVar12 * 4) & uVar7;
      if (uVar7 == 0xffffffff) {
        uVar11 = *(uint *)((longlong)FVar14 + (longlong)iVar12 * 4);
      }
      uVar7 = ~uVar11 & uVar8 & uVar3;
      if ((uint)uVar9 != iVar5 - 1U) {
        uVar7 = ~uVar11 & uVar8;
      }
      uVar8 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      *(uint *)(&pFVar10->field_0x0 + lVar1) = uVar7;
      uVar11 = 0xffffffff;
      if (uVar8 == iVar5 - 1U) {
        uVar11 = uVar3;
      }
      uVar13 = (ulonglong)(iVar12 + 1U);
      uVar7 = 0xffffffff;
      if (iVar12 + 1U == iVar6 - 1U) {
        uVar7 = uVar4;
      }
    } while ((int)uVar8 < iVar5);
  }
  return;
}

