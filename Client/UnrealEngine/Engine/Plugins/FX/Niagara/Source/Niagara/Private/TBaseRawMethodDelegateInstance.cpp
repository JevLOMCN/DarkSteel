// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 154

// CreateCopy @ 148e616d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraSimCacheCapture____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_95632cb6 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148e61760

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraSimCacheCapture____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_95632cb6 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148e617b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraSimCacheCapture____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_95632cb6 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 148e646c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  FNiagaraSimCacheCapture *pFVar2;
  FNiagaraSimCacheCapture *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraSimCacheCapture,FNiagaraSimCacheCapture_*_&>(local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 148e64ea0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  FNiagaraSimCacheCapture *pFVar1;
  FNiagaraSimCacheCapture *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraSimCacheCapture,FNiagaraSimCacheCapture_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 148e68aa0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 148e6d750

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 148e6fbd0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 148e72b80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 148e75620

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 148e83220

FName __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14903acd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraAsyncGpuTraceHelper____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2a79654c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14903ad60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraAsyncGpuTraceHelper____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2a79654c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14903adb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraAsyncGpuTraceHelper____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_2a79654c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 149040970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FNiagaraAsyncGpuTraceHelper *pFVar1;
  FNiagaraAsyncGpuTraceHelper *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraAsyncGpuTraceHelper,FNiagaraAsyncGpuTraceHelper_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 149041320

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FNiagaraAsyncGpuTraceHelper *pFVar1;
  FNiagaraAsyncGpuTraceHelper *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraAsyncGpuTraceHelper,FNiagaraAsyncGpuTraceHelper_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 149044680

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1490474f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14904a500

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14904ccf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14905ac30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14906d270

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FNiagaraAsyncGpuTraceHelper,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1490e65d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraDataInterfaceProxyOscilloscope____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b1e7dbd2 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1490e6660

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraDataInterfaceProxyOscilloscope____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b1e7dbd2 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1490e66b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraDataInterfaceProxyOscilloscope____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b1e7dbd2 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1490e6760

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraDataInterfaceProxySubmix____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_65662abf *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1490e67f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraDataInterfaceProxySubmix____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_65662abf *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1490e6840

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraDataInterfaceProxySubmix____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_65662abf *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1490f3810

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
          *this,uint param_1)

{
  FNiagaraDataInterfaceProxyOscilloscope *pFVar1;
  FNiagaraDataInterfaceProxyOscilloscope *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraDataInterfaceProxyOscilloscope,FNiagaraDataInterfaceProxyOscilloscope_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 1490f3860

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
          *this,uint param_1)

{
  FNiagaraDataInterfaceProxySubmix *pFVar1;
  FNiagaraDataInterfaceProxySubmix *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraDataInterfaceProxySubmix,FNiagaraDataInterfaceProxySubmix_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 1490f81f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *this,uint param_1)

{
  FNiagaraDataInterfaceProxyOscilloscope *pFVar1;
  FNiagaraDataInterfaceProxyOscilloscope *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraDataInterfaceProxyOscilloscope,FNiagaraDataInterfaceProxyOscilloscope_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 1490f8240

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *this,uint param_1)

{
  FNiagaraDataInterfaceProxySubmix *pFVar1;
  FNiagaraDataInterfaceProxySubmix *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraDataInterfaceProxySubmix,FNiagaraDataInterfaceProxySubmix_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 149103a00

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 149103a10

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 149107da0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 149107db0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14910be10

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14910be20

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 149112690

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1491126a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 149118500

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 149118510

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14913d760

FName __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxyOscilloscope,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14913d770

FName __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FNiagaraDataInterfaceProxySubmix,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14928b220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraDebuggerClient____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ef2943bd *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14928b2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraDebuggerClient____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ef2943bd *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14928b300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraDebuggerClient____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_ef2943bd *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14929b650

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  FNiagaraDebuggerClient *pFVar2;
  FNiagaraDebuggerClient *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraDebuggerClient,FNiagaraDebuggerClient_*_&>(local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 14929b950

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  FNiagaraDebuggerClient *pFVar1;
  FNiagaraDebuggerClient *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraDebuggerClient,FNiagaraDebuggerClient_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1492a0880

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1492a5350

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1492a8350

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1492a9e00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1492adb50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1492bd520

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1492dfa50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TArray_PEAVUNiagaraEffectType__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VINiagaraModule____A6AXAEAV__TArray_PEAVUNiagaraEffectType__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8ed7d25e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1492dfae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TArray_PEAVUNiagaraEffectType__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VINiagaraModule____A6AXAEAV__TArray_PEAVUNiagaraEffectType__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8ed7d25e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1492dfb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TArray_PEAVUNiagaraEffectType__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VINiagaraModule____A6AXAEAV__TArray_PEAVUNiagaraEffectType__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_8ed7d25e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1492dfbe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VINiagaraModule____A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d071c317 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1492dfc70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VINiagaraModule____A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d071c317 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1492dfcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VINiagaraModule____A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_d071c317 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1492dfd70

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VINiagaraModule____A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1492dfe00

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VINiagaraModule____A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 1492dfe50

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VINiagaraModule____A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1492dff00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VINiagaraModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a5e90810 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1492dff90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VINiagaraModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a5e90810 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1492dffe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VINiagaraModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_a5e90810 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1492e5aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *this,TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_> *param_1)

{
  INiagaraModule *pIVar1;
  INiagaraModule *local_res8;
  
  local_res8 = this->UserObject;
  pIVar1 = UE::Core::Private::DereferenceIfNecessary<INiagaraModule,INiagaraModule_*_&>(&local_res8)
  ;
  (*(code *)this->MethodPtr)(pIVar1,param_1);
  return;
}

// Execute @ 1492e5af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
          *this,UWorld *param_1)

{
  INiagaraModule *pIVar1;
  INiagaraModule *local_res8;
  
  local_res8 = this->UserObject;
  pIVar1 = UE::Core::Private::DereferenceIfNecessary<INiagaraModule,INiagaraModule_*_&>(&local_res8)
  ;
  (*(code *)this->MethodPtr)(pIVar1,param_1);
  return;
}

// Execute @ 1492e5b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::Execute(void *this,UWorld *param_1,ELevelTick param_2,float param_3)

{
  INiagaraModule *pIVar1;
  INiagaraModule *local_res8;
  
  local_res8 = *(INiagaraModule **)((longlong)this + 0x18);
  pIVar1 = UE::Core::Private::DereferenceIfNecessary<INiagaraModule,INiagaraModule_*_&>(&local_res8)
  ;
  (**(code **)((longlong)this + 0x20))(pIVar1,param_1,param_2,param_3);
  return;
}

// Execute @ 1492e5bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  INiagaraModule *pIVar1;
  INiagaraModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pIVar1 = UE::Core::Private::DereferenceIfNecessary<INiagaraModule,INiagaraModule_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pIVar1);
  return;
}

// ExecuteIfSafe @ 1492e9340

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_> *param_1)

{
  INiagaraModule *pIVar1;
  INiagaraModule *local_res8;
  
  local_res8 = this->UserObject;
  pIVar1 = UE::Core::Private::DereferenceIfNecessary<INiagaraModule,INiagaraModule_*_&>(&local_res8)
  ;
  (*(code *)this->MethodPtr)(pIVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 1492e9390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
                *this,UWorld *param_1)

{
  INiagaraModule *pIVar1;
  INiagaraModule *local_res8;
  
  local_res8 = this->UserObject;
  pIVar1 = UE::Core::Private::DereferenceIfNecessary<INiagaraModule,INiagaraModule_*_&>(&local_res8)
  ;
  (*(code *)this->MethodPtr)(pIVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 1492e93e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UWorld *param_1,ELevelTick param_2,float param_3)

{
  INiagaraModule *pIVar1;
  INiagaraModule *local_res8;
  
  local_res8 = *(INiagaraModule **)((longlong)this + 0x18);
  pIVar1 = UE::Core::Private::DereferenceIfNecessary<INiagaraModule,INiagaraModule_*_&>(&local_res8)
  ;
  (**(code **)((longlong)this + 0x20))(pIVar1,param_1,param_2,param_3);
  return true;
}

// ExecuteIfSafe @ 1492e9450

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  INiagaraModule *pIVar1;
  INiagaraModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pIVar1 = UE::Core::Private::DereferenceIfNecessary<INiagaraModule,INiagaraModule_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pIVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1492ed9c0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1492ed9d0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1492ed9e0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 1492ed9f0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1492f0d90

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1492f0da0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1492f0db0

void * __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 1492f0dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1492f2460

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1492f2470

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1492f2480

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1492f2490

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1492f3150

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1492f3160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1492f3170

bool __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 1492f3180

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1492f8a00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1492f8a10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1492f8a20

bool __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1492f8a30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14930b480

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14930b490

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14930b4a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14930b4b0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,INiagaraModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1493432a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AHPEAVUWorld__PEAVFViewport__PEAVFCanvas__HHPEBU__TVector_N_Math_UE__PEBU__TRotator_N_56__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraPerfBaselineHandler____A6AHPEAVUWorld__PEAVFViewport__PEAVFCanvas__HHPEBU__TVector_N_Math_UE__PEBU__TRotator_N_67__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b4de157a *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149343330

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AHPEAVUWorld__PEAVFViewport__PEAVFCanvas__HHPEBU__TVector_N_Math_UE__PEBU__TRotator_N_56__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraPerfBaselineHandler____A6AHPEAVUWorld__PEAVFViewport__PEAVFCanvas__HHPEBU__TVector_N_Math_UE__PEBU__TRotator_N_67__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b4de157a *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 149343380

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AHPEAVUWorld__PEAVFViewport__PEAVFCanvas__HHPEBU__TVector_N_Math_UE__PEBU__TRotator_N_56__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraPerfBaselineHandler____A6AHPEAVUWorld__PEAVFViewport__PEAVFCanvas__HHPEBU__TVector_N_Math_UE__PEBU__TRotator_N_67__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b4de157a *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149343430

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUWorld__PEAVFCommonViewportClient__PEB_W_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraPerfBaselineHandler____A6A_NPEAVUWorld__PEAVFCommonViewportClient__PEB_W_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_0cd1edb3 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1493434c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUWorld__PEAVFCommonViewportClient__PEB_W_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraPerfBaselineHandler____A6A_NPEAVUWorld__PEAVFCommonViewportClient__PEB_W_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_0cd1edb3 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 149343510

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUWorld__PEAVFCommonViewportClient__PEB_W_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraPerfBaselineHandler____A6A_NPEAVUWorld__PEAVFCommonViewportClient__PEB_W_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_0cd1edb3 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1493435c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRHICommandListImmediate___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraGpuRibbonsDataManager____A6AXAEAVFRHICommandListImmediate___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3044a2ea *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149343650

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRHICommandListImmediate___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraGpuRibbonsDataManager____A6AXAEAVFRHICommandListImmediate___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3044a2ea *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1493436a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRHICommandListImmediate___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraGpuRibbonsDataManager____A6AXAEAVFRHICommandListImmediate___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_3044a2ea *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1493462e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,int param_5,
         TVector<double> *param_6,TRotator<double> *param_7)

{
  int iVar1;
  FNiagaraPerfBaselineHandler *pFVar2;
  FNiagaraPerfBaselineHandler *local_res8;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraPerfBaselineHandler,FNiagaraPerfBaselineHandler_*_&>
                     (&local_res8);
  iVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7)
  ;
  return iVar1;
}

// Execute @ 149346370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1,FCommonViewportClient *param_2,wchar_t *param_3)

{
  undefined1 uVar1;
  FNiagaraPerfBaselineHandler *pFVar2;
  FNiagaraPerfBaselineHandler *local_res8;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraPerfBaselineHandler,FNiagaraPerfBaselineHandler_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1,param_2,param_3);
  return (bool)uVar1;
}

// Execute @ 1493463e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
          *this,FRHICommandListImmediate *param_1)

{
  FNiagaraGpuRibbonsDataManager *pFVar1;
  FNiagaraGpuRibbonsDataManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraGpuRibbonsDataManager,FNiagaraGpuRibbonsDataManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 149346450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,int param_5,
               TVector<double> *param_6,TRotator<double> *param_7)

{
  FNiagaraPerfBaselineHandler *pFVar1;
  FNiagaraPerfBaselineHandler *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraPerfBaselineHandler,FNiagaraPerfBaselineHandler_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return true;
}

// ExecuteIfSafe @ 1493464f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1,FCommonViewportClient *param_2,wchar_t *param_3)

{
  FNiagaraPerfBaselineHandler *pFVar1;
  FNiagaraPerfBaselineHandler *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraPerfBaselineHandler,FNiagaraPerfBaselineHandler_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3);
  return true;
}

// ExecuteIfSafe @ 149346560

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
                *this,FRHICommandListImmediate *param_1)

{
  FNiagaraGpuRibbonsDataManager *pFVar1;
  FNiagaraGpuRibbonsDataManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraGpuRibbonsDataManager,FNiagaraGpuRibbonsDataManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14934ec00

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14934ec10

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14934ec20

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1493549a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1493549b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1493549c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 149356f90

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 149356fa0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 149356fb0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 149357f40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 149357f50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 149357f60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14935f3f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14935f400

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14935f410

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1493744d0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1493744e0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1493744f0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 149399e10

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUNiagaraSimCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraSimCacheGpuResource____A6AXPEAVUNiagaraSimCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_04be14de *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149399ea0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUNiagaraSimCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraSimCacheGpuResource____A6AXPEAVUNiagaraSimCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_04be14de *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 149399ef0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUNiagaraSimCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraSimCacheGpuResource____A6AXPEAVUNiagaraSimCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_04be14de *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1493a0700

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
          *this,UNiagaraSimCache *param_1)

{
  FNiagaraSimCacheGpuResource *pFVar1;
  FNiagaraSimCacheGpuResource *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraSimCacheGpuResource,FNiagaraSimCacheGpuResource_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 1493a0de0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
                *this,UNiagaraSimCache *param_1)

{
  FNiagaraSimCacheGpuResource *pFVar1;
  FNiagaraSimCacheGpuResource *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraSimCacheGpuResource,FNiagaraSimCacheGpuResource_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1493a3970

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1493a67b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1493a8260

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1493a8400

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1493aa570

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1493ba180

FName __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14943f7e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRDGBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraStatelessComputeManager____A6AXAEAVFRDGBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a5958025 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14943f870

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRDGBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraStatelessComputeManager____A6AXAEAVFRDGBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a5958025 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14943f8c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRDGBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraStatelessComputeManager____A6AXAEAVFRDGBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_a5958025 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 149443320

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
          *this,FRDGBuilder *param_1)

{
  FNiagaraStatelessComputeManager *pFVar1;
  FNiagaraStatelessComputeManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraStatelessComputeManager,FNiagaraStatelessComputeManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 149443cf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
                *this,FRDGBuilder *param_1)

{
  FNiagaraStatelessComputeManager *pFVar1;
  FNiagaraStatelessComputeManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNiagaraStatelessComputeManager,FNiagaraStatelessComputeManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 149448c00

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14944a880

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14944f380

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 149450510

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1494544d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14946c6b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

