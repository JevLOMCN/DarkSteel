// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// TConstIterator @ 1424ec040

TConstIterator * __thiscall
TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
          (TConstIterator *this,
          TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  int local_28;
  uint uStack_24;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  iVar2 = *(int *)&param_1->field_0x28;
  uStack_24 = 1;
  local_28 = 0;
  iStack_14 = 0;
  iStack_10 = 0;
  if (iVar2 != 0) {
    puVar5 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar5 = (uint *)&param_1->field_0x10;
    }
    uVar3 = *puVar5;
    iStack_10 = 0;
    local_28 = 0;
    while (uVar3 == 0) {
      iStack_10 = iStack_10 + 0x20;
      lVar4 = (longlong)local_28;
      local_28 = local_28 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_28) goto LAB_1424ec0ed;
      uVar3 = puVar5[lVar4 + 1];
    }
    uStack_24 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_24 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_14 = (int)lVar4 + -1 + iStack_10;
    if (iVar2 < iStack_14) {
LAB_1424ec0ed:
      iStack_14 = iVar2;
    }
  }
  *(TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator> **)this = param_1;
  *(ulonglong *)&this->field_0x8 = CONCAT44(uStack_24,local_28);
  *(undefined1 **)&this->field_0x10 = &param_1->field_0x10;
  *(ulonglong *)&this->field_0x18 = CONCAT44(iStack_14,0xffffffff);
  *(ulonglong *)&this->field_0x20 = CONCAT44(uStack_c,iStack_10);
  return this;
}

