// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Serialize @ 142284d80

FArchive * __thiscall
FScriptInterface::Serialize(FScriptInterface *this,FArchive *param_1,UClass *param_2)

{
  TObjectPtr<UObject>_u_0 TVar1;
  void *pvVar2;
  TObjectPtr<UObject>_u_0 local_res8;
  
  local_res8 = (TObjectPtr<UObject>_u_0)(this->ObjectPointer).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res8);
  TVar1 = local_res8;
  pvVar2 = (void *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (local_res8.DebugPtr == (UObject *)0x0)) {
    (this->ObjectPointer).field0_0x0.DebugPtr = (UObject *)local_res8;
    if (local_res8.DebugPtr == (UObject *)0x0) {
      this->InterfacePointer = (void *)0x0;
    }
  }
  else {
    UE::GC::MarkAsReachable(local_res8.DebugPtr);
    (this->ObjectPointer).field0_0x0.DebugPtr = (UObject *)TVar1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    if (local_res8.DebugPtr != (UObject *)0x0) {
      pvVar2 = UObjectBaseUtility::GetInterfaceAddress
                         ((UObjectBaseUtility *)local_res8.DebugPtr,param_2);
    }
    this->InterfacePointer = pvVar2;
  }
  return param_1;
}

