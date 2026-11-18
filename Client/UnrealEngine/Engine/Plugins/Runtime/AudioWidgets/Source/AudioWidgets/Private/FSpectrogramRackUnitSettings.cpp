// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1

// StaticStruct @ 14d8935c0

UScriptStruct * __cdecl FSpectrogramRackUnitSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSpectrogramRackUnitSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FSpectrogramRackUnitSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSpectrogramRackUnitSettings,(UObject *)pUVar1,
                         L"SpectrogramRackUnitSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSpectrogramRackUnitSettings.OuterSingleton;
}

