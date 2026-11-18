// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 1

// FIndices @ 14e629f20

FIndices * __thiscall
GLTF::FAccessor::FSparse::FIndices::FIndices
          (FIndices *this,uint param_1,FBufferView *param_2,ulong64 param_3,EComponentType param_4)

{
  uchar *puVar1;
  ulong64 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  this->Count = param_1;
  puVar1 = (param_2->Buffer).Data;
  (this->BufferView).Buffer.ByteLength = (param_2->Buffer).ByteLength;
  (this->BufferView).Buffer.Data = puVar1;
  uVar2 = param_2->ByteLength;
  (this->BufferView).ByteOffset = param_2->ByteOffset;
  (this->BufferView).ByteLength = uVar2;
  uVar3 = param_2->ByteStride;
  uVar4 = *(undefined4 *)&param_2->field_0x24;
  this->ComponentType = param_4;
  (this->BufferView).ByteStride = uVar3;
  *(undefined4 *)&(this->BufferView).field_0x24 = uVar4;
  this->ByteOffset = param_3;
  return this;
}

