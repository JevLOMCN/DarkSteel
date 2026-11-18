// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 3

// StartupModule @ 1496e9c20

void __thiscall FGeometryFrameworkModule::StartupModule(FGeometryFrameworkModule *this)

{
  FGeometryFrameworkModule local_res10 [3];
  
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FGeometryFrameworkModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,local_res10,(pmf_59c89310)this);
  return;
}

// ShutdownModule @ 1496e9c50

void __thiscall FGeometryFrameworkModule::ShutdownModule(FGeometryFrameworkModule *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPostEngineInit
             ,this);
  return;
}

// OnPostEngineInit @ 149714aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGeometryFrameworkModule::OnPostEngineInit(FGeometryFrameworkModule *this)

{
  UMaterial *pUVar1;
  
  pUVar1 = (GEngine->WireframeMaterial).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterial *)0x0) {
    UBaseDynamicMeshComponent::DefaultWireframeMaterial = (UMaterialInterface *)pUVar1;
  }
  pUVar1 = (GEngine->VertexColorViewModeMaterial_ColorOnly).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterial *)0x0) {
    UBaseDynamicMeshComponent::DefaultVertexColorMaterial = (UMaterialInterface *)pUVar1;
  }
  return;
}

