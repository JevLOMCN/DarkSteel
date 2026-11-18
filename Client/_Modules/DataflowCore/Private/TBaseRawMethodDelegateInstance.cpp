// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 22

// CreateCopy @ 1444410c0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TMap_VFName__UFNodeColors__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__UFNodeColors___0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNodeColorsRegistry_Dataflow_UE____A6AXAEBV__TMap_VFName__UFNodeColors__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__UFNodeColors___0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8a83b43d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 144441150

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TMap_VFName__UFNodeColors__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__UFNodeColors___0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNodeColorsRegistry_Dataflow_UE____A6AXAEBV__TMap_VFName__UFNodeColors__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__UFNodeColors___0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8a83b43d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1444411a0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TMap_VFName__UFNodeColors__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__UFNodeColors___0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNodeColorsRegistry_Dataflow_UE____A6AXAEBV__TMap_VFName__UFNodeColors__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__UFNodeColors___0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_8a83b43d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 144441250

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TMap_VFName__UFPinSettings__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__UFPinSettings___0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPinSettingsRegistry_Dataflow_UE____A6AXAEBV__TMap_VFName__UFPinSettings__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__UFPinSettings___0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a39961ab *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1444412e0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TMap_VFName__UFPinSettings__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__UFPinSettings___0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPinSettingsRegistry_Dataflow_UE____A6AXAEBV__TMap_VFName__UFPinSettings__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__UFPinSettings___0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a39961ab *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 144441330

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TMap_VFName__UFPinSettings__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__UFPinSettings___0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPinSettingsRegistry_Dataflow_UE____A6AXAEBV__TMap_VFName__UFPinSettings__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__UFPinSettings___0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_a39961ab *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 144445f80

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
          *this,TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
                *param_1)

{
  FNodeColorsRegistry *pFVar1;
  FNodeColorsRegistry *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Dataflow::FNodeColorsRegistry,UE::Dataflow::FNodeColorsRegistry_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 144445fd0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
          *this,TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
                *param_1)

{
  FPinSettingsRegistry *pFVar1;
  FPinSettingsRegistry *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Dataflow::FPinSettingsRegistry,UE::Dataflow::FPinSettingsRegistry_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 144446020

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
                *this,TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
                      *param_1)

{
  FNodeColorsRegistry *pFVar1;
  FNodeColorsRegistry *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Dataflow::FNodeColorsRegistry,UE::Dataflow::FNodeColorsRegistry_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 144446070

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
                *this,TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
                      *param_1)

{
  FPinSettingsRegistry *pFVar1;
  FPinSettingsRegistry *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Dataflow::FPinSettingsRegistry,UE::Dataflow::FPinSettingsRegistry_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14444a870

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14444a880

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14444c820

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14444c830

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14444e660

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14444e670

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14444ff90

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14444ffa0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1444517a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1444517b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 144467420

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 144467430

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

