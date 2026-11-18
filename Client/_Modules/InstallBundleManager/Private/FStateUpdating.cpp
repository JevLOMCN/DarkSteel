// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 1

// Serialize @ 148bd73a0

void __thiscall
FInstallBundleReport::FStateUpdating::Serialize
          (FStateUpdating *this,FJsonSerializerBase *param_1,bool param_2)

{
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  local_18 = L"DownloadSize";
  uStack_10 = 0xc;
  (**(code **)((longlong)*param_1 + 0x80))(param_1,&local_18,&this->DownloadSize);
  local_18 = L"bUsesBackgroundDownloads";
  uStack_10 = 0x18;
  (**(code **)((longlong)*param_1 + 0x78))(param_1,&local_18,&this->bUsesBackgroundDownloads);
  local_18 = L"DownloadProgress";
  uStack_10 = 0x10;
  (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_18,&this->DownloadProgress);
  local_18 = L"BackgroundDownloadedBytes";
  uStack_10 = 0x19;
  (**(code **)((longlong)*param_1 + 0x80))(param_1,&local_18,&this->BackgroundDownloadedBytes);
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

