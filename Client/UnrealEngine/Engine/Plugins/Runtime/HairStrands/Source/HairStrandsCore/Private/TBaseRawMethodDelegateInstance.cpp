// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 11

// CreateCopy @ 14e005bd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGroomBindingCompilingManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cb634298 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e005c60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGroomBindingCompilingManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cb634298 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e005cb0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGroomBindingCompilingManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_cb634298 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14e00b860

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FGroomBindingCompilingManager *pFVar1;
  FGroomBindingCompilingManager *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGroomBindingCompilingManager,FGroomBindingCompilingManager_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 14e00bd50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FGroomBindingCompilingManager *pFVar1;
  FGroomBindingCompilingManager *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGroomBindingCompilingManager,FGroomBindingCompilingManager_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14e0135d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14e018990

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14e0199e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14e01a030

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14e020c60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14e02ab90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

