// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FNameHash<char> @ 141a47f30

FNameHash * __thiscall FNameHash::FNameHash<char>(FNameHash *this,char *param_1,int param_2)

{
  FNameEntryHeader *pFVar1;
  ulong64 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 == 4) {
    uVar4 = (uint)((*(uint *)param_1 & 0xdfdfdfdf) == 0x454e4f4e);
  }
  uVar2 = CityHash64(param_1,param_2);
  this->UnmaskedSlotIndex = (uint)uVar2;
  uVar3 = (uint)(uVar2 >> 0x20);
  this->SlotProbeHash = uVar4 << 0x1d | uVar3 & 0xe0000000;
  pFVar1 = &this->EntryProbeHeader;
  pFVar1->bIsWide = 0;
  pFVar1->Len = param_2;
  pFVar1->LowercaseProbeHash = uVar2 >> 0x28;
  this->ShardIndex = uVar3 & 0xff;
  return this;
}

// FNameHash<wchar_t> @ 141a48100

FNameHash * __thiscall FNameHash::FNameHash<wchar_t>(FNameHash *this,wchar_t *param_1,int param_2)

{
  ushort uVar1;
  ulong64 uVar2;
  uint uVar3;
  
  uVar2 = CityHash64((char *)param_1,param_2 * 2);
  this->UnmaskedSlotIndex = (uint)uVar2;
  uVar3 = (uint)(uVar2 >> 0x20);
  this->SlotProbeHash = uVar3 & 0xe0000000;
  this->ShardIndex = uVar3 & 0xff;
  uVar1 = (ushort)this->EntryProbeHeader & 0x3e | (short)param_2 << 6 | 1;
  this->EntryProbeHeader = (FNameEntryHeader)(((short)(uVar2 >> 0x28) * 2 ^ uVar1) & 0x3e ^ uVar1);
  return this;
}

