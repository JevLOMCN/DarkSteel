// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 7

// AllocateMemoryForEmplace<FName_&> @ 142c8a7c0

TTuple<FName,TObjectPtr<UObject>_> * __thiscall
TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::
AllocateMemoryForEmplace<FName_&>
          (TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess> *this,
          FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,TObjectPtr<UObject>_> *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x10) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x10 + 4) - param_1->Number;
      }
      if (iVar8 < 0) {
        iVar9 = iVar6 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar1 < iVar9)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,TObjectPtr<UObject>_> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_142c8a8c1;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,TObjectPtr<UObject>_> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,TObjectPtr<UObject>_> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      return pTVar7;
    }
  }
LAB_142c8a8c1:
  TArray<TTuple<FName,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar9,1);
  return (TTuple<FName,TObjectPtr<UObject>_> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
}

// AllocateMemoryForEmplace<FName_const_&> @ 142c8a900

TTuple<FName,unsigned_char> * __thiscall
TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess>::
AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess> *this,
          FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,unsigned_char> *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0xc) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0xc + 4) - param_1->Number;
      }
      if (iVar8 < 0) {
        iVar9 = iVar6 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar1 < iVar9)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,unsigned_char> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_142c8aa06;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,unsigned_char> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,unsigned_char> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0xc);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      return pTVar7;
    }
  }
LAB_142c8aa06:
  TArray<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar9,1);
  return (TTuple<FName,unsigned_char> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0xc);
}

// AllocateMemoryForEmplace<FName_const_&> @ 142c8aa40

TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
* __thiscall
TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
::AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x10) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x10 + 4) - param_1->Number;
      }
      if (iVar8 < 0) {
        iVar9 = iVar6 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar1 < iVar9)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
                *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_142c8ab56;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
                *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
              *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      DestructItems<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,int>
                (pTVar7,1);
      return pTVar7;
    }
  }
LAB_142c8ab56:
  TArray<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  return (TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
}

// AllocateMemoryForEmplace<FString_const_&> @ 142c8aba0

TTuple<FString,FFormatArgumentValue> * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
AllocateMemoryForEmplace<FString_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TTuple<FString,FFormatArgumentValue> *pTVar5;
  wchar_t *_Str2;
  wchar_t *_Str1;
  FKeyForward local_res8;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,FString,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,local_res8,(FLocKeySortedMapLess)local_res8);
  _Str1 = L"";
  if ((iVar3 < 0) || ((this->Pairs).ArrayNum < iVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
      return pTVar5;
    }
    if (iVar3 < 0) goto LAB_142c8ac96;
  }
  if (iVar3 < (this->Pairs).ArrayNum) {
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
      return pTVar5;
    }
    pTVar5 = (TTuple<FString,FFormatArgumentValue> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar3 * 0x30);
    if (*(int *)&pTVar5->field_0x8 == 0) {
      _Str2 = L"";
    }
    else {
      _Str2 = *(wchar_t **)pTVar5;
    }
    if ((param_1->Data).ArrayNum != 0) {
      _Str1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar4 = wcscmp(_Str1,_Str2);
    if (-1 < iVar4) {
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar5,1);
      return pTVar5;
    }
  }
LAB_142c8ac96:
  TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar3,1);
  return (TTuple<FString,FFormatArgumentValue> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar3 * 0x30);
}

// Find @ 142cabb50

uchar * __thiscall
TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess>::Find
          (TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess> *this,
          FName param_1)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  uchar *puVar5;
  uint uVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar2 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,FVar2,(FNameFastLess)FVar2);
  if (uVar4 == 0xffffffff) {
    return (uchar *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Pairs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar1)();
      return puVar5;
    }
  }
  return (uchar *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xc + 8);
}

// Find @ 142cabc00

TObjectPtr<UObject> * __thiscall
TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
          (TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess> *this,
          FName param_1)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  TObjectPtr<UObject> *pTVar5;
  uint uVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar2 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,FVar2,(FNameFastLess)FVar2);
  if (uVar4 == 0xffffffff) {
    return (TObjectPtr<UObject> *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Pairs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UObject> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TObjectPtr<UObject> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10 + 8);
}

// Find @ 142cabcb0

TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
* __thiscall
TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
::Find(TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
       *this,FName param_1)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar5;
  uint uVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar2 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,FVar2,(FNameFastLess)FVar2);
  if (uVar4 == 0xffffffff) {
    return (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
            *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Pairs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10 + 8);
}

