// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationBudgetAllocator
// Functions: 151

// OnCalculateSignificanceDelegate'' @ 1411c6e90

void __cdecl
`dynamic_initializer_for_'USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'USkeletalMeshComponentBudgeted::
         OnCalculateSignificanceDelegate__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_AlwaysTickFalloffAggression'' @ 1411c6eb0

void __cdecl _dynamic_initializer_for__CVarSkelBatch_AlwaysTickFalloffAggression__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_AlwaysTickFalloffAggression,L"a.Budget.AlwaysTickFalloffAggression",
             &GBudgetParameters.AlwaysTickFalloffAggression,
             L"Range [0.1, 0.9], Default = 0.8\nControls the rate at which \'always ticked\' components falloff under load.\nHigher values mean that we reduce the number of always ticking components by a larger amount when the allocated time budget is exceeded."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_AlwaysTickFalloffAggression__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_AutoCalculatedSignificanceMaxDistance'' @ 1411c6ff0

void __cdecl _dynamic_initializer_for__CVarSkelBatch_AutoCalculatedSignificanceMaxDistance__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_45>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_AutoCalculatedSignificanceMaxDistance,
             L"a.Budget.AutoCalculatedSignificanceMaxDistance",
             &GBudgetParameters.AutoCalculatedSignificanceMaxDistance,
             L"Range > 1.0, Default = 300.0\nControls the distance (in cm) at which auto-calculated significance for budgeted components bottoms out. Components within the distance 1 -> Max will have significance mapped 1 -> 0, outside of MaxDistance significance will be zero.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_AutoCalculatedSignificanceMaxDistance__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_Budget'' @ 1411c7130

void __cdecl _dynamic_initializer_for__CVarSkelBatch_Budget__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_Budget,L"a.Budget.BudgetMs",&GBudgetParameters.BudgetInMs,
             L"Values > 0.1, Default = 1.0\nThe time in milliseconds that we allocate for skeletal mesh work to be performed.\nWhen overbudget various other CVars come into play, such as a.Budget.AlwaysTickFalloffAggression and a.Budget.InterpolationFalloffAggression."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_Budget__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_BudgetFactorBeforeAggressiveReducedWork'' @ 1411c7270

void __cdecl _dynamic_initializer_for__CVarSkelBatch_BudgetFactorBeforeAggressiveReducedWork__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_42>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_BudgetFactorBeforeAggressiveReducedWork,
             L"a.Budget.BudgetFactorBeforeAggressiveReducedWork",
             &GBudgetParameters.BudgetFactorBeforeAggressiveReducedWork,
             L"Range > 1, Default = 2.0\nReduced work will be applied more rapidly when budget pressure goes over this amount.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_BudgetFactorBeforeAggressiveReducedWork__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_BudgetFactorBeforeReducedWork'' @ 1411c73b0

void __cdecl _dynamic_initializer_for__CVarSkelBatch_BudgetFactorBeforeReducedWork__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_37>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_BudgetFactorBeforeReducedWork,L"a.Budget.BudgetFactorBeforeReducedWork",
             &GBudgetParameters.BudgetFactorBeforeReducedWork,
             L"Range > 1, Default = 1.5\nReduced work will be delayed until budget pressure goes over this amount.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_BudgetFactorBeforeReducedWork__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_BudgetFactorBeforeReducedWorkEpsilon'' @ 1411c74f0

void __cdecl _dynamic_initializer_for__CVarSkelBatch_BudgetFactorBeforeReducedWorkEpsilon__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_38>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_BudgetFactorBeforeReducedWorkEpsilon,
             L"a.Budget.BudgetFactorBeforeReducedWorkEpsilon",
             &GBudgetParameters.BudgetFactorBeforeReducedWorkEpsilon,
             L"Range > 0.0, Default = 0.25\nIncreased work will be delayed until budget pressure goes under a.Budget.BudgetFactorBeforeReducedWork minus this amount.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_BudgetFactorBeforeReducedWorkEpsilon__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_BudgetPressureBeforeEmergencyReducedWork'' @ 1411c7630

void __cdecl
_dynamic_initializer_for__CVarSkelBatch_BudgetPressureBeforeEmergencyReducedWork__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_44>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_BudgetPressureBeforeEmergencyReducedWork,
             L"a.Budget.GBudgetPressureBeforeEmergencyReducedWork",
             &GBudgetParameters.BudgetPressureBeforeEmergencyReducedWork,
             L"Range > 0.0, Default = 2.5\nControls the budget pressure where emergency reduced work (applied to all components except those that are bAlwaysTick).\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_BudgetPressureBeforeEmergencyReducedWork__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_BudgetPressureSmoothingSpeed'' @ 1411c7770

void __cdecl _dynamic_initializer_for__CVarSkelBatch_BudgetPressureSmoothingSpeed__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_39>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_BudgetPressureSmoothingSpeed,L"a.Budget.BudgetPressureSmoothingSpeed",
             &GBudgetParameters.BudgetPressureSmoothingSpeed,
             L"Range > 0.0, Default = 3.0\nHow much to smooth the budget pressure value used to throttle reduced work.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_BudgetPressureSmoothingSpeed__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_DebugEnabled'' @ 1411c78b0

void __cdecl _dynamic_initializer_for__CVarSkelBatch_DebugEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_DebugEnabled,L"a.Budget.Debug.Enabled",&GAnimationBudgetDebugEnabled,
             L"Values: 0/1\nControls whether debug rendering (in builds that support it) is enabled for the animation budget allocator."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_DebugEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_Enabled'' @ 1411c7900

void __cdecl _dynamic_initializer_for__CVarSkelBatch_Enabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_Enabled,L"a.Budget.Enabled",&GAnimationBudgetEnabled,
             L"Values: 0/1\nControls whether the skeletal mesh batching system is enabled. Should be set when there are no running skeletal meshes."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_Enabled__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_Force'' @ 1411c7950

void __cdecl _dynamic_initializer_for__CVarSkelBatch_Force__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_Force,L"a.Budget.Debug.Force",&GAnimationBudgetDebugForce,
             L"Values: 0/1\nDefault: 0\nTurns on forced rate/interp/reduced controls. These override any budget-driven values."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_Force__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_ForceInterpolation'' @ 1411c79a0

void __cdecl _dynamic_initializer_for__CVarSkelBatch_ForceInterpolation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_ForceInterpolation,L"a.Budget.Debug.Force.Interp",
             &GAnimationBudgetDebugForceInterpolation,
             L"Values: 0/1\nDefault: 0\nForces interpolation on when a.Budget.Debug.Force is enabled."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_ForceInterpolation__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_ForceRate'' @ 1411c79f0

void __cdecl _dynamic_initializer_for__CVarSkelBatch_ForceRate__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_ForceRate,L"a.Budget.Debug.Force.Rate",&GAnimationBudgetDebugForceRate,
             L"Values: >= 1\nDefault: 4\nForces all components to update at the specifed rate when a.Budget.Debug.Force is enabled."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_ForceRate__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_ForceReducedWork'' @ 1411c7b30

void __cdecl _dynamic_initializer_for__CVarSkelBatch_ForceReducedWork__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_ForceReducedWork,L"a.Budget.Debug.Force.Reduced",
             &GAnimationBudgetDebugForceReducedWork,
             L"Values: 0/1\nDefault: 0\nForces reduced work on when a.Budget.Debug.Force is enabled."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_ForceReducedWork__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_InitialEstimatedWorkUnitTime'' @ 1411c7b80

void __cdecl _dynamic_initializer_for__CVarSkelBatch_InitialEstimatedWorkUnitTime__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_34>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_InitialEstimatedWorkUnitTime,L"a.Budget.InitialEstimatedWorkUnitTime",
             &GBudgetParameters.InitialEstimatedWorkUnitTimeMs,
             L"Values > 0.0, Default = 0.08\nControls the time in milliseconds we expect, on average, for a skeletal mesh component to execute.\nThe value only applies for the first tick of a component, after which we use the real time the tick takes.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_InitialEstimatedWorkUnitTime__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_InterpolationFalloffAggression'' @ 1411c7cc0

void __cdecl _dynamic_initializer_for__CVarSkelBatch_InterpolationFalloffAggression__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_30>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_InterpolationFalloffAggression,
             L"a.Budget.InterpolationFalloffAggression",
             &GBudgetParameters.InterpolationFalloffAggression,
             L"Range [0.1, 0.9], Default = 0.4\nControls the rate at which interpolated components falloff under load.\nHigher values mean that we reduce the number of interpolated components by a larger amount when the allocated time budget is exceeded.\nComponents are only interpolated when the time budget is exceeded."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_InterpolationFalloffAggression__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_InterpolationMaxRate'' @ 1411c7e00

void __cdecl _dynamic_initializer_for__CVarSkelBatch_InterpolationMaxRate__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_31>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_InterpolationMaxRate,L"a.Budget.InterpolationMaxRate",
             &GBudgetParameters.InterpolationMaxRate,
             L"Values > 1, Default = 6\nControls the rate at which ticks happen when interpolating.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_InterpolationMaxRate__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_InterpolationTickMultiplier'' @ 1411c7f40

void __cdecl _dynamic_initializer_for__CVarSkelBatch_InterpolationTickMultiplier__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_33>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_InterpolationTickMultiplier,L"a.Budget.InterpolationTickMultiplier",
             &GBudgetParameters.InterpolationTickMultiplier,
             L"Range [0.1, 0.9], Default = 0.75\nControls the expected value an amortized interpolated tick will take compared to a \'normal\' tick.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_InterpolationTickMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_MaxInterpolatedComponents'' @ 1411c8080

void __cdecl _dynamic_initializer_for__CVarSkelBatch_MaxInterpolatedComponents__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_32>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_MaxInterpolatedComponents,L"a.Budget.MaxInterpolatedComponents",
             &GBudgetParameters.MaxInterpolatedComponents,
             L"Range >= 0, Default = 16\nMax number of components to inteprolate before we start throttling.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_MaxInterpolatedComponents__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_MaxTickRate'' @ 1411c81c0

void __cdecl _dynamic_initializer_for__CVarSkelBatch_MaxTickRate__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_MaxTickRate,L"a.Budget.MaxTickRate",&GBudgetParameters.MaxTickRate,
             L"Values >= 1, Default = 10\nThe maximum tick rate we allow. If this is set then we can potentially go over budget, but keep quality of individual meshes to a reasonable level.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_MaxTickRate__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_MaxTickedOffsreenComponents'' @ 1411c8300

void __cdecl _dynamic_initializer_for__CVarSkelBatch_MaxTickedOffsreenComponents__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_35>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_MaxTickedOffsreenComponents,L"a.Budget.MaxTickedOffsreen",
             &GBudgetParameters.MaxTickedOffsreenComponents,
             L"Values >= 1, Default = 4\nThe maximum number of offscreen components we tick (most significant first)\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_MaxTickedOffsreenComponents__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_MinQuality'' @ 1411c8440

void __cdecl _dynamic_initializer_for__CVarSkelBatch_MinQuality__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_MinQuality,L"a.Budget.MinQuality",&GBudgetParameters.MinQuality,
             L"Values [0.0, 1.0], Default = 0.0\nThe minimum quality metric allowed. Quality is determined simply by NumComponentsTickingThisFrame / NumComponentsThatWeNeedToTick.\nIf this is anything other than 0.0 then we can potentially go over our time budget."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_MinQuality__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_ReducedWorkThrottleMaxInFrames'' @ 1411c8580

void __cdecl _dynamic_initializer_for__CVarSkelBatch_ReducedWorkThrottleMaxInFrames__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_41>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_ReducedWorkThrottleMaxInFrames,
             L"a.Budget.ReducedWorkThrottleMaxInFrames",
             &GBudgetParameters.ReducedWorkThrottleMaxInFrames,
             L"Range [1, 255], Default = 20\nPrevents reduced work from changing too often due to system and load noise. Max value used when under budget pressure.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_ReducedWorkThrottleMaxInFrames__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_ReducedWorkThrottleMaxPerFrame'' @ 1411c86c0

void __cdecl _dynamic_initializer_for__CVarSkelBatch_ReducedWorkThrottleMaxPerFrame__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_43>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_ReducedWorkThrottleMaxPerFrame,
             L"a.Budget.ReducedWorkThrottleMaxPerFrame",
             &GBudgetParameters.ReducedWorkThrottleMaxPerFrame,
             L"Range [1, 255], Default = 4\nControls the max number of components that are switched to/from reduced work per tick.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_ReducedWorkThrottleMaxPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_ReducedWorkThrottleMinInFrames'' @ 1411c8800

void __cdecl _dynamic_initializer_for__CVarSkelBatch_ReducedWorkThrottleMinInFrames__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_40>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_ReducedWorkThrottleMinInFrames,
             L"a.Budget.ReducedWorkThrottleMinInFrames",
             &GBudgetParameters.ReducedWorkThrottleMinInFrames,
             L"Range [1, 255], Default = 2\nPrevents reduced work from changing too often due to system and load noise. Min value used when over budget pressure (i.e. aggressive reduction).\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_ReducedWorkThrottleMinInFrames__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_ShowAddresses'' @ 1411c8940

void __cdecl _dynamic_initializer_for__CVarSkelBatch_ShowAddresses__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_ShowAddresses,L"a.Budget.Debug.ShowAddresses",
             &GAnimationBudgetDebugShowAddresses,
             L"Values: 0/1\nControls whether debug rendering shows addresses of component data for debugging."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_ShowAddresses__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_StateChangeThrottleInFrames'' @ 1411c8990

void __cdecl _dynamic_initializer_for__CVarSkelBatch_StateChangeThrottleInFrames__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_36>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_StateChangeThrottleInFrames,L"a.Budget.StateChangeThrottleInFrames",
             &GBudgetParameters.StateChangeThrottleInFrames,
             L"Range [1, 128], Default = 30\nPrevents throttle values from changing too often due to system and load noise.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_StateChangeThrottleInFrames__);
  return;
}

// `dynamic_initializer_for_'CVarSkelBatch_WorkUnitSmoothingSpeed'' @ 1411c8ad0

void __cdecl _dynamic_initializer_for__CVarSkelBatch_WorkUnitSmoothingSpeed__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkelBatch_WorkUnitSmoothingSpeed,L"a.Budget.WorkUnitSmoothingSpeed",
             &GBudgetParameters.WorkUnitSmoothingSpeed,
             L"Values > 0.1, Default = 5.0\nThe speed at which the average work unit converges on the measured amount.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkelBatch_WorkUnitSmoothingSpeed__);
  return;
}

// `dynamic_initializer_for_'GOnCVarParametersChanged'' @ 1411c8c10

void __cdecl _dynamic_initializer_for__GOnCVarParametersChanged__(void)

{
  atexit(_dynamic_atexit_destructor_for__GOnCVarParametersChanged__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAnimationBudgetAllocator'' @ 1411c8c30

void __cdecl _dynamic_initializer_for__ModuleRegistrantAnimationBudgetAllocator__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AnimationBudgetAllocator";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AnimationBudgetAllocator",0x18);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FAnimationBudgetAllocatorModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationBudgetAllocator_AlwaysTick'' @ 1411c8c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationBudgetAllocator_AlwaysTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationBudgetAllocator_AlwaysTick ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_AlwaysTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationBudgetAllocator_AlwaysTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationBudgetAllocator_AlwaysTick,
               *pFVar1,L"Always Tick","STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
               L"Animation Budget Allocator",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationBudgetAllocator_AverageWorkUnitTime'' @ 1411c8d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_AnimationBudgetAllocator_AverageWorkUnitTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationBudgetAllocator_AverageWorkUnitTime ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_AverageWorkUnitTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationBudgetAllocator_AverageWorkUnitTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_AnimationBudgetAllocator_AverageWorkUnitTime,*pFVar1,
               L"Average Work Unit (ms)","STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
               L"Animation Budget Allocator",true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationBudgetAllocator_Budget'' @ 1411c8da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationBudgetAllocator_Budget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationBudgetAllocator_Budget ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Budget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationBudgetAllocator_Budget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationBudgetAllocator_Budget,*pFVar1,
               L"Budget","STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
               L"Animation Budget Allocator",true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationBudgetAllocator_Demand'' @ 1411c8e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationBudgetAllocator_Demand__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationBudgetAllocator_Demand ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Demand>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationBudgetAllocator_Demand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationBudgetAllocator_Demand,*pFVar1,
               L"Demand","STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
               L"Animation Budget Allocator",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationBudgetAllocator_Interpolated'' @ 1411c8ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationBudgetAllocator_Interpolated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationBudgetAllocator_Interpolated ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Interpolated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationBudgetAllocator_Interpolated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationBudgetAllocator_Interpolated,
               *pFVar1,L"Interpolated","STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
               L"Animation Budget Allocator",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationBudgetAllocator_NumRegisteredComponents'' @ 1411c8f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_AnimationBudgetAllocator_NumRegisteredComponents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationBudgetAllocator_NumRegisteredComponents ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_NumRegisteredComponents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationBudgetAllocator_NumRegisteredComponents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_AnimationBudgetAllocator_NumRegisteredComponents,*pFVar1,
               L"Num Registered Components","STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
               L"Animation Budget Allocator",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationBudgetAllocator_NumTickedComponents'' @ 1411c8fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_AnimationBudgetAllocator_NumTickedComponents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationBudgetAllocator_NumTickedComponents ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_NumTickedComponents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationBudgetAllocator_NumTickedComponents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_AnimationBudgetAllocator_NumTickedComponents,*pFVar1,
               L"Num Ticked Components","STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
               L"Animation Budget Allocator",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationBudgetAllocator_SmoothedBudgetPressure'' @ 1411c9070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_AnimationBudgetAllocator_SmoothedBudgetPressure__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationBudgetAllocator_SmoothedBudgetPressure ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_SmoothedBudgetPressure>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationBudgetAllocator_SmoothedBudgetPressure");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_AnimationBudgetAllocator_SmoothedBudgetPressure,*pFVar1,
               L"SmoothedBudgetPressure","STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
               L"Animation Budget Allocator",true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationBudgetAllocator_Throttled'' @ 1411c9100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationBudgetAllocator_Throttled__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationBudgetAllocator_Throttled ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Throttled>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationBudgetAllocator_Throttled");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationBudgetAllocator_Throttled,*pFVar1
               ,L"Throttled","STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
               L"Animation Budget Allocator",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationBudgetAllocator_Update'' @ 1411c9190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationBudgetAllocator_Update__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationBudgetAllocator_Update ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Update>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationBudgetAllocator_Update");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationBudgetAllocator_Update,*pFVar1,
               L"InitialTick","STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
               L"Animation Budget Allocator",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h__Script_AnimationBudgetAllocator_1361926903'' @ 1411c9220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h__Script_AnimationBudgetAllocator_1361926903__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationBudgetAllocator",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h__Script_AnimationBudgetAllocator_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_AnimationBudgetAllocatorParameters_h__Script_AnimationBudgetAllocator_1262778551'' @ 1411c9260

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_AnimationBudgetAllocatorParameters_h__Script_AnimationBudgetAllocator_1262778551__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationBudgetAllocator",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_AnimationBudgetAllocatorParameters_h__Script_AnimationBudgetAllocator_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_SkeletalMeshComponentBudgeted_h__Script_AnimationBudgetAllocator_1581885649'' @ 1411c92a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_SkeletalMeshComponentBudgeted_h__Script_AnimationBudgetAllocator_1581885649__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationBudgetAllocator",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_SkeletalMeshComponentBudgeted_h__Script_AnimationBudgetAllocator_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AnimationBudgetAllocator'' @ 1411c92e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AnimationBudgetAllocator__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x9ef68b07;
  local_res8[0].DeclarationsHash = 0x38e0457f;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AnimationBudgetAllocator,
             L"/Script/AnimationBudgetAllocator",
             &Z_Registration_Info_UPackage__Script_AnimationBudgetAllocator,local_res8);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_AnimationBudget'' @ 1411c9320

void __cdecl _dynamic_initializer_for___GCsvCategory_AnimationBudget__(void)

{
  FString::operator=(&_GCsvCategory_AnimationBudget.Name,L"AnimationBudget");
  _GCsvCategory_AnimationBudget.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_AnimationBudget.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_AnimationBudget__);
  return;
}

// Z_Construct_UPackage__Script_AnimationBudgetAllocator @ 14a68bf90

UPackage * __cdecl Z_Construct_UPackage__Script_AnimationBudgetAllocator(void)

{
  if (Z_Registration_Info_UPackage__Script_AnimationBudgetAllocator.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AnimationBudgetAllocator.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AnimationBudgetAllocator.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters @ 14a68c010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationBudgetAllocatorParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationBudgetAllocatorParameters.InnerSingleton
               ,&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationBudgetAllocatorParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationBudgetAllocatorParameters.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14a68c090

void * __cdecl
Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationBudgetAllocatorParameters,&UE::CoreUObject::Private::Construct<FAnimationBudgetAllocatorParameters>,&UE::CoreUObject::Private::ConstructForTests<FAnimationBudgetAllocatorParameters>,&UE::CoreUObject::Private::Destruct<FAnimationBudgetAllocatorParameters>,&UE::CoreUObject::Private::Copy<FAnimationBudgetAllocatorParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a68c0d0

void * __thiscall
FAnimationBudgetAllocatorModule::_scalar_deleting_destructor_
          (FAnimationBudgetAllocatorModule *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->WorldAnimationBudgetAllocators).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorldAnimationBudgetAllocators).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldAnimationBudgetAllocators);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// Z_Construct_UClass_USkeletalMeshComponentBudgeted @ 14a68c150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USkeletalMeshComponentBudgeted(void)

{
  if (Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.OuterSingleton,
               &Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.OuterSingleton;
}

// NewProp_bInAutoRegisterWithBudgetAllocator_SetBit @ 14a68c190

void __cdecl
Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::
NewProp_bInAutoRegisterWithBudgetAllocator_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator @ 14a68c1a0

UFunction * __cdecl
Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoRegisterWithBudgetAllocator_SetBit @ 14a68c1e0

void __cdecl
Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::
NewProp_bAutoRegisterWithBudgetAllocator_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1088) = *(byte *)((longlong)param_1 + 0x1088) | 1;
  return;
}

// NewProp_bAutoCalculateSignificance_SetBit @ 14a68c1f0

void __cdecl
Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoCalculateSignificance_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1088) = *(byte *)((longlong)param_1 + 0x1088) | 2;
  return;
}

// NewProp_bShouldUseActorRenderedFlag_SetBit @ 14a68c200

void __cdecl
Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::
NewProp_bShouldUseActorRenderedFlag_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1088) = *(byte *)((longlong)param_1 + 0x1088) | 4;
  return;
}

// Z_Construct_UClass_UAnimationBudgetBlueprintLibrary @ 14a68c2d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimationBudgetBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 14a68c310

void __cdecl
Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::
NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget @ 14a68c320

UFunction * __cdecl
Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters @ 14a68c360

UFunction * __cdecl
Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a68c3a0

void * __thiscall
IAnimationBudgetAllocatorModule::_scalar_deleting_destructor_
          (IAnimationBudgetAllocatorModule *this,uint param_1)

{
  *this = (IAnimationBudgetAllocatorModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68c4b0

void * __thiscall
FDefaultGameModuleImpl::_scalar_deleting_destructor_(FDefaultGameModuleImpl *this,uint param_1)

{
  *this = (FDefaultGameModuleImpl)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14a68c4e4

/* [thunk]:public: virtual void * __ptr64 __cdecl FAnimationBudgetAllocatorModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FAnimationBudgetAllocatorModule::_vector_deleting_destructor__adjustor_8__
          (FAnimationBudgetAllocatorModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAnimationBudgetAllocatorModule *)
                      &this[-1].WorldAnimationBudgetAllocators.field_0x48,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a68c710

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68c970

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68cbe0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68ce40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68d0a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68d310

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68d580

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_30>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_30>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68d7e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_31>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_31>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68da30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_32>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_32>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68dca0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_33>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_33>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68df00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_34>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_34>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68e160

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_35>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_35>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68e3d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_36>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_36>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68e630

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_37>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_37>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68e890

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_38>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_38>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68eaf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_39>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_39>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68ed60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_40>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_40>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68efd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_41>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_41>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68f230

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_42>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_42>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68f4a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_43>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_43>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68f700

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_44>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_44>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a68f980

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_45>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_45>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FAnimationBudgetAllocator::OnHUDPostRender'::__l15::<lambda_1>_>_> @ 14a691270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAnimationBudgetAllocator::OnHUDPostRender_::__l15::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_protected:_void___cdecl_FAnimationBudgetAllocator::OnHUDPostRender(AHUD_*,UCanvas_*)_::_15_::<lambda_1>_>
          param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14a69138c:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `FAnimationBudgetAllocator::OnHUDPostRender'::__l15::<lambda_1>::
                          operator()(param_4.Predicate,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `FAnimationBudgetAllocator::OnHUDPostRender'::__l15::<lambda_1>::operator()
                                  (param_4.Predicate,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `FAnimationBudgetAllocator::OnHUDPostRender'::__l15::<lambda_1>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FAnimationBudgetAllocator::OnHUDPostRender'::__l15::<lambda_1>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14a69138c;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l2::<lambda_4>_>_> @ 14a691470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAnimationBudgetAllocator::QueueSortedComponentIndices_::__l2::<lambda_4>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_protected:_void___cdecl_FAnimationBudgetAllocator::QueueSortedComponentIndices(float)_::_2_::<lambda_4>_>
          param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14a69158c:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l2::<lambda_4>
                          ::operator()(param_4.Predicate,param_1[(longlong)iVar8 + 2],param_1[iVar7]
                                      );
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l2::<lambda_4>::
                        operator()(param_4.Predicate,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l2::<lambda_4>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l2::<lambda_4>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14a69158c;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// InternalConstructor<UAnimationBudgetBlueprintLibrary> @ 14a691670

void __cdecl InternalConstructor<UAnimationBudgetBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAnimationBudgetBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<USkeletalMeshComponentBudgeted> @ 14a6916a0

void __cdecl InternalConstructor<USkeletalMeshComponentBudgeted>(FObjectInitializer *param_1)

{
  USkeletalMeshComponent *this;
  longlong lVar1;
  
  this = (USkeletalMeshComponent *)param_1->Obj;
  if (this != (USkeletalMeshComponent *)0x0) {
    USkeletalMeshComponent::USkeletalMeshComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this->_padding_ = (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__ILODSyncInterface__;
    this->_padding_ =
         (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__IClothSimulationDataProvider__;
    this->_padding_ = (longlong)&___7USkeletalMeshComponentBudgeted__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    lVar1 = this[1]._padding_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(byte *)&this[1]._padding_ = (byte)lVar1 & 0xf9 | 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAnimationBudgetBlueprintLibrary> @ 14a691780

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimationBudgetBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimationBudgetBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimationBudgetBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USkeletalMeshComponentBudgeted> @ 14a691830

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USkeletalMeshComponentBudgeted>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USkeletalMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USkeletalMeshComponentBudgeted::GetPrivateStaticClass();
  this = (USkeletalMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USkeletalMeshComponent *)0x0) {
    USkeletalMeshComponent::USkeletalMeshComponent(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__ILODSyncInterface__;
    this->_padding_ =
         (longlong)&USkeletalMeshComponentBudgeted::_vftable__for__IClothSimulationDataProvider__;
    this->_padding_ = (longlong)&___7USkeletalMeshComponentBudgeted__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FAnimationBudgetAllocator::OnHUDPostRender'::__l15::<lambda_1>_>_> @ 14a691980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAnimationBudgetAllocator::OnHUDPostRender_::__l15::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_protected:_void___cdecl_FAnimationBudgetAllocator::OnHUDPostRender(AHUD_*,UCanvas_*)_::_15_::<lambda_1>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppiVar7 = &local_348;
    do {
      piVar4 = ppiVar7[1];
      piVar5 = *ppiVar7;
      local_358 = ppiVar7[2];
      iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
      piVar10 = piVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14a691a40:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar8 = piVar4 + 1;
          iVar1 = piVar10[iVar3 >> 1];
          piVar10[iVar3 >> 1] = *piVar10;
          *piVar10 = iVar1;
          piVar5 = piVar10;
LAB_14a691a70:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x00014a691a79;
          goto LAB_14a691a90;
        }
        for (; piVar8 = piVar10, piVar5 = piVar10, piVar10 < piVar4; piVar4 = piVar4 + -1) {
          while (piVar5 = piVar5 + 1, piVar5 <= piVar4) {
            bVar2 = `FAnimationBudgetAllocator::OnHUDPostRender'::__l15::<lambda_1>::operator()
                              (param_4.Predicate,*piVar8,*piVar5);
            if (bVar2) {
              piVar8 = piVar5;
            }
          }
          iVar6 = *piVar8;
          *piVar8 = *piVar4;
          *piVar4 = iVar6;
        }
        goto LAB_14a691b54;
      }
LAB_14a691b43:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAnimationBudgetAllocator::OnHUDPostRender_::__l15::<lambda_1>_>_>
                (piVar5,iVar3,param_3,param_4);
LAB_14a691b54:
      ppiVar7 = ppiVar7 + -3;
    } while (&local_348 <= ppiVar7);
  }
  return;
code_r0x00014a691a79:
  bVar2 = `FAnimationBudgetAllocator::OnHUDPostRender'::__l15::<lambda_1>::operator()
                    (param_4.Predicate,*piVar10,*piVar5);
  if (!bVar2) goto LAB_14a691a70;
LAB_14a691a90:
  do {
    piVar9 = piVar8;
    piVar8 = piVar9 + -1;
    if (piVar8 <= piVar10) break;
    bVar2 = `FAnimationBudgetAllocator::OnHUDPostRender'::__l15::<lambda_1>::operator()
                      (param_4.Predicate,*piVar8,*piVar10);
  } while (!bVar2);
  if (piVar5 <= piVar8) {
    iVar3 = *piVar5;
    *piVar5 = *piVar8;
    *piVar8 = iVar3;
    goto LAB_14a691a70;
  }
  iVar3 = *piVar10;
  iVar6 = iVar6 + -1;
  *piVar10 = *piVar8;
  *piVar8 = iVar3;
  if ((longlong)((longlong)piVar8 + (-4 - (longlong)piVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar4 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar4) {
      *ppiVar7 = piVar5;
      ppiVar7[1] = piVar4;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar8 <= piVar10 + 1) goto LAB_14a691b54;
    piVar4 = piVar9 + -2;
    piVar5 = piVar10;
  }
  else {
    if (piVar10 + 1 < piVar8) {
      *ppiVar7 = piVar10;
      ppiVar7[1] = piVar9 + -2;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar4 <= piVar5) goto LAB_14a691b54;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar10 = piVar5;
  if (iVar6 == 0) goto LAB_14a691b43;
  goto LAB_14a691a40;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l2::<lambda_4>_>_> @ 14a691c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAnimationBudgetAllocator::QueueSortedComponentIndices_::__l2::<lambda_4>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_protected:_void___cdecl_FAnimationBudgetAllocator::QueueSortedComponentIndices(float)_::_2_::<lambda_4>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppiVar7 = &local_348;
    do {
      piVar4 = ppiVar7[1];
      piVar5 = *ppiVar7;
      local_358 = ppiVar7[2];
      iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
      piVar10 = piVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14a691cd0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar8 = piVar4 + 1;
          iVar1 = piVar10[iVar3 >> 1];
          piVar10[iVar3 >> 1] = *piVar10;
          *piVar10 = iVar1;
          piVar5 = piVar10;
LAB_14a691d00:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x00014a691d09;
          goto LAB_14a691d20;
        }
        for (; piVar8 = piVar10, piVar5 = piVar10, piVar10 < piVar4; piVar4 = piVar4 + -1) {
          while (piVar5 = piVar5 + 1, piVar5 <= piVar4) {
            bVar2 = `FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l2::<lambda_4>::
                    operator()(param_4.Predicate,*piVar8,*piVar5);
            if (bVar2) {
              piVar8 = piVar5;
            }
          }
          iVar6 = *piVar8;
          *piVar8 = *piVar4;
          *piVar4 = iVar6;
        }
        goto LAB_14a691de4;
      }
LAB_14a691dd3:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAnimationBudgetAllocator::QueueSortedComponentIndices_::__l2::<lambda_4>_>_>
                (piVar5,iVar3,param_3,param_4);
LAB_14a691de4:
      ppiVar7 = ppiVar7 + -3;
    } while (&local_348 <= ppiVar7);
  }
  return;
code_r0x00014a691d09:
  bVar2 = `FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l2::<lambda_4>::operator()
                    (param_4.Predicate,*piVar10,*piVar5);
  if (!bVar2) goto LAB_14a691d00;
LAB_14a691d20:
  do {
    piVar9 = piVar8;
    piVar8 = piVar9 + -1;
    if (piVar8 <= piVar10) break;
    bVar2 = `FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l2::<lambda_4>::operator()
                      (param_4.Predicate,*piVar8,*piVar10);
  } while (!bVar2);
  if (piVar5 <= piVar8) {
    iVar3 = *piVar5;
    *piVar5 = *piVar8;
    *piVar8 = iVar3;
    goto LAB_14a691d00;
  }
  iVar3 = *piVar10;
  iVar6 = iVar6 + -1;
  *piVar10 = *piVar8;
  *piVar8 = iVar3;
  if ((longlong)((longlong)piVar8 + (-4 - (longlong)piVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar4 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar4) {
      *ppiVar7 = piVar5;
      ppiVar7[1] = piVar4;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar8 <= piVar10 + 1) goto LAB_14a691de4;
    piVar4 = piVar9 + -2;
    piVar5 = piVar10;
  }
  else {
    if (piVar10 + 1 < piVar8) {
      *ppiVar7 = piVar10;
      ppiVar7[1] = piVar9 + -2;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar4 <= piVar5) goto LAB_14a691de4;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar10 = piVar5;
  if (iVar6 == 0) goto LAB_14a691dd3;
  goto LAB_14a691cd0;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14a69317c

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FAnimationBudgetAllocator::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FAnimationBudgetAllocator::_vector_deleting_destructor__adjustor_8__
          (FAnimationBudgetAllocator *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAnimationBudgetAllocator *)&this[-1].CurrentFrameOffset,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14a69318c

/* [thunk]:public: virtual void * __ptr64 __cdecl USkeletalMeshComponentBudgeted::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
USkeletalMeshComponentBudgeted::_vector_deleting_destructor__adjustor_592__
          (USkeletalMeshComponentBudgeted *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USkeletalMeshComponentBudgeted *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14a6931a0

/* [thunk]:public: virtual void * __ptr64 __cdecl USkeletalMeshComponentBudgeted::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
USkeletalMeshComponentBudgeted::_vector_deleting_destructor__adjustor_600__
          (USkeletalMeshComponentBudgeted *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USkeletalMeshComponentBudgeted *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14a6931b4

/* [thunk]:public: virtual void * __ptr64 __cdecl USkeletalMeshComponentBudgeted::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
USkeletalMeshComponentBudgeted::_vector_deleting_destructor__adjustor_608__
          (USkeletalMeshComponentBudgeted *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USkeletalMeshComponentBudgeted *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a6931c8

/* [thunk]:public: virtual void * __ptr64 __cdecl USkeletalMeshComponentBudgeted::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USkeletalMeshComponentBudgeted::_vector_deleting_destructor__adjustor_40__
          (USkeletalMeshComponentBudgeted *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USkeletalMeshComponentBudgeted *)&this[-1].OnReduceWorkDelegate.field_0x8,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1424}' @ 14a6931d8

/* [thunk]:public: virtual void * __ptr64 __cdecl USkeletalMeshComponentBudgeted::`vector deleting
   destructor'`adjustor{1424}' (unsigned int) __ptr64 */

void * __thiscall
USkeletalMeshComponentBudgeted::_vector_deleting_destructor__adjustor_1424__
          (USkeletalMeshComponentBudgeted *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USkeletalMeshComponentBudgeted *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{2368}' @ 14a6931ec

/* [thunk]:public: virtual void * __ptr64 __cdecl USkeletalMeshComponentBudgeted::`vector deleting
   destructor'`adjustor{2368}' (unsigned int) __ptr64 */

void * __thiscall
USkeletalMeshComponentBudgeted::_vector_deleting_destructor__adjustor_2368__
          (USkeletalMeshComponentBudgeted *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USkeletalMeshComponentBudgeted *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a693200

void * __thiscall
IBaseDelegateInstance<void___cdecl(AHUD_*,UCanvas_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AHUD_*,UCanvas_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a693230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimationBudgetAllocator,void___cdecl(AHUD_*,UCanvas_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAnimationBudgetAllocator,void___cdecl(AHUD_*,UCanvas_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a693260

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimationBudgetAllocator,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a693290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimationBudgetAllocator,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAnimationBudgetAllocator,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a6932c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimationBudgetAllocatorModule,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAnimationBudgetAllocatorModule,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a6932f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimationBudgetAllocatorModule,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAnimationBudgetAllocatorModule,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a693320

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AHUD_*,UCanvas_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AHUD_*,UCanvas_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a693350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FAnimationBudgetAllocator::_scalar_deleting_destructor_
          (FAnimationBudgetAllocator *this,uint param_1)

{
  ~FAnimationBudgetAllocator(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a693390

void * __thiscall
UAnimationBudgetBlueprintLibrary::_scalar_deleting_destructor_
          (UAnimationBudgetBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimationBudgetBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a6933f0

void * __thiscall
USkeletalMeshComponentBudgeted::_scalar_deleting_destructor_
          (USkeletalMeshComponentBudgeted *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__ILODSyncInterface__;
  this->_padding_ = (longlong)&_vftable__for__IClothSimulationDataProvider__;
  this->_padding_ = (longlong)&___7USkeletalMeshComponentBudgeted__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReduceWorkDelegate);
  USkeletalMeshComponent::~USkeletalMeshComponent((USkeletalMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1090);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAnimationBudgetAllocatorParameters @ 14a695d30

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationBudgetAllocatorParameters(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationBudgetAllocator_init @ 14a695d40

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationBudgetAllocator_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationBudgetBlueprintLibrary @ 14a695d50

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationBudgetBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSkeletalMeshComponentBudgeted @ 14a695d60

void __cdecl EmptyLinkFunctionForGeneratedCodeSkeletalMeshComponentBudgeted(void)

{
  return;
}

// FindRootPrerequisite @ 14a6963c0

USkeletalMeshComponentBudgeted * __cdecl
FindRootPrerequisite(USkeletalMeshComponentBudgeted *param_1)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponentBudgeted *pUVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AnimationBudgetAllocator\\Source\\AnimationBudgetAllocator\\Private\\AnimationBudgetAllocator.cpp"
                       ,0x3ac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (USkeletalMeshComponentBudgeted *)(*pcVar1)();
      return pUVar3;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`FindRootPrerequisite'::__l2::_dynamic_atexit_destructor_for__VisitedComponents__);
      _Init_thread_footer(&_TSS0);
    }
  }
  VisitedComponents.ArrayNum = 0;
  if ((VisitedComponents.ArrayMax < 0) && (VisitedComponents.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&VisitedComponents.AllocatorInstance,0,&VisitedComponents.ArrayMax);
  }
  pUVar3 = FindRootPrerequisiteRecursive(param_1,&VisitedComponents);
  return pUVar3;
}

// FindRootPrerequisiteRecursive @ 14a6964a0

USkeletalMeshComponentBudgeted * __cdecl
FindRootPrerequisiteRecursive
          (USkeletalMeshComponentBudgeted *param_1,
          TArray<USkeletalMeshComponentBudgeted_*,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  USkeletalMeshComponentBudgeted *pUVar7;
  USkeletalMeshComponentBudgeted *pUVar8;
  UClass *pUVar9;
  FScriptContainerElement *pFVar10;
  FWeakObjectPtr *pFVar11;
  FWeakObjectPtr *this;
  USkeletalMeshComponentBudgeted *local_res8;
  undefined1 local_res10 [8];
  
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_res8 = param_1;
  if (((pFVar3 <= (FScriptContainerElement *)&local_res8) &&
      ((FScriptContainerElement *)&local_res8 < pFVar3 + (longlong)param_2->ArrayMax * 8)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar7 = (USkeletalMeshComponentBudgeted *)(*pcVar4)();
    return pUVar7;
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(USkeletalMeshComponentBudgeted **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_res8;
  iVar6 = (int)local_res8->_padding_;
  plVar1 = &local_res8->_padding_;
  this = (FWeakObjectPtr *)local_res8->_padding_;
  pFVar11 = this + (longlong)iVar6 * 2;
  pUVar7 = local_res8;
  do {
    if ((int)*plVar1 != iVar6) {
      `TCheckedPointerIterator<FTickPrerequisite,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this == pFVar11) {
      return pUVar7;
    }
    pUVar8 = (USkeletalMeshComponentBudgeted *)FWeakObjectPtr::Get(this);
    if (pUVar8 != (USkeletalMeshComponentBudgeted *)0x0) {
      pUVar9 = USkeletalMeshComponentBudgeted::StaticClass();
      iVar2 = (int)pUVar9->_padding_;
      if ((iVar2 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar9->_padding_)) {
        pFVar10 = (param_2->AllocatorInstance).Data;
        pFVar3 = pFVar10 + (longlong)param_2->ArrayNum * 8;
        for (; pFVar10 != pFVar3; pFVar10 = pFVar10 + 8) {
          if (*(USkeletalMeshComponentBudgeted **)pFVar10 == pUVar8) goto LAB_14a6965ec;
        }
        pUVar7 = FindRootPrerequisiteRecursive(pUVar8,param_2);
      }
    }
LAB_14a6965ec:
    this = this + 2;
  } while( true );
}

// Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_NoRegister @ 14a69a990

UClass * __cdecl Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationBudgetAllocator",L"AnimationBudgetBlueprintLibrary",
               &Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.InnerSingleton,
               UAnimationBudgetBlueprintLibrary::
               StaticRegisterNativesUAnimationBudgetBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationBudgetBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAnimationBudgetBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister @ 14a69aa50

UClass * __cdecl Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationBudgetAllocator",L"SkeletalMeshComponentBudgeted",
               &Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.InnerSingleton,
               USkeletalMeshComponentBudgeted::StaticRegisterNativesUSkeletalMeshComponentBudgeted,
               0x1090,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMeshComponentBudgeted>,
               InternalVTableHelperCtorCaller<USkeletalMeshComponentBudgeted>,local_res8,
               USkeletalMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.InnerSingleton;
}

// IMPLEMENT_MODULE_AnimationBudgetAllocator @ 14a69aeb0

void __cdecl IMPLEMENT_MODULE_AnimationBudgetAllocator(void)

{
  return;
}

// OnCalculateSignificanceDelegate'' @ 15041faa0

void __cdecl
`dynamic_atexit_destructor_for_'USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate__
          (void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate,
             (FWriteAccessScope *)&local_28);
  if ((USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate._16_4_ != 0) &&
     (USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate._8_8_
    )();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)
               &USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate.field_0x8,0,0,0x10);
    USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate._8_8_ != 0) {
    FMemory::Free((void *)USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_AlwaysTickFalloffAggression'' @ 15041fb40

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_AlwaysTickFalloffAggression__(void)

{
  CVarSkelBatch_AlwaysTickFalloffAggression._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_AlwaysTickFalloffAggression);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_AutoCalculatedSignificanceMaxDistance'' @ 15041fb60

void __cdecl
_dynamic_atexit_destructor_for__CVarSkelBatch_AutoCalculatedSignificanceMaxDistance__(void)

{
  CVarSkelBatch_AutoCalculatedSignificanceMaxDistance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_AutoCalculatedSignificanceMaxDistance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_Budget'' @ 15041fb80

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_Budget__(void)

{
  CVarSkelBatch_Budget._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkelBatch_Budget);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_BudgetFactorBeforeAggressiveReducedWork'' @ 15041fba0

void __cdecl
_dynamic_atexit_destructor_for__CVarSkelBatch_BudgetFactorBeforeAggressiveReducedWork__(void)

{
  CVarSkelBatch_BudgetFactorBeforeAggressiveReducedWork._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_BudgetFactorBeforeAggressiveReducedWork);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_BudgetFactorBeforeReducedWork'' @ 15041fbc0

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_BudgetFactorBeforeReducedWork__(void)

{
  CVarSkelBatch_BudgetFactorBeforeReducedWork._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_BudgetFactorBeforeReducedWork);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_BudgetFactorBeforeReducedWorkEpsilon'' @ 15041fbe0

void __cdecl
_dynamic_atexit_destructor_for__CVarSkelBatch_BudgetFactorBeforeReducedWorkEpsilon__(void)

{
  CVarSkelBatch_BudgetFactorBeforeReducedWorkEpsilon._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_BudgetFactorBeforeReducedWorkEpsilon);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_BudgetPressureBeforeEmergencyReducedWork'' @ 15041fc00

void __cdecl
_dynamic_atexit_destructor_for__CVarSkelBatch_BudgetPressureBeforeEmergencyReducedWork__(void)

{
  CVarSkelBatch_BudgetPressureBeforeEmergencyReducedWork._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_BudgetPressureBeforeEmergencyReducedWork);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_BudgetPressureSmoothingSpeed'' @ 15041fc20

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_BudgetPressureSmoothingSpeed__(void)

{
  CVarSkelBatch_BudgetPressureSmoothingSpeed._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_BudgetPressureSmoothingSpeed);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_DebugEnabled'' @ 15041fc40

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_DebugEnabled__(void)

{
  CVarSkelBatch_DebugEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkelBatch_DebugEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_Enabled'' @ 15041fc60

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_Enabled__(void)

{
  CVarSkelBatch_Enabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkelBatch_Enabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_Force'' @ 15041fc80

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_Force__(void)

{
  CVarSkelBatch_Force._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkelBatch_Force);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_ForceInterpolation'' @ 15041fca0

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_ForceInterpolation__(void)

{
  CVarSkelBatch_ForceInterpolation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkelBatch_ForceInterpolation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_ForceRate'' @ 15041fcc0

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_ForceRate__(void)

{
  CVarSkelBatch_ForceRate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkelBatch_ForceRate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_ForceReducedWork'' @ 15041fce0

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_ForceReducedWork__(void)

{
  CVarSkelBatch_ForceReducedWork._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkelBatch_ForceReducedWork);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_InitialEstimatedWorkUnitTime'' @ 15041fd00

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_InitialEstimatedWorkUnitTime__(void)

{
  CVarSkelBatch_InitialEstimatedWorkUnitTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_InitialEstimatedWorkUnitTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_InterpolationFalloffAggression'' @ 15041fd20

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_InterpolationFalloffAggression__(void)

{
  CVarSkelBatch_InterpolationFalloffAggression._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_InterpolationFalloffAggression);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_InterpolationMaxRate'' @ 15041fd40

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_InterpolationMaxRate__(void)

{
  CVarSkelBatch_InterpolationMaxRate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkelBatch_InterpolationMaxRate)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_InterpolationTickMultiplier'' @ 15041fd60

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_InterpolationTickMultiplier__(void)

{
  CVarSkelBatch_InterpolationTickMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_InterpolationTickMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_MaxInterpolatedComponents'' @ 15041fd80

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_MaxInterpolatedComponents__(void)

{
  CVarSkelBatch_MaxInterpolatedComponents._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_MaxInterpolatedComponents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_MaxTickRate'' @ 15041fda0

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_MaxTickRate__(void)

{
  CVarSkelBatch_MaxTickRate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkelBatch_MaxTickRate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_MaxTickedOffsreenComponents'' @ 15041fdc0

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_MaxTickedOffsreenComponents__(void)

{
  CVarSkelBatch_MaxTickedOffsreenComponents._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_MaxTickedOffsreenComponents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_MinQuality'' @ 15041fde0

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_MinQuality__(void)

{
  CVarSkelBatch_MinQuality._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkelBatch_MinQuality);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_ReducedWorkThrottleMaxInFrames'' @ 15041fe00

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_ReducedWorkThrottleMaxInFrames__(void)

{
  CVarSkelBatch_ReducedWorkThrottleMaxInFrames._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_ReducedWorkThrottleMaxInFrames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_ReducedWorkThrottleMaxPerFrame'' @ 15041fe20

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_ReducedWorkThrottleMaxPerFrame__(void)

{
  CVarSkelBatch_ReducedWorkThrottleMaxPerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_ReducedWorkThrottleMaxPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_ReducedWorkThrottleMinInFrames'' @ 15041fe40

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_ReducedWorkThrottleMinInFrames__(void)

{
  CVarSkelBatch_ReducedWorkThrottleMinInFrames._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_ReducedWorkThrottleMinInFrames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_ShowAddresses'' @ 15041fe60

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_ShowAddresses__(void)

{
  CVarSkelBatch_ShowAddresses._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkelBatch_ShowAddresses);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_StateChangeThrottleInFrames'' @ 15041fe80

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_StateChangeThrottleInFrames__(void)

{
  CVarSkelBatch_StateChangeThrottleInFrames._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_StateChangeThrottleInFrames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkelBatch_WorkUnitSmoothingSpeed'' @ 15041fea0

void __cdecl _dynamic_atexit_destructor_for__CVarSkelBatch_WorkUnitSmoothingSpeed__(void)

{
  CVarSkelBatch_WorkUnitSmoothingSpeed._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkelBatch_WorkUnitSmoothingSpeed);
  return;
}

// `dynamic_atexit_destructor_for_'GOnCVarParametersChanged'' @ 15041fec0

void __cdecl _dynamic_atexit_destructor_for__GOnCVarParametersChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)GOnCVarParametersChanged._8_8_,
             GOnCVarParametersChanged._16_4_);
  if (GOnCVarParametersChanged._8_8_ != 0) {
    FMemory::Free((void *)GOnCVarParametersChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&GOnCVarParametersChanged);
  return;
}

// `dynamic_atexit_destructor_for_'VisitedComponents'' @ 15041ff00

void __cdecl `FindRootPrerequisite'::__l2::_dynamic_atexit_destructor_for__VisitedComponents__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = VisitedComponents.AllocatorInstance.Data;
  if (VisitedComponents.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (VisitedComponents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_AnimationBudget'' @ 15041ff20

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_AnimationBudget__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_AnimationBudget.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_AnimationBudget.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_AnimationBudget.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

