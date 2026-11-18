// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// ~IVariableRateShadingImageGenerator @ 145750710

void __thiscall
IVariableRateShadingImageGenerator::~IVariableRateShadingImageGenerator
          (IVariableRateShadingImageGenerator *this)

{
  *this = (IVariableRateShadingImageGenerator)&___7IVariableRateShadingImageGenerator__6B_;
  return;
}

// GetType @ 145779d60

EVRSSourceType __thiscall
IVariableRateShadingImageGenerator::GetType(IVariableRateShadingImageGenerator *this)

{
  return None;
}

// IsEnabled @ 145780a10

bool __thiscall
IVariableRateShadingImageGenerator::IsEnabled(IVariableRateShadingImageGenerator *this)

{
  return false;
}

// IsSupportedByView @ 145780dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
IVariableRateShadingImageGenerator::IsSupportedByView
          (IVariableRateShadingImageGenerator *this,FSceneView *param_1)

{
  return false;
}

