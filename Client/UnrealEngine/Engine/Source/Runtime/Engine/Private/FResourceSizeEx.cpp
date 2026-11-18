// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FResourceSizeEx @ 14761da40

FResourceSizeEx * __thiscall
FResourceSizeEx::FResourceSizeEx(FResourceSizeEx *this,FResourceSizeEx *param_1)

{
  this->ResourceSizeMode = param_1->ResourceSizeMode;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x0 = 0;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x34 = 0;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x48 = 0;
  TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
               *)&this->DedicatedSystemMemoryBytesMap,
              (TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
               *)&param_1->DedicatedSystemMemoryBytesMap);
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x0 = 0;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x34 = 0;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x48 = 0;
  TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
               *)&this->DedicatedVideoMemoryBytesMap,
              (TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
               *)&param_1->DedicatedVideoMemoryBytesMap);
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x0 = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x34 = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x48 = 0;
  TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
               *)&this->UnknownMemoryBytesMap,
              (TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
               *)&param_1->UnknownMemoryBytesMap);
  return this;
}

