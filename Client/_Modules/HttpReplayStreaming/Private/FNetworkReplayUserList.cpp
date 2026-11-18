// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 2

// ~FNetworkReplayUserList @ 146cb6c00

void __thiscall FNetworkReplayUserList::~FNetworkReplayUserList(FNetworkReplayUserList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNetworkReplayUserList__6B_;
  DestructItems<FString,int>((FString *)(this->Users).AllocatorInstance.Data,(this->Users).ArrayNum)
  ;
  pFVar1 = (this->Users).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  return;
}

// Serialize @ 146cc79e0

void __thiscall
FNetworkReplayUserList::Serialize
          (FNetworkReplayUserList *this,FJsonSerializerBase *param_1,bool param_2)

{
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  local_18 = L"users";
  uStack_10 = 5;
  (**(code **)((longlong)*param_1 + 0xa8))(param_1,&local_18,&this->Users);
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

