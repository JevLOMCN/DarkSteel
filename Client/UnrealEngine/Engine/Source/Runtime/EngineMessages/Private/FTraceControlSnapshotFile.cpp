// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineMessages
// Functions: 1

// StaticStruct @ 144638e10

UScriptStruct * __cdecl FTraceControlSnapshotFile::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlSnapshotFile.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineMessages();
    Z_Registration_Info_UScriptStruct_FTraceControlSnapshotFile.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlSnapshotFile,(UObject *)pUVar1,
                         L"TraceControlSnapshotFile");
  }
  return Z_Registration_Info_UScriptStruct_FTraceControlSnapshotFile.OuterSingleton;
}

