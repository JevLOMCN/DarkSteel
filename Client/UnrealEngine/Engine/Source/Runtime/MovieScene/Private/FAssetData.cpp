// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// GetTagValue<FString> @ 146171e50

bool __thiscall FAssetData::GetTagValue<FString>(FAssetData *this,FName param_1,FString *param_2)

{
  FAssetDataTagMapSharedView *this_00;
  FAssetDataTagMap *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FValueId *pFVar7;
  FString *pFVar8;
  uint uVar9;
  FAssetTagValueRef_u_0 local_res8;
  FName local_res20;
  FString local_18;
  
  this_00 = &this->TagsAndValues;
  if ((*(byte *)&(this->TagsAndValues).field0_0x0 & 1) == 0) {
    pFVar1 = (this_00->field0_0x0).Loose;
    if (pFVar1 == (FAssetDataTagMap *)0x0) {
      return false;
    }
    local_res20 = param_1;
    uVar6 = Algo::
            BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                      ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)pFVar1,
                       &local_res20,(FKeyForward)local_res8.Fixed.Bits._0_1_,
                       (FNameFastLess)local_res8._0_1_);
    if (uVar6 == 0xffffffff) {
      local_res8.Loose = (FString *)0x0;
    }
    else {
      uVar9 = 0;
      if ((int)uVar6 < (int)pFVar1->_padding_) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_res8.Loose =
           (FString *)
           (((ForAnyElementType *)&pFVar1->_padding_)->Data + ((longlong)(int)uVar6 * 3 + 1) * 8);
    }
  }
  else {
    pFVar7 = FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)this_00,param_1);
    if (pFVar7 == (FValueId *)0x0) {
      local_res8.Loose = (FString *)0x0;
    }
    else {
      local_res8.Bits =
           ((ulonglong)*(ushort *)&this_00->field0_0x0 & 0xfffffffffffffffc | 0xfffffffe00000000) <<
           0x1e | (ulonglong)(uint)*pFVar7;
    }
  }
  if ((FScriptContainerElement *)local_res8.Loose == (FScriptContainerElement *)0x0) {
    return false;
  }
  pFVar8 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_res8.Fixed,&local_18);
  if (param_2 != pFVar8) {
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_2->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_2->Data).ArrayNum = (pFVar8->Data).ArrayNum;
    (param_2->Data).ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

