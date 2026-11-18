// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 1

// StaticStruct @ 14453d1d0

UScriptStruct * __cdecl FTypedElementSelectionOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementSelectionOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementRuntime();
    Z_Registration_Info_UScriptStruct_FTypedElementSelectionOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSelectionOptions,(UObject *)pUVar1,
                         L"TypedElementSelectionOptions");
  }
  return Z_Registration_Info_UScriptStruct_FTypedElementSelectionOptions.OuterSingleton;
}

