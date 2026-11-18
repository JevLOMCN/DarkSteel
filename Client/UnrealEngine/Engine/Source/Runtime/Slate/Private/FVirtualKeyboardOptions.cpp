// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// StaticStruct @ 14269b730

UScriptStruct * __cdecl FVirtualKeyboardOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVirtualKeyboardOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UScriptStruct_FVirtualKeyboardOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVirtualKeyboardOptions,(UObject *)pUVar1,
                         L"VirtualKeyboardOptions");
  }
  return Z_Registration_Info_UScriptStruct_FVirtualKeyboardOptions.OuterSingleton;
}

