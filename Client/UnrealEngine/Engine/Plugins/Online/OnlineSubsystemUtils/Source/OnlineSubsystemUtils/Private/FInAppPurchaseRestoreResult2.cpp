// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// Broadcast @ 14ec614d0

void __thiscall
FInAppPurchaseRestoreResult2::Broadcast
          (FInAppPurchaseRestoreResult2 *this,EInAppPurchaseStatus param_1,
          TArray<FInAppPurchaseRestoreInfo2,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FInAppPurchaseRestoreInfo2 *pFVar2;
  EInAppPurchaseStatus local_28 [8];
  TArray<FInAppPurchaseRestoreInfo2,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  local_28[0] = param_1;
  if (&local_20 != param_2) {
    DestructItems<FInAppPurchaseRestoreInfo2,int>((FInAppPurchaseRestoreInfo2 *)0x0,0);
    iVar1 = param_2->ArrayNum;
    pFVar2 = (FInAppPurchaseRestoreInfo2 *)(param_2->AllocatorInstance).Data;
    local_20.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_20.ArrayMax == 0)) {
      local_20.ArrayNum = 0;
      local_20.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar1,local_20.ArrayMax,&local_20.AllocatorInstance,iVar1,&local_20.ArrayMax
                );
      ConstructItems<FInAppPurchaseRestoreInfo2,FInAppPurchaseRestoreInfo2,int>
                (local_20.AllocatorInstance.Data,pFVar2,iVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,local_28);
  DestructItems<FInAppPurchaseRestoreInfo2,int>
            ((FInAppPurchaseRestoreInfo2 *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
  if ((FInAppPurchaseRestoreInfo2 *)local_20.AllocatorInstance.Data !=
      (FInAppPurchaseRestoreInfo2 *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

