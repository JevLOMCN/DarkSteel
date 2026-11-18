// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 1

// StaticStruct @ 14ceff2e0

UScriptStruct * __cdecl FPrecomputedWarpCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrecomputedWarpCurve,(UObject *)pUVar1,
                         L"PrecomputedWarpCurve");
  }
  return Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve.OuterSingleton;
}

