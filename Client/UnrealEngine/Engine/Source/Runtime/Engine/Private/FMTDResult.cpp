// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 147b98070

UScriptStruct * __cdecl FMTDResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMTDResult.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMTDResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMTDResult,(UObject *)pUVar1,L"MTDResult");
  }
  return Z_Registration_Info_UScriptStruct_FMTDResult.OuterSingleton;
}

