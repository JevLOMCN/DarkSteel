// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// StaticStruct @ 142ddf420

UScriptStruct * __cdecl FWidgetSnapshotRequest::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateReflector();
    Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotRequest,(UObject *)pUVar1,
                         L"WidgetSnapshotRequest");
  }
  return Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton;
}

