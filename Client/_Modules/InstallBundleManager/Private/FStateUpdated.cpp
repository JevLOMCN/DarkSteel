// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 1

// Serialize @ 148bd7320

void __thiscall
FInstallBundleReport::FStateUpdated::Serialize
          (FStateUpdated *this,FJsonSerializerBase *param_1,bool param_2)

{
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  local_18 = L"DownloadedSize";
  uStack_10 = 0xe;
  (**(code **)((longlong)*param_1 + 0x80))(param_1,&local_18,&this->DownloadedSize);
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

