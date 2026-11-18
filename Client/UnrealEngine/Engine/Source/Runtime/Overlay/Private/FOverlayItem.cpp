// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Overlay
// Functions: 1

// StaticStruct @ 148bba2a0

UScriptStruct * __cdecl FOverlayItem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOverlayItem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Overlay();
    Z_Registration_Info_UScriptStruct_FOverlayItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOverlayItem,(UObject *)pUVar1,L"OverlayItem");
  }
  return Z_Registration_Info_UScriptStruct_FOverlayItem.OuterSingleton;
}

