// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyBindingUtils
// Functions: 1

// StaticStruct @ 14d379c80

UScriptStruct * __cdecl FPropertyBindingPathSegment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBindingPathSegment.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PropertyBindingUtils();
    Z_Registration_Info_UScriptStruct_FPropertyBindingPathSegment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBindingPathSegment,(UObject *)pUVar1,
                         L"PropertyBindingPathSegment");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyBindingPathSegment.OuterSingleton;
}

