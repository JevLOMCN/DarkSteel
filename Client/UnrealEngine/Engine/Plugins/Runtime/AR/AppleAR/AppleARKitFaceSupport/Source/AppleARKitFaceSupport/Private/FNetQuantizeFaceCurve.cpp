// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 1

// StaticStruct @ 14d2811b0

UScriptStruct * __cdecl FNetQuantizeFaceCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetQuantizeFaceCurve.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKitFaceSupport();
    Z_Registration_Info_UScriptStruct_FNetQuantizeFaceCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetQuantizeFaceCurve,(UObject *)pUVar1,
                         L"NetQuantizeFaceCurve");
  }
  return Z_Registration_Info_UScriptStruct_FNetQuantizeFaceCurve.OuterSingleton;
}

