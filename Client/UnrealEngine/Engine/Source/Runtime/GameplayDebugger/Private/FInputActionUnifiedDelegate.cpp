// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 2

// BindDelegate<UGameplayDebuggerLocalController> @ 146d3b2d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FInputActionUnifiedDelegate::BindDelegate<UGameplayDebuggerLocalController>
          (FInputActionUnifiedDelegate *this,UGameplayDebuggerLocalController *param_1,
          pmf_8f91aab7 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  UGameplayDebuggerLocalController *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  undefined1 local_90 [24];
  FSharedReferencer<1> local_78;
  char local_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  Unbind(this);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  this->BoundDelegateType = Delegate;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_50);
  local_38 = &local_a0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_a0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UGameplayDebuggerLocalController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar3[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UGameplayDebuggerLocalController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
    *(pmf_8f91aab7 *)(puVar3 + 4) = param_2;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar5 = ::operator_new(0x28);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    local_90._0_8_ = ___xmm_00000000000000000000000000000010;
    pTVar6 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&DAT_00000010;
    local_90._8_8_ = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5[1]._padding_ = 0;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar5[2]._padding_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)(local_90 + 0x10));
    if (*(void **)&pTVar5[1].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar5[1].SharedReferenceCount);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar5[1].SharedReferenceCount =
         local_a0.DelegateAllocator;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar5[2]._padding_ = local_a0.DelegateSize;
    local_a0.DelegateSize = 0;
    if (local_70 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_78.ReferenceController,
                 (FDestructionSentinel *)(local_90 + 0x10));
    }
    pTVar6 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar5 + 1);
    if (pTVar6 == (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_90._8_8_ = pTVar5;
    pTVar7 = pTVar5;
    local_90._0_8_ = pTVar6;
  }
  if (this != (FInputActionUnifiedDelegate *)local_90) {
    (this->FuncDelegate).Object = pTVar6;
    local_90._0_8_ = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FuncDelegate).SharedReferenceCount,(FSharedReferencer<1> *)(local_90 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_90._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
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

// Unbind @ 146d5d450

void __thiscall FInputActionUnifiedDelegate::Unbind(FInputActionUnifiedDelegate *this)

{
  EBoundDelegate EVar1;
  FInputActionHandlerDynamicSignature *this_00;
  code *pcVar2;
  bool bVar3;
  undefined8 local_res10;
  FDestructionSentinel local_28;
  
  EVar1 = this->BoundDelegateType;
  if (EVar1 == Delegate) {
    if ((this->FuncDelegate).Object ==
        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->FuncDelegate).Object);
  }
  else {
    if (EVar1 == DelegateWithKey) {
      if ((this->FuncDelegateWithKey).Object ==
          (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->FuncDelegateWithKey).Object);
      this->BoundDelegateType = Unbound;
      return;
    }
    if (EVar1 == DynamicDelegate) {
      if ((this->FuncDynDelegate).Object == (FInputActionHandlerDynamicSignature *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      this_00 = (this->FuncDynDelegate).Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_28);
      local_res10 = 0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&this_00->field_0x8,(FObjectPtr)&local_res10);
      *(undefined8 *)&this_00->field_0x10 = 0;
      if (local_28.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        this->BoundDelegateType = Unbound;
        return;
      }
    }
  }
  this->BoundDelegateType = Unbound;
  return;
}

