// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// FBinaryObjectReader @ 14e14d970

FBinaryObjectReader * __thiscall
Optimus::FBinaryObjectReader::FBinaryObjectReader
          (FBinaryObjectReader *this,UObject *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined ***)this = &___7FObjectReader__6B_;
  *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)&this->field_0x98 = param_2;
  FArchiveState::SetIsLoading((FArchiveState *)this,true);
  (**(code **)(*(longlong *)this + 0x108))(this,0);
  this->field_0x2a = this->field_0x2a & 0xbd;
  *(undefined ***)this = &___7FBinaryObjectReader_Optimus__6B_;
  FArchiveState::SetWantBinaryPropertySerialization((FArchiveState *)this,true);
  (**(code **)(*(longlong *)param_1 + 200))(param_1,this);
  return this;
}

