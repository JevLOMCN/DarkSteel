// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 147d5c3b0

UScriptStruct * __cdecl FISMComponentInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FISMComponentInstance.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FISMComponentInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentInstance,(UObject *)pUVar1,
                         L"ISMComponentInstance");
  }
  return Z_Registration_Info_UScriptStruct_FISMComponentInstance.OuterSingleton;
}

