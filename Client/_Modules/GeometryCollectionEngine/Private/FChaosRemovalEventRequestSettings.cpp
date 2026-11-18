// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// StaticStruct @ 146348610

UScriptStruct * __cdecl FChaosRemovalEventRequestSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosRemovalEventRequestSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FChaosRemovalEventRequestSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings,
                         (UObject *)pUVar1,L"ChaosRemovalEventRequestSettings");
  }
  return Z_Registration_Info_UScriptStruct_FChaosRemovalEventRequestSettings.OuterSingleton;
}

