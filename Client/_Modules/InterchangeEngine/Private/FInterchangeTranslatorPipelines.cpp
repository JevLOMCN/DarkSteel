// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// StaticStruct @ 14e4cbd00

UScriptStruct * __cdecl FInterchangeTranslatorPipelines::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeTranslatorPipelines.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeEngine();
    Z_Registration_Info_UScriptStruct_FInterchangeTranslatorPipelines.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines,(UObject *)pUVar1
                         ,L"InterchangeTranslatorPipelines");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeTranslatorPipelines.OuterSingleton;
}

