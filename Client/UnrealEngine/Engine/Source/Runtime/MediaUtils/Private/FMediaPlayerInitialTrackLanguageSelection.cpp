// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 1

// StaticStruct @ 146bf0300

UScriptStruct * __cdecl FMediaPlayerInitialTrackLanguageSelection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaPlayerInitialTrackLanguageSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaUtils();
    Z_Registration_Info_UScriptStruct_FMediaPlayerInitialTrackLanguageSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaPlayerInitialTrackLanguageSelection,
                         (UObject *)pUVar1,L"MediaPlayerInitialTrackLanguageSelection");
  }
  return Z_Registration_Info_UScriptStruct_FMediaPlayerInitialTrackLanguageSelection.OuterSingleton;
}

