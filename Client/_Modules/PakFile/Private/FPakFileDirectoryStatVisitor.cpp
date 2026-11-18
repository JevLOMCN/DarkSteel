// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// ShouldVisitLeafPathname @ 142aa0390

bool __thiscall
UE::PakFile::Private::FPakFileDirectoryStatVisitor::ShouldVisitLeafPathname
          (FPakFileDirectoryStatVisitor *this,TStringView<wchar_t> *param_1)

{
  undefined1 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  uVar1 = (**(code **)((longlong)*this->Inner + 8))(this->Inner,&local_18);
  return (bool)uVar1;
}

// Visit @ 142aac250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
UE::PakFile::Private::FPakFileDirectoryStatVisitor::Visit
          (FPakFileDirectoryStatVisitor *this,FString *param_1,FString *param_2,bool param_3,
          FPakFile *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  long64 lVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined1 auStack_108 [48];
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_d8;
  long64 local_c8;
  long64 local_c0;
  long64 local_b8;
  long64 local_b0;
  byte local_a8;
  FPakEntry local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  lVar3 = -1;
  pwVar5 = L"";
  if (!param_3) {
    local_98.Offset = ___xmm_0000000000000000ffffffffffffffff;
    local_98.Size = _UNK_15076adc8;
    local_98.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.CompressionBlocks.ArrayNum = 0;
    local_98.CompressionBlocks.ArrayMax = 0;
    local_98.UncompressedSize = 0;
    local_98.Hash[0] = '\0';
    local_98.Hash[1] = '\0';
    local_98.Hash[2] = '\0';
    local_98.Hash[3] = '\0';
    local_98.Hash[4] = '\0';
    local_98.Hash[5] = '\0';
    local_98.Hash[6] = '\0';
    local_98.Hash[7] = '\0';
    local_98.Hash[8] = '\0';
    local_98.Hash[9] = '\0';
    local_98.Hash[10] = '\0';
    local_98.Hash[0xb] = '\0';
    local_98.Hash[0xc] = '\0';
    local_98.Hash[0xd] = '\0';
    local_98.Hash[0xe] = '\0';
    local_98.Hash[0xf] = '\0';
    local_98.Hash[0x10] = '\0';
    local_98.Hash[0x11] = '\0';
    local_98.Hash[0x12] = '\0';
    local_98.Hash[0x13] = '\0';
    local_98.CompressionBlockSize = 0;
    local_98.CompressionMethodIndex = 0;
    local_98.Flags = '\0';
    local_98.Verified = false;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    FPakPlatformFile::GetMountedPaks(this->PlatformFile,&local_d8);
    bVar1 = FPakPlatformFile::FindFileInPakFiles
                      (&local_d8,pwVar4,(TRefCountPtr<FPakFile> *)0x0,&local_98);
    DestructItems<FPakPlatformFile::FPakListEntry,int>
              ((FPakListEntry *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
    if ((FPakListEntry *)local_d8.AllocatorInstance.Data != (FPakListEntry *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (bVar1) {
      lVar3 = local_98.Size;
      if (local_98.CompressionMethodIndex != 0) {
        lVar3 = local_98.UncompressedSize;
      }
    }
    if (local_98.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.CompressionBlocks.AllocatorInstance.Data);
    }
  }
  local_c8 = (param_4->Timestamp).Ticks;
  local_a8 = local_a8 & 0xfe | param_3 | 6;
  if ((param_2->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  local_c0 = local_c8;
  local_b8 = local_c8;
  local_b0 = lVar3;
  uVar2 = (**(code **)((longlong)*this->Inner + 0x10))(this->Inner,pwVar5,&local_c8);
  return (bool)uVar2;
}

