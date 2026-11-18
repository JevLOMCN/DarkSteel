// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 579

// TryGetBoundFunctionName @ 14b8a5a60

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14b8a5a70

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14b8a5a80

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14b8a5a90

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// HasSameObject @ 14b8a5aa0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14b8a5ab0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 14b8a5ac0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8a5b60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8a5be0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// Execute @ 14b8a5c30

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
          *this,ServerMessages *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014b8a5c37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// ExecuteIfSafe @ 14b8a5c40

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
                *this,ServerMessages *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_> @ 14b8b0f50

TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
* __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____V3___6B_
  ;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____V3___6B_
  ;
  this->StaticFuncPtr = param_1->StaticFuncPtr;
  return this;
}

// CreateCopy @ 14b8b9b20

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8b9ba0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14b8b9bf0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8b9c90

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8b9d30

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14b8b9da0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8b9e60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8b9ef0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14b8b9f40

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8b9ff0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar1[1] = *(undefined8 *)((longlong)this + 8);
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8ba080

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar1[1] = *(undefined8 *)((longlong)this + 8);
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14b8ba0d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar3[1] = *(undefined8 *)((longlong)this + 8);
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8ba180

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8ba200

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14b8ba250

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8ba2f0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_PartyType,enum_EDS_PartyMenuType,__int64>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_PartyType__W4EDS_PartyMenuType___J__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x10);
    puVar2[1] = *(undefined8 *)((longlong)this + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_PartyType__W4EDS_PartyMenuType___J__6B_
    ;
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8ba380

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_PartyType,enum_EDS_PartyMenuType,__int64>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_PartyType__W4EDS_PartyMenuType___J__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x10);
    puVar2[1] = *(undefined8 *)((longlong)this + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_PartyType__W4EDS_PartyMenuType___J__6B_
    ;
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14b8ba3d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_PartyType,enum_EDS_PartyMenuType,__int64>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_PartyType__W4EDS_PartyMenuType___J__6B_
    ;
    uVar2 = *(undefined4 *)((longlong)this + 0xc);
    uVar3 = *(undefined4 *)((longlong)this + 0x10);
    uVar4 = *(undefined4 *)((longlong)this + 0x14);
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)this + 8);
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar2;
    *(undefined4 *)(puVar6 + 2) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar4;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_PartyType__W4EDS_PartyMenuType___J__6B_
    ;
    puVar6[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8ba480

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8ba500

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14b8ba550

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8ba5f0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8ba680

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14b8ba6d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8ba780

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8ba7f0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14b8ba830

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8ba8c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8ba960

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14b8ba9d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8baa90

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8bab30

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14b8baba0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8bac60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___J__6B_;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___J__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8bacf0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___J__6B_;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___J__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14b8bad40

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64> *this,
          TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___J__6B_;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___J__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8badf0

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8bae70

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14b8baec0

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14b8bf2b0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
          *this,ServerMessagesTwoway *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014b8bf2b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// Execute @ 14b8bf2c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          *this,ServerMessagesTwoway *param_1)

{
  _func___cdecl_void_ServerMessagesTwoway_ptr_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  (*p_Var1)(param_1,&local_28);
  return;
}

// Execute @ 14b8bf310

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
::Execute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
          *this,ServerMessagesTwoway *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014b8bf31e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,this->_padding_);
  return;
}

// Execute @ 14b8bf330

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64>
::Execute(void *this,EDS_MessageResponseType *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014b8bf33e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x18))(param_1,*(undefined8 *)((longlong)this + 8));
  return;
}

// Execute @ 14b8bf350

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,UDS_UserWidget *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014b8bf357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// Execute @ 14b8bf360

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_PartyType,enum_EDS_PartyMenuType,__int64>
::Execute(void *this,UDS_UserWidget *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014b8bf375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x20))
            (param_1,*(undefined4 *)((longlong)this + 8),*(undefined4 *)((longlong)this + 0xc),
             *(undefined8 *)((longlong)this + 0x10));
  return;
}

// Execute @ 14b8bf380

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014b8bf387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr);
  return;
}

// Execute @ 14b8bf390

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
          *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014b8bf39e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)
            ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,this->_padding_);
  return;
}

// Execute @ 14b8bf3b0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  _func___cdecl_void_TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>_bool_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_20;
  
  p_Var1 = this->StaticFuncPtr;
  local_38._0_8_ = 0;
  local_38._8_8_ = 0;
  local_38._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_38,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  local_20._0_8_ = 0;
  local_20._8_8_ = 0;
  local_20._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_20,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  (*p_Var1)((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,
            SUB81(this->_padding_,0),&local_20,&local_38);
  return;
}

// Execute @ 14b8bf440

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  _func___cdecl_void_TSharedPtr<IHttpResponse,1>_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
  *p_Var1;
  TSharedPtr<IHttpResponse,1> local_38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpResponse *)0x0;
  (*p_Var1)(&local_38,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14b8bf4c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          *this)

{
  _func___cdecl_void_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *p_Var1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  (*p_Var1)(&local_28);
  return;
}

// Execute @ 14b8bf500

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b8bf508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(this->_padding_);
  return;
}

// Execute @ 14b8bf520

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
          *this,FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014b8bf52d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*this->StaticFuncPtr)(param_1,param_2);
  return bVar1;
}

// ExecuteIfSafe @ 14b8c00d0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                *this,ServerMessagesTwoway *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 14b8c00f0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,ServerMessagesTwoway *param_1)

{
  _func___cdecl_void_ServerMessagesTwoway_ptr_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  (*p_Var1)(param_1,&local_28);
  return true;
}

// ExecuteIfSafe @ 14b8c0140

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
                *this,ServerMessagesTwoway *param_1)

{
  (*this->StaticFuncPtr)(param_1,this->_padding_);
  return true;
}

// ExecuteIfSafe @ 14b8c0170

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64>
::ExecuteIfSafe(void *this,EDS_MessageResponseType *param_1)

{
  (**(code **)((longlong)this + 0x18))(param_1,*(undefined8 *)((longlong)this + 8));
  return true;
}

// ExecuteIfSafe @ 14b8c01a0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
              *this,UDS_UserWidget *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 14b8c01c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_PartyType,enum_EDS_PartyMenuType,__int64>
::ExecuteIfSafe(void *this,UDS_UserWidget *param_1)

{
  (**(code **)((longlong)this + 0x20))
            (param_1,*(undefined4 *)((longlong)this + 8),*(undefined4 *)((longlong)this + 0xc),
             *(undefined8 *)((longlong)this + 0x10));
  return true;
}

// ExecuteIfSafe @ 14b8c01f0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  (*this->StaticFuncPtr)((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr);
  return true;
}

// ExecuteIfSafe @ 14b8c0210

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
                *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  (*this->StaticFuncPtr)
            ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,this->_padding_);
  return true;
}

// ExecuteIfSafe @ 14b8c0240

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  _func___cdecl_void_TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>_bool_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_20;
  
  p_Var1 = this->StaticFuncPtr;
  local_38._0_8_ = 0;
  local_38._8_8_ = 0;
  local_38._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_38,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  local_20._0_8_ = 0;
  local_20._8_8_ = 0;
  local_20._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_20,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  (*p_Var1)((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,
            SUB81(this->_padding_,0),&local_20,&local_38);
  return true;
}

// ExecuteIfSafe @ 14b8c02d0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  _func___cdecl_void_TSharedPtr<IHttpResponse,1>_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
  *p_Var1;
  TSharedPtr<IHttpResponse,1> local_38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpResponse *)0x0;
  (*p_Var1)(&local_38,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14b8c0350

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this)

{
  _func___cdecl_void_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *p_Var1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  (*p_Var1)(&local_28);
  return true;
}

// ExecuteIfSafe @ 14b8c0390

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64> *this)

{
  (*this->StaticFuncPtr)(this->_padding_);
  return true;
}

// ExecuteIfSafe @ 14b8c03b0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
                *this,FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14b8c4690

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8c46a0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8c46b0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8c46c0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x18);
}

// GetBoundProgramCounterForTimerManager @ 14b8c46d0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8c46e0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_PartyType,enum_EDS_PartyMenuType,__int64>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14b8c46f0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8c4700

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8c4710

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8c4720

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8c4730

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8c4740

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8c4750

ulong64 __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 14b8c7d80

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b8c7d90

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b8c7da0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b8c7db0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b8c7dc0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b8c7dd0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_PartyType,enum_EDS_PartyMenuType,__int64>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b8c7de0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b8c7df0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b8c7e00

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b8c7e10

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b8c7e20

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b8c7e30

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b8c7e40

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14b8c9080

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c9090

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c90a0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c90b0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c90c0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c90d0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_PartyType,enum_EDS_PartyMenuType,__int64>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c90e0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c90f0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c9100

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c9110

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c9120

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c9130

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c9140

UObject * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14b8c9420

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b8c9430

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b8c9440

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b8c9450

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b8c9460

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b8c9470

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_PartyType,enum_EDS_PartyMenuType,__int64>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b8c9480

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b8c9490

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b8c94a0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b8c94b0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b8c94c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b8c94d0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 14b8c94e0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14b8d0680

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d0690

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d06a0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d06b0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d06c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d06d0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_PartyType,enum_EDS_PartyMenuType,__int64>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d06e0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d06f0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d0700

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d0710

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d0720

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d0730

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64>::IsSafeToExecute
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64> *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d0740

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14b8ef1e0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef1f0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef200

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef210

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef220

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef230

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_PartyType,enum_EDS_PartyMenuType,__int64>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef240

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef250

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef260

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef270

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef280

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef290

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef2a0

FName __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool> @ 14b9d6df0

TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
* __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
::
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
           *this,TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString___N__6B_
  ;
  ::FString::FString((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString___N__6B_
  ;
  this->StaticFuncPtr = param_1->StaticFuncPtr;
  return this;
}

// TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64> @ 14b9d6e70

TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
* __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
::
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
           *this,TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString___J__6B_
  ;
  ::FString::FString((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString___J__6B_
  ;
  this->StaticFuncPtr = param_1->StaticFuncPtr;
  return this;
}

// CreateCopy @ 14b9e3fd0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b9e4060

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14b9e40b0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b9e4150

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar1 + 1),(FString *)&this->_padding_);
    puVar1[3] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar1[4] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b9e41e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar1 + 1),(FString *)&this->_padding_);
    puVar1[3] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar1[4] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14b9e4250

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar3 + 1),(FString *)&this->_padding_);
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar3[4] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b9e4310

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b9e4380

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14b9e43c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b9e4450

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar1 + 1),(FString *)&this->_padding_);
    puVar1[3] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar1[4] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b9e44e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar1 + 1),(FString *)&this->_padding_);
    puVar1[3] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar1[4] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14b9e4550

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar3 + 1),(FString *)&this->_padding_);
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar3[4] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b9e4610

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b9e4680

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14b9e46c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14b9e8c60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>
           *this,UDS_UserWidget *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014b9e8c6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,(int)this->_padding_);
  return;
}

// Execute @ 14b9e8c80

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>::
Execute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>
        *this,UDS_UserWidget *param_1)

{
  _func___cdecl_void_UDS_UserWidget_ptr_FString *p_Var1;
  FString *pFVar2;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  pFVar2 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)(param_1,pFVar2);
  return;
}

// Execute @ 14b9e8cc0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
::Execute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
          *this,UDS_UserWidget *param_1)

{
  _func___cdecl_void_UDS_UserWidget_ptr_FString_bool *p_Var1;
  longlong lVar2;
  FString *pFVar3;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  lVar2 = this->_padding_;
  pFVar3 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)(param_1,pFVar3,SUB81(lVar2,0));
  return;
}

// Execute @ 14b9e8d10

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
          *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  _func___cdecl_void_TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>_FString *p_Var1;
  FString *pFVar2;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  pFVar2 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,pFVar2);
  return;
}

// Execute @ 14b9e8d50

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
          *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  _func___cdecl_void_TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>_FString_long64 *p_Var1;
  long64 lVar2;
  FString *pFVar3;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  lVar2 = this->_padding_;
  pFVar3 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,pFVar3,lVar2);
  return;
}

// ExecuteIfSafe @ 14b9e92d0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>
              *this,UDS_UserWidget *param_1)

{
  (*this->StaticFuncPtr)(param_1,(int)this->_padding_);
  return true;
}

// ExecuteIfSafe @ 14b9e92f0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>
              *this,UDS_UserWidget *param_1)

{
  _func___cdecl_void_UDS_UserWidget_ptr_FString *p_Var1;
  FString *pFVar2;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  pFVar2 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)(param_1,pFVar2);
  return true;
}

// ExecuteIfSafe @ 14b9e9330

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
                *this,UDS_UserWidget *param_1)

{
  _func___cdecl_void_UDS_UserWidget_ptr_FString_bool *p_Var1;
  longlong lVar2;
  FString *pFVar3;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  lVar2 = this->_padding_;
  pFVar3 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)(param_1,pFVar3,SUB81(lVar2,0));
  return true;
}

// ExecuteIfSafe @ 14b9e9380

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
                *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  _func___cdecl_void_TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>_FString *p_Var1;
  FString *pFVar2;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  pFVar2 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,pFVar2);
  return true;
}

// ExecuteIfSafe @ 14b9e93c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
                *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  _func___cdecl_void_TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>_FString_long64 *p_Var1;
  long64 lVar2;
  FString *pFVar3;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  lVar2 = this->_padding_;
  pFVar3 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,pFVar3,lVar2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14b9ed0a0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b9ed0b0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b9ed0c0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b9ed0d0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b9ed0e0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 14b9f0dc0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b9f0dd0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b9f0de0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b9f0df0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b9f0e00

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14b9f1c60

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>::
GetUObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b9f1c70

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>::
GetUObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b9f1c80

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b9f1c90

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b9f1ca0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14b9f3200

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b9f3210

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b9f3220

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b9f3230

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b9f3240

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14b9f9b80

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>
                *this)

{
  return true;
}

// IsSafeToExecute @ 14b9f9b90

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>
                *this)

{
  return true;
}

// IsSafeToExecute @ 14b9f9ba0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b9f9bb0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b9f9bc0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14ba1e5a0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ba1e5b0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ba1e5c0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FString,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ba1e5d0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ba1e5e0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FString,__int64>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_> @ 14ba906f0

TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
* __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TMap_HHVFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_HH_0A_____V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
  ;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->_padding_,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &param_1->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TMap_HHVFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_HH_0A_____V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
  ;
  this->StaticFuncPtr = param_1->StaticFuncPtr;
  return this;
}

// CreateCopy @ 14ba9a4c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ba9a540

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14ba9a590

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ba9a630

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ba9a6d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14ba9a740

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ba9a800

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x80,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ba9a870

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x80,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14ba9a8b0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x80,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14ba9e6c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
Execute(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
        *this,FDS_ButtonEventField *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ba9e6c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// Execute @ 14ba9e6d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          *this,FDS_ButtonEventField *param_1)

{
  _func___cdecl_void_FDS_ButtonEventField_ptr_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  (*p_Var1)(param_1,&local_28);
  return;
}

// Execute @ 14ba9e720

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          *this,UDS_UserWidget *param_1)

{
  UDS_UserWidget *local_res10 [3];
  
  local_res10[0] = param_1;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
  ::
  ApplyAfter<void_(__cdecl*const_&)(UDS_UserWidget_*,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>),UDS_UserWidget_*>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1>,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              *)&this->_padding_,&this->StaticFuncPtr,local_res10);
  return;
}

// ExecuteIfSafe @ 14ba9eea0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
              *this,FDS_ButtonEventField *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 14ba9eec0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,FDS_ButtonEventField *param_1)

{
  _func___cdecl_void_FDS_ButtonEventField_ptr_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  (*p_Var1)(param_1,&local_28);
  return true;
}

// ExecuteIfSafe @ 14ba9ef10

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,UDS_UserWidget *param_1)

{
  UDS_UserWidget *local_res10 [3];
  
  local_res10[0] = param_1;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
  ::
  ApplyAfter<void_(__cdecl*const_&)(UDS_UserWidget_*,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>),UDS_UserWidget_*>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1>,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              *)&this->_padding_,&this->StaticFuncPtr,local_res10);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14baa4d20

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14baa4d30

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14baa4d40

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 14baae780

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14baae790

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14baae7a0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14bab0fd0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bab0fe0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bab0ff0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14bab2920

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bab2930

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bab2940

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14baba760

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 14baba770

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14baba780

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14bacf220

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bacf230

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bacf240

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14bafb8e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnCharacterResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnCharacterResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bafb970

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnCharacterResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnCharacterResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bafb9c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnCharacterResponse_server_msg____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnCharacterResponse_server_msg____6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bafba70

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTransportResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTransportResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bafbb00

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTransportResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTransportResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bafbb50

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTransportResponse_server_msg____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTransportResponse_server_msg____6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bb03d50

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
          *this,FDS_SpawnInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bb03d5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,(SpawnCharacterResponse *)this->_padding_);
  return;
}

// Execute @ 14bb03d70

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
          *this,FDS_SpawnInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bb03d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,(SpawnTransportResponse *)this->_padding_);
  return;
}

// ExecuteIfSafe @ 14bb050c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
                *this,FDS_SpawnInfo *param_1)

{
  (*this->StaticFuncPtr)(param_1,(SpawnCharacterResponse *)this->_padding_);
  return true;
}

// ExecuteIfSafe @ 14bb050f0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
                *this,FDS_SpawnInfo *param_1)

{
  (*this->StaticFuncPtr)(param_1,(SpawnTransportResponse *)this->_padding_);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14bb09a30

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bb09a40

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 14bb0d0c0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bb0d0d0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14bb10f50

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bb10f60

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14bb11570

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bb11580

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14bb16ab0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bb16ac0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14bb3ad40

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bb3ad50

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bb9a780

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14bb9a790

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14bb9a7a0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14bb9a7b0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// HasSameObject @ 14bb9a7c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14bb9a7d0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14bb9a7e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_N_ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)(puVar3 + 1),
               (TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_N_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bb9a8a0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_N_ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_N_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bb9a930

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_N_ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_N_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  return;
}

// Execute @ 14bb9a9a0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
          *this,ServerMessagesTwoway *param_1)

{
  _func___cdecl_void_ServerMessagesTwoway_ptr_TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar2 = TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)
                      &this->_padding_);
  (*p_Var1)(param_1,pTVar2);
  return;
}

// ExecuteIfSafe @ 14bb9a9e0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>_>
                *this,ServerMessagesTwoway *param_1)

{
  _func___cdecl_void_ServerMessagesTwoway_ptr_TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar2 = TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)
                      &this->_padding_);
  (*p_Var1)(param_1,pTVar2);
  return true;
}

// TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_> @ 14bba7f00

TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
* __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
::
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
           *this,TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__HHHH_NV__TMap_HHVFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_HH_0A_______6B_
  ;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->_padding_,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__HHHH_NV__TMap_HHVFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_HH_0A_______6B_
  ;
  this->StaticFuncPtr = param_1->StaticFuncPtr;
  return this;
}

// CreateCopy @ 14bbaf880

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbaf910

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbaf980

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)(puVar3 + 1),
               (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbafa40

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AX_J_ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AX_J_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbafad0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AX_J_ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AX_J_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbafb40

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AX_J_ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)(puVar3 + 1),
               (TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AX_J_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbafc00

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,enum_EDS_EnvironmentUpdate>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__W4EDS_EnvironmentUpdate____6B_
    ;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__W4EDS_EnvironmentUpdate____6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbafc90

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,enum_EDS_EnvironmentUpdate>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__W4EDS_EnvironmentUpdate____6B_
    ;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__W4EDS_EnvironmentUpdate____6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14bbafce0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,enum_EDS_EnvironmentUpdate>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__W4EDS_EnvironmentUpdate____6B_
    ;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__W4EDS_EnvironmentUpdate____6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbafd80

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x80,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbafdf0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x80,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14bbafe30

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x80,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbafec0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(char *)(puVar1 + 1) = (char)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbaff50

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(char *)(puVar1 + 1) = (char)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbaffa0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbb0050

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(char *)(puVar1 + 1) = (char)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbb00e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(char *)(puVar1 + 1) = (char)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbb0130

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbb01e0

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbb0270

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbb02e0

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bbb50f0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
          *this,ServerMessagesTwoway *param_1)

{
  _func___cdecl_void_ServerMessagesTwoway_ptr_TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar2 = TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&this->_padding_);
  (*p_Var1)(param_1,pTVar2);
  return;
}

// Execute @ 14bbb5130

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
          *this,ServerMessagesTwoway *param_1)

{
  _func___cdecl_void_ServerMessagesTwoway_ptr_TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar2 = TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
                      &this->_padding_);
  (*p_Var1)(param_1,pTVar2);
  return;
}

// Execute @ 14bbb5170

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,enum_EDS_EnvironmentUpdate>
::Execute(void *this,ServerMessagesTwoway *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbb517d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x18))(param_1,*(undefined4 *)((longlong)this + 8));
  return;
}

// Execute @ 14bbb5190

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
          *this,UDS_UserWidget *param_1)

{
  UDS_UserWidget *local_res10 [3];
  
  local_res10[0] = param_1;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
  ::
  ApplyAfter<void_(__cdecl*const_&)(UDS_UserWidget_*,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>),UDS_UserWidget_*>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
              *)&this->_padding_,&this->StaticFuncPtr,local_res10);
  return;
}

// Execute @ 14bbb51c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>
           *this,UDS_UserWidget *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbb51ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,SUB81(this->_padding_,0));
  return;
}

// Execute @ 14bbb51e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
          *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbb51ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)
            ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,
             SUB81(this->_padding_,0));
  return;
}

// Execute @ 14bbb5200

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::Execute(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          *this,FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  _func___cdecl_bool_FDS_ErrorMessageInfo_ptr_Message_ptr_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
  *p_Var1;
  bool bVar2;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar3 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
  bVar2 = (*p_Var1)(param_1,param_2,pTVar3);
  return bVar2;
}

// ExecuteIfSafe @ 14bbb5b70

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
                *this,ServerMessagesTwoway *param_1)

{
  _func___cdecl_void_ServerMessagesTwoway_ptr_TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar2 = TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&this->_padding_);
  (*p_Var1)(param_1,pTVar2);
  return true;
}

// ExecuteIfSafe @ 14bbb5bb0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
                *this,ServerMessagesTwoway *param_1)

{
  _func___cdecl_void_ServerMessagesTwoway_ptr_TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar2 = TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
                      &this->_padding_);
  (*p_Var1)(param_1,pTVar2);
  return true;
}

// ExecuteIfSafe @ 14bbb5bf0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,enum_EDS_EnvironmentUpdate>
::ExecuteIfSafe(void *this,ServerMessagesTwoway *param_1)

{
  (**(code **)((longlong)this + 0x18))(param_1,*(undefined4 *)((longlong)this + 8));
  return true;
}

// ExecuteIfSafe @ 14bbb5c10

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
                *this,UDS_UserWidget *param_1)

{
  UDS_UserWidget *local_res10 [3];
  
  local_res10[0] = param_1;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
  ::
  ApplyAfter<void_(__cdecl*const_&)(UDS_UserWidget_*,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>),UDS_UserWidget_*>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
              *)&this->_padding_,&this->StaticFuncPtr,local_res10);
  return true;
}

// ExecuteIfSafe @ 14bbb5c40

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>
              *this,UDS_UserWidget *param_1)

{
  (*this->StaticFuncPtr)(param_1,SUB81(this->_padding_,0));
  return true;
}

// ExecuteIfSafe @ 14bbb5c70

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
                *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  (*this->StaticFuncPtr)
            ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,
             SUB81(this->_padding_,0));
  return true;
}

// ExecuteIfSafe @ 14bbb5ca0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  _func___cdecl_bool_FDS_ErrorMessageInfo_ptr_Message_ptr_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar2 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
  (*p_Var1)(param_1,param_2,pTVar2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14bbbb7d0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbbb7e0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbbb7f0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,enum_EDS_EnvironmentUpdate>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x18);
}

// GetBoundProgramCounterForTimerManager @ 14bbbb800

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbbb810

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbbb820

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbbb830

ulong64 __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 14bbbcdc0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbbcdd0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbbcde0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,enum_EDS_EnvironmentUpdate>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbbcdf0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbbce00

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbbce10

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbbce20

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14bbbe3b0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbbe3c0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbbe3d0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,enum_EDS_EnvironmentUpdate>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbbe3e0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbbe3f0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>::
GetUObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbbe400

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbbe410

UObject * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14bbbfc60

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbbfc70

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbbfc80

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,enum_EDS_EnvironmentUpdate>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbbfc90

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbbfca0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbbfcb0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbbfcc0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14bbc4b00

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbc4b10

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbc4b20

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,enum_EDS_EnvironmentUpdate>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14bbc4b30

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbc4b40

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>
                *this)

{
  return true;
}

// IsSafeToExecute @ 14bbc4b50

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbc4b60

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14bbe2f60

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bbe2f70

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bbe2f80

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,enum_EDS_EnvironmentUpdate>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bbe2f90

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bbe2fa0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bbe2fb0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bbe2fc0

FName __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64> @ 14bbea260

TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
* __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
::
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
          (void *this,
          TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
          *param_1)

{
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_WindowWidget__VResultUiResponse_server_msg___J__6B_
  ;
  *(int *)((longlong)this + 8) = (int)param_1->_padding_;
  server_msg::ResultUiResponse::ResultUiResponse
            ((ResultUiResponse *)((longlong)this + 0x10),(Arena *)0x0,
             (ResultUiResponse *)&param_1->_padding_);
  *(undefined ***)((longlong)this + 0x10) = &___7ResultUiResponse_server_msg__6B_;
  *(longlong *)((longlong)this + 0x48) = param_1->_padding_;
  *(longlong *)((longlong)this + 0x50) = param_1->_padding_;
  *(undefined ***)this =
       &
       ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_WindowWidget__VResultUiResponse_server_msg___J__6B_
  ;
  *(_func___cdecl_void_UDS_UserWidget_ptr_EDS_WindowWidget_ResultUiResponse_long64 **)
   ((longlong)this + 0x58) = param_1->StaticFuncPtr;
  return this;
}

// TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool> @ 14bbea2e0

TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
* __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
::
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
           *this,TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__HVFString__V2__N__6B_
  ;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  ::FString::FString((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  ::FString::FString((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__HVFString__V2__N__6B_
  ;
  this->StaticFuncPtr = param_1->StaticFuncPtr;
  return this;
}

// CreateCopy @ 14bbedad0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnNpcResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnNpcResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbedb60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnNpcResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnNpcResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbedbb0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnNpcResponse_server_msg____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnNpcResponse_server_msg____6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbedc60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffPortalResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffPortalResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbedcf0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffPortalResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffPortalResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbedd40

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffPortalResponse_server_msg____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffPortalResponse_server_msg____6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbeddf0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestBoardResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestBoardResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbede80

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestBoardResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestBoardResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbeded0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestBoardResponse_server_msg____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestBoardResponse_server_msg____6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbedf80

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbee010

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbee060

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestResponse_server_msg____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestResponse_server_msg____6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbee110

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbee1a0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbee1f0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffResponse_server_msg____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffResponse_server_msg____6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbee2a0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffWarpDeviceResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffWarpDeviceResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbee330

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffWarpDeviceResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffWarpDeviceResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbee380

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffWarpDeviceResponse_server_msg____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffWarpDeviceResponse_server_msg____6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbee430

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTotemResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTotemResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbee4c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTotemResponse_server_msg____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTotemResponse_server_msg____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbee510

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTotemResponse_server_msg____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTotemResponse_server_msg____6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbee5c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 1),
               (TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbee650

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 1),
               (TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbee6c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                *)(puVar3 + 1),
               (TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbee780

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___K__6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___K__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbee810

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___K__6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___K__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbee860

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___K__6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___K__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbee910

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbee990

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14bbee9e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbeea80

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64,int>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___JH__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x10);
    puVar2[1] = *(undefined8 *)((longlong)this + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___JH__6B_
    ;
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbeeb10

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64,int>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___JH__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x10);
    puVar2[1] = *(undefined8 *)((longlong)this + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___JH__6B_
    ;
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14bbeeb60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64,int>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___JH__6B_
    ;
    uVar2 = *(undefined4 *)((longlong)this + 0xc);
    uVar3 = *(undefined4 *)((longlong)this + 0x10);
    uVar4 = *(undefined4 *)((longlong)this + 0x14);
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)this + 8);
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar2;
    *(undefined4 *)(puVar6 + 2) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar4;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___JH__6B_
    ;
    puVar6[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbeec10

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr_____KHH__6B_
    ;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    puVar2[3] = this->_padding_;
    puVar2[4] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr_____KHH__6B_
    ;
    puVar2[5] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbeecb0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr_____KHH__6B_
    ;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    puVar2[3] = this->_padding_;
    puVar2[4] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr_____KHH__6B_
    ;
    puVar2[5] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbeed10

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr_____KHH__6B_
    ;
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar4 = this->_padding_;
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(int *)(puVar6 + 1) = (int)this->_padding_;
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar2;
    *(int *)(puVar6 + 2) = (int)lVar4;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
    puVar6[3] = this->_padding_;
    puVar6[4] = this->_padding_;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr_____KHH__6B_
    ;
    puVar6[5] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbeedc0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x60,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbeee30

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x60,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14bbeee70

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x60,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbeef00

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J_N__6B_
    ;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J_N__6B_
    ;
    puVar2[4] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbeef90

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J_N__6B_
    ;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J_N__6B_
    ;
    puVar2[4] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbeefe0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
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
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J_N__6B_
    ;
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar4 = this->_padding_;
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(int *)(puVar6 + 1) = (int)this->_padding_;
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar2;
    *(int *)(puVar6 + 2) = (int)lVar4;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
    puVar6[3] = this->_padding_;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J_N__6B_
    ;
    puVar6[4] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbef090

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___K_JHH__6B_
    ;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    puVar2[3] = this->_padding_;
    puVar2[4] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___K_JHH__6B_
    ;
    puVar2[5] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbef130

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___K_JHH__6B_
    ;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    puVar2[3] = this->_padding_;
    puVar2[4] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___K_JHH__6B_
    ;
    puVar2[5] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbef190

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___K_JHH__6B_
    ;
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar4 = this->_padding_;
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(int *)(puVar6 + 1) = (int)this->_padding_;
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar2;
    *(int *)(puVar6 + 2) = (int)lVar4;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
    puVar6[3] = this->_padding_;
    puVar6[4] = this->_padding_;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___K_JHH__6B_
    ;
    puVar6[5] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbef240

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    *(char *)(puVar1 + 1) = (char)this->_padding_;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 2),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[5] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[6] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbef2e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    *(char *)(puVar1 + 1) = (char)this->_padding_;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 2),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[5] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[6] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbef350

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 2),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar3[5] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[6] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbef410

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbef480

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14bbef4c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
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
      (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
       *)0x0) {
    TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbef550

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___JH_N__6B_;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    puVar2[3] = this->_padding_;
    *puVar2 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___JH_N__6B_;
    puVar2[4] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbef5e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___JH_N__6B_;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    puVar2[3] = this->_padding_;
    *puVar2 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___JH_N__6B_;
    puVar2[4] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbef630

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___JH_N__6B_;
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar4 = this->_padding_;
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(int *)(puVar6 + 1) = (int)this->_padding_;
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar2;
    *(int *)(puVar6 + 2) = (int)lVar4;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
    puVar6[3] = this->_padding_;
    *puVar6 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___JH_N__6B_;
    puVar6[4] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bbef6e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___JVFString__H__6B_
    ;
    puVar1[1] = this->_padding_;
    ::FString::FString((FString *)(puVar1 + 2),(FString *)&this->_padding_);
    *(int *)(puVar1 + 4) = (int)this->_padding_;
    puVar1[5] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___JVFString__H__6B_
    ;
    puVar1[6] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbef780

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___JVFString__H__6B_
    ;
    puVar1[1] = this->_padding_;
    ::FString::FString((FString *)(puVar1 + 2),(FString *)&this->_padding_);
    *(int *)(puVar1 + 4) = (int)this->_padding_;
    puVar1[5] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___JVFString__H__6B_
    ;
    puVar1[6] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bbef7f0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___JVFString__H__6B_
    ;
    puVar3[1] = this->_padding_;
    ::FString::FString((FString *)(puVar3 + 2),(FString *)&this->_padding_);
    *(int *)(puVar3 + 4) = (int)this->_padding_;
    puVar3[5] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___JVFString__H__6B_
    ;
    puVar3[6] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bbf08c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
          *this,FDS_SpawnInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbf08ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,(SpawnNpcResponse *)this->_padding_);
  return;
}

// Execute @ 14bbf08e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
          *this,FDS_SpawnInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbf08ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,(SpawnStuffPortalResponse *)this->_padding_);
  return;
}

// Execute @ 14bbf0900

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
          *this,FDS_SpawnInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbf090e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,(SpawnStuffQuestBoardResponse *)this->_padding_);
  return;
}

// Execute @ 14bbf0920

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
          *this,FDS_SpawnInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbf092e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,(SpawnStuffQuestResponse *)this->_padding_);
  return;
}

// Execute @ 14bbf0940

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
          *this,FDS_SpawnInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbf094e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,(SpawnStuffResponse *)this->_padding_);
  return;
}

// Execute @ 14bbf0960

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
          *this,FDS_SpawnInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbf096e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,(SpawnStuffWarpDeviceResponse *)this->_padding_);
  return;
}

// Execute @ 14bbf0980

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
          *this,FDS_SpawnInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbf098e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,(SpawnTotemResponse *)this->_padding_);
  return;
}

// Execute @ 14bbf09a0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
          *this,ServerMessagesTwoway *param_1)

{
  _func___cdecl_void_ServerMessagesTwoway_ptr_TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
  *pTVar2;
  TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
  local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar2 = TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
           ::
           TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  (*p_Var1)(param_1,pTVar2);
  return;
}

// Execute @ 14bbf09e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
::Execute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
          *this,ServerMessagesTwoway *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbf09ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,this->_padding_);
  return;
}

// Execute @ 14bbf0a00

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
::Execute(void *this,EDS_MessageResponseType *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbf0a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x18))(param_1);
  return;
}

// Execute @ 14bbf0a10

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64,int>
::Execute(void *this,EDS_MessageResponseType *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbf0a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x20))
            (param_1,*(undefined8 *)((longlong)this + 8),*(undefined4 *)((longlong)this + 0x10));
  return;
}

// Execute @ 14bbf0a30

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
::Execute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
          *this,UDS_UserWidget *param_1)

{
  (*this->StaticFuncPtr)
            (param_1,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)this->_padding_,this->_padding_,
             (int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4));
  return;
}

// Execute @ 14bbf0a60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
::Execute(void *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ResultUiResponse local_48;
  
  pcVar1 = *(code **)((longlong)this + 0x58);
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  server_msg::ResultUiResponse::ResultUiResponse
            (&local_48,(Arena *)0x0,(ResultUiResponse *)((longlong)this + 0x10));
  local_48._padding_ = (longlong)&___7ResultUiResponse_server_msg__6B_;
  (*pcVar1)(param_1,*(undefined4 *)((longlong)this + 8),&local_48,uVar2);
  return;
}

// Execute @ 14bbf0ad0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
          *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbf0ae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)
            ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,this->_padding_,
             SUB81(this->_padding_,0));
  return;
}

// Execute @ 14bbf0af0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
          *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  (*this->StaticFuncPtr)
            ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,this->_padding_,
             this->_padding_,(int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4));
  return;
}

// Execute @ 14bbf0b20

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  _func___cdecl_void_TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>_bool_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar2 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
  (*p_Var1)((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,
            SUB81(this->_padding_,0),pTVar2);
  return;
}

// Execute @ 14bbf0b70

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
::Execute(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
          *this)

{
  _func___cdecl_void_int_FString_FString_bool *p_Var1;
  longlong lVar2;
  FString *pFVar3;
  FString *pFVar4;
  FString local_28;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  lVar2 = this->_padding_;
  pFVar3 = ::FString::FString(&local_28,(FString *)&this->_padding_);
  pFVar4 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)((int)this->_padding_,pFVar4,pFVar3,SUB81(lVar2,0));
  return;
}

// Execute @ 14bbf0be0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbf0bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)
            (this->_padding_,(int)this->_padding_,*(bool *)((longlong)&this->_padding_ + 4));
  return;
}

// Execute @ 14bbf0c00

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>::
Execute(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>
        *this)

{
  _func___cdecl_void_long64_FString_int *p_Var1;
  longlong lVar2;
  FString *pFVar3;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  lVar2 = this->_padding_;
  pFVar3 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)(this->_padding_,pFVar3,(int)lVar2);
  return;
}

// ExecuteIfSafe @ 14bbf0e70

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
                *this,FDS_SpawnInfo *param_1)

{
  (*this->StaticFuncPtr)(param_1,(SpawnNpcResponse *)this->_padding_);
  return true;
}

// ExecuteIfSafe @ 14bbf0ea0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
                *this,FDS_SpawnInfo *param_1)

{
  (*this->StaticFuncPtr)(param_1,(SpawnStuffPortalResponse *)this->_padding_);
  return true;
}

// ExecuteIfSafe @ 14bbf0ed0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
                *this,FDS_SpawnInfo *param_1)

{
  (*this->StaticFuncPtr)(param_1,(SpawnStuffQuestBoardResponse *)this->_padding_);
  return true;
}

// ExecuteIfSafe @ 14bbf0f00

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
                *this,FDS_SpawnInfo *param_1)

{
  (*this->StaticFuncPtr)(param_1,(SpawnStuffQuestResponse *)this->_padding_);
  return true;
}

// ExecuteIfSafe @ 14bbf0f30

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
                *this,FDS_SpawnInfo *param_1)

{
  (*this->StaticFuncPtr)(param_1,(SpawnStuffResponse *)this->_padding_);
  return true;
}

// ExecuteIfSafe @ 14bbf0f60

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
                *this,FDS_SpawnInfo *param_1)

{
  (*this->StaticFuncPtr)(param_1,(SpawnStuffWarpDeviceResponse *)this->_padding_);
  return true;
}

// ExecuteIfSafe @ 14bbf0f90

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
                *this,FDS_SpawnInfo *param_1)

{
  (*this->StaticFuncPtr)(param_1,(SpawnTotemResponse *)this->_padding_);
  return true;
}

// ExecuteIfSafe @ 14bbf0fc0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
                *this,ServerMessagesTwoway *param_1)

{
  _func___cdecl_void_ServerMessagesTwoway_ptr_TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
  *pTVar2;
  TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
  local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar2 = TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
           ::
           TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  (*p_Var1)(param_1,pTVar2);
  return true;
}

// ExecuteIfSafe @ 14bbf1000

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
                *this,ServerMessagesTwoway *param_1)

{
  (*this->StaticFuncPtr)(param_1,this->_padding_);
  return true;
}

// ExecuteIfSafe @ 14bbf1030

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,EDS_MessageResponseType *param_1)

{
  (**(code **)((longlong)this + 0x18))(param_1);
  return true;
}

// ExecuteIfSafe @ 14bbf1050

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64,int>
::ExecuteIfSafe(void *this,EDS_MessageResponseType *param_1)

{
  (**(code **)((longlong)this + 0x20))
            (param_1,*(undefined8 *)((longlong)this + 8),*(undefined4 *)((longlong)this + 0x10));
  return true;
}

// ExecuteIfSafe @ 14bbf1080

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
                *this,UDS_UserWidget *param_1)

{
  (*this->StaticFuncPtr)
            (param_1,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)this->_padding_,this->_padding_,
             (int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4));
  return true;
}

// ExecuteIfSafe @ 14bbf10c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
::ExecuteIfSafe(void *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ResultUiResponse local_48;
  
  pcVar1 = *(code **)((longlong)this + 0x58);
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  server_msg::ResultUiResponse::ResultUiResponse
            (&local_48,(Arena *)0x0,(ResultUiResponse *)((longlong)this + 0x10));
  local_48._padding_ = (longlong)&___7ResultUiResponse_server_msg__6B_;
  (*pcVar1)(param_1,*(undefined4 *)((longlong)this + 8),&local_48,uVar2);
  return true;
}

// ExecuteIfSafe @ 14bbf1130

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
                *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  (*this->StaticFuncPtr)
            ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,this->_padding_,
             SUB81(this->_padding_,0));
  return true;
}

// ExecuteIfSafe @ 14bbf1160

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
                *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  (*this->StaticFuncPtr)
            ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,this->_padding_,
             this->_padding_,(int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4));
  return true;
}

// ExecuteIfSafe @ 14bbf11a0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  _func___cdecl_void_TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>_bool_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = this->StaticFuncPtr;
  pTVar2 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
  (*p_Var1)((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr,
            SUB81(this->_padding_,0),pTVar2);
  return true;
}

// ExecuteIfSafe @ 14bbf11f0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
                *this)

{
  _func___cdecl_void_int_FString_FString_bool *p_Var1;
  longlong lVar2;
  FString *pFVar3;
  FString *pFVar4;
  FString local_28;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  lVar2 = this->_padding_;
  pFVar3 = ::FString::FString(&local_28,(FString *)&this->_padding_);
  pFVar4 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)((int)this->_padding_,pFVar4,pFVar3,SUB81(lVar2,0));
  return true;
}

// ExecuteIfSafe @ 14bbf1260

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>
              *this)

{
  (*this->StaticFuncPtr)
            (this->_padding_,(int)this->_padding_,*(bool *)((longlong)&this->_padding_ + 4));
  return true;
}

// ExecuteIfSafe @ 14bbf1290

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>
              *this)

{
  _func___cdecl_void_long64_FString_int *p_Var1;
  longlong lVar2;
  FString *pFVar3;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  lVar2 = this->_padding_;
  pFVar3 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)(this->_padding_,pFVar3,(int)lVar2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7b00

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7b10

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7b20

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7b30

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7b40

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7b50

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7b60

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7b70

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7b80

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7b90

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x18);
}

// GetBoundProgramCounterForTimerManager @ 14bbf7ba0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64,int>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14bbf7bb0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7bc0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x58);
}

// GetBoundProgramCounterForTimerManager @ 14bbf7bd0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7be0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7bf0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7c00

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7c10

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7c20

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 14bbf85f0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf8600

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf8610

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf8620

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf8630

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf8640

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf8650

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf8660

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf8670

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf8680

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf8690

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64,int>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf86a0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf86b0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf86c0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf86d0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf86e0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf86f0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf8700

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bbf8710

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14bbf87b0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf87c0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf87d0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf87e0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf87f0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf8800

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf8810

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf8820

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf8830

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf8840

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf8850

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64,int>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf8860

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf8870

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf8880

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf8890

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf88a0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf88b0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf88c0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>::
GetUObject(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bbf88d0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>::
GetUObject(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14bbf8b70

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8b80

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8b90

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8ba0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8bb0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8bc0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8bd0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8be0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8bf0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8c00

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8c10

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64,int>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8c20

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8c30

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8c40

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8c50

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8c60

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8c70

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8c80

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bbf8c90

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>
              *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14bbf9fd0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbf9fe0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbf9ff0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa000

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa010

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa020

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa030

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa040

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa050

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa060

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa070

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64,int>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa080

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa090

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa0a0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa0b0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa0c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa0d0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa0e0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>
                *this)

{
  return true;
}

// IsSafeToExecute @ 14bbfa0f0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14bc20610

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnNpcResponse_const_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc20620

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffPortalResponse_const_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc20630

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestBoardResponse_const_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc20640

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffQuestResponse_const_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc20650

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffResponse_const_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc20660

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnStuffWarpDeviceResponse_const_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc20670

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTotemResponse_const_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc20680

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc20690

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,unsigned___int64>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc206a0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc206b0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64,int>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc206c0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,unsigned___int64,int,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc206d0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_WindowWidget,server_msg::ResultUiResponse,__int64>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc206e0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc206f0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,unsigned___int64,__int64,int,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc20700

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc20710

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int,FString,FString,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc20720

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,int,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bc20730

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64,FString,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14bdb3a50

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFDS_ViewModelContext_Common_ConsumeMoneyPopup___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFDS_ViewModelContext_Common_ConsumeMoneyPopup___00____6B_
    ;
    puVar2[4] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bdb3af0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFDS_ViewModelContext_Common_ConsumeMoneyPopup___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFDS_ViewModelContext_Common_ConsumeMoneyPopup___00____6B_
    ;
    puVar2[4] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14bdb3b60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFDS_ViewModelContext_Common_ConsumeMoneyPopup___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFDS_ViewModelContext_Common_ConsumeMoneyPopup___00____6B_
    ;
    puVar4[4] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bdbb940

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
          *this,UDS_UserWidget *param_1)

{
  _func___cdecl_void_UDS_UserWidget_ptr_TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>
  *p_Var1;
  TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1> local_18;
  
  local_18.Object = (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)this->_padding_;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_
  ;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(param_1,&local_18);
  return;
}

// ExecuteIfSafe @ 14bdbde20

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
                *this,UDS_UserWidget *param_1)

{
  _func___cdecl_void_UDS_UserWidget_ptr_TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>
  *p_Var1;
  TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1> local_18;
  
  local_18.Object = (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)this->_padding_;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_
  ;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(param_1,&local_18);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14bdc2280

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 14bdc34d0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14bdc4460

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14bdc4b50

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14bdc8b10

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14bdeb2d0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

