// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 11

// CreateCopy @ 146b30b50

void __thiscall
TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLocalizationServiceModule____A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c52ae56d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146b30be0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLocalizationServiceModule____A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c52ae56d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146b30c30

void __thiscall
TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLocalizationServiceModule____A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_c52ae56d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146b312e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
          *this,FName *param_1,IModularFeature *param_2)

{
  FLocalizationServiceModule *pFVar1;
  FLocalizationServiceModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FLocalizationServiceModule,FLocalizationServiceModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 146b31650

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                *this,FName *param_1,IModularFeature *param_2)

{
  FLocalizationServiceModule *pFVar1;
  FLocalizationServiceModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FLocalizationServiceModule,FLocalizationServiceModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146b31910

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 146b31dc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 146b32250

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146b32400

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 146b328a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146b338b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

