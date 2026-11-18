// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// ~FChange @ 141816a80

void __thiscall FChange::~FChange(FChange *this)

{
  *this = (FChange)&___7FChange__6B_;
  return;
}

// AddReferencedObjects @ 141819390

void __thiscall FChange::AddReferencedObjects(FChange *this,FReferenceCollector *param_1)

{
  return;
}

// GetSize @ 1418272d0

ulong64 __thiscall FChange::GetSize(FChange *this)

{
  return 0;
}

// HasExpired @ 141828a60

bool __thiscall FChange::HasExpired(FChange *this,UObject *param_1)

{
  return false;
}

// PrintToLog @ 14182d8c0

void __thiscall FChange::PrintToLog(FChange *this,FFeedbackContext *param_1,int param_2)

{
  FString *pFVar1;
  ulonglong uVar2;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (0 < param_2) {
    uVar2 = (ulonglong)(uint)param_2;
    do {
      ::FString::AppendChar(&local_38,L'\t');
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  pFVar1 = (FString *)(**(code **)((longlong)*this + 0x30))(this,local_18);
  ::FString::ConcatFF(&local_28,&local_38,pFVar1);
  FOutputDevice::Log((FOutputDevice *)param_1,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

