// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// Broadcast @ 14ec61310

void __thiscall
FBlueprintFindSessionsResultDelegate::Broadcast
          (FBlueprintFindSessionsResultDelegate *this,
          TArray<FBlueprintSessionResult,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TArray<FBlueprintSessionResult,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_1) {
    DestructItems<FBlueprintSessionResult,int>((FBlueprintSessionResult *)0x0,0);
    iVar1 = param_1->ArrayNum;
    pFVar2 = (param_1->AllocatorInstance).Data;
    local_18.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_18.ArrayMax == 0)) {
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x120,8,iVar1,local_18.ArrayMax,&local_18.AllocatorInstance,iVar1,
                 &local_18.ArrayMax);
      ConstructItems<FBlueprintSessionResult,FBlueprintSessionResult,int>
                (local_18.AllocatorInstance.Data,(FBlueprintSessionResult *)pFVar2,iVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_18);
  DestructItems<FBlueprintSessionResult,int>
            ((FBlueprintSessionResult *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

