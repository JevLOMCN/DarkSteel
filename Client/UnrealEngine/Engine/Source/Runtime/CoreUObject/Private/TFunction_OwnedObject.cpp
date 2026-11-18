// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 199

// CloneToEmptyStorage @ 141e92040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FixedTagPrivate::FAsyncStoreLoader::ReadInitialDataAndKickLoad'::__l15::<lambda_1>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 141e92080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FixedTagPrivate::FAsyncStoreLoader::ReadInitialDataAndKickLoad'::__l15::<lambda_1>,1,1>
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

// Destroy @ 141e95eb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FixedTagPrivate::FAsyncStoreLoader::ReadInitialDataAndKickLoad'::__l15::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141e95ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FixedTagPrivate::FAsyncStoreLoader::ReadInitialDataAndKickLoad'::__l15::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 141e9f1e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FixedTagPrivate::FAsyncStoreLoader::ReadInitialDataAndKickLoad'::__l15::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 141e9f1f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FixedTagPrivate::FAsyncStoreLoader::ReadInitialDataAndKickLoad'::__l15::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 141ee0690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 141ee06b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPrecacheCallbackHandler::FPrecacheCallbackHandler'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FPrecacheCallbackHandler__QEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 141ee06d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FindPackageReferencesInObject'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FindPackageReferencesInObject'::`2'::<lambda_1>,0,1>::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[5] = 0;
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 141ee0750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_CreateLinker'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_CreateLinker'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 141ee07b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ExportsDone'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ExportsDone'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 141ee0810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 141ee0870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 141ee08d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupExports'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupExports'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 141ee0930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupImports'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupImports'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 141ee0990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartImportPackages'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartImportPackages'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 141ee09f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 141ee0a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_FinishLinker'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_FinishLinker'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 141ee0ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncPackage::CreateLinker'::__l222::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FAsyncPackage::CreateLinker'::`222'::<lambda_1>,0,1>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 141ee0b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::__l15::<lambda_2>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::`15'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 141ee8270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141ee8275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 141ee8280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPrecacheCallbackHandler::FPrecacheCallbackHandler'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141ee8285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 141ee8290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FindPackageReferencesInObject'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141ee82c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_CreateLinker'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141ee82f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ExportsDone'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141ee8320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141ee8350

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141ee8380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupExports'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141ee83b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupImports'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141ee83e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartImportPackages'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141ee8410

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141ee8440

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_FinishLinker'::__l5::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141ee8470

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncPackage::CreateLinker'::__l222::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141ee84a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::__l15::<lambda_2>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141ee84a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 141ef85d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141ef85e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPrecacheCallbackHandler::FPrecacheCallbackHandler'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141ef85f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FindPackageReferencesInObject'::__l2::<lambda_1>,0,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141ef8600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_CreateLinker'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141ef8610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ExportsDone'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141ef8620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141ef8630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141ef8640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupExports'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141ef8650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupImports'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141ef8660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartImportPackages'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141ef8670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141ef8680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_FinishLinker'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141ef8690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncPackage::CreateLinker'::__l222::<lambda_1>,0,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141ef86a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::__l15::<lambda_2>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 141f2b370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchHandle::Issue'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Issue_FBatchHandle_FBulkDataBatchRequest__QEAAX__QEAV__TFunction___A6AXW4EStatus_FBulkDataRequest___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 141f2b390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::BulkData::Private::FChunkRequest::Issue'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::BulkData::Private::FChunkRequest::Issue'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 141f2b3b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchBuilder::Read'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchBuilder::Read'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 141f2b3d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 141f2b430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkData::TryLoadDataIntoMemory'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FBulkData::TryLoadDataIntoMemory'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 141f2b490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 141f2b4b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 141f2b4f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 141f2b530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 141f2b570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4___R<lambda_1>__1__OnMounted_FLinkerLoadPackageStoreBackend__UEAAXV__TSharedRef___CBVFPackageStoreBackendContext___00___Z_QEBA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 141f2cb10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchHandle::Issue'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f2cb15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 141f2cb20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::BulkData::Private::FChunkRequest::Issue'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f2cb25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 141f2cb30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchBuilder::Read'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f2cb35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 141f2cb40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141f2cb70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkData::TryLoadDataIntoMemory'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141f2cba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f2cba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 141f2cbb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141f2cbe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141f2cc10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141f2cc40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f2cc45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 141f32c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchHandle::Issue'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141f32c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::BulkData::Private::FChunkRequest::Issue'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141f32c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchBuilder::Read'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141f32c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141f32c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkData::TryLoadDataIntoMemory'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141f32c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141f32c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141f32c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141f32c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141f32ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 141f72bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UScriptStruct::SerializeItem'::__l8::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UScriptStruct::SerializeItem'::`8'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 141f72bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l75::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::`75'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 141f72c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructTracker::FStructTracker'::__l1::<lambda_5_>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FStructTracker::FStructTracker'::`1'::<lambda_5_>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 141f72c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructTracker::FStructTracker'::__l1::<lambda_6_>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FStructTracker::FStructTracker'::`1'::<lambda_6_>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 141f789f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UScriptStruct::SerializeItem'::__l8::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f789f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 141f78a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l75::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f78a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 141f78a10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructTracker::FStructTracker'::__l1::<lambda_5_>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f78a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 141f78a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructTracker::FStructTracker'::__l1::<lambda_6_>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f78a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 141f80830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UScriptStruct::SerializeItem'::__l8::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141f80840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l75::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141f80850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructTracker::FStructTracker'::__l1::<lambda_5_>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 141f80860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructTracker::FStructTracker'::__l1::<lambda_6_>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1420ab4b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1420ab4f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1420ab530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1420ab570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1420ab5b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1420ab5f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1420ab630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1420ab670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1420ab6b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1420ab6f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1420ab730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1420ab770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1420ab7b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1420ab7f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::CreateExport'::__l241::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FLinkerLoad::CreateExport'::`241'::<lambda_1>,0,1>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1420ab850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>,1,1>::
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

// CloneToEmptyStorage @ 1420ab890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>,1,0>::
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

// CloneToEmptyStorage @ 1420ab8d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>,1,1>::
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

// CloneToEmptyStorage @ 1420ab910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>,1,1>::
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

// CloneToEmptyStorage @ 1420ab950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>,1,0>::
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

// CloneToEmptyStorage @ 1420ab990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>,1,0>::
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

// CloneToEmptyStorage @ 1420ab9d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>,1,0>::
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

// Destroy @ 1420b1d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b1d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b1dc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b1df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b1e20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b1e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b1e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b1eb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b1ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b1f10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b1f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001420b1f45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1420b1f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001420b1f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1420b1f60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001420b1f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1420b1f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::CreateExport'::__l241::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b1fa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b1fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001420b1fd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1420b1fe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b2010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1420b2040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001420b2045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1420b2050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001420b2055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1420b2060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001420b2065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1420c5c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1420c5c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1420c5c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1420c5ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1420c5cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1420c5cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1420c5cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1420c5ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1420c5cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1420c5d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1420c5d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1420c5d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1420c5d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1420c5d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::CreateExport'::__l241::<lambda_1>,0,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1420c5d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1420c5d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1420c5d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1420c5d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1420c5d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1420c5da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1420c5db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<UObject_*_(__cdecl*)(UObject_*),0,0> @ 1420eb040

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UObject_*_(__cdecl*)(UObject_*),0,0>::
~TFunction_OwnedObject<UObject_*_(__cdecl*)(UObject_*),0,0>
          (TFunction_OwnedObject<UObject_*_(__cdecl*)(UObject_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVUObject__PEAV1__Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 1420f4610

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UObject_*_(__cdecl*)(UObject_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UObject_*_(__cdecl*)(UObject_*),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6APEAVUObject__PEAV1__Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_UObject_ptr_UObject_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1420f5970

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UObject_*_(__cdecl*)(UObject_*),0,0>::Destroy
          (TFunction_OwnedObject<UObject_*_(__cdecl*)(UObject_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001420f5975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 1420f80f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UObject_*_(__cdecl*)(UObject_*),0,0>::GetAddress
          (TFunction_OwnedObject<UObject_*_(__cdecl*)(UObject_*),0,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 142134980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``UE::FPackageResourceIoBackend::Resolve'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1421349a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::FPackageResourceIoBackend::Resolve'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 142137d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142137d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142137d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142137d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14213c4d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14213c4e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1421c1f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_3>,1,1>::
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

// CloneToEmptyStorage @ 1421c1f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l69::<lambda_4>,1,1>::
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

// CloneToEmptyStorage @ 1421c1f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_5>,1,1>::
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

// Destroy @ 1421c5730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_3>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1421c5760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l69::<lambda_4>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1421c5790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_5>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1421cdb60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_3>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1421cdb70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l69::<lambda_4>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1421cdb80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_5>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 142298600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::`2'::<lambda_1>,0,0>
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

// Destroy @ 142299850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142299855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14229cda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 142312740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l93::<lambda_1>_>'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 142312780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l127::<lambda_2>_>'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1423127c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::StartLoading'::__l23::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``FAsyncPackage2::StartLoading'::`23'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  param_1->InlineAllocation[0x10] = '\0';
  param_1->InlineAllocation[0x11] = '\0';
  param_1->InlineAllocation[0x12] = '\0';
  param_1->InlineAllocation[0x13] = '\0';
  param_1->InlineAllocation[0x14] = '\0';
  param_1->InlineAllocation[0x15] = '\0';
  param_1->InlineAllocation[0x16] = '\0';
  param_1->InlineAllocation[0x17] = '\0';
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142312800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142312820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncPackage2::StartLoading'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FAsyncPackage2::StartLoading'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142312840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookedScriptObjectsDebug::TrimDebugData'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FCookedScriptObjectsDebug::TrimDebugData'::`2'::<lambda_1>,0,1>
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

// CloneToEmptyStorage @ 1423128a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::`23'::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::`8'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1423128c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l14::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::`23'::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::`14'::<lambda_2>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 142318160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l93::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142318165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142318170

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l127::<lambda_2>_>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142318175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142318180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::StartLoading'::__l23::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142318185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142318190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142318195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1423181a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncPackage2::StartLoading'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423181a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1423181b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookedScriptObjectsDebug::TrimDebugData'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423181e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423181e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1423181f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l14::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423181f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1423266a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l93::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423266b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l127::<lambda_2>_>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423266c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::StartLoading'::__l23::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423266d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423266e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncPackage2::StartLoading'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423266f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookedScriptObjectsDebug::TrimDebugData'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142326700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142326710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l14::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

