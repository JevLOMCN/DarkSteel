// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 2

// ~FNetworkReplayListItem @ 146cb6b20

void __thiscall FNetworkReplayListItem::~FNetworkReplayListItem(FNetworkReplayListItem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNetworkReplayListItem__6B_;
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SessionName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AppName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  return;
}

// Serialize @ 146cc75f0

void __thiscall
FNetworkReplayListItem::Serialize
          (FNetworkReplayListItem *this,FJsonSerializerBase *param_1,bool param_2)

{
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  local_18 = L"AppName";
  uStack_10 = 7;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_18,&this->AppName);
  local_18 = L"SessionName";
  uStack_10 = 0xb;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_18,&this->SessionName);
  local_18 = L"FriendlyName";
  uStack_10 = 0xc;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_18,&this->FriendlyName);
  local_18 = L"Timestamp";
  uStack_10 = 9;
  (**(code **)((longlong)*param_1 + 0x48))(param_1,&local_18,&this->Timestamp);
  local_18 = L"SizeInBytes";
  uStack_10 = 0xb;
  (**(code **)((longlong)*param_1 + 0x90))(param_1,&local_18,&this->SizeInBytes);
  local_18 = L"DemoTimeInMs";
  uStack_10 = 0xc;
  (**(code **)((longlong)*param_1 + 0x90))(param_1,&local_18,&this->DemoTimeInMs);
  local_18 = L"NumViewers";
  uStack_10 = 10;
  (**(code **)((longlong)*param_1 + 0x90))(param_1,&local_18,&this->NumViewers);
  local_18 = L"bIsLive";
  uStack_10 = 7;
  (**(code **)((longlong)*param_1 + 0x78))(param_1,&local_18,&this->bIsLive);
  local_18 = L"Changelist";
  uStack_10 = 10;
  (**(code **)((longlong)*param_1 + 0x90))(param_1,&local_18,&this->Changelist);
  local_18 = L"shouldKeep";
  uStack_10 = 10;
  (**(code **)((longlong)*param_1 + 0x78))(param_1,&local_18,&this->bShouldKeep);
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

