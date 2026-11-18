// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FVertexFactoryInput @ 14499e740

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FVertexFactoryInput * __thiscall
FHairGroupPublicData::FVertexFactoryInput::FVertexFactoryInput(FVertexFactoryInput *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (this->Strands).PositionBuffer.Buffer = (FRDGBuffer *)0x0;
  (this->Strands).PositionBuffer.SRV = (FRDGBufferSRV *)0x0;
  (this->Strands).PositionBuffer.UAV = (FRDGBufferUAV *)0x0;
  (this->Strands).PrevPositionBuffer.Buffer = (FRDGBuffer *)0x0;
  (this->Strands).PrevPositionBuffer.SRV = (FRDGBufferSRV *)0x0;
  (this->Strands).PrevPositionBuffer.UAV = (FRDGBufferUAV *)0x0;
  (this->Strands).TangentBuffer.Buffer = (FRDGBuffer *)0x0;
  (this->Strands).TangentBuffer.SRV = (FRDGBufferSRV *)0x0;
  (this->Strands).TangentBuffer.UAV = (FRDGBufferUAV *)0x0;
  (this->Strands).CurveAttributeBuffer.Buffer = (FRDGBuffer *)0x0;
  (this->Strands).CurveAttributeBuffer.SRV = (FRDGBufferSRV *)0x0;
  (this->Strands).CurveAttributeBuffer.UAV = (FRDGBufferUAV *)0x0;
  (this->Strands).PointAttributeBuffer.Buffer = (FRDGBuffer *)0x0;
  (this->Strands).PointAttributeBuffer.SRV = (FRDGBufferSRV *)0x0;
  (this->Strands).PointAttributeBuffer.UAV = (FRDGBufferUAV *)0x0;
  (this->Strands).PointToCurveBuffer.Buffer = (FRDGBuffer *)0x0;
  (this->Strands).PointToCurveBuffer.SRV = (FRDGBufferSRV *)0x0;
  (this->Strands).PointToCurveBuffer.UAV = (FRDGBufferUAV *)0x0;
  (this->Strands).PositionOffsetBuffer.Buffer = (FRDGBuffer *)0x0;
  (this->Strands).PositionOffsetBuffer.SRV = (FRDGBufferSRV *)0x0;
  (this->Strands).PositionOffsetBuffer.UAV = (FRDGBufferUAV *)0x0;
  (this->Strands).PrevPositionOffsetBuffer.Buffer = (FRDGBuffer *)0x0;
  (this->Strands).PrevPositionOffsetBuffer.SRV = (FRDGBufferSRV *)0x0;
  (this->Strands).PrevPositionOffsetBuffer.UAV = (FRDGBufferUAV *)0x0;
  (this->Strands).CurveBuffer.Buffer = (FRDGBuffer *)0x0;
  (this->Strands).CurveBuffer.SRV = (FRDGBufferSRV *)0x0;
  (this->Strands).CurveBuffer.UAV = (FRDGBufferUAV *)0x0;
  (this->Strands).CurveMappingBuffer.Buffer = (FRDGBuffer *)0x0;
  (this->Strands).CurveMappingBuffer.SRV = (FRDGBufferSRV *)0x0;
  (this->Strands).CurveMappingBuffer.UAV = (FRDGBufferUAV *)0x0;
  (this->Strands).PointMappingBuffer.Buffer = (FRDGBuffer *)0x0;
  (this->Strands).PointMappingBuffer.SRV = (FRDGBufferSRV *)0x0;
  (this->Strands).PointMappingBuffer.UAV = (FRDGBufferUAV *)0x0;
  (this->Strands).PositionBufferExternal.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Strands).PositionBufferExternal.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).PositionBufferExternal.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Strands).PositionBufferExternal.Format = PF_Unknown;
  (this->Strands).PrevPositionBufferExternal.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Strands).PrevPositionBufferExternal.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).PrevPositionBufferExternal.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Strands).PrevPositionBufferExternal.Format = PF_Unknown;
  (this->Strands).TangentBufferExternal.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Strands).TangentBufferExternal.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).TangentBufferExternal.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Strands).TangentBufferExternal.Format = PF_Unknown;
  (this->Strands).CurveAttributeBufferExternal.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Strands).CurveAttributeBufferExternal.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).CurveAttributeBufferExternal.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Strands).CurveAttributeBufferExternal.Format = PF_Unknown;
  (this->Strands).PointAttributeBufferExternal.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Strands).PointAttributeBufferExternal.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).PointAttributeBufferExternal.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Strands).PointAttributeBufferExternal.Format = PF_Unknown;
  (this->Strands).PointToCurveBufferExternal.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Strands).PointToCurveBufferExternal.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).PointToCurveBufferExternal.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Strands).PointToCurveBufferExternal.Format = PF_Unknown;
  (this->Strands).PositionOffsetBufferExternal.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Strands).PositionOffsetBufferExternal.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).PositionOffsetBufferExternal.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Strands).PositionOffsetBufferExternal.Format = PF_Unknown;
  (this->Strands).PrevPositionOffsetBufferExternal.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Strands).PrevPositionOffsetBufferExternal.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).PrevPositionOffsetBufferExternal.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Strands).PrevPositionOffsetBufferExternal.Format = PF_Unknown;
  (this->Strands).CurveBufferExternal.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Strands).CurveBufferExternal.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).CurveBufferExternal.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Strands).CurveBufferExternal.Format = PF_Unknown;
  (this->Strands).CurveMappingBufferExternal.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Strands).CurveMappingBufferExternal.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).CurveMappingBufferExternal.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Strands).CurveMappingBufferExternal.Format = PF_Unknown;
  (this->Strands).PointMappingBufferExternal.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Strands).PointMappingBufferExternal.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).PointMappingBufferExternal.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Strands).PointMappingBufferExternal.Format = PF_Unknown;
  (this->Strands).PositionBufferRHISRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).PrevPositionBufferRHISRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).TangentBufferRHISRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).CurveAttributeBufferRHISRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).PointAttributeBufferRHISRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).PointToCurveBufferRHISRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).PositionOffsetBufferRHISRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).PrevPositionOffsetBufferRHISRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).CurveBufferRHISRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).CurveMappingBufferRHISRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).PointMappingBufferRHISRV.Reference = (FRHIShaderResourceView *)0x0;
  this->bHasLODSwitch = false;
  this->bHasLODSwitchBindingType = false;
  this->GeometryType = NoneGeometry;
  this->BindingType = NoneBinding;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LocalToWorldTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LocalToWorldTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LocalToWorldTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToWorldTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToWorldTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

