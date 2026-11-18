// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// AllocateMemoryForEmplace<FName_&> @ 141e6c800

TTuple<FName,FString> * __thiscall
TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
AllocateMemoryForEmplace<FName_&>
          (TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,FString> *pTVar7;
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
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x18) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x18 + 4) - param_1->Number;
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
      pTVar7 = (TTuple<FName,FString> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_141e6c91b;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,FString> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,FString> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      DestructItems<TTuple<FName,FString>,int>(pTVar7,1);
      return pTVar7;
    }
  }
LAB_141e6c91b:
  TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar9,1);
  return (TTuple<FName,FString> *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
}

// AllocateMemoryForEmplace<FName_const_&> @ 141e6c960

TTuple<FName,FString> * __thiscall
TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,FString> *pTVar7;
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
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x18) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x18 + 4) - param_1->Number;
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
      pTVar7 = (TTuple<FName,FString> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_141e6ca7b;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,FString> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,FString> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      DestructItems<TTuple<FName,FString>,int>(pTVar7,1);
      return pTVar7;
    }
  }
LAB_141e6ca7b:
  TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar9,1);
  return (TTuple<FName,FString> *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
}

// Find @ 141e9a9b0

FString * __thiscall
TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
          (TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *this,FName param_1)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  uint uVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar2 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,FVar2,(FNameFastLess)FVar2);
  if (uVar4 == 0xffffffff) {
    return (FString *)0x0;
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
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FString *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18 + 8);
}

// AllocateMemoryForEmplace<FName_const_&> @ 141f1be50

TTuple<FName,TBulkData<unsigned_char>_*> * __thiscall
TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>::
AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>
           *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,TBulkData<unsigned_char>_*> *pTVar7;
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
      pTVar7 = (TTuple<FName,TBulkData<unsigned_char>_*> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_141f1bf51;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,TBulkData<unsigned_char>_*> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,TBulkData<unsigned_char>_*> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      return pTVar7;
    }
  }
LAB_141f1bf51:
  TArray<TTuple<FName,TBulkData<unsigned_char>_*>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar9,1);
  return (TTuple<FName,TBulkData<unsigned_char>_*> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
}

// Find @ 141f2ebc0

TBulkData<unsigned_char> ** __thiscall
TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>::Find
          (TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>
           *this,FName param_1)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  TBulkData<unsigned_char> **ppTVar5;
  uint uVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar2 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,TBulkData<unsigned_char>_*>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,FVar2,(FNameFastLess)FVar2);
  if (uVar4 == 0xffffffff) {
    return (TBulkData<unsigned_char> **)0x0;
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
      ppTVar5 = (TBulkData<unsigned_char> **)(*pcVar1)();
      return ppTVar5;
    }
  }
  return (TBulkData<unsigned_char> **)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10 + 8);
}

// AllocateMemoryForEmplace<wchar_t_const_(&)[17]> @ 142302220

TTuple<FString,FFormatArgumentValue> * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
AllocateMemoryForEmplace<wchar_t_const_(&)[17]>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,wchar_t (*param_1) [17])

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<FString,FFormatArgumentValue> *pTVar6;
  wchar_t *_Str2;
  ForAnyElementType _Str1;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FString local_28;
  
  bVar3 = false;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[17],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,(FKeyForward)0x0,(FLocKeySortedMapLess)0x0);
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
      return pTVar6;
    }
    if (-1 < iVar4) goto LAB_1423022a0;
  }
  else {
LAB_1423022a0:
    if (iVar4 < (this->Pairs).ArrayNum) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
        return pTVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
      ::FString::FString(&local_28,*param_1);
      if (*(int *)(pFVar7 + 8) == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = *(wchar_t **)pFVar7;
      }
      _Str1.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        _Str1.Data = local_28.Data.AllocatorInstance.Data;
      }
      iVar5 = wcscmp((wchar_t *)_Str1.Data,_Str2);
      bVar3 = true;
      if (-1 < iVar5) {
        bVar2 = true;
        goto LAB_14230233b;
      }
    }
  }
  bVar2 = false;
LAB_14230233b:
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lVar8 = (longlong)iVar4 * 0x30;
  if (bVar2) {
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar6,1);
  }
  else {
    TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::
    InsertUninitializedImpl(&this->Pairs,iVar4,1);
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
  }
  return pTVar6;
}

// AllocateMemoryForEmplace<wchar_t_const_(&)[12]> @ 1423023b0

TTuple<FString,FFormatArgumentValue> * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
AllocateMemoryForEmplace<wchar_t_const_(&)[12]>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,wchar_t (*param_1) [12])

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<FString,FFormatArgumentValue> *pTVar6;
  wchar_t *_Str2;
  ForAnyElementType _Str1;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FString local_28;
  
  bVar3 = false;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[12],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,(FKeyForward)0x0,(FLocKeySortedMapLess)0x0);
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
      return pTVar6;
    }
    if (-1 < iVar4) goto LAB_142302430;
  }
  else {
LAB_142302430:
    if (iVar4 < (this->Pairs).ArrayNum) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
        return pTVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
      ::FString::FString(&local_28,*param_1);
      if (*(int *)(pFVar7 + 8) == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = *(wchar_t **)pFVar7;
      }
      _Str1.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        _Str1.Data = local_28.Data.AllocatorInstance.Data;
      }
      iVar5 = wcscmp((wchar_t *)_Str1.Data,_Str2);
      bVar3 = true;
      if (-1 < iVar5) {
        bVar2 = true;
        goto LAB_1423024cb;
      }
    }
  }
  bVar2 = false;
LAB_1423024cb:
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lVar8 = (longlong)iVar4 * 0x30;
  if (bVar2) {
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar6,1);
  }
  else {
    TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::
    InsertUninitializedImpl(&this->Pairs,iVar4,1);
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
  }
  return pTVar6;
}

// AllocateMemoryForEmplace<wchar_t_const_(&)[15]> @ 142302540

TTuple<FString,FFormatArgumentValue> * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
AllocateMemoryForEmplace<wchar_t_const_(&)[15]>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,wchar_t (*param_1) [15])

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<FString,FFormatArgumentValue> *pTVar6;
  wchar_t *_Str2;
  ForAnyElementType _Str1;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FString local_28;
  
  bVar3 = false;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[15],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,(FKeyForward)0x0,(FLocKeySortedMapLess)0x0);
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
      return pTVar6;
    }
    if (-1 < iVar4) goto LAB_1423025c0;
  }
  else {
LAB_1423025c0:
    if (iVar4 < (this->Pairs).ArrayNum) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
        return pTVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
      ::FString::FString(&local_28,*param_1);
      if (*(int *)(pFVar7 + 8) == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = *(wchar_t **)pFVar7;
      }
      _Str1.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        _Str1.Data = local_28.Data.AllocatorInstance.Data;
      }
      iVar5 = wcscmp((wchar_t *)_Str1.Data,_Str2);
      bVar3 = true;
      if (-1 < iVar5) {
        bVar2 = true;
        goto LAB_14230265b;
      }
    }
  }
  bVar2 = false;
LAB_14230265b:
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lVar8 = (longlong)iVar4 * 0x30;
  if (bVar2) {
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar6,1);
  }
  else {
    TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::
    InsertUninitializedImpl(&this->Pairs,iVar4,1);
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
  }
  return pTVar6;
}

