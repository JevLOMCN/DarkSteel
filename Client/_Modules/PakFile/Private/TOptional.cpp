// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// Emplace<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_&> @ 142a3d7b0

TConstIterator * __thiscall
TOptional<TMapBase<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>::TConstIterator>
::
Emplace<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_&>
          (TOptional<TMapBase<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>::TConstIterator>
           *this,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  
  iVar2 = *(int *)&param_1->field_0x28;
  iVar7 = 0;
  uVar4 = 1;
  iVar8 = 0;
  iVar5 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar9 = (uint *)&param_1->field_0x10;
    }
    uVar3 = *puVar9;
    while (uVar3 == 0) {
      lVar6 = (longlong)iVar7;
      iVar8 = iVar8 + 0x20;
      iVar7 = iVar7 + 1;
      iVar5 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_142a3d848;
      uVar3 = puVar9[lVar6 + 1];
    }
    uVar4 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (int)lVar6 + -1 + iVar8;
    if (iVar2 < iVar5) {
      iVar5 = iVar2;
    }
  }
LAB_142a3d848:
  *(TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
    **)&this->TypedValue = param_1;
  *(ulonglong *)&(this->TypedValue).field_0x8 = CONCAT44(uVar4,iVar7);
  *(undefined1 **)&(this->TypedValue).field_0x10 = &param_1->field_0x10;
  *(ulonglong *)&(this->TypedValue).field_0x18 = CONCAT44(iVar5,0xffffffff);
  *(ulonglong *)&(this->TypedValue).field_0x20 = CONCAT44(iVar5,iVar8);
  this->bIsSet = true;
  return &this->TypedValue;
}

