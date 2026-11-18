// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// Emplace<FString_&,FText> @ 14bcd5e00

FFormatArgumentValue * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
Emplace<FString_&,FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,FString *param_1,FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FFormatArgumentValue *pFVar5;
  wchar_t *_Str2;
  TTuple<FString,FFormatArgumentValue> *this_00;
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
      pFVar5 = (FFormatArgumentValue *)(*pcVar1)();
      return pFVar5;
    }
    if (-1 < iVar3) goto LAB_14bcd5e7b;
  }
  else {
LAB_14bcd5e7b:
    if (iVar3 < (this->Pairs).ArrayNum) {
      if (iVar3 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FFormatArgumentValue *)(*pcVar1)();
          return pFVar5;
        }
      }
      this_00 = (TTuple<FString,FFormatArgumentValue> *)
                ((this->Pairs).AllocatorInstance.Data + (longlong)iVar3 * 0x30);
      if (*(int *)&this_00->field_0x8 == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = *(wchar_t **)this_00;
      }
      if ((param_1->Data).ArrayNum != 0) {
        _Str1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      iVar4 = wcscmp(_Str1,_Str2);
      if (-1 < iVar4) {
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>(this_00,1);
        goto LAB_14bcd5f17;
      }
    }
  }
  TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar3,1);
  this_00 = (TTuple<FString,FFormatArgumentValue> *)
            ((this->Pairs).AllocatorInstance.Data + (longlong)iVar3 * 0x30);
LAB_14bcd5f17:
  ::FString::FString((FString *)this_00,param_1);
  *(undefined4 *)&this_00->field_0x10 = 4;
  FText::FText((FText *)&this_00->field_0x20,param_2);
  if (*(longlong *)&this_00->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FFormatArgumentValue *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FFormatArgumentValue *)&this_00->field_0x10;
}

