// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 1

// StaticStruct @ 14e2cfaf0

UScriptStruct * __cdecl FCapturedPropSegment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCapturedPropSegment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_VariantManagerContent();
    Z_Registration_Info_UScriptStruct_FCapturedPropSegment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCapturedPropSegment,(UObject *)pUVar1,
                         L"CapturedPropSegment");
  }
  return Z_Registration_Info_UScriptStruct_FCapturedPropSegment.OuterSingleton;
}

