// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GlobalConfigurationDataCore
// Functions: 11

// CreateCopy @ 14e9b8080

void __thiscall
TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGlobalConfigurationConfigRouter____A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_f78228d8 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e9b8110

void __thiscall
TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGlobalConfigurationConfigRouter____A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_f78228d8 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e9b8160

void __thiscall
TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGlobalConfigurationConfigRouter____A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_f78228d8 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14e9b83b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
          *this,FString *param_1,
         TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  FGlobalConfigurationConfigRouter *pFVar1;
  FGlobalConfigurationConfigRouter *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGlobalConfigurationConfigRouter,FGlobalConfigurationConfigRouter_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 14e9b8430

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                *this,FString *param_1,
               TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  FGlobalConfigurationConfigRouter *pFVar1;
  FGlobalConfigurationConfigRouter *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGlobalConfigurationConfigRouter,FGlobalConfigurationConfigRouter_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14e9b8a60

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14e9b8a80

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14e9b8aa0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14e9b8ac0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14e9b8c20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14e9b9550

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

