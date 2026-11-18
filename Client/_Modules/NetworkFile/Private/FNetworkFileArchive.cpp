// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkFile
// Functions: 1

// FNetworkFileArchive @ 148bdfdb0

FNetworkFileArchive * __thiscall
FNetworkFileArchive::FNetworkFileArchive(FNetworkFileArchive *this,uint param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  uint local_res10 [2];
  
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
  local_res10[0] = param_1;
  FArchiveState::FArchiveState((FArchiveState *)this);
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined ***)this = &___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  puVar2 = &this->field_0xa8;
  if (this == (FNetworkFileArchive *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  *(undefined1 **)&this->field_0x98 = puVar2;
  *(undefined8 *)&this->field_0xa0 = 0;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(*(longlong *)this + 0x108))(this,0);
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  plVar1 = *(longlong **)&this->field_0x8;
  *(undefined ***)this = &___7FNetworkFileArchive__6B_;
  if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 4;
    return this;
  }
  if ((this->field_0x2a & 1) == 0) {
    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize
              ((TMemoryWriterBase<TSizedDefaultAllocator<32>_> *)this,local_res10,4);
    return this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res10);
  return this;
}

