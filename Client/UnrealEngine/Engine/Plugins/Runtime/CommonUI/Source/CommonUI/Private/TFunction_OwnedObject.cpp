// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 12

// CloneToEmptyStorage @ 14a7c47d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCommonLazyWidget::SetLazyContentInternal<UUserWidget>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x70,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____SetLazyContentInternal_VUUserWidget___UCommonLazyWidget__IEAAXV__TSoftClassPtr_VUUserWidget______QEAV__TFunction___A6AXAEAVUUserWidget___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(puVar2 + 4),(FSoftObjectPath *)((longlong)this + 0x20));
  lVar1 = *(longlong *)((longlong)this + 0x40);
  puVar2[8] = lVar1;
  puVar2[0xd] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x50);
    if (*(undefined8 **)((longlong)this + 0x68) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x68);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14a7c4860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCommonLoadGuard::BP_GuardAndLoadAsset'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  FReadAccessScope local_28;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UCommonLoadGuard::BP_GuardAndLoadAsset'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14a7c48e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCommonLazyWidget::SetLazyContentWithCallback'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  FReadAccessScope local_28;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UCommonLazyWidget::SetLazyContentWithCallback'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14a7c4960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCommonLazyImage::SetBrushFromLazyDisplayAsset'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UCommonLazyImage::SetBrushFromLazyDisplayAsset'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(puVar1 + 3),(FSoftObjectPath *)((longlong)this + 0x18));
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)((longlong)this + 0x38);
  return puVar1 + 1;
}

// Destroy @ 14a7d2f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCommonLazyWidget::SetLazyContentInternal<UUserWidget>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a7d2f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCommonLoadGuard::BP_GuardAndLoadAsset'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a7d2f60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCommonLazyWidget::SetLazyContentWithCallback'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a7d2f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCommonLazyImage::SetBrushFromLazyDisplayAsset'::__l5::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14a7e0620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCommonLazyWidget::SetLazyContentInternal<UUserWidget>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a7e0630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCommonLoadGuard::BP_GuardAndLoadAsset'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a7e0640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCommonLazyWidget::SetLazyContentWithCallback'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a7e0650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCommonLazyImage::SetBrushFromLazyDisplayAsset'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

