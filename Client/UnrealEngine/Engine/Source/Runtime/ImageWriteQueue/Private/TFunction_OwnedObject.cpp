// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 40

// ~TFunction_OwnedObject<enum_EQueuedWorkPriority_(__cdecl*)(enum_EQueuedWorkPriority),0,0> @ 1446e9540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<enum_EQueuedWorkPriority_(__cdecl*)(enum_EQueuedWorkPriority),0,0>::
~TFunction_OwnedObject<enum_EQueuedWorkPriority_(__cdecl*)(enum_EQueuedWorkPriority),0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_AW4EQueuedWorkPriority__W41__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 1446eb830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<enum_EQueuedWorkPriority_(__cdecl*)(enum_EQueuedWorkPriority),0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AW4EQueuedWorkPriority__W41__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1446eb850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteTask::AddPreProcessorToSetAlphaOpaque'::__l2::PreProcessorToSetAlphaOpaque,1,0>
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

// CloneToEmptyStorage @ 1446eb890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  `UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 2,(<lambda_1> *)((longlong)this + 0x10));
  return puVar1 + 2;
}

// CloneToEmptyStorage @ 1446eb8f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ResolvePixelData'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1446eb930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteTask::OnAbandoned'::__l5::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 1446eb970

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FImageWriteTask::RunTask'::__l5::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1446eb9b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteQueue::CreateFence'::__l8::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 1446eb9f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteQueue::DecrementFence'::__l31::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1446eba30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l5::<lambda_2>,1,1>::
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

// CloneToEmptyStorage @ 1446eba70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l8::<lambda_3>,1,1>::
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

// CloneToEmptyStorage @ 1446ebab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l10::<lambda_4>,1,1>::
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

// CloneToEmptyStorage @ 1446ebaf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l13::<lambda_5>,1,1>::
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

// CloneToEmptyStorage @ 1446ebb30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_6>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x80,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`2'::<lambda_6>,0,1>
             ::_vftable_;
  `UImageWriteBlueprintLibrary::ExportToDisk'::__l2::FCommandParameters::FCommandParameters
            (puVar1 + 2,(FCommandParameters *)((longlong)this + 0x10));
  return puVar1 + 2;
}

// Destroy @ 1446ec6a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<enum_EQueuedWorkPriority_(__cdecl*)(enum_EQueuedWorkPriority),0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001446ec6a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1446ec6b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteTask::AddPreProcessorToSetAlphaOpaque'::__l2::PreProcessorToSetAlphaOpaque,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001446ec6b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1446ec6c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1446ec6f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ResolvePixelData'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1446ec720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteTask::OnAbandoned'::__l5::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1446ec750

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FImageWriteTask::RunTask'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1446ec780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteQueue::CreateFence'::__l8::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1446ec7b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteQueue::DecrementFence'::__l31::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1446ec7e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l5::<lambda_2>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1446ec810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l8::<lambda_3>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1446ec840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l10::<lambda_4>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1446ec870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l13::<lambda_5>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1446ec8a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_6>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1446edf90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<enum_EQueuedWorkPriority_(__cdecl*)(enum_EQueuedWorkPriority),0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1446edfa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteTask::AddPreProcessorToSetAlphaOpaque'::__l2::PreProcessorToSetAlphaOpaque,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1446edfb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1446edfc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ResolvePixelData'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1446edfd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteTask::OnAbandoned'::__l5::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1446edfe0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FImageWriteTask::RunTask'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1446edff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteQueue::CreateFence'::__l8::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1446ee000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteQueue::DecrementFence'::__l31::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1446ee010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l5::<lambda_2>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1446ee020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l8::<lambda_3>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1446ee030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l10::<lambda_4>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1446ee040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l13::<lambda_5>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1446ee050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_6>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

