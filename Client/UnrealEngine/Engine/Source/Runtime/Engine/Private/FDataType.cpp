// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FDataType @ 1481c73e0

FDataType * __thiscall FMeshParticleVertexFactory::FDataType::FDataType(FDataType *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ParticleColorComponent).VertexBuffer = (FVertexBuffer *)0x0;
  (this->ParticleColorComponent).StreamOffset = 0;
  (this->ParticleColorComponent).Offset = '\0';
  (this->ParticleColorComponent).Stride = '\0';
  (this->ParticleColorComponent).Type = '\0';
  (this->ParticleColorComponent).VertexStreamUsage = Default;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 4;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0xff;
  this->TransformComponent[0].VertexBuffer = (FVertexBuffer *)0x0;
  this->TransformComponent[0].StreamOffset = 0;
  this->TransformComponent[0].Offset = '\0';
  this->TransformComponent[0].Stride = '\0';
  this->TransformComponent[0].Type = '\0';
  this->TransformComponent[0].VertexStreamUsage = Default;
  this->TransformComponent[1].VertexBuffer = (FVertexBuffer *)0x0;
  this->TransformComponent[1].StreamOffset = 0;
  this->TransformComponent[1].Offset = '\0';
  this->TransformComponent[1].Stride = '\0';
  this->TransformComponent[1].Type = '\0';
  this->TransformComponent[1].VertexStreamUsage = Default;
  this->TransformComponent[2].VertexBuffer = (FVertexBuffer *)0x0;
  this->TransformComponent[2].StreamOffset = 0;
  this->TransformComponent[2].Offset = '\0';
  this->TransformComponent[2].Stride = '\0';
  this->TransformComponent[2].Type = '\0';
  this->TransformComponent[2].VertexStreamUsage = Default;
  (this->VelocityComponent).VertexBuffer = (FVertexBuffer *)0x0;
  (this->VelocityComponent).StreamOffset = 0;
  (this->VelocityComponent).Offset = '\0';
  (this->VelocityComponent).Stride = '\0';
  (this->VelocityComponent).Type = '\0';
  (this->VelocityComponent).VertexStreamUsage = Default;
  (this->SubUVs).VertexBuffer = (FVertexBuffer *)0x0;
  (this->SubUVs).StreamOffset = 0;
  (this->SubUVs).Offset = '\0';
  (this->SubUVs).Stride = '\0';
  (this->SubUVs).Type = '\0';
  (this->SubUVs).VertexStreamUsage = Default;
  (this->SubUVLerpAndRelTime).VertexBuffer = (FVertexBuffer *)0x0;
  (this->SubUVLerpAndRelTime).StreamOffset = 0;
  (this->SubUVLerpAndRelTime).Offset = '\0';
  (this->SubUVLerpAndRelTime).Stride = '\0';
  (this->SubUVLerpAndRelTime).Type = '\0';
  (this->SubUVLerpAndRelTime).VertexStreamUsage = Default;
  this->bInitialized = false;
  return this;
}

