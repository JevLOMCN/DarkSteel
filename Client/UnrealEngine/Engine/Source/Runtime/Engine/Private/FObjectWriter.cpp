// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FObjectWriter @ 148b1dc60

FObjectWriter * __thiscall
FObjectWriter::FObjectWriter
          (FObjectWriter *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

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
  *(undefined ***)this = &___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)&this->field_0x98 = param_1;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(*(longlong *)this + 0x108))(this,0);
  this->field_0x2a = this->field_0x2a & 0xbd;
  *(undefined ***)this = &___7FObjectWriter__6B_;
  return this;
}

