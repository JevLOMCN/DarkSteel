// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 880

// CreateCopy @ 1415b9960

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  undefined1 *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  this_00 = &param_1->field_0x8;
  local_10 = this_00;
  if (*(int *)&param_1->field_0x10 != 2) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,2,0x10);
    *(undefined4 *)&param_1->field_0x10 = 2;
  }
  puVar1 = *(undefined8 **)this_00;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1415b9a00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)&param_1->field_0x8 != 2) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_1,0,2,0x10);
    *(undefined4 *)&param_1->field_0x8 = 2;
  }
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1415b9a70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  if (*(int *)&param_1->field_0x30 != 2) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_1->field_0x28,0,2,0x10);
    *(undefined4 *)&param_1->field_0x30 = 2;
  }
  puVar1 = *(undefined8 **)&param_1->field_0x28;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1415b9b30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  undefined1 *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  this_00 = &param_1->field_0x8;
  local_10 = this_00;
  if (*(int *)&param_1->field_0x10 != 2) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,2,0x10);
    *(undefined4 *)&param_1->field_0x10 = 2;
  }
  puVar1 = *(undefined8 **)this_00;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1415b9bd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)&param_1->field_0x8 != 2) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_1,0,2,0x10);
    *(undefined4 *)&param_1->field_0x8 = 2;
  }
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1415b9c40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  if (*(int *)&param_1->field_0x30 != 2) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_1->field_0x28,0,2,0x10);
    *(undefined4 *)&param_1->field_0x30 = 2;
  }
  puVar1 = *(undefined8 **)&param_1->field_0x28;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1415c0f70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>_>
::Execute(void *this,float param_1)

{
  `FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 1415c0f80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FFileCache::FFileCache'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 1415c1020

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 1415c1040

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FFileCache::FFileCache'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1415c5060

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1415c5070

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1415c79f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1415c7a00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1415c8320

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1415c8330

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1415c8370

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1415c8380

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1415c9b40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1415c9b50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141606260

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141606270

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FFileCache::FFileCache'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 141630ed0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_6>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCrashOverrideParameters___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_6>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141630f50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCrashOverrideParameters___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_6>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141630f90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_6>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCrashOverrideParameters___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_6>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141631030

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_3>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1416310b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 1416310f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_3>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141631190

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_4>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_4>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141631210

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_4>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141631250

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_4>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_4>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1416312f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_5>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_5>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141631370

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_5>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 1416313b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_5>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_5>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141631450

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_1>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0__FRangedConsoleVariable_H__QEAA_AEBVFString__HHHPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1416314d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0__FRangedConsoleVariable_H__QEAA_AEBVFString__HHHPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141631520

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_1>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0__FRangedConsoleVariable_H__QEAA_AEBVFString__HHHPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1416315c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_1>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0__FRangedConsoleVariable_M__QEAA_AEBVFString__MMMPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141631640

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0__FRangedConsoleVariable_M__QEAA_AEBVFString__MMMPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141631690

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_1>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0__FRangedConsoleVariable_M__QEAA_AEBVFString__MMMPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141631730

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_2>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___0__FRangedConsoleVariable_H__QEAA_AEBVFString__HHHPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1416317b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___0__FRangedConsoleVariable_H__QEAA_AEBVFString__HHHPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141631800

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_2>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___0__FRangedConsoleVariable_H__QEAA_AEBVFString__HHHPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1416318a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_2>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___0__FRangedConsoleVariable_M__QEAA_AEBVFString__MMMPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141631920

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___0__FRangedConsoleVariable_M__QEAA_AEBVFString__MMMPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141631970

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_2>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___0__FRangedConsoleVariable_M__QEAA_AEBVFString__MMMPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141631a10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::`80'::<lambda_2>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141631a90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::`80'::<lambda_2>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 141631ae0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::`80'::<lambda_2>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141631b80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_9>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EForkProcessRole___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_9>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141631c00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EForkProcessRole___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_9>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141631c40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_9>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EForkProcessRole___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_9>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141631ce0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l57::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`57'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141631d60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l57::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`57'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141631da0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l57::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`57'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141631e40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_7>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_7>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141631ec0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_7>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141631f00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_7>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_7>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141631fa0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_8>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_8>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141632020

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_8>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141632060

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_8>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_8>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141632100

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_2>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141632180

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 1416321c0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_2>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141638d10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_6>_>
::Execute(void *this,FCrashOverrideParameters *param_1)

{
  `FGenericCrashContext::Initialize'::__l2::<lambda_6>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 141638d20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_3>_>
::Execute(void *this,FString *param_1)

{
  wchar_t *_Source;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.UserActivityHint,_Source,0x3f);
  NCached::Session.UserActivityHint[0x3f] = L'\0';
  return;
}

// Execute @ 141638d60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_4>_>
::Execute(void *this,FString *param_1)

{
  wchar_t *_Source;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.GameSessionID,_Source,0x3f);
  NCached::Session.GameSessionID[0x3f] = L'\0';
  return;
}

// Execute @ 141638da0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_5>_>
::Execute(void *this,FString *param_1)

{
  wchar_t *_Source;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.GameStateName,_Source,0x3f);
  NCached::Session.GameStateName[0x3f] = L'\0';
  return;
}

// Execute @ 141638de0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_1>_>
::Execute(void *this,IConsoleVariable *param_1)

{
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
            (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xe8))();
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::Broadcast
            (this_00,*(IConsoleVariable **)((longlong)this + 0x18));
  return;
}

// Execute @ 141638e10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_1>_>
::Execute(void *this,IConsoleVariable *param_1)

{
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
            (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xe8))();
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::Broadcast
            (this_00,*(IConsoleVariable **)((longlong)this + 0x18));
  return;
}

// Execute @ 141638e40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_2>_>
::Execute(void *this,IConsoleVariable *param_1)

{
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
            (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xe8))();
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::Broadcast
            (this_00,*(IConsoleVariable **)((longlong)this + 0x18));
  return;
}

// Execute @ 141638e70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_2>_>
::Execute(void *this,IConsoleVariable *param_1)

{
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
            (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xe8))();
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::Broadcast
            (this_00,*(IConsoleVariable **)((longlong)this + 0x18));
  return;
}

// Execute @ 141638ea0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>_>
::Execute(void *this,wchar_t *param_1,IConsoleObject *param_2)

{
  `IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 141638eb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_9>_>
::Execute(void *this,EForkProcessRole param_1)

{
  `FGenericCrashContext::Initialize'::__l2::<lambda_9>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 141638ec0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l57::<lambda_1>_>
::Execute(void *this)

{
  `FGenericCrashContext::Initialize'::__l57::<lambda_1>::operator()((void *)((longlong)this + 0x18))
  ;
  return;
}

// Execute @ 141638ed0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_7>_>
::Execute(void *this)

{
  wchar_t *_Source;
  
  _Source = L"Commandlet";
  if (!PRIVATE_GIsRunningCommandlet) {
    _Source = L"Game";
  }
  wcsncpy(NCached::Session.EngineMode,_Source,0x3f);
  NCached::Session.EngineMode[0x3f] = L'\0';
  return;
}

// Execute @ 141638f20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_8>_>
::Execute(void *this,bool param_1)

{
  wchar_t *_Source;
  
  _Source = L"Dirty";
  if (param_1) {
    _Source = L"Vanilla";
  }
  wcsncpy(NCached::Session.EngineModeEx,_Source,0x3f);
  NCached::Session.EngineModeEx[0x3f] = L'\0';
  return;
}

// Execute @ 141638f70

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_2>_>
::Execute(void *this,float param_1)

{
  bool bVar1;
  
  bVar1 = `FGenericCrashContext::Initialize'::__l2::<lambda_2>::operator()
                    ((void *)((longlong)this + 0x18),param_1);
  return bVar1;
}

// ExecuteIfSafe @ 141639620

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_6>_>
::ExecuteIfSafe(void *this,FCrashOverrideParameters *param_1)

{
  `FGenericCrashContext::Initialize'::__l2::<lambda_6>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 141639640

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,FString *param_1)

{
  wchar_t *_Source;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.UserActivityHint,_Source,0x3f);
  NCached::Session.UserActivityHint[0x3f] = L'\0';
  return true;
}

// ExecuteIfSafe @ 141639680

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this,FString *param_1)

{
  wchar_t *_Source;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.GameSessionID,_Source,0x3f);
  NCached::Session.GameSessionID[0x3f] = L'\0';
  return true;
}

// ExecuteIfSafe @ 1416396c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_5>_>
::ExecuteIfSafe(void *this,FString *param_1)

{
  wchar_t *_Source;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.GameStateName,_Source,0x3f);
  NCached::Session.GameStateName[0x3f] = L'\0';
  return true;
}

// ExecuteIfSafe @ 141639700

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,IConsoleVariable *param_1)

{
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
            (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xe8))();
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::Broadcast
            (this_00,*(IConsoleVariable **)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 141639730

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,IConsoleVariable *param_1)

{
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
            (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xe8))();
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::Broadcast
            (this_00,*(IConsoleVariable **)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 141639760

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,IConsoleVariable *param_1)

{
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
            (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xe8))();
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::Broadcast
            (this_00,*(IConsoleVariable **)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 141639790

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,IConsoleVariable *param_1)

{
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
            (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xe8))();
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::Broadcast
            (this_00,*(IConsoleVariable **)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 1416397c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>_>
::ExecuteIfSafe(void *this,wchar_t *param_1,IConsoleObject *param_2)

{
  `IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 1416397e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_9>_>
::ExecuteIfSafe(void *this,EForkProcessRole param_1)

{
  `FGenericCrashContext::Initialize'::__l2::<lambda_9>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 141639800

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l57::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FGenericCrashContext::Initialize'::__l57::<lambda_1>::operator()((void *)((longlong)this + 0x18))
  ;
  return true;
}

// ExecuteIfSafe @ 141639820

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_7>_>
::ExecuteIfSafe(void *this)

{
  wchar_t *_Source;
  
  _Source = L"Commandlet";
  if (!PRIVATE_GIsRunningCommandlet) {
    _Source = L"Game";
  }
  wcsncpy(NCached::Session.EngineMode,_Source,0x3f);
  NCached::Session.EngineMode[0x3f] = L'\0';
  return true;
}

// ExecuteIfSafe @ 141639870

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_8>_>
::ExecuteIfSafe(void *this,bool param_1)

{
  wchar_t *_Source;
  
  _Source = L"Dirty";
  if (param_1) {
    _Source = L"Vanilla";
  }
  wcsncpy(NCached::Session.EngineModeEx,_Source,0x3f);
  NCached::Session.EngineModeEx[0x3f] = L'\0';
  return true;
}

// ExecuteIfSafe @ 1416398c0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `FGenericCrashContext::Initialize'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14163eb90

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14163eba0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14163ebb0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14163ebc0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14163ebd0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14163ebe0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14163ebf0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14163ec00

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14163ec10

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14163ec20

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_9>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14163ec30

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l57::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14163ec40

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_7>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14163ec50

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_8>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14163ec60

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 141643e00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643e10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643e20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643e30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643e40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643e50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643e60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643e70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643e80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643e90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_9>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643ea0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l57::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643eb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_7>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643ec0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_8>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643ed0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1416471f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_6>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141647200

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141647210

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141647220

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141647230

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141647240

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141647250

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141647260

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141647270

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141647280

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_9>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141647290

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l57::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1416472a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_7>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1416472b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_8>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1416472c0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1416478d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1416478e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1416478f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141647900

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141647910

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141647920

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141647930

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141647940

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141647950

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141647960

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_9>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141647970

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l57::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141647980

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_7>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141647990

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_8>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1416479a0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14164a240

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14164a250

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14164a260

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14164a270

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14164a280

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14164a290

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14164a2a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14164a2b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14164a2c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14164a2d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_9>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14164a2e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l57::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14164a2f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_7>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14164a300

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_8>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14164a310

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141665af0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665b00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665b10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665b20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665b30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665b40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665b50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665b60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665b70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665b80

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_9>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665b90

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l57::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665ba0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_7>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665bb0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_8>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665bc0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14166bb30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14166bb40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14166bb50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14166bb60

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14166bb70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14166bb80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14166bb90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14166bc30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14166bcb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14166bcf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
         FOutputDevice *param_3)

{
  ::<lambda_5>::operator()(&this->Functor,param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 14166bd00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
               FOutputDevice *param_3)

{
  ::<lambda_5>::operator()(&this->Functor,param_1,param_2,param_3);
  return true;
}

// TryGetBoundFunctionName @ 14166bd50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14166bd60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14166bd70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14166bd80

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14166bd90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14166bda0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14166bdb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14166be50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14166bed0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14166bf10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  ::<lambda_6>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 14166bf20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  ::<lambda_6>::operator()(&this->Functor,param_1);
  return true;
}

// TryGetBoundFunctionName @ 14166c980

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>::
TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14166c9c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>::GetUObject
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>
           *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14166c9d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>::
GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14166c9e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>::
GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14166c9f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>::
HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>
              *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14166ca00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>::
IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>
                *this)

{
  return true;
}

// CreateCopy @ 14166ca10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>::CreateCopy
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14166cab0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>::CreateCopy
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14166cb30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>::CreateCopy
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14166cbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>::Execute
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>
           *this)

{
  FLowLevelMemTracker *pFVar1;
  
  pFVar1 = FLowLevelMemTracker::Get();
  if (pFVar1->bAutoPublish == false) {
    pFVar1->bPublishSingleFrame = true;
  }
  else if (1 < (byte)LogHAL._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
    return;
  }
  return;
}

// ExecuteIfSafe @ 14166cc00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>::
ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>
              *this)

{
  FLowLevelMemTracker *pFVar1;
  
  pFVar1 = FLowLevelMemTracker::Get();
  if (pFVar1->bAutoPublish == false) {
    pFVar1->bPublishSingleFrame = true;
  }
  else if (1 < (byte)LogHAL._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
    return true;
  }
  return true;
}

// TryGetBoundFunctionName @ 14166cc80

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14166cc90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14166cca0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14166ccb0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14166ccc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14166ccd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14166cce0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14166cd80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14166ce00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14166ce40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
         FOutputDevice *param_3)

{
  ::<lambda_8>::operator()(&this->Functor,param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 14166ce50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
               FOutputDevice *param_3)

{
  ::<lambda_8>::operator()(&this->Functor,param_1,param_2,param_3);
  return true;
}

// CreateCopy @ 14168d070

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::__l101::<lambda_2>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::`101'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14168d0f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::__l101::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::`101'::<lambda_2>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14168d130

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::__l101::<lambda_2>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::`101'::<lambda_2>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141692380

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::__l101::<lambda_2>_>
::Execute(void *this)

{
  code *UNRECOVERED_JUMPTABLE;
  FGameThreadHitchHeartBeatThreaded *pFVar1;
  
  pFVar1 = FGameThreadHitchHeartBeatThreaded::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000141692397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pFVar1,UNRECOVERED_JUMPTABLE);
  return;
}

// ExecuteIfSafe @ 141692420

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::__l101::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  FGameThreadHitchHeartBeatThreaded *pFVar1;
  
  pFVar1 = FGameThreadHitchHeartBeatThreaded::Get();
  (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141699270

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::__l101::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 141699aa0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::__l101::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1416a1d20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::__l101::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1416a2190

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::__l101::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1416b0ca0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::__l101::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1416c33b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::__l101::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1417bfc50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy,`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy__V<lambda_1>__CD___ProcessConfigAndCommandLine_FLogSuppressionImplementation__EEAAXXZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1417bfcd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy,`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy__V<lambda_1>__CD___ProcessConfigAndCommandLine_FLogSuppressionImplementation__EEAAXXZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1417bfd20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy,`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy__V<lambda_1>__CD___ProcessConfigAndCommandLine_FLogSuppressionImplementation__EEAAXXZ___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1417bfdc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0FIoDispatcherImpl__QEAA__N_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1417bfe40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0FIoDispatcherImpl__QEAA__N_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1417bfe90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0FIoDispatcherImpl__QEAA__N_Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1417bff30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::Initialize'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultTSDelegateUserPolicy__V<lambda_1>__1__Initialize_FIoDispatcherImpl__QEAAXXZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1417bffb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::Initialize'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultTSDelegateUserPolicy__V<lambda_1>__1__Initialize_FIoDispatcherImpl__QEAAXXZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1417c0000

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::Initialize'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultTSDelegateUserPolicy__V<lambda_1>__1__Initialize_FIoDispatcherImpl__QEAAXXZ___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1417c00a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_2>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultTSDelegateUserPolicy__V<lambda_2>__1___0FIoDispatcherImpl__QEAA__N_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1417c0120

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultTSDelegateUserPolicy__V<lambda_2>__1___0FIoDispatcherImpl__QEAA__N_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1417c0170

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_2>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultTSDelegateUserPolicy__V<lambda_2>__1___0FIoDispatcherImpl__QEAA__N_Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1417cbad0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy,`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>_>
::Execute(void *this,FString *param_1,
         TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  `FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 1417cbae0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 1417cbaf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::Initialize'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FIoDispatcherImpl::Initialize'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 1417cbb00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_2>_>
::Execute(void *this)

{
  *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x200) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001417cbb19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)((longlong)this + 0x18) + 0x88) + 0x10))();
  return;
}

// ExecuteIfSafe @ 1417cbc00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy,`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>_>
::ExecuteIfSafe(void *this,FString *param_1,
               TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  `FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 1417cbc20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 1417cbc40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::Initialize'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FIoDispatcherImpl::Initialize'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 1417cbc60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x200) = 1;
  (**(code **)(**(longlong **)(*(longlong *)((longlong)this + 0x18) + 0x88) + 0x10))();
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1417d1b60

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy,`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1417d1b70

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1417d1b80

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::Initialize'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1417d1b90

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1417d4cf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy,`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1417d4d00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1417d4d10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::Initialize'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1417d4d20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1417d88f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy,`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1417d8900

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1417d8910

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::Initialize'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1417d8920

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1417d9960

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy,`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1417d9970

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1417d9980

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::Initialize'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1417d9990

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1417de630

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy,`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1417de640

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1417de650

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::Initialize'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1417de660

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14180a150

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy,`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14180a160

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14180a170

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::Initialize'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14180a180

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14180e660

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>::
TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14180e670

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>::GetUObject
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14180e680

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>::
GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14180e690

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>::
GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14180e6a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>::
HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>
              *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14180e6b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>::
IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>
                *this)

{
  return true;
}

// CreateCopy @ 14180e6c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>::CreateCopy
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14180e760

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>::CreateCopy
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14180e7e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>::CreateCopy
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14180e820

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>::Execute
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this)

{
  GEnsureResetState = GEnsureResetState + '\x01';
  return;
}

// ExecuteIfSafe @ 14180e830

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>::
ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>
              *this)

{
  GEnsureResetState = GEnsureResetState + '\x01';
  return true;
}

// TryGetBoundFunctionName @ 14183e290

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14183e2a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14183e2b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14183e2c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14183e2d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14183e2e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14183e2f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14183e390

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14183e410

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14183e450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
         FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1->ArrayNum < 1) {
    FOutputDevice::Log(param_3,L"Expected 0/1 argument");
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 8) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = *(wchar_t **)pFVar1;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar3);
  if (bVar2) {
    if (GCycleStatsShouldEmitNamedEvents == 0) {
      GCycleStatsShouldEmitNamedEvents = 1;
      return;
    }
  }
  else if (0 < GCycleStatsShouldEmitNamedEvents) {
    GCycleStatsShouldEmitNamedEvents = 0;
    return;
  }
  return;
}

// ExecuteIfSafe @ 14183e4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_3>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
               FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1->ArrayNum < 1) {
    FOutputDevice::Log(param_3,L"Expected 0/1 argument");
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = *(wchar_t **)pFVar1;
    }
    bVar2 = FToBoolHelper::FromCStringWide(pwVar3);
    if (bVar2) {
      if (GCycleStatsShouldEmitNamedEvents == 0) {
        GCycleStatsShouldEmitNamedEvents = 1;
        return true;
      }
    }
    else if (0 < GCycleStatsShouldEmitNamedEvents) {
      GCycleStatsShouldEmitNamedEvents = 0;
      return true;
    }
  }
  return true;
}

// TryGetBoundFunctionName @ 14183e580

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14183e590

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14183e5a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14183e5b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14183e5c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14183e5d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14183e5e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14183e680

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14183e700

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14183e740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
         FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  
  if (param_1->ArrayNum < 1) {
    FOutputDevice::Log(param_3,L"Expected on/off argument");
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 8) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = *(wchar_t **)pFVar1;
  }
  GShouldEmitVerboseNamedEvents = FToBoolHelper::FromCStringWide(pwVar2);
  if ((GShouldEmitVerboseNamedEvents) && (GCycleStatsShouldEmitNamedEvents == 0)) {
    GCycleStatsShouldEmitNamedEvents = 1;
    return;
  }
  return;
}

// ExecuteIfSafe @ 14183e7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_4>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
               FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  
  if (param_1->ArrayNum < 1) {
    FOutputDevice::Log(param_3,L"Expected on/off argument");
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = *(wchar_t **)pFVar1;
    }
    GShouldEmitVerboseNamedEvents = FToBoolHelper::FromCStringWide(pwVar2);
    if ((GShouldEmitVerboseNamedEvents) && (GCycleStatsShouldEmitNamedEvents == 0)) {
      GCycleStatsShouldEmitNamedEvents = 1;
      return true;
    }
  }
  return true;
}

// CreateCopy @ 141867cc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::__l2::<lambda_1>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TArray_EV__TSizedDefaultAllocator__0CA_____0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141867d40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TArray_EV__TSizedDefaultAllocator__0CA_____0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141867d90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::__l2::<lambda_1>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TArray_EV__TSizedDefaultAllocator__0CA_____0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141867e30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXPEAE_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141867eb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXPEAE_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141867f00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXPEAE_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14186c840

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::__l2::<lambda_1>_>
::Execute(void *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
         TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014186c84d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x18))(param_1,param_2);
  return;
}

// Execute @ 14186c860

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::__l2::<lambda_1>_>
::Execute(void *this,uchar *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014186c867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x18))(param_1);
  return;
}

// ExecuteIfSafe @ 14186c9d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
               TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  (**(code **)((longlong)this + 0x18))(param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14186c9f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,uchar *param_1)

{
  (**(code **)((longlong)this + 0x18))(param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141872af0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141872b00

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 141874700

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141874710

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 141877510

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141877520

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141878070

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141878080

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14187adf0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14187ae00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141894490

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`RegisterSigningKeyCallback'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1418944a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy,`RegisterEncryptionKeyCallback'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1418d3770

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1418d3800

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
    return;
  }
  return;
}

// CreateCopy @ 1418d3860

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)(puVar3 + 4),
               (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1418d3910

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1418d3990

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1418d39e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1418d3a80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::__l2::<lambda_1>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1418d3b00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1418d3b50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::__l2::<lambda_1>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1418d3bf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy,TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EDelayedRegisterRunPhase___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXW4EDelayedRegisterRunPhase___ZUFDefaultDelegateUserPolicy__V__TFunction___A6AXW4EDelayedRegisterRunPhase___Z____V__6B_
    ;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1418d3ca0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy,TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EDelayedRegisterRunPhase___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXW4EDelayedRegisterRunPhase___ZUFDefaultDelegateUserPolicy__V__TFunction___A6AXW4EDelayedRegisterRunPhase___Z____V__6B_
    ;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((longlong)this + 0x48);
      }
                    /* WARNING: Could not recover jumptable at 0x0001418d3d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)();
      return;
    }
  }
  return;
}

// CreateCopy @ 1418d3d20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy,TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EDelayedRegisterRunPhase___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AXW4EDelayedRegisterRunPhase___ZUFDefaultDelegateUserPolicy__V__TFunction___A6AXW4EDelayedRegisterRunPhase___Z____V__6B_
    ;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar4)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1418d3de0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1418d3e60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 1418d3ea0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1418d3f40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1418d3fd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
    return;
  }
  return;
}

// CreateCopy @ 1418d4030

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_2>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 4),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1418d9bf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_1>_>
::Execute(void *this,int param_1)

{
  if ((param_1 == 0) || (param_1 == 10)) {
    FSerializedUATProcess::bHasSucceededOnce = true;
  }
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::ExecuteIfBound
            ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20),
             param_1);
  FSerializedUATProcess::LaunchNext(*(FSerializedUATProcess **)((longlong)this + 0x18));
  return;
}

// Execute @ 1418d9c30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>_>
::Execute(void *this,wchar_t *param_1,IConsoleObject *param_2)

{
  `ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 1418d9c40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::__l2::<lambda_1>_>
::Execute(void *this,wchar_t *param_1,IConsoleObject *param_2)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar1;
  FString local_18;
  
  uVar1 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
  if ((uVar1 & 8) == 0) {
    this_00 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
               ((longlong)this + 0x18);
    ::FString::FString(&local_18,param_1);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              (this_00,(FString *)&stack0x00000008,(bool *)&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Execute @ 1418d9cb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy,TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_>
::Execute(void *this,EDelayedRegisterRunPhase param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  EDelayedRegisterRunPhase local_res10 [24];
  
  local_res10[0] = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  pcVar1 = *(code **)((longlong)this + 0x20);
  plVar3 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x48);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res10);
  return;
}

// Execute @ 1418d9d00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::__l2::<lambda_1>_>
::Execute(void *this)

{
  TLockFreeFixedSizeAllocator<65536,64,FThreadSafeCounter> *this_00;
  
  this_00 = &FPageAllocator::Instance->TheAllocator;
  if (FPageAllocator::Instance == (FPageAllocator *)0x0) {
    this_00 = &FPageAllocator::Construct()->TheAllocator;
  }
  TLockFreeFixedSizeAllocator<65536,64,FThreadSafeCounter>::Trim(this_00);
  return;
}

// Execute @ 1418d9d30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_2>_>
::Execute(void *this)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  FSerializedUATProcess::LaunchNext(*(FSerializedUATProcess **)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 1418d9f20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,int param_1)

{
  if ((param_1 == 0) || (param_1 == 10)) {
    FSerializedUATProcess::bHasSucceededOnce = true;
  }
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::ExecuteIfBound
            ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20),
             param_1);
  FSerializedUATProcess::LaunchNext(*(FSerializedUATProcess **)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 1418d9f60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,wchar_t *param_1,IConsoleObject *param_2)

{
  `ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 1418d9f80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,wchar_t *param_1,IConsoleObject *param_2)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar1;
  FString local_18;
  
  uVar1 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
  if ((uVar1 & 8) == 0) {
    this_00 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
               ((longlong)this + 0x18);
    ::FString::FString(&local_18,param_1);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              (this_00,(FString *)&stack0x00000008,(bool *)&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// ExecuteIfSafe @ 1418d9ff0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy,TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_>
::ExecuteIfSafe(void *this,EDelayedRegisterRunPhase param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  EDelayedRegisterRunPhase local_res10 [24];
  
  local_res10[0] = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  pcVar1 = *(code **)((longlong)this + 0x20);
  plVar3 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x48);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res10);
  return true;
}

// ExecuteIfSafe @ 1418da040

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TLockFreeFixedSizeAllocator<65536,64,FThreadSafeCounter> *this_00;
  
  this_00 = &FPageAllocator::Instance->TheAllocator;
  if (FPageAllocator::Instance == (FPageAllocator *)0x0) {
    this_00 = &FPageAllocator::Construct()->TheAllocator;
  }
  TLockFreeFixedSizeAllocator<65536,64,FThreadSafeCounter>::Trim(this_00);
  return true;
}

// ExecuteIfSafe @ 1418da070

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  FSerializedUATProcess::LaunchNext(*(FSerializedUATProcess **)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1418dd920

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1418dd930

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1418dd940

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1418dd950

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy,TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1418dd960

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1418dd970

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1418e0290

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1418e02a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1418e02b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1418e02c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy,TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1418e02d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1418e02e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1418e1c60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1418e1c70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1418e1c80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1418e1c90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy,TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1418e1ca0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1418e1cb0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1418e2320

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1418e2330

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1418e2340

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1418e2350

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy,TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1418e2360

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1418e2370

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1418e36f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1418e3700

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1418e3710

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1418e3720

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy,TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1418e3730

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1418e3740

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1418fcd60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1418fcd70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1418fcd80

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1418fcd90

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy,TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1418fcda0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1418fcdb0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 141930c30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141930cb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141930cf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14193a270

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>_>
::Execute(void *this,uint param_1,uint param_2)

{
  `FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// ExecuteIfSafe @ 14193a2f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,uint param_1,uint param_2)

{
  `FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1419459f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 141948a20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14194bf60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14194d180

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 141952dc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141976050

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14198ff60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy,`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14198ffe0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy,`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &_vftable_;
  }
  return;
}

// CreateCopy @ 141990020

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy,`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1419900c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EForkProcessRole___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141990140

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EForkProcessRole___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141990180

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EForkProcessRole___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141993a70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy,`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_>
::Execute(void *this,FName param_1,EModuleChangeReason param_2)

{
  if (param_2 == ModuleLoaded) {
    FTraceAuxiliaryImpl::EnableCommandlineChannels(&GTraceAuxiliary);
    return;
  }
  return;
}

// Execute @ 141993a90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>_>
::Execute(void *this,EForkProcessRole param_1)

{
  `TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// ExecuteIfSafe @ 141993aa0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy,`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_>
::ExecuteIfSafe(void *this,FName param_1,EModuleChangeReason param_2)

{
  if (param_2 == ModuleLoaded) {
    FTraceAuxiliaryImpl::EnableCommandlineChannels(&GTraceAuxiliary);
  }
  return true;
}

// ExecuteIfSafe @ 141993ad0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,EForkProcessRole param_1)

{
  `TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141994d70

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy,`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141994d80

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 141995560

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy,`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141995570

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 141995d40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy,`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141995d50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141995e80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy,`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141995e90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1419a0c10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy,`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1419a0c20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1419b0430

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy,`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1419b0440

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 141bf8810

void __thiscall
TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::<lambda_7>_>
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
    *puVar1 = &TCommonDelegateInstanceState<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`14'::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy>
               ::_vftable_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`14'::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`14'::<lambda_7>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf8890

void __thiscall
TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &TCommonDelegateInstanceState<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`14'::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy>
               ::_vftable_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`14'::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`14'::<lambda_7>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bf88e0

void __thiscall
TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::<lambda_7>_>
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
    *puVar3 = &TCommonDelegateInstanceState<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`14'::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy>
               ::_vftable_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`14'::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`14'::<lambda_7>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf8980

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::__l3::<lambda_1>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AX__QEAUFMoveOnlyParam_DelegatesTest_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf8a00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::__l3::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AX__QEAUFMoveOnlyParam_DelegatesTest_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bf8a50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::__l3::<lambda_1>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AX__QEAUFMoveOnlyParam_DelegatesTest_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf8af0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_15>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFTaskEvent_Tasks_UE__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`71'::<lambda_15>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf8b70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_15>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFTaskEvent_Tasks_UE__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`71'::<lambda_15>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141bf8bb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_15>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFTaskEvent_Tasks_UE__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`71'::<lambda_15>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf8c50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l6::<lambda_5>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::`6'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf8cd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l6::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::`6'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bf8d20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l6::<lambda_5>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::`6'::<lambda_5>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf8dc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l44::<lambda_10>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`44'::<lambda_10>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf8e40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l44::<lambda_10>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`44'::<lambda_10>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bf8e90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l44::<lambda_10>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`44'::<lambda_10>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf8f30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l59::<lambda_11>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`59'::<lambda_11>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf8fb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l59::<lambda_11>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`59'::<lambda_11>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bf9000

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l59::<lambda_11>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`59'::<lambda_11>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf90a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`60'::<lambda_12>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf9120

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`60'::<lambda_12>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bf9170

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`60'::<lambda_12>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf9210

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`61'::<lambda_13>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf9290

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`61'::<lambda_13>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 141bf92e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`61'::<lambda_13>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf9380

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`69'::<lambda_14>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf9400

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`69'::<lambda_14>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bf9450

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`69'::<lambda_14>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf94f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l73::<lambda_19>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`73'::<lambda_19>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf9570

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l73::<lambda_19>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`73'::<lambda_19>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141bf95b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l73::<lambda_19>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`73'::<lambda_19>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf9650

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`69'::<lambda_14>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf96d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`69'::<lambda_14>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bf9720

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`69'::<lambda_14>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf97c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`60'::<lambda_12>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf9840

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`60'::<lambda_12>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bf9890

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`60'::<lambda_12>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf9930

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`69'::<lambda_14>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf99b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`69'::<lambda_14>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bf9a00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`69'::<lambda_14>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf9aa0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`11'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf9b20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`11'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141bf9b60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`11'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf9c00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf9c80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bf9cd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf9d70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf9df0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bf9e40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bf9ee0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_2>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`3'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bf9f60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`3'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bf9fb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_2>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`3'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfa050

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l7::<lambda_2>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::`7'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfa0d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l7::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::`7'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfa120

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l7::<lambda_2>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::`7'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfa1c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l48::<lambda_3>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`48'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfa240

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l48::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`48'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfa290

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l48::<lambda_3>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`48'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfa330

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_3>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`12'::<lambda_3>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfa3b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`12'::<lambda_3>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141bfa3f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_3>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`12'::<lambda_3>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfa490

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_4>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfa510

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfa560

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_4>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfa600

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_5>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfa680

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfa6d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_5>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_5>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfa770

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_5>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`13'::<lambda_5>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfa7f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`13'::<lambda_5>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141bfa830

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_5>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`13'::<lambda_5>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfa8d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_6>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_6>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfa950

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_6>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfa9a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_6>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_6>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfaa40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_7>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_7>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfaac0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_7>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfab10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_7>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_7>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfabb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_8>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`85'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfac30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`85'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfac80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_8>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`85'::<lambda_8>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfad20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_8>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`15'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfada0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`15'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfadf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_8>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`15'::<lambda_8>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfae90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_9>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`85'::<lambda_9>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfaf10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`85'::<lambda_9>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfaf60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_9>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`85'::<lambda_9>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfb000

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_9>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`15'::<lambda_9>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfb080

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`15'::<lambda_9>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfb0d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_9>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`15'::<lambda_9>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfb170

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>::operator()'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`18'::<lambda_3>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfb1f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`18'::<lambda_3>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141bfb230

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>::operator()'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`18'::<lambda_3>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfb2d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`19'::<lambda_3>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfb350

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`19'::<lambda_3>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141bfb390

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`19'::<lambda_3>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfb430

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>::operator()'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`19'::<lambda_6>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfb4b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`19'::<lambda_6>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141bfb4f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>::operator()'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`19'::<lambda_6>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfb590

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfb610

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfb660

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfb700

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfb780

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfb7d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfb870

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::`3'::<lambda_1>::operator()'::`4'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfb8f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::`3'::<lambda_1>::operator()'::`4'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141bfb930

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::`3'::<lambda_1>::operator()'::`4'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfb9d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::`3'::<lambda_1>::operator()'::`4'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfba50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::`3'::<lambda_1>::operator()'::`4'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141bfba90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::`3'::<lambda_1>::operator()'::`4'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfbb30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_2>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`3'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfbbb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`3'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfbc00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_2>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`3'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfbca0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfbd20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfbd70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfbe10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_5>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`18'::<lambda_5>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfbe90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`18'::<lambda_5>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 141bfbed0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_5>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`18'::<lambda_5>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfbf70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l20::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`20'::<lambda_8>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfbff0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l20::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`20'::<lambda_8>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 141bfc040

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l20::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`20'::<lambda_8>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfc0e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`72'::<lambda_18>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfc160

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`72'::<lambda_18>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141bfc1b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`72'::<lambda_18>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141c00270

FNoncopyableExample * __thiscall
TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::<lambda_7>_>
::Execute(void *this)

{
  return *(FNoncopyableExample **)((longlong)this + 0x18);
}

// Execute @ 141c00280

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::__l3::<lambda_1>_>
::Execute(void *this,FMoveOnlyParam *param_1)

{
  FMoveOnlyParam *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = *(FMoveOnlyParam **)((longlong)this + 0x18);
  if (pFVar1 != param_1) {
    pFVar2 = (pFVar1->Identifier).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Identifier).Data.AllocatorInstance.Data =
         (param_1->Identifier).Data.AllocatorInstance.Data;
    (param_1->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Identifier).Data.ArrayNum = (param_1->Identifier).Data.ArrayNum;
    (pFVar1->Identifier).Data.ArrayMax = (param_1->Identifier).Data.ArrayMax;
    (param_1->Identifier).Data.ArrayNum = 0;
    (param_1->Identifier).Data.ArrayMax = 0;
    param_1->MovedFromCount = param_1->MovedFromCount + 1;
  }
  return;
}

// Execute @ 141c002e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_15>_>
::Execute(void *this,FTaskEvent *param_1,FTaskEvent *param_2)

{
  atomic<bool> aVar1;
  FTaskEvent this_00;
  
  if ((*param_1 != (FTaskEvent)0x0) && (*(char *)((longlong)*param_1 + 0xd0) == '\0')) {
    this_00 = *param_1;
    LOCK();
    aVar1 = *(atomic<bool> *)((longlong)this_00 + 0x45);
    *(atomic<bool> *)((longlong)this_00 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)this_00 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this_00 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0xd8);
    }
  }
  if (*param_2 != (FTaskEvent)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)*param_2);
    return;
  }
  return;
}

// Execute @ 141c00340

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l6::<lambda_5>_>
::Execute(void *this,IConsoleVariable *param_1)

{
  IConsoleVariable *local_res10 [3];
  
  local_res10[0] = param_1;
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_FConsoleManagerTest::TestBody_::__l6::<lambda_5>_&,IConsoleVariable_*>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_5> *)((longlong)this + 0x18),local_res10);
  return;
}

// Execute @ 141c00370

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l44::<lambda_10>_>
::Execute(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return;
}

// Execute @ 141c00380

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l59::<lambda_11>_>
::Execute(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  
  this_00 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)((longlong)this + 0x18);
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
    if (*(void **)&this_00->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    ::operator_delete(this_00,0x18);
    return;
  }
  return;
}

// Execute @ 141c003d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>_>
::Execute(void *this)

{
  `UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 141c003e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>_>
::Execute(void *this)

{
  `UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 141c003f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>_>
::Execute(void *this)

{
  `UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 141c00400

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l73::<lambda_19>_>
::Execute(void *this)

{
  return;
}

// Execute @ 141c00410

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::Execute(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  
  this_00 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)((longlong)this + 0x18);
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
    if (*(void **)&this_00->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    ::operator_delete(this_00,0x18);
    return;
  }
  return;
}

// Execute @ 141c00460

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()'::__l2::<lambda_1>_>
::Execute(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  
  this_00 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)((longlong)this + 0x18);
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
    if (*(void **)&this_00->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    ::operator_delete(this_00,0x18);
    return;
  }
  return;
}

// Execute @ 141c004b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>_>
::Execute(void *this)

{
  ``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2
  ::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 141c004c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()'::__l2::<lambda_1>_>
::Execute(void *this)

{
  return;
}

// Execute @ 141c004d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::Execute(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return;
}

// Execute @ 141c004e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::Execute(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return;
}

// Execute @ 141c004f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_2>_>
::Execute(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return;
}

// Execute @ 141c00500

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l7::<lambda_2>_>
::Execute(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return;
}

// Execute @ 141c00510

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l48::<lambda_3>_>
::Execute(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return;
}

// Execute @ 141c00520

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_3>_>
::Execute(void *this)

{
  return;
}

// Execute @ 141c00530

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_4>_>
::Execute(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return;
}

// Execute @ 141c00540

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_5>_>
::Execute(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return;
}

// Execute @ 141c00550

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_5>_>
::Execute(void *this)

{
  return;
}

// Execute @ 141c00560

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_6>_>
::Execute(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return;
}

// Execute @ 141c00570

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_7>_>
::Execute(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return;
}

// Execute @ 141c00580

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_8>_>
::Execute(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return;
}

// Execute @ 141c00590

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_8>_>
::Execute(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return;
}

// Execute @ 141c005a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_9>_>
::Execute(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return;
}

// Execute @ 141c005b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_9>_>
::Execute(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return;
}

// Execute @ 141c005c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>::operator()'::__l2::<lambda_1>_>
::Execute(void *this)

{
  return;
}

// Execute @ 141c005d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()'::__l2::<lambda_1>_>
::Execute(void *this)

{
  return;
}

// Execute @ 141c005e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>::operator()'::__l2::<lambda_1>_>
::Execute(void *this)

{
  return;
}

// Execute @ 141c005f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_1>_>
::Execute(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return;
}

// Execute @ 141c00600

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::Execute(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return;
}

// Execute @ 141c00610

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::Execute(void *this)

{
  return;
}

// Execute @ 141c00620

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::Execute(void *this)

{
  return;
}

// Execute @ 141c00630

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_2>_>
::Execute(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 2;
  return;
}

// Execute @ 141c00640

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>_>
::Execute(void *this)

{
  `UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 141c00650

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_5>_>
::Execute(void *this)

{
  return;
}

// Execute @ 141c00660

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l20::<lambda_8>_>
::Execute(void *this)

{
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Remove
            (*(TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> **)
              ((longlong)this + 0x18),(FDelegateHandle)**(ulong64 **)((longlong)this + 0x20));
  return;
}

// Execute @ 141c00680

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>_>
::Execute(void *this)

{
  `UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 141c00710

bool __thiscall
TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::<lambda_7>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 141c00720

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::__l3::<lambda_1>_>
::ExecuteIfSafe(void *this,FMoveOnlyParam *param_1)

{
  FMoveOnlyParam *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = *(FMoveOnlyParam **)((longlong)this + 0x18);
  if (pFVar1 != param_1) {
    pFVar2 = (pFVar1->Identifier).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Identifier).Data.AllocatorInstance.Data =
         (param_1->Identifier).Data.AllocatorInstance.Data;
    (param_1->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Identifier).Data.ArrayNum = (param_1->Identifier).Data.ArrayNum;
    (pFVar1->Identifier).Data.ArrayMax = (param_1->Identifier).Data.ArrayMax;
    (param_1->Identifier).Data.ArrayNum = 0;
    (param_1->Identifier).Data.ArrayMax = 0;
    param_1->MovedFromCount = param_1->MovedFromCount + 1;
  }
  return true;
}

// ExecuteIfSafe @ 141c00780

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_15>_>
::ExecuteIfSafe(void *this,FTaskEvent *param_1,FTaskEvent *param_2)

{
  atomic<bool> aVar1;
  FTaskEvent this_00;
  
  if ((*param_1 != (FTaskEvent)0x0) && (*(char *)((longlong)*param_1 + 0xd0) == '\0')) {
    this_00 = *param_1;
    LOCK();
    aVar1 = *(atomic<bool> *)((longlong)this_00 + 0x45);
    *(atomic<bool> *)((longlong)this_00 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)this_00 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this_00 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0xd8);
    }
  }
  if (*param_2 != (FTaskEvent)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)*param_2);
  }
  return true;
}

// ExecuteIfSafe @ 141c007e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l6::<lambda_5>_>
::ExecuteIfSafe(void *this,IConsoleVariable *param_1)

{
  IConsoleVariable *local_res10 [3];
  
  local_res10[0] = param_1;
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_FConsoleManagerTest::TestBody_::__l6::<lambda_5>_&,IConsoleVariable_*>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_5> *)((longlong)this + 0x18),local_res10);
  return true;
}

// ExecuteIfSafe @ 141c00810

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l44::<lambda_10>_>
::ExecuteIfSafe(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return true;
}

// ExecuteIfSafe @ 141c00820

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l59::<lambda_11>_>
::ExecuteIfSafe(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  
  this_00 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)((longlong)this + 0x18);
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
    if (*(void **)&this_00->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    ::operator_delete(this_00,0x18);
  }
  return true;
}

// ExecuteIfSafe @ 141c00870

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>_>
::ExecuteIfSafe(void *this)

{
  `UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 141c00890

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>_>
::ExecuteIfSafe(void *this)

{
  `UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 141c008b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>_>
::ExecuteIfSafe(void *this)

{
  `UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 141c008d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l73::<lambda_19>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 141c008e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  
  this_00 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)((longlong)this + 0x18);
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
    if (*(void **)&this_00->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    ::operator_delete(this_00,0x18);
  }
  return true;
}

// ExecuteIfSafe @ 141c00930

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  
  this_00 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)((longlong)this + 0x18);
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
    if (*(void **)&this_00->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    ::operator_delete(this_00,0x18);
  }
  return true;
}

// ExecuteIfSafe @ 141c00980

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  ``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2
  ::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 141c009a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 141c009b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return true;
}

// ExecuteIfSafe @ 141c009c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return true;
}

// ExecuteIfSafe @ 141c009d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return true;
}

// ExecuteIfSafe @ 141c009e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l7::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return true;
}

// ExecuteIfSafe @ 141c009f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l48::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return true;
}

// ExecuteIfSafe @ 141c00a00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 141c00a10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return true;
}

// ExecuteIfSafe @ 141c00a20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_5>_>
::ExecuteIfSafe(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return true;
}

// ExecuteIfSafe @ 141c00a30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_5>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 141c00a40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_6>_>
::ExecuteIfSafe(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return true;
}

// ExecuteIfSafe @ 141c00a50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_7>_>
::ExecuteIfSafe(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return true;
}

// ExecuteIfSafe @ 141c00a60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_8>_>
::ExecuteIfSafe(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return true;
}

// ExecuteIfSafe @ 141c00a70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_8>_>
::ExecuteIfSafe(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return true;
}

// ExecuteIfSafe @ 141c00a80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_9>_>
::ExecuteIfSafe(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return true;
}

// ExecuteIfSafe @ 141c00a90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_9>_>
::ExecuteIfSafe(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return true;
}

// ExecuteIfSafe @ 141c00aa0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 141c00ab0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 141c00ac0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 141c00ad0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return true;
}

// ExecuteIfSafe @ 141c00ae0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return true;
}

// ExecuteIfSafe @ 141c00af0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 141c00b00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 141c00b10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 2;
  return true;
}

// ExecuteIfSafe @ 141c00b20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  `UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 141c00b40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_5>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 141c00b50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l20::<lambda_8>_>
::ExecuteIfSafe(void *this)

{
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Remove
            (*(TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> **)
              ((longlong)this + 0x18),(FDelegateHandle)**(ulong64 **)((longlong)this + 0x20));
  return true;
}

// ExecuteIfSafe @ 141c00b80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>_>
::ExecuteIfSafe(void *this)

{
  `UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141c012f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::<lambda_7>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01300

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::__l3::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01310

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_15>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01320

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l6::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01330

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l44::<lambda_10>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01340

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l59::<lambda_11>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01350

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01360

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01370

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01380

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l73::<lambda_19>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01390

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c013a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c013b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c013c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c013d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c013e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c013f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01400

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l7::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01410

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l48::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01420

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01430

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01440

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01450

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01460

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01470

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_7>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01480

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_8>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01490

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_8>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c014a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_9>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c014b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_9>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c014c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c014d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c014e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c014f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01500

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01510

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01520

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01530

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01540

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01550

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01560

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l20::<lambda_8>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 141c01570

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 141c019c0

void * __thiscall
TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::<lambda_7>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c019d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::__l3::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c019e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_15>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c019f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l6::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01a00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l44::<lambda_10>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01a10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l59::<lambda_11>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01a20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01a30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01a40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01a50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l73::<lambda_19>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01a60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01a70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01a80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01a90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01aa0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01ab0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01ac0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01ad0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l7::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01ae0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l48::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01af0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01b00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01b10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01b20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01b30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01b40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_7>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01b50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_8>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01b60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_8>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01b70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_9>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01b80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_9>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01b90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01ba0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01bb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01bc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01bd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01be0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01bf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01c00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01c10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01c20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01c30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l20::<lambda_8>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141c01c40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 141c01c70

UObject * __thiscall
TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::<lambda_7>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01c80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::__l3::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01c90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_15>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01ca0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l6::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01cb0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l44::<lambda_10>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01cc0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l59::<lambda_11>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01cd0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01ce0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01cf0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01d00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l73::<lambda_19>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01d10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01d20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01d30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01d40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01d50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01d60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01d70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01d80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l7::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01d90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l48::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01da0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01db0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01dc0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01dd0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01de0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_6>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01df0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_7>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01e00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_8>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01e10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_8>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01e20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_9>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01e30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_9>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01e40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01e50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01e60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01e70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01e80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01e90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01ea0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01eb0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01ec0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01ed0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01ee0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l20::<lambda_8>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01ef0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141c02260

bool __thiscall
TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::<lambda_7>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02270

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::__l3::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02280

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_15>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02290

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l6::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c022a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l44::<lambda_10>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c022b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l59::<lambda_11>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c022c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c022d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c022e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c022f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l73::<lambda_19>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02300

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02310

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02320

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02330

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02340

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02350

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02360

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02370

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l7::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02380

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l48::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02390

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c023a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c023b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c023c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c023d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c023e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_7>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c023f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_8>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02400

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_8>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02410

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_9>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02420

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_9>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02430

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02440

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02450

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02460

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02470

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02480

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c02490

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c024a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c024b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c024c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c024d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l20::<lambda_8>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141c024e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 141c02f40

bool __thiscall
TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::<lambda_7>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c02f50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::__l3::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c02f60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_15>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c02f70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l6::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c02f80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l44::<lambda_10>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c02f90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l59::<lambda_11>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c02fa0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c02fb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c02fc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c02fd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l73::<lambda_19>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c02fe0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c02ff0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03000

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03010

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03020

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03030

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03040

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03050

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l7::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03060

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l48::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03070

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03080

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03090

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c030a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c030b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c030c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_7>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c030d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_8>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c030e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_8>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c030f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_9>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03100

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_9>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03110

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03120

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03130

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03140

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03150

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03160

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03170

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03180

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c03190

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c031a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c031b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l20::<lambda_8>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c031c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141c59230

FName __thiscall
TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::<lambda_7>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59240

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::__l3::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59250

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_15>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59260

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l6::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59270

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l44::<lambda_10>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59280

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l59::<lambda_11>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59290

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c592a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c592b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c592c0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l73::<lambda_19>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c592d0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c592e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c592f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59300

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59310

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59320

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59330

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59340

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l7::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59350

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l48::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59360

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59370

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59380

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59390

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c593a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c593b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_7>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c593c0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_8>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c593d0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_8>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c593e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_9>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c593f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_9>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59400

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59410

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59420

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59430

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59440

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59450

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59460

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59470

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59480

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c59490

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c594a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l20::<lambda_8>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c594b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

