// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyBindingUtils
// Functions: 1

// StaticStruct @ 14d378160

UScriptStruct * __cdecl FPropertyBindingCopyInfoBatch::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBindingCopyInfoBatch.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PropertyBindingUtils();
    Z_Registration_Info_UScriptStruct_FPropertyBindingCopyInfoBatch.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBindingCopyInfoBatch,(UObject *)pUVar1,
                         L"PropertyBindingCopyInfoBatch");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyBindingCopyInfoBatch.OuterSingleton;
}

