// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 1

// StaticStruct @ 146302e90

UScriptStruct * __cdecl FChaosVDFullSessionInfoResponseMessage::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDFullSessionInfoResponseMessage,
                         (UObject *)pUVar1,L"ChaosVDFullSessionInfoResponseMessage");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton;
}

