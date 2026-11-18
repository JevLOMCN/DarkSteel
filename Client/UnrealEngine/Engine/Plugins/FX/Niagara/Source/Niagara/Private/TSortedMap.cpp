// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Emplace<int_const_&,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_> @ 149084150

TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> * __thiscall
TSortedMap<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Emplace<int_const_&,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>
          (TSortedMap<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *pTVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0xc) < *param_1) {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)(*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar9) goto LAB_1490841e8;
  }
  else {
LAB_1490841e8:
    if (iVar9 < (this->Pairs).ArrayNum) {
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar8 = pFVar3 + (longlong)iVar9 * 0xc;
      if (*(int *)(pFVar3 + (longlong)iVar9 * 0xc) <= *param_1) goto LAB_149084264;
    }
  }
  TArray<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar9,1);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0xc;
LAB_149084264:
  *(int *)pFVar8 = *param_1;
  *(FWeakObjectPtr *)(pFVar8 + 4) = param_2->WeakPtr;
  return (TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)(pFVar8 + 4);
}

