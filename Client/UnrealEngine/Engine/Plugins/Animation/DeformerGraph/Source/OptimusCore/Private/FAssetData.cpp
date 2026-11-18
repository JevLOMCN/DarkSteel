// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// GetTagValue<FGuid> @ 14e136290

bool __thiscall FAssetData::GetTagValue<FGuid>(FAssetData *this,FName param_1,FGuid *param_2)

{
  FAssetDataTagMapSharedView *this_00;
  FAssetDataTagMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FValueId *pFVar6;
  ForAnyElementType FVar7;
  uint uVar8;
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
    uVar5 = Algo::
            BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                      ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)pFVar1,
                       &local_res20,(FKeyForward)local_res8.Fixed.Bits._0_1_,
                       (FNameFastLess)local_res8._0_1_);
    local_res8.Loose = (FString *)0x0;
    if (uVar5 != 0xffffffff) {
      uVar8 = 0;
      if ((int)uVar5 < (int)pFVar1->_padding_) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_res8.Loose =
           (FString *)
           (((ForAnyElementType *)&pFVar1->_padding_)->Data + ((longlong)(int)uVar5 * 3 + 1) * 8);
    }
  }
  else {
    pFVar6 = FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)this_00,param_1);
    if (pFVar6 == (FValueId *)0x0) {
      local_res8.Loose = (FString *)0x0;
    }
    else {
      local_res8.Bits =
           ((ulonglong)*(ushort *)&this_00->field0_0x0 & 0xfffffffffffffffc | 0xfffffffe00000000) <<
           0x1e | (ulonglong)(uint)*pFVar6;
    }
  }
  if ((FScriptContainerElement *)local_res8.Loose == (FScriptContainerElement *)0x0) {
    return false;
  }
  param_2->A = 0;
  param_2->B = 0;
  param_2->C = 0;
  param_2->D = 0;
  FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_res8.Fixed,&local_18);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar7.Data = local_18.Data.AllocatorInstance.Data;
  }
  FGuid::Parse((wchar_t *)FVar7.Data,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

