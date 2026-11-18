// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// Broadcast @ 14ec61210

void __thiscall
FAchievementWriteCompleteDelegate::Broadcast
          (FAchievementWriteCompleteDelegate *this,FString *param_1,float param_2,int param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FString local_38;
  float local_28;
  int local_24;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (&local_38 != param_1) {
    uVar1 = (param_1->Data).ArrayNum;
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    local_38.Data.ArrayMax = 0;
    local_38.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_38,uVar1,&local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,pFVar2,(longlong)(int)uVar1 * 2);
    }
  }
  local_28 = param_2;
  local_24 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

