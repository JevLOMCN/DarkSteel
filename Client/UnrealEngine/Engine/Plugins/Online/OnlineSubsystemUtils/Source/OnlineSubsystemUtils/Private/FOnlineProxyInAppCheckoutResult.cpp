// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// Broadcast @ 14ec616b0

void __thiscall
FOnlineProxyInAppCheckoutResult::Broadcast
          (FOnlineProxyInAppCheckoutResult *this,EInAppPurchaseStatus param_1,
          FInAppPurchaseReceiptInfo2 *param_2)

{
  EInAppPurchaseStatus local_58 [8];
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_58[0] = param_1;
  ::FString::operator=(&local_50,&param_2->ItemName);
  ::FString::operator=(&local_40,&param_2->ItemId);
  ::FString::operator=(&local_30,&param_2->ValidationInfo);
  ::FString::operator=(&local_20,&param_2->TransactionIdentifier);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,local_58);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

