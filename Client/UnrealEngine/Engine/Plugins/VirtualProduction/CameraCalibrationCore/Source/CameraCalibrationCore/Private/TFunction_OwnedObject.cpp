// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 33

// CloneToEmptyStorage @ 14d6bad30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d6bad50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`LensFileRendering::DrawBlendedDisplacementMap'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 14d6bad90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`OverlayRendering::DrawCrosshairOverlay'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 14d6badd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBaseLensTable::ForEachFocusPoint'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FBaseLensTable::ForEachFocusPoint'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  puVar2[9] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x30);
    if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x48);
    }
    (**(code **)*puVar3)();
  }
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)((longlong)this + 0x50);
  *(undefined4 *)((longlong)puVar2 + 0x54) = *(undefined4 *)((longlong)this + 0x54);
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14d6bae70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DistortionRenderingUtils::UndistortImagePoints'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 14d6baeb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCalibratedMapProcessor::Update'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 14d6baef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`LensFileRendering::ClearDisplacementMap'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 14d6baf30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBaseLensTable::ForEachLinkedFocusPoint'::__l9::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FBaseLensTable::ForEachLinkedFocusPoint'::`9'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  puVar2[9] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x30);
    if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x48);
    }
    (**(code **)*puVar3)();
  }
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)((longlong)this + 0x50);
  *(undefined4 *)((longlong)puVar2 + 0x54) = *(undefined4 *)((longlong)this + 0x54);
  *(undefined2 *)(puVar2 + 0xb) = *(undefined2 *)((longlong)this + 0x58);
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14d6bafd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCalibratedMapProcessor::ExecuteJob'::__l10::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 14d6bb010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::`2'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d6bb030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::__l2::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::`2'::<lambda_3>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14d6c01b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d6c01b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d6c01c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`LensFileRendering::DrawBlendedDisplacementMap'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d6c01f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`OverlayRendering::DrawCrosshairOverlay'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d6c0220

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBaseLensTable::ForEachFocusPoint'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d6c0250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DistortionRenderingUtils::UndistortImagePoints'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d6c0280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCalibratedMapProcessor::Update'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d6c0285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d6c0290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`LensFileRendering::ClearDisplacementMap'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d6c0295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d6c02a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBaseLensTable::ForEachLinkedFocusPoint'::__l9::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d6c02d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCalibratedMapProcessor::ExecuteJob'::__l10::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d6c0300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d6c0305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d6c0310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::__l2::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d6c0315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14d6d1ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d6d1cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`LensFileRendering::DrawBlendedDisplacementMap'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d6d1d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`OverlayRendering::DrawCrosshairOverlay'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14d6d1d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBaseLensTable::ForEachFocusPoint'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14d6d1d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DistortionRenderingUtils::UndistortImagePoints'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d6d1d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCalibratedMapProcessor::Update'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d6d1d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`LensFileRendering::ClearDisplacementMap'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d6d1d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBaseLensTable::ForEachLinkedFocusPoint'::__l9::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14d6d1d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCalibratedMapProcessor::ExecuteJob'::__l10::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d6d1d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d6d1d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTestCameraCalibrationCore::Define'::__l2::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

