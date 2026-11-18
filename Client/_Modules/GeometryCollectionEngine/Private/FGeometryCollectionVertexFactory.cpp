// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// FGeometryCollectionVertexFactory @ 1463a2950

FGeometryCollectionVertexFactory * __thiscall
FGeometryCollectionVertexFactory::FGeometryCollectionVertexFactory
          (FGeometryCollectionVertexFactory *this,Type param_1,bool param_2)

{
  FRenderResource::FRenderResource((FRenderResource *)this,param_1);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0x1ffffff;
  this->_padding_ = (longlong)&___7FGeometryCollectionVertexFactory__6B_;
  (this->LooseParameterUniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
  this->EnableLooseParameter = param_2;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  *(undefined4 *)&(this->Data)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Data)._padding_ + 4) = 4;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  *(undefined4 *)&(this->Data)._padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&(this->Data)._padding_ + 4) = 0xff;
  *(undefined1 *)((longlong)&(this->Data)._padding_ + 6) = 0;
  (this->Data).BoneTransformSRV = (FRHIShaderResourceView *)0x0;
  (this->Data).BonePrevTransformSRV = (FRHIShaderResourceView *)0x0;
  (this->Data).BoneMapSRV = (FRHIShaderResourceView *)0x0;
  this->UniformBuffer =
       (TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters>)0x0;
  this->ColorStreamIndex = -1;
  return this;
}

