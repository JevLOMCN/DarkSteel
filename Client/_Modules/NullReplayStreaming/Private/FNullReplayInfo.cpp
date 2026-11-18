// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullReplayStreaming
// Functions: 1

// Serialize @ 146c89220

void __thiscall
FNullReplayInfo::Serialize(FNullReplayInfo *this,FJsonSerializerBase *param_1,bool param_2)

{
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  local_18 = L"LengthInMS";
  uStack_10 = 10;
  (**(code **)((longlong)*param_1 + 0x90))(param_1,&local_18,&this->LengthInMS);
  local_18 = L"NetworkVersion";
  uStack_10 = 0xe;
  (**(code **)((longlong)*param_1 + 0x88))(param_1,&local_18,&this->NetworkVersion);
  local_18 = L"Changelist";
  uStack_10 = 10;
  (**(code **)((longlong)*param_1 + 0x88))(param_1,&local_18,&this->Changelist);
  local_18 = L"FriendlyName";
  uStack_10 = 0xc;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_18,&this->FriendlyName);
  local_18 = L"DemoFileLastOffset";
  uStack_10 = 0x12;
  (**(code **)((longlong)*param_1 + 0x90))(param_1,&local_18,&this->DemoFileLastOffset);
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

