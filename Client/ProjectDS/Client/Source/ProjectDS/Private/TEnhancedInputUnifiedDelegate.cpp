// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_> @ 14b8a9f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
::
BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
          (TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
           *this,ADS_PlayerController *param_1,pmf_cc4d16a5 *param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  ADS_PlayerController *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  undefined1 local_90 [24];
  FMRSWRecursiveAccessDetector *local_78;
  char local_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(this->Delegate).Object;
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
  }
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_50);
  local_38 = &local_a0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_a0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_PlayerController____A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADS_PlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar5[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADS_PlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    puVar5[4] = uVar2;
    puVar5[5] = uVar3;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar7 = ::operator_new(0x28);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_90._0_8_ = ___xmm_00000000000000000000000000000010;
    pTVar8 = (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)
             &DAT_00000010;
    local_90._8_8_ = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = 0;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TDelegate___A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[2]._padding_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)(local_90 + 0x10));
    if (*(void **)&pTVar7[1].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7[1].SharedReferenceCount);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar7[1].SharedReferenceCount =
         local_a0.DelegateAllocator;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar7[2]._padding_ = local_a0.DelegateSize;
    local_a0.DelegateSize = 0;
    if (local_70 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_78,(FDestructionSentinel *)(local_90 + 0x10));
    }
    pTVar8 = (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)
             (pTVar7 + 1);
    if (pTVar8 == (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)
                  0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_90._8_8_ = pTVar7;
    pTVar9 = pTVar7;
    local_90._0_8_ = pTVar8;
  }
  if (this != (TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
               *)local_90) {
    (this->Delegate).Object = pTVar8;
    local_90._0_8_ =
         (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Delegate).SharedReferenceCount,(FSharedReferencer<1> *)(local_90 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_90._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_68);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>,enum_EDS_KeyActionType,enum_ETriggerEvent> @ 14b8aa220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
::
BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>,enum_EDS_KeyActionType,enum_ETriggerEvent>
          (TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
           *this,ADS_PlayerController *param_1,pmf_2a4db2b5 *param_2,EDS_KeyActionType param_3,
          ETriggerEvent param_4)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  ADS_PlayerController *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  undefined1 local_90 [24];
  FMRSWRecursiveAccessDetector *local_78;
  char local_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(this->Delegate).Object;
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
  }
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_50);
  local_38 = &local_a0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_a0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy__W4EDS_KeyActionType__W4ETriggerEvent____6B_
    ;
    *(EDS_KeyActionType *)(puVar5 + 1) = param_3;
    *(ETriggerEvent *)((longlong)puVar5 + 0xc) = param_4;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_PlayerController____A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy__W4EDS_KeyActionType__W4ETriggerEvent____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADS_PlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar5[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADS_PlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    puVar5[4] = uVar2;
    puVar5[5] = uVar3;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar7 = ::operator_new(0x28);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_90._0_8_ = ___xmm_00000000000000000000000000000010;
    pTVar8 = (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)
             &DAT_00000010;
    local_90._8_8_ = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = 0;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TDelegate___A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[2]._padding_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)(local_90 + 0x10));
    if (*(void **)&pTVar7[1].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7[1].SharedReferenceCount);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar7[1].SharedReferenceCount =
         local_a0.DelegateAllocator;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar7[2]._padding_ = local_a0.DelegateSize;
    local_a0.DelegateSize = 0;
    if (local_70 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_78,(FDestructionSentinel *)(local_90 + 0x10));
    }
    pTVar8 = (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)
             (pTVar7 + 1);
    if (pTVar8 == (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)
                  0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_90._8_8_ = pTVar7;
    pTVar9 = pTVar7;
    local_90._0_8_ = pTVar8;
  }
  if (this != (TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
               *)local_90) {
    (this->Delegate).Object = pTVar8;
    local_90._0_8_ =
         (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Delegate).SharedReferenceCount,(FSharedReferencer<1> *)(local_90 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_90._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_68);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>,enum_ETriggerEvent> @ 14b8aa4c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
::
BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>,enum_ETriggerEvent>
          (TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
           *this,ADS_PlayerController *param_1,pmf_65f1f248 *param_2,ETriggerEvent param_3)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  ADS_PlayerController *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  undefined1 local_90 [24];
  FMRSWRecursiveAccessDetector *local_78;
  char local_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(this->Delegate).Object;
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
  }
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_50);
  local_38 = &local_a0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_a0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy__W4ETriggerEvent____6B_
    ;
    *(ETriggerEvent *)(puVar5 + 1) = param_3;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_PlayerController____A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy__W4ETriggerEvent____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADS_PlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar5[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADS_PlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    puVar5[4] = uVar2;
    puVar5[5] = uVar3;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar7 = ::operator_new(0x28);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_90._0_8_ = ___xmm_00000000000000000000000000000010;
    pTVar8 = (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)
             &DAT_00000010;
    local_90._8_8_ = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = 0;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TDelegate___A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[2]._padding_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)(local_90 + 0x10));
    if (*(void **)&pTVar7[1].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7[1].SharedReferenceCount);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar7[1].SharedReferenceCount =
         local_a0.DelegateAllocator;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar7[2]._padding_ = local_a0.DelegateSize;
    local_a0.DelegateSize = 0;
    if (local_70 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_78,(FDestructionSentinel *)(local_90 + 0x10));
    }
    pTVar8 = (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)
             (pTVar7 + 1);
    if (pTVar8 == (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)
                  0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_90._8_8_ = pTVar7;
    pTVar9 = pTVar7;
    local_90._0_8_ = pTVar8;
  }
  if (this != (TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
               *)local_90) {
    (this->Delegate).Object = pTVar8;
    local_90._0_8_ =
         (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Delegate).SharedReferenceCount,(FSharedReferencer<1> *)(local_90 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_90._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_68);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_> @ 14b8aa760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>::
BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          (TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,ADS_PlayerController *param_1,pmf_28ef44d0 *param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  ADS_PlayerController *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  undefined1 local_90 [24];
  FMRSWRecursiveAccessDetector *local_78;
  char local_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(this->Delegate).Object;
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
  }
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_50);
  local_38 = &local_a0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_a0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_PlayerController____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADS_PlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar5[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADS_PlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    puVar5[4] = uVar2;
    puVar5[5] = uVar3;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar7 = ::operator_new(0x28);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_90._0_8_ = ___xmm_00000000000000000000000000000010;
    pTVar8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&DAT_00000010;
    local_90._8_8_ = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = 0;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[2]._padding_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)(local_90 + 0x10));
    if (*(void **)&pTVar7[1].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7[1].SharedReferenceCount);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar7[1].SharedReferenceCount =
         local_a0.DelegateAllocator;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar7[2]._padding_ = local_a0.DelegateSize;
    local_a0.DelegateSize = 0;
    if (local_70 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_78,(FDestructionSentinel *)(local_90 + 0x10));
    }
    pTVar8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar7 + 1);
    if (pTVar8 == (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_90._8_8_ = pTVar7;
    pTVar9 = pTVar7;
    local_90._0_8_ = pTVar8;
  }
  if (this != (TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
               *)local_90) {
    (this->Delegate).Object = pTVar8;
    local_90._0_8_ = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Delegate).SharedReferenceCount,(FSharedReferencer<1> *)(local_90 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_90._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_68);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int> @ 14b8aaa10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>::
BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
          (TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,ADS_PlayerController *param_1,pmf_fd7da4d2 *param_2,int param_3)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  ADS_PlayerController *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  undefined1 local_90 [24];
  FMRSWRecursiveAccessDetector *local_78;
  char local_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(this->Delegate).Object;
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
  }
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_50);
  local_38 = &local_a0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_a0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar5 + 1) = param_3;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_PlayerController____A6AXXZUFDefaultDelegateUserPolicy__H__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADS_PlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar5[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADS_PlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    puVar5[4] = uVar2;
    puVar5[5] = uVar3;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar7 = ::operator_new(0x28);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_90._0_8_ = ___xmm_00000000000000000000000000000010;
    pTVar8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&DAT_00000010;
    local_90._8_8_ = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = 0;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[2]._padding_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)(local_90 + 0x10));
    if (*(void **)&pTVar7[1].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7[1].SharedReferenceCount);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar7[1].SharedReferenceCount =
         local_a0.DelegateAllocator;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar7[2]._padding_ = local_a0.DelegateSize;
    local_a0.DelegateSize = 0;
    if (local_70 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_78,(FDestructionSentinel *)(local_90 + 0x10));
    }
    pTVar8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar7 + 1);
    if (pTVar8 == (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_90._8_8_ = pTVar7;
    pTVar9 = pTVar7;
    local_90._0_8_ = pTVar8;
  }
  if (this != (TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
               *)local_90) {
    (this->Delegate).Object = pTVar8;
    local_90._0_8_ = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Delegate).SharedReferenceCount,(FSharedReferencer<1> *)(local_90 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_90._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_68);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,enum_ETriggerEvent> @ 14b8aaca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>::
BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,enum_ETriggerEvent>
          (TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,ADS_PlayerController *param_1,pmf_122f22a7 *param_2,ETriggerEvent param_3)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  ADS_PlayerController *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  undefined1 local_90 [24];
  FMRSWRecursiveAccessDetector *local_78;
  char local_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(this->Delegate).Object;
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
  }
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_50);
  local_38 = &local_a0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_a0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4ETriggerEvent____6B_
    ;
    *(ETriggerEvent *)(puVar5 + 1) = param_3;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_PlayerController____A6AXXZUFDefaultDelegateUserPolicy__W4ETriggerEvent____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADS_PlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar5[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADS_PlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    puVar5[4] = uVar2;
    puVar5[5] = uVar3;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar7 = ::operator_new(0x28);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_90._0_8_ = ___xmm_00000000000000000000000000000010;
    pTVar8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&DAT_00000010;
    local_90._8_8_ = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = 0;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[2]._padding_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)(local_90 + 0x10));
    if (*(void **)&pTVar7[1].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7[1].SharedReferenceCount);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar7[1].SharedReferenceCount =
         local_a0.DelegateAllocator;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar7[2]._padding_ = local_a0.DelegateSize;
    local_a0.DelegateSize = 0;
    if (local_70 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_78,(FDestructionSentinel *)(local_90 + 0x10));
    }
    pTVar8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar7 + 1);
    if (pTVar8 == (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_90._8_8_ = pTVar7;
    pTVar9 = pTVar7;
    local_90._0_8_ = pTVar8;
  }
  if (this != (TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
               *)local_90) {
    (this->Delegate).Object = pTVar8;
    local_90._0_8_ = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Delegate).SharedReferenceCount,(FSharedReferencer<1> *)(local_90 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_90._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_68);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

