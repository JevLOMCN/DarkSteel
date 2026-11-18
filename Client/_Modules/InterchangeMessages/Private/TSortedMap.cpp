// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeMessages
// Functions: 1

// Emplace<FString_const_&,FFormatArgumentValue_const_&> @ 14e65dc20

FFormatArgumentValue * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
Emplace<FString_const_&,FFormatArgumentValue_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,FString *param_1,FFormatArgumentValue *param_2)

{
  FScriptContainerElement *_Src;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FFormatArgumentValue *pFVar6;
  wchar_t *_Str2;
  TTuple<FString,FFormatArgumentValue> *pTVar7;
  wchar_t *_Str1;
  FKeyForward local_res8 [8];
  
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,FString,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,local_res8[0],
                     (FLocKeySortedMapLess)local_res8[0]);
  _Str1 = L"";
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FFormatArgumentValue *)(*pcVar2)();
      return pFVar6;
    }
    if (-1 < iVar4) goto LAB_14e65dc9a;
  }
  else {
LAB_14e65dc9a:
    if (iVar4 < (this->Pairs).ArrayNum) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FFormatArgumentValue *)(*pcVar2)();
        return pFVar6;
      }
      pTVar7 = (TTuple<FString,FFormatArgumentValue> *)
               ((this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x30);
      if (*(int *)&pTVar7->field_0x8 == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = *(wchar_t **)pTVar7;
      }
      if ((param_1->Data).ArrayNum != 0) {
        _Str1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      iVar5 = wcscmp(_Str1,_Str2);
      if (-1 < iVar5) {
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar7,1);
        goto LAB_14e65dd3e;
      }
    }
  }
  TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar4,1);
  pTVar7 = (TTuple<FString,FFormatArgumentValue> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x30);
LAB_14e65dd3e:
  *(undefined8 *)pTVar7 = 0;
  iVar4 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  *(int *)&pTVar7->field_0x8 = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)&pTVar7->field_0xc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)pTVar7,iVar4,(int *)&pTVar7->field_0xc);
    memcpy(*(void **)pTVar7,_Src,(longlong)iVar4 * 2);
  }
  *(Type *)&pTVar7->field_0x10 = param_2->Type;
  *(FFormatArgumentValue_u_8 *)&pTVar7->field_0x18 = param_2->field1_0x8;
  *(FFormatArgumentValue_u_8 *)&pTVar7->field_0x18 = param_2->field1_0x8;
  *(float *)&pTVar7->field_0x18 = (param_2->field1_0x8).FloatValue;
  *(FFormatArgumentValue_u_8 *)&pTVar7->field_0x18 = param_2->field1_0x8;
  *(undefined8 *)&pTVar7->field_0x20 = 0;
  *(undefined4 *)&pTVar7->field_0x28 = 0;
  if ((param_2->TextValue).field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    *(undefined8 *)&pTVar7->field_0x20 = 0;
    plVar1 = *(longlong **)&(param_2->TextValue).field0_0x0;
    *(longlong **)&pTVar7->field_0x20 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,local_res8);
    }
    *(uint *)&pTVar7->field_0x28 = (param_2->TextValue).field0_0x0.TypedValue.Flags;
  }
  return (FFormatArgumentValue *)&pTVar7->field_0x10;
}

