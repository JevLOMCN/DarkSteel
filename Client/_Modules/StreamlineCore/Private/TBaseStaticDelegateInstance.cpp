// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 11

// CreateCopy @ 14de75e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWindow__AEBV__TRefCountPtr_VFRHITexture_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWindow__AEBV__TRefCountPtr_VFRHITexture_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14de75f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWindow__AEBV__TRefCountPtr_VFRHITexture_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWindow__AEBV__TRefCountPtr_VFRHITexture_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14de75f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWindow__AEBV__TRefCountPtr_VFRHITexture_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWindow__AEBV__TRefCountPtr_VFRHITexture_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14de78460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
          *this,SWindow *param_1,TRefCountPtr<FRHITexture> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014de7846d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2);
  return;
}

// ExecuteIfSafe @ 14de7a1a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
                *this,SWindow *param_1,TRefCountPtr<FRHITexture> *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14de7a610

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 14de7b260

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14de7baf0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14de7c670

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14de7ca70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14de84a50

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

