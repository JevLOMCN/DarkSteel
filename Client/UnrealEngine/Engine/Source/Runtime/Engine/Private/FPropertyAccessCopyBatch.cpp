// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 1483ce640

UScriptStruct * __cdecl FPropertyAccessCopyBatch::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyAccessCopyBatch.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPropertyAccessCopyBatch.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessCopyBatch,(UObject *)pUVar1,
                         L"PropertyAccessCopyBatch");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyAccessCopyBatch.OuterSingleton;
}

