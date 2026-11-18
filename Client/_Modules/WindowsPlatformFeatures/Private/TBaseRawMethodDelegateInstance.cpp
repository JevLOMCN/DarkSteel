// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsPlatformFeatures
// Functions: 12

// TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool> @ 148d24c90

TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
* __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
::
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
          (TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
           *this,TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N_NVFString___N__6B_
  ;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  ::FString::FString((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseRawMethodDelegateInstance__0A_VFWindowsVideoRecordingSystem____A6AXXZUFDefaultDelegateUserPolicy___N_NVFString___N__6B_
  ;
  this->UserObject = param_1->UserObject;
  this->MethodPtr = param_1->MethodPtr;
  return this;
}

// CreateCopy @ 148d26090

void __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
       *)0x0) {
    TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148d26100

void __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
       *)0x0) {
    TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 148d26140

void __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
       *)0x0) {
    TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 148d26b20

void __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
::Execute(TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
          *this)

{
  pmf_33a76672 pVar1;
  longlong lVar2;
  FWindowsVideoRecordingSystem *pFVar3;
  FString *pFVar4;
  FWindowsVideoRecordingSystem *local_res8;
  FString local_18;
  
  local_res8 = this->UserObject;
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FWindowsVideoRecordingSystem,FWindowsVideoRecordingSystem_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  lVar2 = this->_padding_;
  pFVar4 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*(code *)pVar1)(pFVar3,(char)this->_padding_,*(undefined1 *)((longlong)&this->_padding_ + 1),
                   pFVar4,(char)lVar2);
  return;
}

// ExecuteIfSafe @ 148d26ba0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
                *this)

{
  pmf_33a76672 pVar1;
  longlong lVar2;
  FWindowsVideoRecordingSystem *pFVar3;
  FString *pFVar4;
  FWindowsVideoRecordingSystem *local_res8;
  FString local_18;
  
  local_res8 = this->UserObject;
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FWindowsVideoRecordingSystem,FWindowsVideoRecordingSystem_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  lVar2 = this->_padding_;
  pFVar4 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*(code *)pVar1)(pFVar3,(char)this->_padding_,*(undefined1 *)((longlong)&this->_padding_ + 1),
                   pFVar4,(char)lVar2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 148d272a0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 148d27770

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 148d27b20

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
::GetUObject(TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 148d27ce0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 148d28430

bool __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 148d2ae20

FName __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

