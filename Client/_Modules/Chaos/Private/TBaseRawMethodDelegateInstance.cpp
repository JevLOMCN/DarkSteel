// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 22

// CreateCopy @ 1436fd330

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d4e04313 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1436fd3c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d4e04313 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1436fd410

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_d4e04313 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1436fd4c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_66724387 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1436fd550

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_66724387 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1436fd5a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_66724387 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1436fed70

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
          *this,FMaterialHandle param_1)

{
  FChaosSolversModule *pFVar1;
  FChaosSolversModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FChaosSolversModule,FChaosSolversModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1.InnerHandle);
  return;
}

// Execute @ 1436fedc0

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
          *this,FMaterialMaskHandle param_1)

{
  FChaosSolversModule *pFVar1;
  FChaosSolversModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FChaosSolversModule,FChaosSolversModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1.InnerHandle);
  return;
}

// ExecuteIfSafe @ 1436fee10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
                *this,FMaterialHandle param_1)

{
  FChaosSolversModule *pFVar1;
  FChaosSolversModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FChaosSolversModule,FChaosSolversModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1.InnerHandle);
  return true;
}

// ExecuteIfSafe @ 1436fee60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
                *this,FMaterialMaskHandle param_1)

{
  FChaosSolversModule *pFVar1;
  FChaosSolversModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FChaosSolversModule,FChaosSolversModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1.InnerHandle);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1436ff530

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1436ff540

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1436ffcc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1436ffcd0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 143700290

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1437002a0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1437004b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1437004c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 143701940

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 143701950

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 143704650

FName __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143704660

FName __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

