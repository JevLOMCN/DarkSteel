// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 1

// ToString @ 1441ecc50

FString * __thiscall
FPacketAuditData::ToString(FPacketAuditData *this,FString *__return_storage_ptr__,int param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint *puVar5;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  undefined1 *local_68;
  undefined4 uStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  TMap<FString,FPacketStageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>_>
  *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar3 = (ulonglong)(uint)param_1;
  ::FString::FString(__return_storage_ptr__,L"");
  ::FString::FString(&local_88,L"");
  if (0 < param_1) {
    do {
      ::FString::AppendChars(&local_88,L"\t",1);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  ::FString::ConcatFC(&local_a8,&local_88,L"(\r\n");
  iVar4 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar4);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_98,L"\tSizeBits: %i,\r\n");
  ::FString::ConcatFF(&local_a8,&local_88,&local_98);
  iVar4 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar4);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_a8,&local_88,L"\tStageMap:\r\n");
  iVar4 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar4);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_a8,&local_88,L"\t(\r\n");
  iVar4 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar4);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)&this->StageMap;
  local_78.Data.ArrayNum = 0;
  iVar4 = *(int *)&(this->StageMap).field_0x28;
  local_68 = &(this->StageMap).field_0x10;
  local_58 = 0;
  iStack_5c = 0;
  local_78.Data.ArrayMax = 1;
  if (iVar4 != 0) {
    puVar5 = *(uint **)&(this->StageMap).field_0x20;
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)local_68;
    }
    uVar1 = *puVar5;
    while (uVar1 == 0) {
      lVar2 = (longlong)local_78.Data.ArrayNum;
      local_58 = local_58 + 0x20;
      local_78.Data.ArrayNum = local_78.Data.ArrayNum + 1;
      iStack_5c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Data.ArrayNum)
      goto LAB_1441ece5c;
      uVar1 = puVar5[lVar2 + 1];
    }
    local_78.Data.ArrayMax = -uVar1 & uVar1;
    uVar3 = (ulonglong)(uint)local_78.Data.ArrayMax * 2 + 1;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iStack_5c = local_58 + -1 + (int)lVar2;
    if (iVar4 < iStack_5c) {
      iStack_5c = iVar4;
    }
  }
LAB_1441ece5c:
  uStack_60 = 0xffffffff;
  TStack_40._padding_ = CONCAT44(local_78.Data.ArrayMax,local_78.Data.ArrayNum);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = iStack_5c;
  TStack_40.BaseBitIndex = local_58;
  iStack_54 = iStack_5c;
  local_48 = (TMap<FString,FPacketStageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>_>
              *)local_78.Data.AllocatorInstance.Data;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_68;
  TStack_40.CurrentBitIndex = iStack_5c;
  if (iStack_5c < iVar4) {
    do {
      ::FString::PrintfImpl(&local_98,L"(SizeBits: %i, StageCRC: %08X)");
      ::FString::PrintfImpl(&local_78,L"\t\t(StageName: %s, StageData: %s),\r\n");
      ::FString::ConcatFF(&local_a8,&local_88,&local_78);
      iVar4 = local_a8.Data.ArrayNum + -1;
      if (local_a8.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar4);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  ::FString::ConcatFC(&local_98,&local_88,L"\t)\r\n");
  iVar4 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar4);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_98,&local_88,L")");
  iVar4 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar4);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

