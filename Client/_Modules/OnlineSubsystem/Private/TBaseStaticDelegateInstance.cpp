// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 12

// TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_> @ 14eb2f1d0

TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
* __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
::
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
           *this,TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy__PEAVIOnlineSession__V1_PEAVFDelegateHandle__V__TDelegate___A6AXVFName__AEBUFOnlineError__AEBUFSessionMatchmakingResults___ZUFDefaultDelegateUserPolicy______6B_
  ;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
              *)&this->_padding_,
             (TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
              *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseStaticDelegateInstance___A6AXVFName___N_ZUFDefaultDelegateUserPolicy__PEAVIOnlineSession__V1_PEAVFDelegateHandle__V__TDelegate___A6AXVFName__AEBUFOnlineError__AEBUFSessionMatchmakingResults___ZUFDefaultDelegateUserPolicy______6B_
  ;
  this->StaticFuncPtr = param_1->StaticFuncPtr;
  return this;
}

// CreateCopy @ 14ebec600

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ebec670

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14ebec6b0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14ebf34d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
          *this,FName param_1,bool param_2)

{
  _func___cdecl_void_FName_bool_IOnlineSession_ptr_FName_FDelegateHandle_ptr_TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
  *pTVar2;
  TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
  local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar2 = TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
           ::
           TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  (*p_Var1)(param_1,param_2,(IOnlineSession *)this->_padding_,(FName)this->_padding_,
            (FDelegateHandle *)this->_padding_,pTVar2);
  return;
}

// ExecuteIfSafe @ 14ebf8020

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
                *this,FName param_1,bool param_2)

{
  _func___cdecl_void_FName_bool_IOnlineSession_ptr_FName_FDelegateHandle_ptr_TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
  *pTVar2;
  TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
  local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar2 = TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
           ::
           TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  (*p_Var1)(param_1,param_2,(IOnlineSession *)this->_padding_,(FName)this->_padding_,
            (FDelegateHandle *)this->_padding_,pTVar2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14ebff330

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 14ec02620

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14ec05020

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14ec095f0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14ec0bec0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14ec1a2c0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,IOnlineSession_*,FName,FDelegateHandle_*,TDelegate<void___cdecl(FName,FOnlineError_const_&,FSessionMatchmakingResults_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

