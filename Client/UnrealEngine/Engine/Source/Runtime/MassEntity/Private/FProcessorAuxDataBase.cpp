// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// StaticStruct @ 1471b6380

UScriptStruct * __cdecl FProcessorAuxDataBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProcessorAuxDataBase.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FProcessorAuxDataBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProcessorAuxDataBase,(UObject *)pUVar1,
                         L"ProcessorAuxDataBase");
  }
  return Z_Registration_Info_UScriptStruct_FProcessorAuxDataBase.OuterSingleton;
}

