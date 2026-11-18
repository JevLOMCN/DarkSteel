// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FGPUSkinDataType @ 147cc36d0

FGPUSkinDataType * __thiscall FGPUSkinDataType::FGPUSkinDataType(FGPUSkinDataType *this)

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
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  (this->BoneIndices).VertexBuffer = (FVertexBuffer *)0x0;
  (this->BoneIndices).StreamOffset = 0;
  (this->BoneIndices).Offset = '\0';
  (this->BoneIndices).Stride = '\0';
  (this->BoneIndices).Type = '\0';
  (this->BoneIndices).VertexStreamUsage = Default;
  (this->ExtraBoneIndices).VertexBuffer = (FVertexBuffer *)0x0;
  (this->ExtraBoneIndices).StreamOffset = 0;
  (this->ExtraBoneIndices).Offset = '\0';
  (this->ExtraBoneIndices).Stride = '\0';
  (this->ExtraBoneIndices).Type = '\0';
  (this->ExtraBoneIndices).VertexStreamUsage = Default;
  (this->BoneWeights).VertexBuffer = (FVertexBuffer *)0x0;
  (this->BoneWeights).StreamOffset = 0;
  (this->BoneWeights).Offset = '\0';
  (this->BoneWeights).Stride = '\0';
  (this->BoneWeights).Type = '\0';
  (this->BoneWeights).VertexStreamUsage = Default;
  (this->ExtraBoneWeights).VertexBuffer = (FVertexBuffer *)0x0;
  (this->ExtraBoneWeights).StreamOffset = 0;
  (this->ExtraBoneWeights).Offset = '\0';
  (this->ExtraBoneWeights).Stride = '\0';
  (this->ExtraBoneWeights).Type = '\0';
  (this->ExtraBoneWeights).VertexStreamUsage = Default;
  (this->BlendOffsetCount).VertexBuffer = (FVertexBuffer *)0x0;
  (this->BlendOffsetCount).StreamOffset = 0;
  *(undefined8 *)&(this->BlendOffsetCount).Offset = 0;
  this->bUse16BitBoneIndex = false;
  this->bMorphTarget = false;
  (this->DeltaPositionComponent).VertexBuffer = (FVertexBuffer *)0x0;
  (this->DeltaPositionComponent).StreamOffset = 0;
  (this->DeltaPositionComponent).Offset = '\0';
  (this->DeltaPositionComponent).Stride = '\0';
  (this->DeltaPositionComponent).Type = '\0';
  (this->DeltaPositionComponent).VertexStreamUsage = Default;
  (this->DeltaTangentZComponent).VertexBuffer = (FVertexBuffer *)0x0;
  (this->DeltaTangentZComponent).StreamOffset = 0;
  (this->DeltaTangentZComponent).Offset = '\0';
  (this->DeltaTangentZComponent).Stride = '\0';
  (this->DeltaTangentZComponent).Type = '\0';
  (this->DeltaTangentZComponent).VertexStreamUsage = Default;
  this->MorphVertexBufferPool = (FMorphVertexBufferPool *)0x0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 4;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0xff;
  return this;
}

// operator= @ 147cc9d40

FGPUSkinDataType * __thiscall
FGPUSkinDataType::operator=(FGPUSkinDataType *this,FGPUSkinDataType *param_1)

{
  uint uVar1;
  uchar uVar2;
  uchar uVar3;
  TEnumAsByte<EVertexElementType> TVar4;
  EVertexStreamUsage EVar5;
  
  FStaticMeshDataType::operator=((FStaticMeshDataType *)this,(FStaticMeshDataType *)param_1);
  uVar1 = (param_1->BoneIndices).StreamOffset;
  uVar2 = (param_1->BoneIndices).Offset;
  uVar3 = (param_1->BoneIndices).Stride;
  TVar4.Value = (param_1->BoneIndices).Type.Value;
  EVar5 = (param_1->BoneIndices).VertexStreamUsage;
  (this->BoneIndices).VertexBuffer = (param_1->BoneIndices).VertexBuffer;
  (this->BoneIndices).StreamOffset = uVar1;
  (this->BoneIndices).Offset = uVar2;
  (this->BoneIndices).Stride = uVar3;
  (this->BoneIndices).Type = (TEnumAsByte<EVertexElementType>)TVar4.Value;
  (this->BoneIndices).VertexStreamUsage = EVar5;
  uVar1 = (param_1->ExtraBoneIndices).StreamOffset;
  uVar2 = (param_1->ExtraBoneIndices).Offset;
  uVar3 = (param_1->ExtraBoneIndices).Stride;
  TVar4.Value = (param_1->ExtraBoneIndices).Type.Value;
  EVar5 = (param_1->ExtraBoneIndices).VertexStreamUsage;
  (this->ExtraBoneIndices).VertexBuffer = (param_1->ExtraBoneIndices).VertexBuffer;
  (this->ExtraBoneIndices).StreamOffset = uVar1;
  (this->ExtraBoneIndices).Offset = uVar2;
  (this->ExtraBoneIndices).Stride = uVar3;
  (this->ExtraBoneIndices).Type = (TEnumAsByte<EVertexElementType>)TVar4.Value;
  (this->ExtraBoneIndices).VertexStreamUsage = EVar5;
  uVar1 = (param_1->BoneWeights).StreamOffset;
  uVar2 = (param_1->BoneWeights).Offset;
  uVar3 = (param_1->BoneWeights).Stride;
  TVar4.Value = (param_1->BoneWeights).Type.Value;
  EVar5 = (param_1->BoneWeights).VertexStreamUsage;
  (this->BoneWeights).VertexBuffer = (param_1->BoneWeights).VertexBuffer;
  (this->BoneWeights).StreamOffset = uVar1;
  (this->BoneWeights).Offset = uVar2;
  (this->BoneWeights).Stride = uVar3;
  (this->BoneWeights).Type = (TEnumAsByte<EVertexElementType>)TVar4.Value;
  (this->BoneWeights).VertexStreamUsage = EVar5;
  uVar1 = (param_1->ExtraBoneWeights).StreamOffset;
  uVar2 = (param_1->ExtraBoneWeights).Offset;
  uVar3 = (param_1->ExtraBoneWeights).Stride;
  TVar4.Value = (param_1->ExtraBoneWeights).Type.Value;
  EVar5 = (param_1->ExtraBoneWeights).VertexStreamUsage;
  (this->ExtraBoneWeights).VertexBuffer = (param_1->ExtraBoneWeights).VertexBuffer;
  (this->ExtraBoneWeights).StreamOffset = uVar1;
  (this->ExtraBoneWeights).Offset = uVar2;
  (this->ExtraBoneWeights).Stride = uVar3;
  (this->ExtraBoneWeights).Type = (TEnumAsByte<EVertexElementType>)TVar4.Value;
  (this->ExtraBoneWeights).VertexStreamUsage = EVar5;
  uVar1 = (param_1->BlendOffsetCount).StreamOffset;
  uVar2 = (param_1->BlendOffsetCount).Offset;
  uVar3 = (param_1->BlendOffsetCount).Stride;
  TVar4.Value = (param_1->BlendOffsetCount).Type.Value;
  EVar5 = (param_1->BlendOffsetCount).VertexStreamUsage;
  (this->BlendOffsetCount).VertexBuffer = (param_1->BlendOffsetCount).VertexBuffer;
  (this->BlendOffsetCount).StreamOffset = uVar1;
  (this->BlendOffsetCount).Offset = uVar2;
  (this->BlendOffsetCount).Stride = uVar3;
  (this->BlendOffsetCount).Type = (TEnumAsByte<EVertexElementType>)TVar4.Value;
  (this->BlendOffsetCount).VertexStreamUsage = EVar5;
  this->NumBoneInfluences = param_1->NumBoneInfluences;
  this->bUse16BitBoneIndex = param_1->bUse16BitBoneIndex;
  this->bMorphTarget = param_1->bMorphTarget;
  uVar1 = (param_1->DeltaPositionComponent).StreamOffset;
  uVar2 = (param_1->DeltaPositionComponent).Offset;
  uVar3 = (param_1->DeltaPositionComponent).Stride;
  TVar4.Value = (param_1->DeltaPositionComponent).Type.Value;
  EVar5 = (param_1->DeltaPositionComponent).VertexStreamUsage;
  (this->DeltaPositionComponent).VertexBuffer = (param_1->DeltaPositionComponent).VertexBuffer;
  (this->DeltaPositionComponent).StreamOffset = uVar1;
  (this->DeltaPositionComponent).Offset = uVar2;
  (this->DeltaPositionComponent).Stride = uVar3;
  (this->DeltaPositionComponent).Type = (TEnumAsByte<EVertexElementType>)TVar4.Value;
  (this->DeltaPositionComponent).VertexStreamUsage = EVar5;
  uVar1 = (param_1->DeltaTangentZComponent).StreamOffset;
  uVar2 = (param_1->DeltaTangentZComponent).Offset;
  uVar3 = (param_1->DeltaTangentZComponent).Stride;
  TVar4.Value = (param_1->DeltaTangentZComponent).Type.Value;
  EVar5 = (param_1->DeltaTangentZComponent).VertexStreamUsage;
  (this->DeltaTangentZComponent).VertexBuffer = (param_1->DeltaTangentZComponent).VertexBuffer;
  (this->DeltaTangentZComponent).StreamOffset = uVar1;
  (this->DeltaTangentZComponent).Offset = uVar2;
  (this->DeltaTangentZComponent).Stride = uVar3;
  (this->DeltaTangentZComponent).Type = (TEnumAsByte<EVertexElementType>)TVar4.Value;
  (this->DeltaTangentZComponent).VertexStreamUsage = EVar5;
  this->MorphVertexBufferPool = param_1->MorphVertexBufferPool;
  return this;
}

