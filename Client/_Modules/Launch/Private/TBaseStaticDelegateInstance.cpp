// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 22

// CreateCopy @ 148da0ca0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
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
              ___7__TCommonDelegateInstanceState___A6AXUFInstallBundleRequestResultInfo___ZUFDefaultDelegateUserPolicy___N_N_N_N__6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXUFInstallBundleRequestResultInfo___ZUFDefaultDelegateUserPolicy___N_N_N_N__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148da0d30

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXUFInstallBundleRequestResultInfo___ZUFDefaultDelegateUserPolicy___N_N_N_N__6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXUFInstallBundleRequestResultInfo___ZUFDefaultDelegateUserPolicy___N_N_N_N__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 148da0d80

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
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
              ___7__TCommonDelegateInstanceState___A6AXUFInstallBundleRequestResultInfo___ZUFDefaultDelegateUserPolicy___N_N_N_N__6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXUFInstallBundleRequestResultInfo___ZUFDefaultDelegateUserPolicy___N_N_N_N__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148da0e20

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_JH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AX_N_JH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148da0ea0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_JH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AX_N_JH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 148da0ef0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_JH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AX_N_JH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 148da1f60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
          *this,FInstallBundleRequestResultInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,bool,bool,bool,bool>::
  ApplyAfter<void_(__cdecl*const_&)(FInstallBundleRequestResultInfo,bool,bool,bool,bool),FInstallBundleRequestResultInfo>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,bool,bool,bool,bool> *)
             &this->_padding_,&this->StaticFuncPtr,param_1);
  pFVar1 = (param_1->OptionalErrorCode).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (param_1->OptionalErrorText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148da1f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar2 + 0x10))();
    return;
  }
  return;
}

// Execute @ 148da1fb0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
           *this,bool param_1,long64 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000148da1fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 148da2120

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
                *this,FInstallBundleRequestResultInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,bool,bool,bool,bool>::
  ApplyAfter<void_(__cdecl*const_&)(FInstallBundleRequestResultInfo,bool,bool,bool,bool),FInstallBundleRequestResultInfo>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,bool,bool,bool,bool> *)
             &this->_padding_,&this->StaticFuncPtr,param_1);
  pFVar1 = (param_1->OptionalErrorCode).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (param_1->OptionalErrorText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 148da2170

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
              *this,bool param_1,long64 param_2,int param_3)

{
  (*this->StaticFuncPtr)(param_1,param_2,param_3);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 148da3da0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 148da3db0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 148da3e40

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 148da3e50

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 148da42b0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148da42c0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 148da47f0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 148da4800

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 148da4c00

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 148da4c10

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 148db25d0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148db25e0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

