// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FMaterialShaderParameters @ 147f65050

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

FMaterialShaderParameters * __thiscall
FMaterialShaderParameters::FMaterialShaderParameters
          (FMaterialShaderParameters *this,FMaterial *param_1)

{
  FMaterialShaderParametersBase::FMaterialShaderParametersBase
            ((FMaterialShaderParametersBase *)this,param_1);
  (this->MaterialShaderTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialShaderTags).ArrayNum = 0;
  (this->MaterialShaderTags).ArrayMax = 0;
  return this;
}

