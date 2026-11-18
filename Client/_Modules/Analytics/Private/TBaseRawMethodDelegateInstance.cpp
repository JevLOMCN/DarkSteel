// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 11

// CreateCopy @ 1431364c0

void __thiscall
TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBV1__N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBUConfigFromIni_FAnalytics____A6A_AVFString__AEBV3__N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6ab08f3e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 143136550

void __thiscall
TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBV1__N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBUConfigFromIni_FAnalytics____A6A_AVFString__AEBV3__N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6ab08f3e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1431365a0

void __thiscall
TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBV1__N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBUConfigFromIni_FAnalytics____A6A_AVFString__AEBV3__N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_6ab08f3e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 143138bc0

FString * __thiscall
TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  ConfigFromIni *pCVar1;
  ConfigFromIni *local_res8;
  
  local_res8 = this->UserObject;
  pCVar1 = UE::Core::Private::
           DereferenceIfNecessary<FAnalytics::ConfigFromIni,FAnalytics::ConfigFromIni_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pCVar1,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 143138c30

bool __thiscall
TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
                *this,FString *param_1,bool param_2)

{
  ConfigFromIni *pCVar1;
  ConfigFromIni *local_res8;
  void *local_18 [2];
  
  local_res8 = this->UserObject;
  pCVar1 = UE::Core::Private::
           DereferenceIfNecessary<FAnalytics::ConfigFromIni,FAnalytics::ConfigFromIni_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pCVar1,local_18,param_1,param_2);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 143139bc0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14313a440

void * __thiscall
TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14313a970

UObject * __thiscall
TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14313aa00

bool __thiscall
TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14313aa40

bool __thiscall
TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14313e140

FName __thiscall
TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

