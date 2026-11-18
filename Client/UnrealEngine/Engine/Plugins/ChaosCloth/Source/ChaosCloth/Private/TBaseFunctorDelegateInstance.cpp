// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 286

// TryGetBoundFunctionName @ 14db77340

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14db77350

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14db77360

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14db77370

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14db77380

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14db77390

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14db773a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14db77440

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14db774c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14db77500

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  Chaos::ClothingSimulationConsole::<lambda_27>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 14db77510

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Chaos::ClothingSimulationConsole::<lambda_27>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  Chaos::ClothingSimulationConsole::<lambda_27>::operator()(&this->Functor,param_1);
  return true;
}

// CreateCopy @ 14dbc7360

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc73e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14dbc7420

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc74c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc7540

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14dbc7580

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc7620

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc76b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  return;
}

// CreateCopy @ 14dbc7710

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
    puVar6[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc77c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc7840

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14dbc7880

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc7920

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationCloth_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::`5'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc79a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationCloth_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::`5'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14dbc79e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l5::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationCloth_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::`5'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc7a80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l8::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationCloth_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::`8'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc7b00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l8::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationCloth_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::`8'::<lambda_2>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14dbc7b40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l8::<lambda_2>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationCloth_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::`8'::<lambda_2>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc7be0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc7c70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  return;
}

// CreateCopy @ 14dbc7cc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar7 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
    *(undefined4 *)(puVar7 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc7d70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc7e00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  return;
}

// CreateCopy @ 14dbc7e50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar7 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
    *(undefined4 *)(puVar7 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc7f00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc7f80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dbc7fd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc8070

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc80f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dbc8140

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc81e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc8260

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14dbc82b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc8350

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc83e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dbc8430

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc84d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc8560

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  return;
}

// CreateCopy @ 14dbc85b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar7 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
    *(undefined4 *)(puVar7 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc8660

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc86f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  return;
}

// CreateCopy @ 14dbc8740

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar7 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
    *(undefined4 *)(puVar7 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc87f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc8880

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14dbc88d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc8980

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x40);
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
    puVar2[8] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc8a10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x40);
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
    puVar2[8] = uVar1;
  }
  return;
}

// CreateCopy @ 14dbc8a70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar5 = *(undefined8 *)((longlong)this + 0x20);
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar7[4] = uVar5;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
    uVar2 = *(undefined4 *)((longlong)this + 0x3c);
    uVar3 = *(undefined4 *)((longlong)this + 0x40);
    uVar4 = *(undefined4 *)((longlong)this + 0x44);
    *(undefined4 *)(puVar7 + 7) = *(undefined4 *)((longlong)this + 0x38);
    *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar2;
    *(undefined4 *)(puVar7 + 8) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x44) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc8b20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc8bb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  return;
}

// CreateCopy @ 14dbc8c00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar7 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
    *(undefined4 *)(puVar7 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc8cb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc8d40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  return;
}

// CreateCopy @ 14dbc8da0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
    puVar6[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc8e50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc8ed0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dbc8f20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc8fc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc9040

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dbc9090

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc9130

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc91b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dbc9200

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc92a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc9320

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14dbc9370

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc9410

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x68,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x40);
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x50);
    puVar2[9] = *(undefined8 *)((longlong)this + 0x48);
    puVar2[10] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x60);
    puVar2[0xb] = *(undefined8 *)((longlong)this + 0x58);
    puVar2[0xc] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc94b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x68,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x40);
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x50);
    puVar2[9] = *(undefined8 *)((longlong)this + 0x48);
    puVar2[10] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x60);
    puVar2[0xb] = *(undefined8 *)((longlong)this + 0x58);
    puVar2[0xc] = uVar1;
  }
  return;
}

// CreateCopy @ 14dbc9520

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x68,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar5 = *(undefined8 *)((longlong)this + 0x20);
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar7[4] = uVar5;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
    uVar5 = *(undefined8 *)((longlong)this + 0x40);
    puVar7[7] = *(undefined8 *)((longlong)this + 0x38);
    puVar7[8] = uVar5;
    uVar5 = *(undefined8 *)((longlong)this + 0x50);
    puVar7[9] = *(undefined8 *)((longlong)this + 0x48);
    puVar7[10] = uVar5;
    uVar2 = *(undefined4 *)((longlong)this + 0x5c);
    uVar3 = *(undefined4 *)((longlong)this + 0x60);
    uVar4 = *(undefined4 *)((longlong)this + 100);
    *(undefined4 *)(puVar7 + 0xb) = *(undefined4 *)((longlong)this + 0x58);
    *(undefined4 *)((longlong)puVar7 + 0x5c) = uVar2;
    *(undefined4 *)(puVar7 + 0xc) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 100) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc95e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc9670

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  return;
}

// CreateCopy @ 14dbc96c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar7 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
    *(undefined4 *)(puVar7 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dbc9770

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x78,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x40);
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x50);
    puVar2[9] = *(undefined8 *)((longlong)this + 0x48);
    puVar2[10] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x60);
    puVar2[0xb] = *(undefined8 *)((longlong)this + 0x58);
    puVar2[0xc] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x70);
    puVar2[0xd] = *(undefined8 *)((longlong)this + 0x68);
    puVar2[0xe] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dbc9820

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x78,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x40);
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x50);
    puVar2[9] = *(undefined8 *)((longlong)this + 0x48);
    puVar2[10] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x60);
    puVar2[0xb] = *(undefined8 *)((longlong)this + 0x58);
    puVar2[0xc] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x70);
    puVar2[0xd] = *(undefined8 *)((longlong)this + 0x68);
    puVar2[0xe] = uVar1;
  }
  return;
}

// CreateCopy @ 14dbc9890

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x78,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar5 = *(undefined8 *)((longlong)this + 0x20);
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar7[4] = uVar5;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
    uVar5 = *(undefined8 *)((longlong)this + 0x40);
    puVar7[7] = *(undefined8 *)((longlong)this + 0x38);
    puVar7[8] = uVar5;
    uVar5 = *(undefined8 *)((longlong)this + 0x50);
    puVar7[9] = *(undefined8 *)((longlong)this + 0x48);
    puVar7[10] = uVar5;
    uVar2 = *(undefined4 *)((longlong)this + 0x5c);
    uVar3 = *(undefined4 *)((longlong)this + 0x60);
    uVar4 = *(undefined4 *)((longlong)this + 100);
    *(undefined4 *)(puVar7 + 0xb) = *(undefined4 *)((longlong)this + 0x58);
    *(undefined4 *)((longlong)puVar7 + 0x5c) = uVar2;
    *(undefined4 *)(puVar7 + 0xc) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 100) = uVar4;
    uVar5 = *(undefined8 *)((longlong)this + 0x70);
    puVar7[0xd] = *(undefined8 *)((longlong)this + 0x68);
    puVar7[0xe] = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14dbefcf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulation *param_1,FClothingSimulationContextCommon *param_2)

{
  Chaos::FClothingSimulation::RefreshClothConfig(param_1,(IClothingSimulationContext *)param_2);
  return;
}

// Execute @ 14dbefd10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulation *param_1,FClothingSimulationContextCommon *param_2)

{
  param_1->bUseGravityOverride = false;
  return;
}

// Execute @ 14dbefd20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulation *param_1,FClothingSimulationContextCommon *param_2)

{
  double dVar1;
  
  param_1->bUseGravityOverride = true;
  dVar1 = *(double *)((longlong)this + 0x20);
  (param_1->GravityOverride).field0_0x0._s_0.X = *(double *)((longlong)this + 0x18);
  (param_1->GravityOverride).field0_0x0._s_0.Y = dVar1;
  (param_1->GravityOverride).field0_0x0._s_0.Z = *(double *)((longlong)this + 0x28);
  return;
}

// Execute @ 14dbefd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulation *param_1,FClothingSimulationContextCommon *param_2)

{
  Chaos::FClothingSimulationSolver::RefreshCloths((param_1->Solver).Ptr);
  if (6 < (byte)LogChaosCloth._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
    return;
  }
  return;
}

// Execute @ 14dbefd90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l5::<lambda_1>_>
::Execute(void *this,FClothingSimulationCloth *param_1)

{
  param_1->bNeedsReset = true;
  return;
}

// Execute @ 14dbefda0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l8::<lambda_2>_>
::Execute(void *this,FClothingSimulationCloth *param_1)

{
  param_1->bNeedsTeleport = true;
  return;
}

// Execute @ 14dbefdb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14dbefdc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14dbefdd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14dbefde0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  bool bVar1;
  FCollectionPropertyFacade *this_00;
  int *piVar2;
  
  this_00 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  bVar1 = *(bool *)((longlong)this + 0x18);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->field_0x58,
                      Chaos::Softs::FPBDSphericalBackstopConstraint::BackstopRadiusName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::EnableFlags(this_00,*piVar2,Enabled,bVar1);
  }
  return;
}

// Execute @ 14dbefe40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14dbefe50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14dbefe60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14dbefe70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14dbefe80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  TVector2<float>_u_0 local_res8;
  
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDLongRangeConstraints::TetherStiffnessName,
             (TVector2<float> *)((longlong)this + 0x18));
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = *(float *)((longlong)this + 0x20);
  local_res8._s_0.Y = local_res8._s_0.X;
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDLongRangeConstraints::TetherScaleName,
             (TVector2<float> *)&local_res8._s_0);
  return;
}

// Execute @ 14dbeff00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14dbeff10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14dbeff20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14dbeff30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *this_00;
  int *piVar1;
  
  this_00 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->field_0x58,Chaos::FClothingSimulationSolver::MaxNumIterationsName
                     );
  if ((piVar1 != (int *)0x0) && (*piVar1 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<int>
              (this_00,*piVar1,(int *)((longlong)this + 0x18),(int *)((longlong)this + 0x18));
  }
  return;
}

// Execute @ 14dbeff90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *this_00;
  int *piVar1;
  
  this_00 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->field_0x58,Chaos::FClothingSimulationSolver::NumIterationsName);
  if ((piVar1 != (int *)0x0) && (*piVar1 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<int>
              (this_00,*piVar1,(int *)((longlong)this + 0x18),(int *)((longlong)this + 0x18));
  }
  return;
}

// Execute @ 14dbefff0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *this_00;
  int *piVar1;
  
  this_00 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->field_0x58,Chaos::FClothingSimulationSolver::NumSubstepsName);
  if ((piVar1 != (int *)0x0) && (*piVar1 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<int>
              (this_00,*piVar1,(int *)((longlong)this + 0x18),(int *)((longlong)this + 0x18));
  }
  return;
}

// Execute @ 14dbf0050

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *this_00;
  TVector2<float>_u_0 local_res8 [4];
  
  this_00 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8[0]._0_4_ = (undefined4)*(double *)((longlong)this + 0x18);
  local_res8[0]._4_4_ = (undefined4)*(double *)((longlong)this + 0x20);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (this_00,&Chaos::Softs::FVelocityAndPressureField::PressureName,
             (TVector2<float> *)&local_res8[0]._s_0);
  return;
}

// Execute @ 14dbf00b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14dbf00c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14dbf00d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::__l2::<lambda_1>_>
::Execute(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetWind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// ExecuteIfSafe @ 14dbf0170

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulation *param_1,FClothingSimulationContextCommon *param_2)

{
  Chaos::FClothingSimulation::RefreshClothConfig(param_1,(IClothingSimulationContext *)param_2);
  return true;
}

// ExecuteIfSafe @ 14dbf0190

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulation *param_1,FClothingSimulationContextCommon *param_2)

{
  param_1->bUseGravityOverride = false;
  return true;
}

// ExecuteIfSafe @ 14dbf01a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulation *param_1,FClothingSimulationContextCommon *param_2)

{
  double dVar1;
  
  param_1->bUseGravityOverride = true;
  dVar1 = *(double *)((longlong)this + 0x20);
  (param_1->GravityOverride).field0_0x0._s_0.X = *(double *)((longlong)this + 0x18);
  (param_1->GravityOverride).field0_0x0._s_0.Y = dVar1;
  (param_1->GravityOverride).field0_0x0._s_0.Z = *(double *)((longlong)this + 0x28);
  return true;
}

// ExecuteIfSafe @ 14dbf01d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulation *param_1,FClothingSimulationContextCommon *param_2)

{
  Chaos::FClothingSimulationSolver::RefreshCloths((param_1->Solver).Ptr);
  if (6 < (byte)LogChaosCloth._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
  }
  return true;
}

// ExecuteIfSafe @ 14dbf0210

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationCloth *param_1)

{
  param_1->bNeedsReset = true;
  return true;
}

// ExecuteIfSafe @ 14dbf0220

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l8::<lambda_2>_>
::ExecuteIfSafe(void *this,FClothingSimulationCloth *param_1)

{
  param_1->bNeedsTeleport = true;
  return true;
}

// ExecuteIfSafe @ 14dbf0230

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dbf0250

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dbf0270

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dbf0290

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  bool bVar1;
  FCollectionPropertyFacade *this_00;
  int *piVar2;
  
  this_00 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  bVar1 = *(bool *)((longlong)this + 0x18);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->field_0x58,
                      Chaos::Softs::FPBDSphericalBackstopConstraint::BackstopRadiusName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::EnableFlags(this_00,*piVar2,Enabled,bVar1);
  }
  return true;
}

// ExecuteIfSafe @ 14dbf02f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dbf0310

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dbf0330

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dbf0350

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dbf0370

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  TVector2<float>_u_0 local_res8;
  
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDLongRangeConstraints::TetherStiffnessName,
             (TVector2<float> *)((longlong)this + 0x18));
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = *(float *)((longlong)this + 0x20);
  local_res8._s_0.Y = local_res8._s_0.X;
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDLongRangeConstraints::TetherScaleName,
             (TVector2<float> *)&local_res8._s_0);
  return true;
}

// ExecuteIfSafe @ 14dbf03f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dbf0410

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dbf0430

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dbf0450

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *this_00;
  int *piVar1;
  
  this_00 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->field_0x58,Chaos::FClothingSimulationSolver::MaxNumIterationsName
                     );
  if ((piVar1 != (int *)0x0) && (*piVar1 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<int>
              (this_00,*piVar1,(int *)((longlong)this + 0x18),(int *)((longlong)this + 0x18));
  }
  return true;
}

// ExecuteIfSafe @ 14dbf04b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *this_00;
  int *piVar1;
  
  this_00 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->field_0x58,Chaos::FClothingSimulationSolver::NumIterationsName);
  if ((piVar1 != (int *)0x0) && (*piVar1 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<int>
              (this_00,*piVar1,(int *)((longlong)this + 0x18),(int *)((longlong)this + 0x18));
  }
  return true;
}

// ExecuteIfSafe @ 14dbf0510

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *this_00;
  int *piVar1;
  
  this_00 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->field_0x58,Chaos::FClothingSimulationSolver::NumSubstepsName);
  if ((piVar1 != (int *)0x0) && (*piVar1 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<int>
              (this_00,*piVar1,(int *)((longlong)this + 0x18),(int *)((longlong)this + 0x18));
  }
  return true;
}

// ExecuteIfSafe @ 14dbf0570

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *this_00;
  TVector2<float>_u_0 local_res8 [4];
  
  this_00 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8[0]._0_4_ = (undefined4)*(double *)((longlong)this + 0x18);
  local_res8[0]._4_4_ = (undefined4)*(double *)((longlong)this + 0x20);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (this_00,&Chaos::Softs::FVelocityAndPressureField::PressureName,
             (TVector2<float> *)&local_res8[0]._s_0);
  return true;
}

// ExecuteIfSafe @ 14dbf05d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dbf05f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dbf0610

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FClothingSimulationConfig *param_1,int param_2)

{
  `UChaosClothingInteractor::SetWind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14dbf7f60

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf7f70

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf7f80

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf7f90

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf7fa0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf7fb0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l8::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf7fc0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf7fd0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf7fe0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf7ff0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf8000

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf8010

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf8020

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf8030

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf8040

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf8050

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf8060

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf8070

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf8080

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf8090

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf80a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf80b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf80c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf80d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dbf80e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14dbfd240

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd250

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd260

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd270

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd280

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd290

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l8::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd2a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd2b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd2c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd2d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd2e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd2f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd300

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd310

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd320

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd330

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd340

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd350

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd360

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd370

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd380

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd390

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd3a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd3b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dbfd3c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14dc00940

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00950

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00960

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00970

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00980

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00990

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l8::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc009a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc009b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc009c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc009d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc009e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc009f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00a00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00a10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00a20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00a30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00a40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00a50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00a60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00a70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00a80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00a90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00aa0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00ab0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc00ac0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14dc01f00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01f10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01f20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01f30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01f40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01f50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l8::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01f60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01f70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01f80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01f90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01fa0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01fb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01fc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01fd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01fe0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc01ff0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc02000

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc02010

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc02020

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc02030

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc02040

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc02050

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc02060

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc02070

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc02080

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14dc04b60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04b70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04b80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04b90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04ba0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04bb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l8::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04bc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04bd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04be0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04bf0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04c00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04c10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04c20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04c30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04c40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04c50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04c60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04c70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04c80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04c90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04ca0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04cb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04cc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04cd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc04ce0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14dc1c110

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c120

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c130

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c140

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c150

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c160

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::__l8::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c170

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c180

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c190

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c1a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c1b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c1c0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c1d0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c1e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c1f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c200

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c210

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c220

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c230

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c240

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c250

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c260

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c270

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c280

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc1c290

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

