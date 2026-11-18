// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// BeginRenderViewFamily @ 148a8b330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FHLODResourcesResidencySceneViewExtension::BeginRenderViewFamily
          (FHLODResourcesResidencySceneViewExtension *this,FSceneViewFamily *param_1)

{
  UWorld *this_00;
  UWorldPartitionHLODRuntimeSubsystem *this_01;
  
  this_00 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  this_01 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(this_00);
  UWorldPartitionHLODRuntimeSubsystem::OnBeginRenderViews(this_01,param_1);
  return;
}

// SetupView @ 148aa2600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FHLODResourcesResidencySceneViewExtension::SetupView
          (FHLODResourcesResidencySceneViewExtension *this,FSceneViewFamily *param_1,
          FSceneView *param_2)

{
  return;
}

// SetupViewFamily @ 148aa2610

void __thiscall
FHLODResourcesResidencySceneViewExtension::SetupViewFamily
          (FHLODResourcesResidencySceneViewExtension *this,FSceneViewFamily *param_1)

{
  return;
}

