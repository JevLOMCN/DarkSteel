// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 1483ce580

UScriptStruct * __cdecl FPropertyAccessSegment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyAccessSegment.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPropertyAccessSegment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessSegment,(UObject *)pUVar1,
                         L"PropertyAccessSegment");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyAccessSegment.OuterSingleton;
}

