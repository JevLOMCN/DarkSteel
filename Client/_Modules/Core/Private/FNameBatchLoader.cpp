// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Load @ 141a88130

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> * __thiscall
FNameBatchLoader::Load
          (FNameBatchLoader *this,
          TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FSerializedNameHeader *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  uchar *puVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  FDisplayNameEntryId FVar8;
  uint uVar9;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined4 extraout_var;
  byte bVar11;
  uint uVar12;
  int iVar13;
  FSerializedNameHeader *pFVar14;
  uchar *puVar15;
  int iStack_80;
  TArrayView<unsigned_char_const_,int> local_68;
  TArrayView<FSerializedNameHeader_const_,int> local_58;
  TArrayView<unsigned_char_const_,int> local_48;
  TArrayView<FSerializedNameHeader_const_,int> local_38;
  
  if (((this->Headers).ArrayNum == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Headers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x14b5,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar10;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,(this->Headers).ArrayNum,Default);
  if ((this->Hashes).ArrayNum == 0) {
    puVar4 = (this->Strings).DataPtr;
    uVar5 = *(undefined8 *)&(this->Strings).ArrayNum;
    pFVar14 = (this->Headers).DataPtr;
    iVar13 = (int)*(undefined8 *)&(this->Headers).ArrayNum;
    if ((__return_storage_ptr__->ArrayNum != iVar13) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Out.Num() == Headers.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0x138e,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
    pFVar1 = pFVar14 + iVar13;
    uVar6 = 0;
    puVar15 = puVar4;
    for (; pFVar14 != pFVar1; pFVar14 = pFVar14 + 1) {
      bVar11 = (byte)*(ushort *)pFVar14->Data;
      uVar12 = (bVar11 & 0x7f) * 0x100 + (uint)(*(ushort *)pFVar14->Data >> 8);
      uVar9 = uVar12 * 2;
      if (-1 < (char)bVar11) {
        uVar9 = uVar12;
      }
      puVar15 = puVar15 + uVar9;
      FVar8 = BatchLoadNameWithoutHash((FNameSerializedView *)&stack0x00000008);
      uVar2 = *(undefined4 *)CONCAT44(extraout_var,FVar8.Id.Value);
      uVar9 = 0;
      if ((int)uVar6 < __return_storage_ptr__->ArrayNum) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar10;
      }
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar6 * 4) =
           uVar2;
      uVar6 = uVar6 + 1;
    }
    iStack_80 = (int)uVar5;
    if ((puVar15 != puVar4 + iStack_80) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StringIt == Strings.end()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0x1398,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  else {
    if ((0xff < (uint)(this->Headers).ArrayNum) && ((this->Flags & RespectOrder) == None)) {
      local_68.DataPtr = (this->Strings).DataPtr;
      local_68.ArrayNum = (this->Strings).ArrayNum;
      local_68._12_4_ = *(undefined4 *)&(this->Strings).field_0xc;
      local_58.DataPtr = (this->Headers).DataPtr;
      local_58.ArrayNum = (this->Headers).ArrayNum;
      local_58._12_4_ = *(undefined4 *)&(this->Headers).field_0xc;
      LoadSeparatedNameBatchInShardOrder
                (__return_storage_ptr__,(this->Hashes).DataPtr,&local_58,&local_68);
      return __return_storage_ptr__;
    }
    local_48.DataPtr = (this->Strings).DataPtr;
    local_48.ArrayNum = (this->Strings).ArrayNum;
    local_48._12_4_ = *(undefined4 *)&(this->Strings).field_0xc;
    local_38.DataPtr = (this->Headers).DataPtr;
    local_38.ArrayNum = (this->Headers).ArrayNum;
    local_38._12_4_ = *(undefined4 *)&(this->Headers).field_0xc;
    LoadSeparatedNameBatchInInputOrder
              (__return_storage_ptr__,(this->Hashes).DataPtr,&local_38,&local_48);
  }
  return __return_storage_ptr__;
}

// Read @ 141a8e4b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FNameBatchLoader::Read(FNameBatchLoader *this,FArchive *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  FScriptContainerElement **ppFVar7;
  longlong lVar8;
  bool bVar9;
  uint local_res10 [2];
  uint local_res18 [2];
  ulong64 local_res20;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  undefined4 local_70;
  FScriptContainerElement *local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  FSerializedNameHeader *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  FScriptContainerElement *local_48;
  undefined8 uStack_40;
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (local_res10[0] == 0) {
    return false;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res18[0] = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res20 = 0;
  if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res20,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_res20);
    }
  }
  else {
    local_res20 = *(ulong64 *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  bVar9 = local_res20 == 0xc1640000;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Data,local_res18[0] + local_res10[0] * 10,Default);
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,(this->Data).AllocatorInstance.Data,(longlong)(this->Data).ArrayNum);
  uVar4 = local_res10[0];
  lVar8 = (longlong)(int)local_res10[0];
  pFVar2 = (this->Data).AllocatorInstance.Data;
  if (((int)local_res10[0] < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (bVar9) {
    ppFVar7 = &local_48;
    local_48 = pFVar2;
    uStack_40 = CONCAT44(uStack_7c,uVar4);
  }
  else {
    local_78 = (FScriptContainerElement *)0x0;
    ppFVar7 = &local_78;
    local_70 = 0;
  }
  uStack_60 = local_res10[0];
  local_68 = pFVar2 + lVar8 * 8;
  pFVar2 = ppFVar7[1];
  (this->Hashes).DataPtr = (ulong64 *)*ppFVar7;
  *(FScriptContainerElement **)&(this->Hashes).ArrayNum = pFVar2;
  if (((int)local_res10[0] < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  (this->Headers).DataPtr = (FSerializedNameHeader *)local_68;
  *(ulonglong *)&(this->Headers).ArrayNum = CONCAT44(uStack_5c,uStack_60);
  local_58 = (this->Headers).DataPtr + (this->Headers).ArrayNum;
  uStack_50 = local_res18[0];
  if (((int)local_res18[0] < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  (this->Strings).DataPtr = local_58->Data;
  *(ulonglong *)&(this->Strings).ArrayNum = CONCAT44(uStack_4c,uStack_50);
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

