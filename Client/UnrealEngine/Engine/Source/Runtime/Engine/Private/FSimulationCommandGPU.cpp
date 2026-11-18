// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSimulationCommandGPU @ 1480f48d0

FSimulationCommandGPU * __thiscall
FSimulationCommandGPU::FSimulationCommandGPU
          (FSimulationCommandGPU *this,FRHIShaderResourceView *param_1,FRHIBuffer *param_2,
          TUniformBufferRef<FParticleSimulationParameters> *param_3,
          FParticlePerFrameSimulationParameters *param_4,
          TUniformBufferRef<FVectorFieldUniformParameters> *param_5,int param_6)

{
  TUniformBufferRef<FParticleSimulationParameters> this_00;
  TUniformBufferRef<FVectorFieldUniformParameters> this_01;
  FRHITexture *pFVar1;
  undefined8 uVar2;
  float fVar3;
  int iVar4;
  
  this->TileOffsetsShaderRef = param_1;
  this->TileOffsetsBufferRef = param_2;
  this->UniformBuffer = (TUniformBufferRef<FParticleSimulationParameters>)0x0;
  this_00 = *param_3;
  this->UniformBuffer = this_00;
  if (this_00 != (TUniformBufferRef<FParticleSimulationParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  uVar2 = *(undefined8 *)((longlong)&(param_4->PointAttractor).field0_0x0 + 8);
  *(undefined8 *)&(this->PerFrameParameters).PointAttractor.field0_0x0 =
       *(undefined8 *)&(param_4->PointAttractor).field0_0x0;
  *(undefined8 *)((longlong)&(this->PerFrameParameters).PointAttractor.field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_4->PositionOffsetAndAttractorStrength).field0_0x0 + 8);
  *(undefined8 *)&(this->PerFrameParameters).PositionOffsetAndAttractorStrength.field0_0x0 =
       *(undefined8 *)&(param_4->PositionOffsetAndAttractorStrength).field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->PerFrameParameters).PositionOffsetAndAttractorStrength.field0_0x0 + 8) = uVar2
  ;
  fVar3 = param_4->DeltaSecondsInFix;
  iVar4 = param_4->NumIterationsInFix;
  (this->PerFrameParameters).LocalToWorldScale.field0_0x0 = (param_4->LocalToWorldScale).field0_0x0;
  (this->PerFrameParameters).DeltaSecondsInFix = fVar3;
  (this->PerFrameParameters).NumIterationsInFix = iVar4;
  iVar4 = param_4->NumIterationsInVar;
  uVar2 = *(undefined8 *)&param_4->DeltaSeconds;
  (this->PerFrameParameters).DeltaSecondsInVar = param_4->DeltaSecondsInVar;
  (this->PerFrameParameters).NumIterationsInVar = iVar4;
  *(undefined8 *)&(this->PerFrameParameters).DeltaSeconds = uVar2;
  uVar2 = *(undefined8 *)&param_4->field_0x48;
  *(undefined8 *)((longlong)&(this->PerFrameParameters).LWCTile.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_4->LWCTile).field0_0x0 + 4);
  *(undefined8 *)&(this->PerFrameParameters).field_0x48 = uVar2;
  this->VectorFieldsUniformBuffer = (TUniformBufferRef<FVectorFieldUniformParameters>)0x0;
  this_01 = *param_5;
  this->VectorFieldsUniformBuffer = this_01;
  if (this_01 != (TUniformBufferRef<FVectorFieldUniformParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  this->UnalignedTileCount = param_6;
  pFVar1 = (GBlackVolumeTexture->TextureRHI).Reference;
  this->VectorFieldTexturesRHI[0] = pFVar1;
  this->VectorFieldTexturesRHI[1] = pFVar1;
  this->VectorFieldTexturesRHI[2] = pFVar1;
  this->VectorFieldTexturesRHI[3] = pFVar1;
  return this;
}

