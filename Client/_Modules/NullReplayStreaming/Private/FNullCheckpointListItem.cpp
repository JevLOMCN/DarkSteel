// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullReplayStreaming
// Functions: 1

// Serialize @ 146c89100

void __thiscall
FNullCheckpointListItem::Serialize
          (FNullCheckpointListItem *this,FJsonSerializerBase *param_1,bool param_2)

{
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  local_18 = L"group";
  uStack_10 = 5;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_18,&this->Group);
  local_18 = L"meta";
  uStack_10 = 4;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_18,&this->Metadata);
  local_18 = L"time1";
  uStack_10 = 5;
  (**(code **)((longlong)*param_1 + 0x88))(param_1,&local_18,&this->Time1);
  local_18 = L"time2";
  uStack_10 = 5;
  (**(code **)((longlong)*param_1 + 0x88))(param_1,&local_18,&this->Time2);
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

