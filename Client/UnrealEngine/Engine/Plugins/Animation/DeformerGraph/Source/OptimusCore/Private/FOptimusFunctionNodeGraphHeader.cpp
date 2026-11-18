// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// StaticStruct @ 14e1140d0

UScriptStruct * __cdecl FOptimusFunctionNodeGraphHeader::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusFunctionNodeGraphHeader.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusFunctionNodeGraphHeader.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader,(UObject *)pUVar1
                         ,L"OptimusFunctionNodeGraphHeader");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusFunctionNodeGraphHeader.OuterSingleton;
}

