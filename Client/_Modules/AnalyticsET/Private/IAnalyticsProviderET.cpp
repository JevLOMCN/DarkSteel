// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 3

// RecordEvent @ 1431a08d0

void __thiscall
IAnalyticsProviderET::RecordEvent
          (IAnalyticsProviderET *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  longlong lVar2;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_10 = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_10;
  _Src = (param_1->Data).AllocatorInstance.Data;
  pcVar1 = *(code **)(this->_padding_ + 0x100);
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar2 * 2);
  }
  (*pcVar1)(this,&local_18,param_2);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RecordEvent @ 1431a0990

void __thiscall
IAnalyticsProviderET::RecordEvent
          (IAnalyticsProviderET *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2,
          EAnalyticsRecordEventMode param_3)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  longlong lVar2;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_20 = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_20;
  _Src = (param_1->Data).AllocatorInstance.Data;
  pcVar1 = *(code **)(this->_padding_ + 0xf8);
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src,lVar2 * 2);
  }
  (*pcVar1)(this,&local_28,param_2,param_3);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// StartSession @ 1431a56d0

bool __thiscall
IAnalyticsProviderET::StartSession
          (IAnalyticsProviderET *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  FGuid local_28;
  FString local_18;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  FWindowsPlatformMisc::CreateGuid(&local_28);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0xf0);
  FGuid::AppendString(&local_28,&local_18,DigitsWithHyphensInBraces);
  uVar2 = (*pcVar1)(this,&local_18,param_1);
  return (bool)uVar2;
}

