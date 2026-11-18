// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 2

// Emplace<int_const_&> @ 14ea343e0

TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Emplace<int_const_&>
          (TSortedMap<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *pTVar9;
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
      pTVar7 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar8) goto LAB_14ea3446d;
  }
  else {
LAB_14ea3446d:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *)
               (pFVar3 + (longlong)iVar8 * 0x18);
      if (*(int *)(pFVar3 + (longlong)iVar8 * 0x18) <= *param_1) {
        DestructItems<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,int>
                  (pTVar9,1);
        goto LAB_14ea344f6;
      }
    }
  }
  TArray<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_14ea344f6:
  *(int *)pTVar9 = *param_1;
  *(undefined8 *)&pTVar9->field_0x8 = 0;
  *(undefined8 *)&pTVar9->field_0x10 = 0;
  return (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)&pTVar9->field_0x8;
}

// Emplace<int_const_&,FString_const_&> @ 14ea34660

FString * __thiscall
TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_>::
Emplace<int_const_&,FString_const_&>
          (TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_> *this,int *param_1,
          FString *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FString *pFVar7;
  int iVar8;
  TTuple<int,FString> *pTVar9;
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
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
    if (-1 < iVar8) goto LAB_14ea346ed;
  }
  else {
LAB_14ea346ed:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar4)();
        return pFVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<int,FString> *)(pFVar3 + (longlong)iVar8 * 0x18);
      if (*(int *)(pFVar3 + (longlong)iVar8 * 0x18) <= *param_1) {
        DestructItems<TTuple<int,FString>,int>(pTVar9,1);
        goto LAB_14ea34776;
      }
    }
  }
  TArray<TTuple<int,FString>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<int,FString> *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_14ea34776:
  *(int *)pTVar9 = *param_1;
  ::FString::FString((FString *)&pTVar9->field_0x8,param_2);
  return (FString *)&pTVar9->field_0x8;
}

