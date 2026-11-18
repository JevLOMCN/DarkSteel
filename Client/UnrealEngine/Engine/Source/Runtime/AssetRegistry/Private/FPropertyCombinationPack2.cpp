// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// Pack @ 142b5df00

uint __cdecl FPropertyCombinationPack2::Pack(uint *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_2 != 1) {
    if (param_2 != 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x239,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    if ((*param_1 != 1) || (param_1[1] != 2)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values[0] == 1 && Values[1] == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x23a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    return 4;
  }
  if (3 < *param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Values[0] <= MaxValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                       ,0x234,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *param_1;
}

