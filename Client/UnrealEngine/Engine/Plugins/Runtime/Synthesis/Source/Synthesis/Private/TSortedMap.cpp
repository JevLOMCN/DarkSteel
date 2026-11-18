// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 2

// Emplace<int_const_&> @ 14f0ac2d0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Emplace<int_const_&>
          (TSortedMap<int,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) < *param_1) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar8) goto LAB_14f0ac35d;
  }
  else {
LAB_14f0ac35d:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
               (pFVar3 + (longlong)iVar8 * 0x18);
      if (*(int *)(pFVar3 + (longlong)iVar8 * 0x18) <= *param_1) {
        DestructItems<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,int>(pTVar9,1);
        goto LAB_14f0ac3e6;
      }
    }
  }
  TArray<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_14f0ac3e6:
  *(int *)pTVar9 = *param_1;
  *(undefined8 *)&pTVar9->field_0x8 = 0;
  *(undefined8 *)&pTVar9->field_0x10 = 0;
  return (TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar9->field_0x8;
}

// Find @ 14f0d70e0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Find(TSortedMap<int,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
       *this,int param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  pFVar3 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x18) < param_1) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar7 < (int)uVar2) && (*(int *)(pFVar3 + (longlong)iVar7 * 0x18) <= param_1)) &&
     (iVar7 != -1)) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8);
  }
  else {
    pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  }
  return pTVar8;
}

