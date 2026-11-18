// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 1

// ~FGeometryCacheVertexFactoryUserData @ 14ca08f30

void __thiscall
FGeometryCacheVertexFactoryUserData::~FGeometryCacheVertexFactoryUserData
          (FGeometryCacheVertexFactoryUserData *this)

{
  FRHIUniformBuffer *this_00;
  FRHIShaderResourceView *pFVar1;
  
  this_00 = (this->ManualVertexFetchUniformBuffer).Reference;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (this->TexCoordsSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->MotionBlurDataSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->ColorSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->TangentZSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->TangentXSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PositionSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  if (this->UniformBuffer !=
      (TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBuffer);
    return;
  }
  return;
}

