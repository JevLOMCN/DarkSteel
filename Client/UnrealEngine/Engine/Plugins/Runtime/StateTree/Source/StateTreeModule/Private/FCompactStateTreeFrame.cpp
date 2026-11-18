// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d5276f0

UScriptStruct * __cdecl FCompactStateTreeFrame::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCompactStateTreeFrame.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FCompactStateTreeFrame.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCompactStateTreeFrame,(UObject *)pUVar1,
                         L"CompactStateTreeFrame");
  }
  return Z_Registration_Info_UScriptStruct_FCompactStateTreeFrame.OuterSingleton;
}

