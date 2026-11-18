// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// Emplace<int_const_&> @ 14ddbdb40

TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Emplace<int_const_&>
          (TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  TTuple<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar5 = 0;
  if (0 < (int)uVar1) {
    uVar8 = uVar1;
    iVar5 = 0;
    do {
      uVar7 = uVar8 & 1;
      uVar8 = uVar8 >> 1;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)(uVar8 + iVar5) * 0x18) <
          *param_1) {
        iVar5 = uVar8 + iVar5 + uVar7;
      }
    } while (uVar8 != 0);
  }
  if ((iVar5 < 0) || ((int)uVar1 < iVar5)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>
                *)(*pcVar2)();
      return pTVar4;
    }
    if (-1 < iVar5) goto LAB_14ddbdbd8;
  }
  else {
LAB_14ddbdbd8:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
      pTVar6 = (TTuple<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>_>
                *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar5 * 0x18);
      if (*(int *)pTVar6 <= *param_1) {
        DestructItems<TTuple<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>_>,int>
                  (pTVar6,1);
        goto LAB_14ddbdc60;
      }
    }
  }
  TArray<TTuple<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar5,1);
  pTVar6 = (TTuple<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar5 * 0x18);
LAB_14ddbdc60:
  *(int *)pTVar6 = *param_1;
  *(undefined8 *)&pTVar6->field_0x8 = 0;
  *(undefined8 *)&pTVar6->field_0x10 = 0;
  DestructItems<TUniqueFunction<void___cdecl(FImagePixelData_*)>,int>
            ((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)0x0,0);
  return (TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> *)
         &pTVar6->field_0x8;
}

// Find @ 14dddbde0

TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Find(TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
       *this,int param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> *pTVar8;
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
      pTVar8 = (TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>
                *)(*pcVar4)();
      return pTVar8;
    }
    pTVar8 = (TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> *
             )((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8);
  }
  else {
    pTVar8 = (TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> *
             )0x0;
  }
  return pTVar8;
}

