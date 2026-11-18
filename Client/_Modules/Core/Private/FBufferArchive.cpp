// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FBufferArchive @ 141ce3860

FBufferArchive * __thiscall FBufferArchive::FBufferArchive(FBufferArchive *this)

{
  undefined1 *puVar1;
  
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
  puVar1 = &this->field_0xa8;
  if (this == (FBufferArchive *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  *(undefined1 **)&this->field_0x98 = puVar1;
  *(undefined8 *)&this->field_0xa0 = 0;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(*(longlong *)this + 0x108))(this,0);
  *(undefined ***)this = &___7FBufferArchive__6B_;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  return this;
}

