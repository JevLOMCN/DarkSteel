// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// Broadcast @ 14ec61780

void __thiscall
FOnlineProxyInAppReceiptsResult::Broadcast
          (FOnlineProxyInAppReceiptsResult *this,EInAppPurchaseStatus param_1,
          TArray<FInAppPurchaseReceiptInfo2,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FInAppPurchaseReceiptInfo2 *pFVar2;
  EInAppPurchaseStatus local_28 [8];
  TArray<FInAppPurchaseReceiptInfo2,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  local_28[0] = param_1;
  if (&local_20 != param_2) {
    DestructItems<FInAppPurchaseReceiptInfo2,int>((FInAppPurchaseReceiptInfo2 *)0x0,0);
    iVar1 = param_2->ArrayNum;
    pFVar2 = (FInAppPurchaseReceiptInfo2 *)(param_2->AllocatorInstance).Data;
    local_20.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_20.ArrayMax == 0)) {
      local_20.ArrayNum = 0;
      local_20.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar1,local_20.ArrayMax,&local_20.AllocatorInstance,iVar1,&local_20.ArrayMax
                );
      ConstructItems<FInAppPurchaseReceiptInfo2,FInAppPurchaseReceiptInfo2,int>
                (local_20.AllocatorInstance.Data,pFVar2,iVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,local_28);
  DestructItems<FInAppPurchaseReceiptInfo2,int>
            ((FInAppPurchaseReceiptInfo2 *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
  if ((FInAppPurchaseReceiptInfo2 *)local_20.AllocatorInstance.Data !=
      (FInAppPurchaseReceiptInfo2 *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

