// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// FromFirstAndSize @ 1431dc710

FBlockRange * __cdecl
BuildPatchServices::FBlockRange::FromFirstAndSize
          (FBlockRange *__return_storage_ptr__,ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  FBlockRange *pFVar3;
  
  __return_storage_ptr__->First = param_1;
  __return_storage_ptr__->Size = param_2;
  if (param_2 != 0) {
    if (param_2 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                         ,0x11,L"Using GetFirst for a 0 size range is invalid.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FBlockRange *)(*pcVar1)();
        return pFVar3;
      }
    }
    if ((param_1 - 1) + param_2 < __return_storage_ptr__->First) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                         ,0x2f,L"Byte range has uint64 overflow.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FBlockRange *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetLast @ 1431e0f60

ulong64 __thiscall BuildPatchServices::FBlockRange::GetLast(FBlockRange *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (this->Size == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                       ,0x17,L"Using GetLast for a 0 size range is invalid.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (this->First - 1) + this->Size;
}

// FromFirstAndLast @ 1432535b0

FBlockRange * __cdecl
BuildPatchServices::FBlockRange::FromFirstAndLast
          (FBlockRange *__return_storage_ptr__,ulong64 param_1,ulong64 param_2)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  FBlockRange *pFVar4;
  
  if (param_2 < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFirst <= InLast",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                       ,0x35,L"Invalid args, first must <= last.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBlockRange *)(*pcVar2)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->First = param_1;
  uVar1 = (param_2 - param_1) + 1;
  __return_storage_ptr__->Size = uVar1;
  if (uVar1 != 0) {
    if (uVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                         ,0x11,L"Using GetFirst for a 0 size range is invalid.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FBlockRange *)(*pcVar2)();
        return pFVar4;
      }
    }
    if ((param_1 - 1) + uVar1 < __return_storage_ptr__->First) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                         ,0x2f,L"Byte range has uint64 overflow.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FBlockRange *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetFirst @ 143256c00

ulong64 __thiscall BuildPatchServices::FBlockRange::GetFirst(FBlockRange *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (this->Size != 0) {
    return this->First;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Size > 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                     ,0x11,L"Using GetFirst for a 0 size range is invalid.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return this->First;
}

