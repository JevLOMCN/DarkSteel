// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusSettings
// Functions: 11

// CreateCopy @ 14e1006e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusSettingsModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e100770

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusSettingsModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14e1007c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusSettingsModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14e100890

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FOptimusSettingsModule *pFVar1;
  FOptimusSettingsModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOptimusSettingsModule,FOptimusSettingsModule_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// ExecuteIfSafe @ 14e1008d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FOptimusSettingsModule *pFVar1;
  FOptimusSettingsModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOptimusSettingsModule,FOptimusSettingsModule_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14e100910

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14e100950

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14e100a20

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14e100a30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14e100af0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14e100c40

FName __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

