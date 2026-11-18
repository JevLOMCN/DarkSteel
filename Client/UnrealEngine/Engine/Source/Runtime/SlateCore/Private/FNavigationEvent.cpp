// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// StaticStruct @ 1424c6d10

UScriptStruct * __cdecl FNavigationEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavigationEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FNavigationEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavigationEvent,(UObject *)pUVar1,
                         L"NavigationEvent");
  }
  return Z_Registration_Info_UScriptStruct_FNavigationEvent.OuterSingleton;
}

