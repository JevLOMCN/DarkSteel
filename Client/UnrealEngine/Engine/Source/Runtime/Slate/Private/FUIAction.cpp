// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 16

// <lambda_invoker_cdecl> @ 1426e63d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl `FUIAction::FUIAction'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    FSlateApplication::Get();
    return true;
  }
  return false;
}

// FUIAction @ 1426fd640

FUIAction * __thiscall
FUIAction::FUIAction
          (FUIAction *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_4,
          EUIActionRepeatMode param_5)

{
  *(undefined8 *)&this->ExecuteAction = 0;
  *(undefined8 *)&(this->ExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAction).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ExecuteAction,param_1);
  *(undefined8 *)&this->CanExecuteAction = 0;
  *(undefined8 *)&(this->CanExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->CanExecuteAction).field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->CanExecuteAction,param_2);
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
  CreateStatic<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_&>
            (&this->GetActionCheckState,IsActionCheckedPassthrough,param_3);
  *(undefined8 *)&this->IsActionVisibleDelegate = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->IsActionVisibleDelegate).field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->IsActionVisibleDelegate,param_4);
  this->RepeatMode = param_5;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  return this;
}

// FUIAction @ 1426fd760

FUIAction * __thiscall
FUIAction::FUIAction
          (FUIAction *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          EUIActionRepeatMode param_4)

{
  *(undefined8 *)&this->ExecuteAction = 0;
  *(undefined8 *)&(this->ExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAction).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ExecuteAction,param_1);
  *(undefined8 *)&this->CanExecuteAction = 0;
  *(undefined8 *)&(this->CanExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->CanExecuteAction).field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->CanExecuteAction,param_2);
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
  CreateStatic<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_&>
            (&this->GetActionCheckState,IsActionCheckedPassthrough,param_3);
  this->RepeatMode = param_4;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x10 = 0;
  *(undefined8 *)&this->IsActionVisibleDelegate = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x8 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return this;
}

// FUIAction @ 1426fd860

FUIAction * __thiscall
FUIAction::FUIAction
          (FUIAction *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_4,
          EUIActionRepeatMode param_5)

{
  *(undefined8 *)&this->ExecuteAction = 0;
  *(undefined8 *)&(this->ExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAction).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ExecuteAction,param_1);
  *(undefined8 *)&this->CanExecuteAction = 0;
  *(undefined8 *)&(this->CanExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->CanExecuteAction).field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->CanExecuteAction,param_2);
  *(undefined8 *)&this->GetActionCheckState = 0;
  *(undefined8 *)&(this->GetActionCheckState).field_0x8 = 0;
  *(undefined4 *)&(this->GetActionCheckState).field_0x10 = 0;
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->GetActionCheckState,param_3);
  *(undefined8 *)&this->IsActionVisibleDelegate = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->IsActionVisibleDelegate).field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->IsActionVisibleDelegate,param_4);
  this->RepeatMode = param_5;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  return this;
}

// FUIAction @ 1426fd990

FUIAction * __thiscall
FUIAction::FUIAction
          (FUIAction *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          EUIActionRepeatMode param_4)

{
  *(undefined8 *)&this->ExecuteAction = 0;
  *(undefined8 *)&(this->ExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAction).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ExecuteAction,param_1);
  *(undefined8 *)&this->CanExecuteAction = 0;
  *(undefined8 *)&(this->CanExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->CanExecuteAction).field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->CanExecuteAction,param_2);
  *(undefined8 *)&this->GetActionCheckState = 0;
  *(undefined8 *)&(this->GetActionCheckState).field_0x8 = 0;
  *(undefined4 *)&(this->GetActionCheckState).field_0x10 = 0;
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->GetActionCheckState,param_3);
  this->RepeatMode = param_4;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x10 = 0;
  *(undefined8 *)&this->IsActionVisibleDelegate = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x8 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return this;
}

// FUIAction @ 1426fda90

FUIAction * __thiscall
FUIAction::FUIAction
          (FUIAction *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          EUIActionRepeatMode param_3)

{
  *(undefined8 *)&this->ExecuteAction = 0;
  *(undefined8 *)&(this->ExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAction).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ExecuteAction,param_1);
  *(undefined8 *)&this->CanExecuteAction = 0;
  *(undefined8 *)&(this->CanExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->CanExecuteAction).field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->CanExecuteAction,param_2);
  *(undefined8 *)&(this->GetActionCheckState).field_0x10 = 0;
  *(undefined8 *)&this->GetActionCheckState = 0;
  *(undefined8 *)&(this->GetActionCheckState).field_0x8 = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x10 = 0;
  *(undefined8 *)&this->IsActionVisibleDelegate = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x8 = 0;
  this->RepeatMode = param_3;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return this;
}

// FUIAction @ 1426fdb60

FUIAction * __thiscall
FUIAction::FUIAction
          (FUIAction *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,
          EUIActionRepeatMode param_2)

{
  undefined1 *puVar1;
  ForElementType<TAlignedBytes<16,16>_> FVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  *(undefined8 *)&this->ExecuteAction = 0;
  *(undefined8 *)&(this->ExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAction).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ExecuteAction,param_1);
  *(undefined8 *)&(this->CanExecuteAction).field_0x10 = 0;
  *(undefined8 *)&this->CanExecuteAction = 0;
  *(undefined8 *)&(this->CanExecuteAction).field_0x8 = 0;
  *(undefined8 *)&(this->GetActionCheckState).field_0x10 = 0;
  *(undefined8 *)&this->GetActionCheckState = 0;
  *(undefined8 *)&(this->GetActionCheckState).field_0x8 = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x10 = 0;
  *(undefined8 *)&this->IsActionVisibleDelegate = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x8 = 0;
  this->RepeatMode = param_2;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_48);
  local_30 = &local_a0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[3] = `FUIAction::FUIAction'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_90);
  iVar3 = local_a0.DelegateSize;
  FVar2 = local_a0.DelegateAllocator;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CanExecuteAction,
             (FWriteAccessScope *)&local_78);
  puVar1 = &(this->CanExecuteAction).field_0x8;
  if ((*(int *)&(this->CanExecuteAction).field_0x10 != 0) &&
     (*(undefined8 **)puVar1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)puVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->CanExecuteAction).field_0x8,0,0,0x10);
    *(undefined4 *)&(this->CanExecuteAction).field_0x10 = 0;
  }
  if (*(void **)puVar1 != (void *)0x0) {
    FMemory::Free(*(void **)puVar1);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)puVar1 = FVar2;
  *(int *)&(this->CanExecuteAction).field_0x10 = iVar3;
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_60);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return this;
}

// FUIAction @ 1426fdd90

FUIAction * __thiscall FUIAction::FUIAction(FUIAction *this)

{
  *(undefined8 *)&(this->ExecuteAction).field_0x10 = 0;
  *(undefined8 *)&this->ExecuteAction = 0;
  *(undefined8 *)&(this->ExecuteAction).field_0x8 = 0;
  *(undefined8 *)&(this->CanExecuteAction).field_0x10 = 0;
  *(undefined8 *)&this->CanExecuteAction = 0;
  *(undefined8 *)&(this->CanExecuteAction).field_0x8 = 0;
  *(undefined8 *)&(this->GetActionCheckState).field_0x10 = 0;
  *(undefined8 *)&this->GetActionCheckState = 0;
  *(undefined8 *)&(this->GetActionCheckState).field_0x8 = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x10 = 0;
  *(undefined8 *)&this->IsActionVisibleDelegate = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x8 = 0;
  this->RepeatMode = RepeatDisabled;
  return this;
}

// ~FUIAction @ 142701a00

void __thiscall FUIAction::~FUIAction(FUIAction *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->IsActionVisibleDelegate);
  pvVar1 = *(void **)&(this->IsActionVisibleDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->IsActionVisibleDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetActionCheckState);
  pvVar1 = *(void **)&(this->GetActionCheckState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GetActionCheckState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CanExecuteAction);
  pvVar1 = *(void **)&(this->CanExecuteAction).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CanExecuteAction);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  pvVar1 = *(void **)&(this->ExecuteAction).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// CanExecute @ 1427103f0

bool __thiscall FUIAction::CanExecute(FUIAction *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CanExecuteAction,
             &local_28);
  if ((*(int *)&(this->CanExecuteAction).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->CanExecuteAction).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CanExecuteAction,
                 &local_28);
      if (*(int *)&(this->CanExecuteAction).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->CanExecuteAction).field_0x8;
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// Execute @ 142731580

bool __thiscall FUIAction::Execute(FUIAction *this)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 uVar3;
  FReadAccessScope local_28;
  
  bVar2 = CanExecute(this);
  if (!bVar2) {
    return false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&(this->ExecuteAction).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ExecuteAction).field_0x8, plVar1 != (longlong *)0x0)) {
    uVar3 = (**(code **)(*plVar1 + 0x68))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return (bool)uVar3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsActionCheckedPassthrough @ 14274c9b0

ECheckBoxState __cdecl
FUIAction::IsActionCheckedPassthrough
          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  if (((*(int *)&param_1->field_0x10 == 0) || (*(longlong **)&param_1->field_0x8 == (longlong *)0x0)
      ) || (cVar2 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  puVar4 = &param_1->field_0x8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (!bVar1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    if (*(void **)puVar4 != (void *)0x0) {
      FMemory::Free(*(void **)puVar4);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    return Unchecked;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  if (*(int *)&param_1->field_0x10 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)puVar4;
  }
  cVar2 = (**(code **)(*plVar3 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)puVar4 != (void *)0x0) {
    FMemory::Free(*(void **)puVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return cVar2 != '\0';
}

// FUIAction @ 1427b5840

FUIAction * __thiscall FUIAction::FUIAction(FUIAction *this,FUIAction *param_1)

{
  *(undefined8 *)&this->ExecuteAction = 0;
  *(undefined8 *)&(this->ExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAction).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ExecuteAction,&param_1->ExecuteAction);
  *(undefined8 *)&this->CanExecuteAction = 0;
  *(undefined8 *)&(this->CanExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->CanExecuteAction).field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->CanExecuteAction,&param_1->CanExecuteAction);
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
            (&this->GetActionCheckState,&param_1->GetActionCheckState);
  *(undefined8 *)&this->IsActionVisibleDelegate = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->IsActionVisibleDelegate).field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->IsActionVisibleDelegate,&param_1->IsActionVisibleDelegate);
  this->RepeatMode = param_1->RepeatMode;
  return this;
}

// GetCheckState @ 14280e2f0

ECheckBoxState __thiscall FUIAction::GetCheckState(FUIAction *this)

{
  char cVar1;
  ECheckBoxState EVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->GetActionCheckState,
             &local_28);
  if ((*(int *)&(this->GetActionCheckState).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->GetActionCheckState).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->GetActionCheckState,&local_28);
      if (*(int *)&(this->GetActionCheckState).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->GetActionCheckState).field_0x8;
      }
      EVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return EVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return Unchecked;
}

// IsBound @ 14281cf30

bool __thiscall FUIAction::IsBound(FUIAction *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&(this->ExecuteAction).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ExecuteAction).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsVisible @ 14281f930

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall FUIAction::IsVisible(FUIAction *this)

{
  char cVar1;
  longlong *plVar2;
  EVisibility EVar3;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->IsActionVisibleDelegate,&local_28);
  if ((*(int *)&(this->IsActionVisibleDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->IsActionVisibleDelegate).field_0x8, plVar2 != (longlong *)0x0))
  {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->IsActionVisibleDelegate,&local_28);
      if (*(int *)&(this->IsActionVisibleDelegate).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->IsActionVisibleDelegate).field_0x8;
      }
      cVar1 = (**(code **)(*plVar2 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      EVar3 = EVisibility::Collapsed;
      if (cVar1 != '\0') {
        EVar3 = EVisibility::Visible;
      }
      in_RDX->Value = (uchar)EVar3.Value.Value;
      return (TEnumAsByte<EVisibility::Private>)(uchar)in_RDX;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  in_RDX->Value = (uchar)EVisibility::Visible.Value.Value;
  return (EVisibility)(uchar)in_RDX;
}

