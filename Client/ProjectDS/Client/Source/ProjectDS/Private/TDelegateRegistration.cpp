// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// BindUObject<UDS_InteractionAbility_Hold> @ 14b7d0e70

void __thiscall
TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
BindUObject<UDS_InteractionAbility_Hold>
          (TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          UDS_InteractionAbility_Hold *param_1,pmf_6bea3737 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_InteractionAbility_Hold *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_10 = &this->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)&param_2->field_0x8;
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_Hold____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_InteractionAbility_Hold *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar3[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_InteractionAbility_Hold *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
    puVar3[4] = uVar1;
    puVar3[5] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindStatic<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&> @ 14b8ab360

void __thiscall
TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
BindStatic<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&>
          (TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          _func___cdecl_void_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_10 = &this->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 1),param_2);
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[4] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = param_1;
    if (param_1 ==
        (_func___cdecl_void_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindStatic<> @ 14bbe6540

void __thiscall
TDelegateRegistration<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::BindStatic<>(TDelegateRegistration<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
               *this,_func___cdecl_void_ServerMessagesTwoway_ptr *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_10 = &this->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = param_1;
    if (param_1 == (_func___cdecl_void_ServerMessagesTwoway_ptr *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindUObject<UDS_VM_ContentsFrame> @ 14bd9d2f0

void __thiscall
TDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
BindUObject<UDS_VM_ContentsFrame>
          (TDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
           *this,UDS_VM_ContentsFrame *param_1,pmf_d82d45ba *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_VM_ContentsFrame *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_10 = &this->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)&param_2->field_0x8;
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_ContentsFrame____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_ContentsFrame *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar3[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_ContentsFrame *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
    puVar3[4] = uVar1;
    puVar3[5] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindUObject<UDS_VM_W_ItemGem_PopUp> @ 14be03b60

void __thiscall
TDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
BindUObject<UDS_VM_W_ItemGem_PopUp>
          (TDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
           *this,UDS_VM_W_ItemGem_PopUp *param_1,pmf_40b0aaac *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_VM_W_ItemGem_PopUp *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_10 = &this->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)&param_2->field_0x8;
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_ItemGem_PopUp____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_ItemGem_PopUp *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar3[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_ItemGem_PopUp *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
    puVar3[4] = uVar1;
    puVar3[5] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindUObject<UDS_VM_W_B_ItemDismantle> @ 14bf8fe30

void __thiscall
TDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>::
BindUObject<UDS_VM_W_B_ItemDismantle>
          (TDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
           *this,UDS_VM_W_B_ItemDismantle *param_1,pmf_bf18d5c4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_VM_W_B_ItemDismantle *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_10 = &this->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)&param_2->field_0x8;
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_ItemDismantle____A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_B_ItemDismantle *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar3[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_B_ItemDismantle *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
    puVar3[4] = uVar1;
    puVar3[5] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

