// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 1

// Remove @ 14ea5a080

int __thiscall
TMultiMap<unsigned_int,FStructuredBufferPoolItem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>_>
::Remove(TMultiMap<unsigned_int,FStructuredBufferPoolItem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>_>
         *this,uint param_1,FStructuredBufferPoolItem *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  int local_res8;
  
  iVar6 = 0;
  local_res8 = 0;
  uVar13 = (ulonglong)(int)param_1;
  if (*(int *)&this->field_0x48 == 0) {
    return 0;
  }
  puVar9 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar9 = &this->field_0x38;
  }
  uVar12 = *(uint *)(puVar9 + ((longlong)*(int *)&this->field_0x48 - 1U & uVar13) * 4);
  uVar10 = uVar12;
  if (uVar12 != 0xffffffff) {
    do {
      uVar12 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar10 * 0x18);
      if (*(uint *)(*(longlong *)this + (longlong)(int)uVar10 * 0x18) == param_1) break;
      uVar10 = uVar12;
    } while (uVar12 != 0xffffffff);
  }
  if (uVar10 == 0xffffffff) {
    return 0;
  }
  do {
    lVar1 = (longlong)(int)uVar10 * 0x18;
    if (*(FStructuredBufferPoolItem **)(*(longlong *)this + 8 + lVar1) == param_2) {
      if (((int)uVar10 < 0) || (*(int *)&this->field_0x28 <= (int)uVar10)) {
LAB_14ea5a18d:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      else {
        if ((*(int *)&this->field_0x28 <= (int)uVar10) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        uVar11 = uVar10;
        if ((int)uVar10 < 0) {
          uVar11 = uVar10 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)((int)uVar11 >> 5) * 4) >> (uVar10 & 0x1f) & 1) == 0)
        goto LAB_14ea5a18d;
      }
      lVar2 = *(longlong *)this;
      puVar9 = &this->field_0x38;
      if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)&this->field_0x40;
      }
      puVar14 = (uint *)(puVar9 + (longlong)*(int *)(lVar2 + 0x14 + lVar1) * 4);
      while( true ) {
        uVar11 = *puVar14;
        if ((uVar11 == 0xffffffff) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (uVar11 == uVar10) break;
        puVar14 = (uint *)(*(longlong *)this + (longlong)(int)uVar11 * 0x18 + 0x10);
      }
      *puVar14 = *(uint *)(lVar2 + 0x10 + lVar1);
      lVar2 = *(longlong *)this;
      bVar4 = (byte)uVar10 & 0x1f;
      uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
      if ((((int)uVar10 < 0) || (*(int *)&this->field_0x28 <= (int)uVar10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      puVar9 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)&this->field_0x20;
      }
      uVar7 = uVar10;
      if ((int)uVar10 < 0) {
        uVar7 = uVar10 + 0x1f;
      }
      if (((*(uint *)(puVar9 + (longlong)((int)uVar7 >> 5) * 4) & uVar11) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(uint *)(lVar2 + (longlong)*(int *)&this->field_0x30 * 0x18) = uVar10;
      }
      *(undefined4 *)(lVar2 + lVar1) = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = *(undefined4 *)&this->field_0x30;
      }
      *(undefined4 *)(lVar2 + 4 + lVar1) = uVar8;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(uint *)&this->field_0x30 = uVar10;
      if ((((int)uVar10 < 0) || (*(int *)&this->field_0x28 <= (int)uVar10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      uVar13 = (ulonglong)param_1;
      puVar9 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)&this->field_0x20;
      }
      *(uint *)(puVar9 + (longlong)((int)uVar7 >> 5) * 4) =
           *(uint *)(puVar9 + (longlong)((int)uVar7 >> 5) * 4) & ~uVar11;
      iVar6 = local_res8 + 1;
      local_res8 = iVar6;
    }
    if (uVar12 == 0xffffffff) {
      return iVar6;
    }
    uVar10 = uVar12;
    while (uVar12 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar10 * 0x18),
          *(int *)(*(longlong *)this + (longlong)(int)uVar10 * 0x18) != (int)uVar13) {
      uVar10 = uVar12;
      if (uVar12 == 0xffffffff) {
        return iVar6;
      }
    }
  } while( true );
}

