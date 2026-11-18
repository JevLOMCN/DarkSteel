// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 22

// CreateCopy @ 14d758ab0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGPUTextureTransferModule____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_85232170 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d758b40

void __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGPUTextureTransferModule____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_85232170 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d758b90

void __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGPUTextureTransferModule____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_85232170 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d758c40

void __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFGPUTextureTransferModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b8caaade *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d758cd0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGPUTextureTransferModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b8caaade *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d758d20

void __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFGPUTextureTransferModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b8caaade *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d7592d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          *this,IConsoleVariable *param_1)

{
  FGPUTextureTransferModule *pFVar1;
  FGPUTextureTransferModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGPUTextureTransferModule,FGPUTextureTransferModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14d759320

void __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FGPUTextureTransferModule *pFVar1;
  FGPUTextureTransferModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGPUTextureTransferModule,FGPUTextureTransferModule_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 14d759360

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,IConsoleVariable *param_1)

{
  FGPUTextureTransferModule *pFVar1;
  FGPUTextureTransferModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGPUTextureTransferModule,FGPUTextureTransferModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14d7593b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FGPUTextureTransferModule *pFVar1;
  FGPUTextureTransferModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGPUTextureTransferModule,FGPUTextureTransferModule_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d759730

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d759740

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14d759940

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d759950

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14d759db0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d759dc0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d759dd0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d759de0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14d75a8c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d75a8d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d75bf80

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d75bf90

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

