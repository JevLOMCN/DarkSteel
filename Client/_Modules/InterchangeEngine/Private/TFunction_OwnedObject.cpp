// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 45

// CloneToEmptyStorage @ 14e4e61e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e4e6200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e4e6220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObject_Async::Execute'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Interchange::FTaskImportObject_Async::Execute'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e4e6240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskPostImport_GameThread::Execute'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::Interchange::FTaskPostImport_GameThread::Execute'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e4e62a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e4e6300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e4e6320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14e4e6360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14e4e63a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeManager::SetActiveMode'::__l8::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14e4e63e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`19'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e4e6410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`19'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e4e6440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l28::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::`28'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e4e6460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l50::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::`50'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e4e6480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`21'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e4e64b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`21'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14e4e9be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e4e9be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e4e9bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e4e9bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e4e9c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObject_Async::Execute'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e4e9c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e4e9c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskPostImport_GameThread::Execute'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e4e9c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e4e9c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e4e9c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e4e9c80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e4e9cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e4e9ce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeManager::SetActiveMode'::__l8::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e4e9ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e4e9cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e4e9cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e4e9d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e4e9d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e4e9d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l28::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e4e9d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e4e9d20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l50::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e4e9d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e4e9d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e4e9d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e4e9d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e4e9d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14e4f5920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4f5930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4f5940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObject_Async::Execute'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4f5950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskPostImport_GameThread::Execute'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4f5960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4f5970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4f5980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14e4f5990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4f59a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeManager::SetActiveMode'::__l8::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4f59b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4f59c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4f59d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l28::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4f59e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l50::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4f59f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4f5a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

