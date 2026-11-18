// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 1

// StaticStruct @ 148c38420

UScriptStruct * __cdecl FScreenshotFallbackEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FScreenshotFallbackEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
    Z_Registration_Info_UScriptStruct_FScreenshotFallbackEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotFallbackEntry,(UObject *)pUVar1,
                         L"ScreenshotFallbackEntry");
  }
  return Z_Registration_Info_UScriptStruct_FScreenshotFallbackEntry.OuterSingleton;
}

