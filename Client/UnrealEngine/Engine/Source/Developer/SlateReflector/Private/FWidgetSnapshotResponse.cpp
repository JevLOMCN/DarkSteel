// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// StaticStruct @ 142ddf460

UScriptStruct * __cdecl FWidgetSnapshotResponse::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateReflector();
    Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotResponse,(UObject *)pUVar1,
                         L"WidgetSnapshotResponse");
  }
  return Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.OuterSingleton;
}

