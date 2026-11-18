// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// StaticStruct @ 14d536120

UScriptStruct * __cdecl FCameraNodeEvaluatorAllocationInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraNodeEvaluatorAllocationInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraNodeEvaluatorAllocationInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo,
                         (UObject *)pUVar1,L"CameraNodeEvaluatorAllocationInfo");
  }
  return Z_Registration_Info_UScriptStruct_FCameraNodeEvaluatorAllocationInfo.OuterSingleton;
}

