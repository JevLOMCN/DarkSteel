// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 2

// ~FNetworkReplayStartDownloadingResponse @ 146cb6b70

void __thiscall
FNetworkReplayStartDownloadingResponse::~FNetworkReplayStartDownloadingResponse
          (FNetworkReplayStartDownloadingResponse *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNetworkReplayStartDownloadingResponse__6B_;
  pFVar1 = (this->Metadata).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Viewer).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->State).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  return;
}

// Serialize @ 146cc7810

void __thiscall
FNetworkReplayStartDownloadingResponse::Serialize
          (FNetworkReplayStartDownloadingResponse *this,FJsonSerializerBase *param_1,bool param_2)

{
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  local_18 = L"state";
  uStack_10 = 5;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_18,&this->State);
  local_18 = L"numChunks";
  uStack_10 = 9;
  (**(code **)((longlong)*param_1 + 0x90))(param_1,&local_18,&this->NumChunks);
  local_18 = L"time";
  uStack_10 = 4;
  (**(code **)((longlong)*param_1 + 0x90))(param_1,&local_18,&this->Time);
  local_18 = L"viewerId";
  uStack_10 = 8;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_18,&this->Viewer);
  local_18 = L"meta";
  uStack_10 = 4;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_18,&this->Metadata);
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

