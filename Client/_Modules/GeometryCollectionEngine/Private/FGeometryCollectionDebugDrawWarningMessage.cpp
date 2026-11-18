// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// StaticStruct @ 146347730

UScriptStruct * __cdecl FGeometryCollectionDebugDrawWarningMessage::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage,
                         (UObject *)pUVar1,L"GeometryCollectionDebugDrawWarningMessage");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage.OuterSingleton
  ;
}

