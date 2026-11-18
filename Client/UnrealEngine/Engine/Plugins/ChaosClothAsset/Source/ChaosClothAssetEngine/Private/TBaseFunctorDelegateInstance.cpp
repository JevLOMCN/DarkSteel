// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 66

// TryGetBoundFunctionName @ 14dc28730

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14dc28740

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14dc28750

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14dc288d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14dc288e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14dc288f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14dc28900

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dc289a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dc28a20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14dc28a60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
          *this,IConsoleVariable *param_1)

{
  UE::Chaos::ClothAsset::Private::<lambda_25>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 14dc28a70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,UE::Chaos::ClothAsset::Private::<lambda_25>_>
                *this,IConsoleVariable *param_1)

{
  UE::Chaos::ClothAsset::Private::<lambda_25>::operator()(&this->Functor,param_1);
  return true;
}

// CreateCopy @ 14dc43b80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dc43c00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14dc43c40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dc43ce0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dc43d60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14dc43da0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dc43e40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dc43ec0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dc43f10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dc43fb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dc44030

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dc44080

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dc44120

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dc441a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dc441f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14dc458d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::Execute(void *this,FSKMClothingSimulation *param_1)

{
  UE::Chaos::ClothAsset::FSKMClothingSimulation::ResetConfigProperties(param_1);
  return;
}

// Execute @ 14dc458e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::Execute(void *this,FSKMClothingSimulation *param_1)

{
  `UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14dc458f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::Execute(void *this,FSKMClothingSimulation *param_1)

{
  `UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14dc45900

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::Execute(void *this,FSKMClothingSimulation *param_1)

{
  `UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14dc45910

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::Execute(void *this,FSKMClothingSimulation *param_1)

{
  `UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// ExecuteIfSafe @ 14dc45970

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FSKMClothingSimulation *param_1)

{
  UE::Chaos::ClothAsset::FSKMClothingSimulation::ResetConfigProperties(param_1);
  return true;
}

// ExecuteIfSafe @ 14dc45990

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FSKMClothingSimulation *param_1)

{
  `UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14dc459b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FSKMClothingSimulation *param_1)

{
  `UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14dc459d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FSKMClothingSimulation *param_1)

{
  `UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14dc459f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FSKMClothingSimulation *param_1)

{
  `UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14dc4a710

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dc4a720

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dc4a730

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dc4a740

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dc4a750

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14dc4db30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dc4db40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dc4db50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dc4db60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dc4db70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14dc50160

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc50170

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc50180

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc50190

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc501a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14dc51880

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc51890

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc518a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc518b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc518c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14dc52940

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc52950

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc52960

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc52970

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc52980

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14dc5d6d0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc5d6e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc5d6f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc5d700

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc5d710

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

