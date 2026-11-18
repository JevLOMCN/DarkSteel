// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 12

// TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext> @ 142c36b70

TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
* __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
           *this,TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFToolMenuStringCommand__VFName__UFToolMenuContext____6B_
  ;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  ::FString::FString((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  FToolMenuContext::FToolMenuContext
            ((FToolMenuContext *)&this->_padding_,(FToolMenuContext *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__UFToolMenuStringCommand__VFName__UFToolMenuContext____6B_
  ;
  this->StaticFuncPtr = param_1->StaticFuncPtr;
  return this;
}

// CreateCopy @ 142c54dd0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0xa8,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142c54e40

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0xa8,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 142c54e80

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
  *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0xa8,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142c579d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::Execute(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
          *this)

{
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,FToolMenuStringCommand,FName,FToolMenuContext>::
  ApplyAfter<void_(__cdecl*const_&)(FToolMenuStringCommand,FName,FToolMenuContext)>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,FToolMenuStringCommand,FName,FToolMenuContext>
              *)&this->_padding_,&this->StaticFuncPtr);
  return;
}

// ExecuteIfSafe @ 142c58670

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
                *this)

{
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,FToolMenuStringCommand,FName,FToolMenuContext>::
  ApplyAfter<void_(__cdecl*const_&)(FToolMenuStringCommand,FName,FToolMenuContext)>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,FToolMenuStringCommand,FName,FToolMenuContext>
              *)&this->_padding_,&this->StaticFuncPtr);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142c5dc40

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 142c5f1f0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 142c60a40

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142c61190

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142c63a60

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142c728c0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

