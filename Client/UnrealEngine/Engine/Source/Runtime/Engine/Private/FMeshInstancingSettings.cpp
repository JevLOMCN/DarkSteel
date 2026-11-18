// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147f91420

UScriptStruct * __cdecl FMeshInstancingSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshInstancingSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMeshInstancingSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshInstancingSettings,(UObject *)pUVar1,
                         L"MeshInstancingSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMeshInstancingSettings.OuterSingleton;
}

// FMeshInstancingSettings @ 147fa4620

FMeshInstancingSettings * __thiscall
FMeshInstancingSettings::FMeshInstancingSettings(FMeshInstancingSettings *this)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_AActor_NoRegister();
  (this->ActorClassToUse).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->InstanceReplacementThreshold = 2;
  this->bSkipMeshesWithVertexColors = true;
  this->bUseHLODVolumes = true;
  pUVar1 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  (this->ISMComponentToUse).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

