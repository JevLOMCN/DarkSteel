// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// StaticStruct @ 141f51780

UScriptStruct * __cdecl FPropertyBagMissingStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBagMissingStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FPropertyBagMissingStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBagMissingStruct,(UObject *)pUVar1,
                         L"PropertyBagMissingStruct");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyBagMissingStruct.OuterSingleton;
}

