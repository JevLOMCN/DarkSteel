// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputDebugging
// Functions: 22

// CreateCopy @ 14f036550

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14f0365d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14f036620

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14f0366c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::`5'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14f036740

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::`5'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14f036790

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::`5'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14f036ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_1>_>
::Execute(void *this)

{
  FSlateApplication *this_00;
  TSharedRef<FTouchInputVisualizer,1> *pTVar1;
  TSharedPtr<IInputProcessor,1> local_28;
  TSharedRef<FTouchInputVisualizer,1> local_18;
  
  this_00 = FSlateApplication::Get();
  pTVar1 = TSharedFromThis<FTouchInputVisualizer,1>::AsShared
                     ((TSharedFromThis<FTouchInputVisualizer,1> *)
                      (*(longlong *)((longlong)this + 0x18) + 8),&local_18);
  local_28.Object = (IInputProcessor *)pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::RegisterInputPreProcessor(this_00,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// Execute @ 14f036c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_2>_>
::Execute(void *this)

{
  FSlateApplication *this_00;
  TSharedRef<FTouchInputVisualizer,1> *pTVar1;
  TSharedPtr<IInputProcessor,1> local_28;
  TSharedRef<FTouchInputVisualizer,1> local_18;
  
  this_00 = FSlateApplication::Get();
  pTVar1 = TSharedFromThis<FTouchInputVisualizer,1>::AsShared
                     ((TSharedFromThis<FTouchInputVisualizer,1> *)
                      (*(longlong *)((longlong)this + 0x18) + 8),&local_18);
  local_28.Object = (IInputProcessor *)pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::UnregisterInputPreProcessor(this_00,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ExecuteIfSafe @ 14f036ce0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  FSlateApplication *this_00;
  TSharedRef<FTouchInputVisualizer,1> *pTVar1;
  TSharedPtr<IInputProcessor,1> local_28;
  TSharedRef<FTouchInputVisualizer,1> local_18;
  
  this_00 = FSlateApplication::Get();
  pTVar1 = TSharedFromThis<FTouchInputVisualizer,1>::AsShared
                     ((TSharedFromThis<FTouchInputVisualizer,1> *)
                      (*(longlong *)((longlong)this + 0x18) + 8),&local_18);
  local_28.Object = (IInputProcessor *)pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::RegisterInputPreProcessor(this_00,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14f036d50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  FSlateApplication *this_00;
  TSharedRef<FTouchInputVisualizer,1> *pTVar1;
  TSharedPtr<IInputProcessor,1> local_28;
  TSharedRef<FTouchInputVisualizer,1> local_18;
  
  this_00 = FSlateApplication::Get();
  pTVar1 = TSharedFromThis<FTouchInputVisualizer,1>::AsShared
                     ((TSharedFromThis<FTouchInputVisualizer,1> *)
                      (*(longlong *)((longlong)this + 0x18) + 8),&local_18);
  local_28.Object = (IInputProcessor *)pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::UnregisterInputPreProcessor(this_00,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14f036e20

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14f036e30

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14f036e50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14f036e60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14f036e80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14f036e90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14f037030

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14f037040

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14f0370b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14f0370c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14f03a160

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14f03a170

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FTouchInputVisualizer::FTouchInputVisualizer'::__l5::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

