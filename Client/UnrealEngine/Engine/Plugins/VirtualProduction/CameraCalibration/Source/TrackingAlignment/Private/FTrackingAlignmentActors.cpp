// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TrackingAlignment
// Functions: 1

// StaticStruct @ 14d3743a0

UScriptStruct * __cdecl FTrackingAlignmentActors::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTrackingAlignmentActors.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TrackingAlignment();
    Z_Registration_Info_UScriptStruct_FTrackingAlignmentActors.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTrackingAlignmentActors,(UObject *)pUVar1,
                         L"TrackingAlignmentActors");
  }
  return Z_Registration_Info_UScriptStruct_FTrackingAlignmentActors.OuterSingleton;
}

