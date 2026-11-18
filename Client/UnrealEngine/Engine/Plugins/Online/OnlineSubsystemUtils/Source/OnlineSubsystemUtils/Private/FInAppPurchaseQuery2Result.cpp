// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// Broadcast @ 14ec613f0

void __thiscall
FInAppPurchaseQuery2Result::Broadcast
          (FInAppPurchaseQuery2Result *this,
          TArray<FOnlineProxyStoreOffer,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FOnlineProxyStoreOffer *pFVar2;
  TArray<FOnlineProxyStoreOffer,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_1) {
    DestructItems<FOnlineProxyStoreOffer,int>((FOnlineProxyStoreOffer *)0x0,0);
    iVar1 = param_1->ArrayNum;
    pFVar2 = (FOnlineProxyStoreOffer *)(param_1->AllocatorInstance).Data;
    local_18.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_18.ArrayMax == 0)) {
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe8,8,iVar1,local_18.ArrayMax,&local_18.AllocatorInstance,iVar1,&local_18.ArrayMax
                );
      ConstructItems<FOnlineProxyStoreOffer,FOnlineProxyStoreOffer,int>
                (local_18.AllocatorInstance.Data,pFVar2,iVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_18);
  DestructItems<FOnlineProxyStoreOffer,int>
            ((FOnlineProxyStoreOffer *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FOnlineProxyStoreOffer *)local_18.AllocatorInstance.Data != (FOnlineProxyStoreOffer *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

