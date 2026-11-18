// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 1

// StaticStruct @ 14a6b68e0

UScriptStruct * __cdecl FInjectedInputArray::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInjectedInputArray.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_EnhancedInput();
    Z_Registration_Info_UScriptStruct_FInjectedInputArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInjectedInputArray,(UObject *)pUVar1,
                         L"InjectedInputArray");
  }
  return Z_Registration_Info_UScriptStruct_FInjectedInputArray.OuterSingleton;
}

