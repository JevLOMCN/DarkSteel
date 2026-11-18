// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FMemoryWriter @ 141be4e60

FMemoryWriter * __thiscall
FMemoryWriter::FMemoryWriter
          (FMemoryWriter *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,bool param_3,FName param_4)

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
  *(uint *)&this->field_0xa0 = param_4.ComparisonIndex.Value;
  *(uint *)&this->field_0xa4 = param_4.Number;
  *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)&this->field_0x98 = param_1;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(*(longlong *)this + 0x108))(this,param_2);
  if (param_3) {
    *(longlong *)&this->field_0x90 = (longlong)param_1->ArrayNum;
  }
  *(undefined ***)this = &___7FMemoryWriter__6B_;
  return this;
}

