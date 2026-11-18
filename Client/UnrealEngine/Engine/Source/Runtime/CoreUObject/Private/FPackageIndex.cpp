// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// ToExport @ 141f16770

int __thiscall FPackageIndex::ToExport(FPackageIndex *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->Index < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsExport()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                       ,0x5b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return this->Index + -1;
}

// ToImport @ 141f167c0

int __thiscall FPackageIndex::ToImport(FPackageIndex *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (-1 < this->Index) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsImport()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return ~this->Index;
}

// FromExport @ 1420b8f80

FPackageIndex __cdecl FPackageIndex::FromExport(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 in_register_0000000c;
  int in_EDX;
  
  if (in_EDX < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExportIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                       ,0x6d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FPackageIndex)iVar3;
    }
  }
  *(int *)CONCAT44(in_register_0000000c,param_1) = in_EDX + 1;
  return (FPackageIndex)param_1;
}

