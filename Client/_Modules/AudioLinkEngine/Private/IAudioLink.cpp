// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkEngine
// Functions: 2

// IAudioLink @ 1464cbbe0

IAudioLink * __thiscall IAudioLink::IAudioLink(IAudioLink *this)

{
  code *pcVar1;
  IAnalyticsProviderET *pIVar2;
  FAnalyticsEventAttribute *local_38;
  undefined8 local_30;
  FString local_28;
  FString local_18;
  
  *this = (IAudioLink)&___7IAudioLink__6B_;
  local_38 = (FAnalyticsEventAttribute *)0x0;
  local_30 = 0;
  ::FString::FString(&local_18,L"AudioLink.InstanceCreated");
  if (FEngineAnalytics::Analytics.Object != (IAnalyticsProviderET *)0x0) {
    pIVar2 = FEngineAnalytics::GetProvider();
    pcVar1 = *(code **)(pIVar2->_padding_ + 0x100);
    ::FString::ConcatCF(&local_28,L"Audio.Usage.",&local_18);
    (*pcVar1)(pIVar2,&local_28,&local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>(local_38,(int)local_30);
  if (local_38 != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_38);
  }
  return this;
}

// ~IAudioLink @ 1464cc020

void __thiscall IAudioLink::~IAudioLink(IAudioLink *this)

{
  return;
}

