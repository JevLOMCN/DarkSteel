// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 1

// Broadcast @ 14cf4ad90

void __thiscall
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::FGeoTrackingAvailabilityDelegate::Broadcast
          (FGeoTrackingAvailabilityDelegate *this,bool param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  undefined1 local_28 [8];
  FString local_20;
  
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_28[0] = param_1;
  if (&local_20 != param_2) {
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    uVar1 = (param_2->Data).ArrayNum;
    local_20.Data.ArrayMax = 0;
    local_20.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_20,uVar1,&local_20.Data.ArrayMax);
      memcpy(local_20.Data.AllocatorInstance.Data,pFVar2,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,local_28);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

