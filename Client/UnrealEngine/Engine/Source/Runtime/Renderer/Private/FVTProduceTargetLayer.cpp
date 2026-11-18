// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FVTProduceTargetLayer @ 1458cce50

FVTProduceTargetLayer * __thiscall
FVTProduceTargetLayer::FVTProduceTargetLayer(FVTProduceTargetLayer *this)

{
  this->PooledRenderTarget = (IPooledRenderTarget *)0x0;
  *(undefined8 *)&(this->pPageLocation).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->pPageLocation).field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  this->TextureRHI = (FRHITexture *)0x0;
  return this;
}

