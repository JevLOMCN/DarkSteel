// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// BindUObject<UAISense_Blueprint> @ 146f87b20

void __thiscall
TDelegateRegistration<void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>::
BindUObject<UAISense_Blueprint>
          (TDelegateRegistration<void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this,UAISense_Blueprint *param_1,pmf_7a6ad8ca param_2)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UAISense_Blueprint *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_10 = &this->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Blueprint____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UAISense_Blueprint *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar1[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UAISense_Blueprint *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    *(pmf_7a6ad8ca *)(puVar1 + 4) = param_2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

