// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 1

// StaticStruct @ 14a6b81e0

UScriptStruct * __cdecl FBlueprintInputDebugKeyDelegateBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EnhancedInput();
    Z_Registration_Info_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding,
                         (UObject *)pUVar1,L"BlueprintInputDebugKeyDelegateBinding");
  }
  return Z_Registration_Info_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding.OuterSingleton;
}

