// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 11

// CreateCopy @ 147208c30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFTypeManager_Mass_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFTypeManager_Mass_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 147208cb0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFTypeManager_Mass_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFTypeManager_Mass_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 147208d00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFTypeManager_Mass_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAUFTypeManager_Mass_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 147215ff0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>::
Execute(TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
        *this,FTypeManager *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147215ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// ExecuteIfSafe @ 1472174b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
              *this,FTypeManager *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14721fc80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 1472238c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 147228fb0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14722aee0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 147232e50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 147252450

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

