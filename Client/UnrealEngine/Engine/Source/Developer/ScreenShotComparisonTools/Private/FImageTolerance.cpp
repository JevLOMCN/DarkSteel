// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 1

// StaticStruct @ 148c387c0

UScriptStruct * __cdecl FImageTolerance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FImageTolerance.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
    Z_Registration_Info_UScriptStruct_FImageTolerance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FImageTolerance,(UObject *)pUVar1,
                         L"ImageTolerance");
  }
  return Z_Registration_Info_UScriptStruct_FImageTolerance.OuterSingleton;
}

