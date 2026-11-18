// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// FindLowerBound @ 142487c30

int __thiscall
TSlateElementSortedArray<unsigned_short,TLess<void>_>::FindLowerBound
          (TSlateElementSortedArray<unsigned_short,TLess<void>_> *this,ushort param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = (this->Data).ArrayNum;
  iVar4 = 0;
  uVar6 = uVar1;
  if (0 < (int)uVar1) {
    do {
      iVar5 = (uVar6 >> 1) + iVar4;
      if (*(ushort *)((this->Data).AllocatorInstance.Data + (longlong)iVar5 * 2) < param_1) {
        iVar4 = iVar5 + (uVar6 & 1);
      }
      uVar2 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar2 != 0);
    bVar3 = false;
    if (iVar4 < 0) goto LAB_142487c94;
  }
  bVar3 = false;
  if (iVar4 < (int)uVar1) {
    bVar3 = true;
  }
LAB_142487c94:
  iVar5 = -1;
  if (bVar3) {
    iVar5 = iVar4;
  }
  return iVar5;
}

// InsertUnique @ 142498b60

int __thiscall
TSlateElementSortedArray<unsigned_short,TLess<void>_>::InsertUnique
          (TSlateElementSortedArray<unsigned_short,TLess<void>_> *this,ushort param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ushort local_res10 [4];
  
  uVar2 = (this->Data).ArrayNum;
  iVar6 = 0;
  pFVar8 = (this->Data).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar7 = (uVar9 >> 1) + iVar6;
      if (*(ushort *)(pFVar8 + (longlong)iVar7 * 2) < param_1) {
        iVar6 = iVar7 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar6 < (int)uVar2) && (*(ushort *)(pFVar8 + (longlong)iVar6 * 2) <= param_1)) {
    return 0;
  }
  local_res10[0] = param_1;
  if (((pFVar8 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar8 + (longlong)(this->Data).ArrayMax * 2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar7 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,(ForAnyElementType *)this,piVar1);
  }
  pFVar8 = (this->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar7 + 1;
  pFVar8 = pFVar8 + (longlong)iVar6 * 2;
  memmove(pFVar8 + 2,pFVar8,(longlong)(iVar7 - iVar6) * 2);
  *(ushort *)((this->Data).AllocatorInstance.Data + (longlong)iVar6 * 2) = local_res10[0];
  return iVar6;
}

// RemoveSingle @ 1424a59f0

int __thiscall
TSlateElementSortedArray<unsigned_short,TLess<void>_>::RemoveSingle
          (TSlateElementSortedArray<unsigned_short,TLess<void>_> *this,ushort param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (this->Data).ArrayNum;
  uVar7 = 0;
  pFVar2 = (this->Data).AllocatorInstance.Data;
  if (0 < (int)uVar8) {
    do {
      iVar6 = (uVar8 >> 1) + uVar7;
      if (*(ushort *)(pFVar2 + (longlong)iVar6 * 2) < param_1) {
        uVar7 = iVar6 + (uVar8 & 1);
      }
      uVar4 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar4 != 0);
  }
  if ((((int)uVar7 < (this->Data).ArrayNum) &&
      (*(ushort *)(pFVar2 + (longlong)(int)uVar7 * 2) <= param_1)) && (uVar7 != 0xffffffff)) {
    if ((int)uVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    pFVar2 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar7 * 2;
    iVar6 = (this->Data).ArrayNum + ~uVar7;
    if (iVar6 != 0) {
      memmove(pFVar2,pFVar2 + 2,(longlong)iVar6 * 2);
    }
    piVar1 = &(this->Data).ArrayNum;
    *piVar1 = *piVar1 + -1;
    return 1;
  }
  return 0;
}

