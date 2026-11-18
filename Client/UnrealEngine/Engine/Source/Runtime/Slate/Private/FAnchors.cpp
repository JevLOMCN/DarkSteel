// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// StaticStruct @ 14269b820

UScriptStruct * __cdecl FAnchors::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnchors.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UScriptStruct_FAnchors.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnchors,(UObject *)pUVar1,L"Anchors");
  }
  return Z_Registration_Info_UScriptStruct_FAnchors.OuterSingleton;
}

