// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FMeshComputeDispatchCommand @ 1452fe350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMeshComputeDispatchCommand * __thiscall
FMeshComputeDispatchCommand::FMeshComputeDispatchCommand
          (FMeshComputeDispatchCommand *this,FMeshComputeDispatchCommand *param_1)

{
  FShaderMapBase *pFVar1;
  
  (this->ShaderBindings).ShaderLayouts.AllocatorInstance.SecondaryData =
       (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
  (this->ShaderBindings).ShaderLayouts.ArrayNum = 0;
  (this->ShaderBindings).ShaderLayouts.ArrayMax = 2;
  (this->ShaderBindings).Data.InlineStorage[0] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[1] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[2] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[3] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[4] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[5] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[6] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[7] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[8] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[9] = (uchar *)0x0;
  (this->ShaderBindings).ShaderFrequencyBits = 0;
  (this->ShaderBindings).Size = 0;
  FMeshDrawShaderBindings::CopyFrom(&this->ShaderBindings,&param_1->ShaderBindings);
  pFVar1 = (param_1->MaterialShader).ShaderMap;
  (this->MaterialShader).ShaderContent = (param_1->MaterialShader).ShaderContent;
  (this->MaterialShader).ShaderMap = pFVar1;
  this->NumThreads = param_1->NumThreads;
  this->NumCPUVertices = param_1->NumCPUVertices;
  this->TargetBuffer = param_1->TargetBuffer;
  this->Geometry = param_1->Geometry;
  this->MinVertexIndex = param_1->MinVertexIndex;
  this->bApplyWorldPositionOffset = param_1->bApplyWorldPositionOffset;
  return this;
}

