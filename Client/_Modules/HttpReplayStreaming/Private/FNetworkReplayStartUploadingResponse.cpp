// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 2

// ~FNetworkReplayStartUploadingResponse @ 146cb6bc0

void __thiscall
FNetworkReplayStartUploadingResponse::~FNetworkReplayStartUploadingResponse
          (FNetworkReplayStartUploadingResponse *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNetworkReplayStartUploadingResponse__6B_;
  pFVar1 = (this->SessionId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  return;
}

// Serialize @ 146cc7960

void __thiscall
FNetworkReplayStartUploadingResponse::Serialize
          (FNetworkReplayStartUploadingResponse *this,FJsonSerializerBase *param_1,bool param_2)

{
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  local_18 = L"sessionId";
  uStack_10 = 9;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_18,&this->SessionId);
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

