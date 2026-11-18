// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 148aa7900

UScriptStruct * __cdecl FWorldPartitionRuntimeSpatialHashGridPreviewer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer,
                           (UObject *)pUVar1,L"WorldPartitionRuntimeSpatialHashGridPreviewer");
  }
  return Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer.
         OuterSingleton;
}

// FWorldPartitionRuntimeSpatialHashGridPreviewer @ 148ab4730

FWorldPartitionRuntimeSpatialHashGridPreviewer * __thiscall
FWorldPartitionRuntimeSpatialHashGridPreviewer::FWorldPartitionRuntimeSpatialHashGridPreviewer
          (FWorldPartitionRuntimeSpatialHashGridPreviewer *this)

{
  return this;
}

