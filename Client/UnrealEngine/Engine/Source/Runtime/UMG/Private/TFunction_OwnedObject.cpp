// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 21

// CloneToEmptyStorage @ 1469104a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAsyncTaskDownloadImage::HandleImageRequest'::__l21::<lambda_1>,1,1>::
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

// Destroy @ 146913950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAsyncTaskDownloadImage::HandleImageRequest'::__l21::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14691d550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAsyncTaskDownloadImage::HandleImageRequest'::__l21::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1469a74a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<UObject_*>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_PEAVUObject____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_PEAVUObject_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1469a74c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImage::SetBrushFromSoftMaterial'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UImage::SetBrushFromSoftMaterial'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(puVar1 + 3),(FSoftObjectPath *)((longlong)this + 0x18));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1469a7530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImage::SetBrushFromSoftTexture'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UImage::SetBrushFromSoftTexture'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(puVar1 + 3),(FSoftObjectPath *)((longlong)this + 0x18));
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)((longlong)this + 0x38);
  return puVar1 + 1;
}

// Destroy @ 1469bdbf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<UObject_*>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001469bdbf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1469bdc00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImage::SetBrushFromSoftMaterial'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1469bdc30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImage::SetBrushFromSoftTexture'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1469ccea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<UObject_*>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1469cceb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImage::SetBrushFromSoftMaterial'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1469ccec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImage::SetBrushFromSoftTexture'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 146a60f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::ReleasePostBufferUpdater'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 146a60f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::OnPaint'::__l5::<lambda_1>,1,1>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 146a60fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::SetUsePaintGeometry'::__l5::<lambda_1>,1,1>::
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

// Destroy @ 146a6a960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::ReleasePostBufferUpdater'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146a6a965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146a6a970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::OnPaint'::__l5::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146a6a9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::SetUsePaintGeometry'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 146a72980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::ReleasePostBufferUpdater'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146a72990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::OnPaint'::__l5::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146a729a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::SetUsePaintGeometry'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

