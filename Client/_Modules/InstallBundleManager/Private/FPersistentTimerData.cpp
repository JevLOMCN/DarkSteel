// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 1

// Serialize @ 148bd6b30

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentTimerData::Serialize
          (FPersistentTimerData *this,FJsonSerializerBase *param_1,bool param_2)

{
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  local_18 = L"LastUpdateTime";
  uStack_10 = 0xe;
  (**(code **)((longlong)*param_1 + 0x50))(param_1,&local_18,&this->LastUpdateTime);
  local_18 = L"TotalTime";
  uStack_10 = 9;
  (**(code **)((longlong)*param_1 + 0x50))(param_1,&local_18,&this->CurrentValue);
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

