// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 33

// CreateCopy @ 146b10690

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVISourceControlProvider__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146b10710

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVISourceControlProvider__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146b10750

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVISourceControlProvider__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146b107f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,_FSourceControlAssetDataCache::GetFileHistory_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146b10860

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,_FSourceControlAssetDataCache::GetFileHistory_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 146b108a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,_FSourceControlAssetDataCache::GetFileHistory_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146b10930

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x70,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,_SourceControlHelpersInternal::RunQueryFileStates_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146b109a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x70,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,_SourceControlHelpersInternal::RunQueryFileStates_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 146b109e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x70,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,_SourceControlHelpersInternal::RunQueryFileStates_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146b13c30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::__l2::<lambda_1>_>
::Execute(void *this,ISourceControlProvider *param_1,ISourceControlProvider *param_2)

{
  ISourceControlModule *pIVar1;
  FSourceControlAssetDataCache *this_00;
  
  pIVar1 = ISourceControlModule::Get();
  this_00 = (FSourceControlAssetDataCache *)(**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
  FSourceControlAssetDataCache::ClearPendingTasks(this_00);
  return;
}

// Execute @ 146b13c60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_>
::Execute(void *this,TSharedRef<ISourceControlOperation,1> *param_1,Type param_2)

{
  ISourceControlModule *pIVar1;
  FSourceControlAssetDataCache *this_00;
  
  pIVar1 = ISourceControlModule::Get();
  this_00 = (FSourceControlAssetDataCache *)(**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
  FSourceControlAssetDataCache::OnUpdateHistoryComplete
            (this_00,(TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x18),param_1,
             param_2);
  return;
}

// Execute @ 146b13cc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_>
::Execute(void *this,TSharedRef<ISourceControlOperation,1> *param_1,Type param_2)

{
  `SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1,param_2);
  return;
}

// ExecuteIfSafe @ 146b14ab0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,ISourceControlProvider *param_1,ISourceControlProvider *param_2)

{
  ISourceControlModule *pIVar1;
  FSourceControlAssetDataCache *this_00;
  
  pIVar1 = ISourceControlModule::Get();
  this_00 = (FSourceControlAssetDataCache *)(**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
  FSourceControlAssetDataCache::ClearPendingTasks(this_00);
  return true;
}

// ExecuteIfSafe @ 146b14ae0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,TSharedRef<ISourceControlOperation,1> *param_1,Type param_2)

{
  ISourceControlModule *pIVar1;
  FSourceControlAssetDataCache *this_00;
  
  pIVar1 = ISourceControlModule::Get();
  this_00 = (FSourceControlAssetDataCache *)(**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
  FSourceControlAssetDataCache::OnUpdateHistoryComplete
            (this_00,(TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x18),param_1,
             param_2);
  return true;
}

// ExecuteIfSafe @ 146b14b40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,TSharedRef<ISourceControlOperation,1> *param_1,Type param_2)

{
  `SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146b16c90

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146b16ca0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146b16cb0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 146b18cb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146b18cc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146b18cd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 146b1ae10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1ae20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1ae30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146b1b0f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146b1b100

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146b1b110

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146b1be60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146b1be70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146b1be80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146b29590

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b295a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b295b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

