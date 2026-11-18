// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// BindDelegate<ADebugCameraController> @ 147aaca10

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
TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
::BindDelegate<ADebugCameraController>
          (TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
           *this,ADebugCameraController *param_1,pmf_e396c782 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  ADebugCameraController *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
  local_a0;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_a0.FuncDynDelegate.Object = (FInputAxisHandlerDynamicSignature *)0x0;
  local_a0.FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (&this->FuncDynDelegate != &local_a0.FuncDynDelegate) {
    (this->FuncDynDelegate).Object = (FInputAxisHandlerDynamicSignature *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FuncDynDelegate).SharedReferenceCount,
               &local_a0.FuncDynDelegate.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.FuncDynDelegate.SharedReferenceCount.ReferenceController);
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_50);
  local_38 = &local_b0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_b0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADebugCameraController____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADebugCameraController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar5[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADebugCameraController *)0x0)) {
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
    local_a0.FuncDelegate.Object = ___xmm_00000000000000000000000000000010;
    pTVar8 = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)&DAT_00000010;
    local_a0.FuncDelegate.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = 0;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TDelegate___A6AXM_ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[2]._padding_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_80);
    if (*(void **)&pTVar7[1].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7[1].SharedReferenceCount);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar7[1].SharedReferenceCount =
         local_b0.DelegateAllocator;
    local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar7[2]._padding_ = local_b0.DelegateSize;
    local_b0.DelegateSize = 0;
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    pTVar8 = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)(pTVar7 + 1);
    if (pTVar8 == (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0) {
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
    local_a0.FuncDelegate.SharedReferenceCount.ReferenceController = pTVar7;
    pTVar9 = pTVar7;
    local_a0.FuncDelegate.Object = pTVar8;
  }
  if (this != &local_a0) {
    (this->FuncDelegate).Object = pTVar8;
    local_a0.FuncDelegate.Object = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FuncDelegate).SharedReferenceCount,
               &local_a0.FuncDelegate.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.FuncDelegate.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_68);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// BindDelegate<ADebugCameraController> @ 147aacce0

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
TInputUnifiedDelegate<TDelegate<void___cdecl(enum_ETouchIndex::Type,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>,FInputTouchHandlerDynamicSignature>
::BindDelegate<ADebugCameraController>
          (void *this,ADebugCameraController *param_1,pmf_12c40d2c *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  ADebugCameraController *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  TReferenceControllerBase<1> *local_a0;
  FSharedReferencer<1> FStack_98;
  undefined8 local_90;
  FSharedReferencer<1> FStack_88;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_90 = 0;
  FStack_88.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)((longlong)this + 0x10) != &local_90) {
    *(undefined8 *)((longlong)this + 0x10) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 0x18),&FStack_88);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_88.ReferenceController);
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_50);
  local_38 = &local_b0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_b0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXW4Type_ETouchIndex__U__TVector_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADebugCameraController____A6AXW4Type_ETouchIndex__U__TVector_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADebugCameraController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar5[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADebugCameraController *)0x0)) {
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
    local_a0 = ___xmm_00000000000000000000000000000010;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_98.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = 0;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TDelegate___A6AXW4Type_ETouchIndex__U__TVector_N_Math_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[2]._padding_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_80);
    if (*(void **)&pTVar7[1].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7[1].SharedReferenceCount);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar7[1].SharedReferenceCount =
         local_b0.DelegateAllocator;
    local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar7[2]._padding_ = local_b0.DelegateSize;
    local_b0.DelegateSize = 0;
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    pTVar8 = pTVar7 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
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
    FStack_98.ReferenceController = pTVar7;
    pTVar9 = pTVar7;
    local_a0 = pTVar8;
  }
  if (this != &local_a0) {
    *(TReferenceControllerBase<1> **)this = pTVar8;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 8),&FStack_98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_98.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_68);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// BindDelegate<ADefaultPawn> @ 147aad320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
::BindDelegate<ADefaultPawn>
          (TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
           *this,ADefaultPawn *param_1,pmf_099752ad *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  ADefaultPawn *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
  local_a0;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_a0.FuncDynDelegate.Object = (FInputAxisHandlerDynamicSignature *)0x0;
  local_a0.FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (&this->FuncDynDelegate != &local_a0.FuncDynDelegate) {
    (this->FuncDynDelegate).Object = (FInputAxisHandlerDynamicSignature *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FuncDynDelegate).SharedReferenceCount,
               &local_a0.FuncDynDelegate.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.FuncDynDelegate.SharedReferenceCount.ReferenceController);
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_50);
  local_38 = &local_b0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_b0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADefaultPawn____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ADefaultPawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar5[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ADefaultPawn *)0x0)) {
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
    local_a0.FuncDelegate.Object = ___xmm_00000000000000000000000000000010;
    pTVar8 = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)&DAT_00000010;
    local_a0.FuncDelegate.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = 0;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TDelegate___A6AXM_ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[2]._padding_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_80);
    if (*(void **)&pTVar7[1].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7[1].SharedReferenceCount);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar7[1].SharedReferenceCount =
         local_b0.DelegateAllocator;
    local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar7[2]._padding_ = local_b0.DelegateSize;
    local_b0.DelegateSize = 0;
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    pTVar8 = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)(pTVar7 + 1);
    if (pTVar8 == (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0) {
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
    local_a0.FuncDelegate.SharedReferenceCount.ReferenceController = pTVar7;
    pTVar9 = pTVar7;
    local_a0.FuncDelegate.Object = pTVar8;
  }
  if (this != &local_a0) {
    (this->FuncDelegate).Object = pTVar8;
    local_a0.FuncDelegate.Object = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FuncDelegate).SharedReferenceCount,
               &local_a0.FuncDelegate.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.FuncDelegate.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_68);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// BindDelegate<APlayerController> @ 148339580

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
TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
::BindDelegate<APlayerController>
          (TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
           *this,APlayerController *param_1,pmf_59f4dd13 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  APlayerController *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
  local_a0;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_a0.FuncDynDelegate.Object = (FInputAxisHandlerDynamicSignature *)0x0;
  local_a0.FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (&this->FuncDynDelegate != &local_a0.FuncDynDelegate) {
    (this->FuncDynDelegate).Object = (FInputAxisHandlerDynamicSignature *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FuncDynDelegate).SharedReferenceCount,
               &local_a0.FuncDynDelegate.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.FuncDynDelegate.SharedReferenceCount.ReferenceController);
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_50);
  local_38 = &local_b0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_b0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAPlayerController____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (APlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar5[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (APlayerController *)0x0)) {
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
    local_a0.FuncDelegate.Object = ___xmm_00000000000000000000000000000010;
    pTVar8 = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)&DAT_00000010;
    local_a0.FuncDelegate.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = 0;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TDelegate___A6AXM_ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[2]._padding_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_80);
    if (*(void **)&pTVar7[1].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7[1].SharedReferenceCount);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar7[1].SharedReferenceCount =
         local_b0.DelegateAllocator;
    local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar7[2]._padding_ = local_b0.DelegateSize;
    local_b0.DelegateSize = 0;
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    pTVar8 = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)(pTVar7 + 1);
    if (pTVar8 == (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0) {
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
    local_a0.FuncDelegate.SharedReferenceCount.ReferenceController = pTVar7;
    pTVar9 = pTVar7;
    local_a0.FuncDelegate.Object = pTVar8;
  }
  if (this != &local_a0) {
    (this->FuncDelegate).Object = pTVar8;
    local_a0.FuncDelegate.Object = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FuncDelegate).SharedReferenceCount,
               &local_a0.FuncDelegate.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.FuncDelegate.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_68);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

