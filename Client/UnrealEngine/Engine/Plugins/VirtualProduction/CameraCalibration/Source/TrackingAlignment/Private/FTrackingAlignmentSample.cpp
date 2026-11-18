// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TrackingAlignment
// Functions: 1

// StaticStruct @ 14d3748c0

UScriptStruct * __cdecl FTrackingAlignmentSample::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTrackingAlignmentSample.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TrackingAlignment();
    Z_Registration_Info_UScriptStruct_FTrackingAlignmentSample.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTrackingAlignmentSample,(UObject *)pUVar1,
                         L"TrackingAlignmentSample");
  }
  return Z_Registration_Info_UScriptStruct_FTrackingAlignmentSample.OuterSingleton;
}

