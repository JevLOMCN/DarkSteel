// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 5

// LoadNextBlock @ 142b08f80

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<TMemoryView<void_const_>_> * __cdecl
UE::AssetDataGather::Private::FChecksumViewReader::LoadNextBlock
          (TOptional<TMemoryView<void_const_>_> *__return_storage_ptr__,FMemoryViewReader *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  FXxHash64 FVar5;
  TOptional<TMemoryView<void_const_>_> *pTVar6;
  FStaticBasicLogRecord *pFVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  TMemoryView<void_const_> local_48;
  TMemoryView<void_const_> local_38;
  TOptional<UE::AssetDataGather::Private::FBlockHeader> local_28;
  
  uVar9 = (param_1->Remaining).Size;
  if (uVar9 < 0x10) {
    if ((byte)LogAssetRegistry._0_1_ < 3) goto LAB_142b08fc0;
    pFVar7 = &`private:_static_struct_TOptional<TMemoryView<void_const_>_>___cdecl_UE::AssetDataGather::Private::FChecksumViewReader::LoadNextBlock(UE::AssetDataGather::Private::FMemoryViewReader&___ptr64)'
              ::__l6::LOG_Static;
  }
  else {
    local_48.Data = (param_1->Remaining).Data;
    local_48.Size = 0x10;
    (param_1->Remaining).Data = (void *)((longlong)local_48.Data + 0x10);
    (param_1->Remaining).Size = uVar9 - 0x10;
    LoadBlockHeader(&local_28,&local_48);
    if (local_28.bIsSet == false) goto LAB_142b08fc0;
    uVar9 = (ulonglong)local_28.TypedValue.Size;
    if ((param_1->Remaining).Size < uVar9) {
      if ((byte)LogAssetRegistry._0_1_ < 3) goto LAB_142b08fc0;
      pFVar7 = &`private:_static_struct_TOptional<TMemoryView<void_const_>_>___cdecl_UE::AssetDataGather::Private::FChecksumViewReader::LoadNextBlock(UE::AssetDataGather::Private::FMemoryViewReader&___ptr64)'
                ::__l30::LOG_Static;
    }
    else {
      uVar1 = (param_1->Remaining).Size;
      pvVar2 = (param_1->Remaining).Data;
      uVar8 = uVar9;
      if (uVar1 < uVar9) {
        uVar8 = uVar1;
      }
      (param_1->Remaining).Data = (void *)(uVar8 + (longlong)pvVar2);
      (param_1->Remaining).Size = uVar1 - uVar8;
      local_38.Data = pvVar2;
      local_38.Size = uVar9;
      FVar5 = FXxHash64::HashBuffer(&local_38);
      if ((local_28.bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TOptional<TMemoryView<void_const_>_> *)(*pcVar3)();
        return pTVar6;
      }
      if (FVar5.Hash == local_28.TypedValue.Checksum) {
        (__return_storage_ptr__->TypedValue).Data = pvVar2;
        (__return_storage_ptr__->TypedValue).Size = uVar9;
        __return_storage_ptr__->bIsSet = true;
        return __return_storage_ptr__;
      }
      if ((byte)LogAssetRegistry._0_1_ < 3) goto LAB_142b08fc0;
      pFVar7 = &`private:_static_struct_TOptional<TMemoryView<void_const_>_>___cdecl_UE::AssetDataGather::Private::FChecksumViewReader::LoadNextBlock(UE::AssetDataGather::Private::FMemoryViewReader&___ptr64)'
                ::__l51::LOG_Static;
    }
  }
  Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogAssetRegistry);
LAB_142b08fc0:
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// Seek @ 142b1cec0

void __thiscall
UE::AssetDataGather::Private::FChecksumViewReader::Seek(FChecksumViewReader *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                     ,0xe00,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Serialize @ 142b1cfb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FChecksumViewReader::Serialize
          (FChecksumViewReader *this,void *param_1,long64 param_2)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  TOptional<TMemoryView<void_const_>_> local_28;
  
  uVar5 = (this->CurrentBlock).Remaining.Size;
  pvVar4 = param_1;
  if (uVar5 < (ulonglong)param_2) {
    do {
      if ((this->_padding_ & 0x200) != 0) {
        return;
      }
      uVar6 = (this->CurrentBlock).Remaining.Size;
      _Src = (this->CurrentBlock).Remaining.Data;
      uVar3 = uVar5;
      if ((ulonglong)param_2 < uVar5) {
        uVar3 = param_2;
      }
      param_1 = (void *)((longlong)pvVar4 + uVar3);
      param_2 = param_2 - uVar3;
      uVar3 = uVar5;
      if (uVar6 < uVar5) {
        uVar3 = uVar6;
      }
      (this->CurrentBlock).Remaining.Data = (void *)(uVar3 + (longlong)_Src);
      (this->CurrentBlock).Remaining.Size = uVar6 - uVar3;
      if (uVar5 != 0) {
        memcpy(pvVar4,_Src,uVar5);
      }
      if (((this->CurrentBlock).Remaining.Size != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentBlock.GetRemainingSize() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                             ,0xe12,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LoadNextBlock(&local_28,&this->RemainingBlocks);
      if (local_28.bIsSet == false) {
        if (2 < (byte)LogAssetRegistry._0_1_) {
          Logging::Private::BasicLog<3>
                    (&`private:_virtual_void___cdecl_UE::AssetDataGather::Private::FChecksumViewReader::Serialize(void*___ptr64,__int64)___ptr64'
                      ::__l18::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
        FArchiveState::SetError((FArchiveState *)this);
        return;
      }
      local_28._16_8_ = local_28.TypedValue.Size;
      (this->CurrentBlock).Remaining.Data = local_28.TypedValue.Data;
      (this->CurrentBlock).Remaining.Size = local_28.TypedValue.Size;
      (this->CurrentBlock).TotalSize = local_28.TypedValue.Size;
      uVar5 = (this->CurrentBlock).Remaining.Size;
      pvVar4 = param_1;
    } while (uVar5 < (ulonglong)param_2);
  }
  if (((this->CurrentBlock).Remaining.Size < (ulonglong)param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size <= Remaining.GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xce7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = (this->CurrentBlock).Remaining.Size;
  pvVar4 = (this->CurrentBlock).Remaining.Data;
  uVar6 = param_2;
  if (uVar5 < (ulonglong)param_2) {
    uVar6 = uVar5;
  }
  (this->CurrentBlock).Remaining.Data = (void *)(uVar6 + (longlong)pvVar4);
  (this->CurrentBlock).Remaining.Size = uVar5 - uVar6;
  if (param_2 != 0) {
    memcpy(param_1,pvVar4,param_2);
  }
  return;
}

// Tell @ 142b22f40

long64 __thiscall UE::AssetDataGather::Private::FChecksumViewReader::Tell(FChecksumViewReader *this)

{
  return ((this->RemainingBlocks).TotalSize - (this->CurrentBlock).Remaining.Size) -
         (this->RemainingBlocks).Remaining.Size;
}

// TotalSize @ 142b26c60

long64 __thiscall
UE::AssetDataGather::Private::FChecksumViewReader::TotalSize(FChecksumViewReader *this)

{
  return (this->RemainingBlocks).TotalSize;
}

