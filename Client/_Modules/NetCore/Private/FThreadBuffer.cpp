// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 1

// FThreadBuffer @ 1441d27a0

FThreadBuffer * __thiscall FNetTraceInternal::FThreadBuffer::FThreadBuffer(FThreadBuffer *this)

{
  *(undefined8 *)&this->DynamicFNameToNameIdMap = 0;
  *(undefined8 *)&(this->DynamicFNameToNameIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicFNameToNameIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->DynamicFNameToNameIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicFNameToNameIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicFNameToNameIdMap).field_0x34 = 0;
  *(undefined4 *)&(this->DynamicFNameToNameIdMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DynamicFNameToNameIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicFNameToNameIdMap).field_0x48 = 0;
  *(undefined8 *)&this->DynamicNameHashToNameIdMap = 0;
  *(undefined8 *)&(this->DynamicNameHashToNameIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicNameHashToNameIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->DynamicNameHashToNameIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicNameHashToNameIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicNameHashToNameIdMap).field_0x34 = 0;
  *(undefined4 *)&(this->DynamicNameHashToNameIdMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DynamicNameHashToNameIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicNameHashToNameIdMap).field_0x48 = 0;
  *(undefined8 *)&this->GameInstanceToObjectTraceCounterMap = 0;
  *(undefined8 *)&(this->GameInstanceToObjectTraceCounterMap).field_0x8 = 0;
  *(undefined8 *)&(this->GameInstanceToObjectTraceCounterMap).field_0x20 = 0;
  *(undefined4 *)&(this->GameInstanceToObjectTraceCounterMap).field_0x28 = 0;
  *(undefined4 *)&(this->GameInstanceToObjectTraceCounterMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GameInstanceToObjectTraceCounterMap).field_0x34 = 0;
  *(undefined4 *)&(this->GameInstanceToObjectTraceCounterMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GameInstanceToObjectTraceCounterMap).field_0x40 = 0;
  *(undefined4 *)&(this->GameInstanceToObjectTraceCounterMap).field_0x48 = 0;
  *(undefined8 *)&this->DebugNameToNameIdMap = 0;
  *(undefined8 *)&(this->DebugNameToNameIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->DebugNameToNameIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->DebugNameToNameIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->DebugNameToNameIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DebugNameToNameIdMap).field_0x34 = 0;
  *(undefined4 *)&(this->DebugNameToNameIdMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DebugNameToNameIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->DebugNameToNameIdMap).field_0x48 = 0;
  return this;
}

