// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 2

// AllocateMemoryForEmplace<wchar_t_const_(&)[10]> @ 14a792760

TTuple<FString,FFormatArgumentValue> * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
AllocateMemoryForEmplace<wchar_t_const_(&)[10]>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,wchar_t (*param_1) [10])

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
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[10],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
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
    if (-1 < iVar4) goto LAB_14a7927e0;
  }
  else {
LAB_14a7927e0:
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
        goto LAB_14a79287b;
      }
    }
  }
  bVar2 = false;
LAB_14a79287b:
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

// AllocateMemoryForEmplace<wchar_t_const_(&)[11]> @ 14a7928f0

TTuple<FString,FFormatArgumentValue> * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
AllocateMemoryForEmplace<wchar_t_const_(&)[11]>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,wchar_t (*param_1) [11])

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
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[11],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
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
    if (-1 < iVar4) goto LAB_14a792970;
  }
  else {
LAB_14a792970:
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
        goto LAB_14a792a0b;
      }
    }
  }
  bVar2 = false;
LAB_14a792a0b:
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

