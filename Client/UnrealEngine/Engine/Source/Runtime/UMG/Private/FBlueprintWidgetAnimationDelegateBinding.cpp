// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// StaticStruct @ 1468dae50

UScriptStruct * __cdecl FBlueprintWidgetAnimationDelegateBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding,
                         (UObject *)pUVar1,L"BlueprintWidgetAnimationDelegateBinding");
  }
  return Z_Registration_Info_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding.OuterSingleton;
}

