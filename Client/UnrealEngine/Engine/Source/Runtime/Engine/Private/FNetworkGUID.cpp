// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CreateFromIndex @ 14809d760

FNetworkGUID __cdecl FNetworkGUID::CreateFromIndex(ulong64 param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FNetworkGUID FVar3;
  undefined7 in_register_00000011;
  byte in_R8B;
  
  if (0x7fffffffffffffff < CONCAT71(in_register_00000011,param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NetIndex <= (((uint64) 0xffffffffffffffff) >> 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\NetworkGuid.h"
                       ,0x71,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.field0_0x0 = (FNetworkGUID_u_0)(*pcVar1)();
      return (FNetworkGUID)FVar3.field0_0x0;
    }
  }
  *(ulonglong *)param_1 = CONCAT71(in_register_00000011,param_2) * 2 | (ulonglong)in_R8B;
  return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
}

