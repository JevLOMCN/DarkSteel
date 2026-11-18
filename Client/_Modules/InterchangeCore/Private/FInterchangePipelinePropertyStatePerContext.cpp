// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 1

// StaticStruct @ 14e3218a0

UScriptStruct * __cdecl FInterchangePipelinePropertyStatePerContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangePipelinePropertyStatePerContext.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeCore();
    Z_Registration_Info_UScriptStruct_FInterchangePipelinePropertyStatePerContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext,
                         (UObject *)pUVar1,L"InterchangePipelinePropertyStatePerContext");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangePipelinePropertyStatePerContext.
         OuterSingleton;
}

