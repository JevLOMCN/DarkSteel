// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// IsActiveThisFrame_Internal @ 148531e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FHMDSceneViewExtension::IsActiveThisFrame_Internal
          (FHMDSceneViewExtension *this,FSceneViewExtensionContext *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  if (((cVar1 != '\0') && (param_1->bStereoEnabled != false)) && (GEngine != (UEngine *)0x0)) {
    bVar2 = UEngine::IsStereoscopic3D(GEngine,param_1->Viewport);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

