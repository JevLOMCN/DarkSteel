// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FPSOPrecacheVertexFactoryData @ 1483e2090

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPSOPrecacheVertexFactoryData * __thiscall
FPSOPrecacheVertexFactoryData::FPSOPrecacheVertexFactoryData
          (FPSOPrecacheVertexFactoryData *this,FVertexFactoryType *param_1,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
  FRHIVertexDeclaration *pFVar1;
  
  this->VertexFactoryType = param_1;
  this->CustomDefaultVertexDeclaration = (FRHIVertexDeclaration *)0x0;
  pFVar1 = PipelineStateCache::GetOrCreateVertexDeclaration(param_2);
  this->CustomDefaultVertexDeclaration = pFVar1;
  return this;
}

