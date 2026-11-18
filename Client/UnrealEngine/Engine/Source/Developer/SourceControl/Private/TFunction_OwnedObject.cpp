// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 15

// CloneToEmptyStorage @ 146b08780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::AsyncQueryFileStates'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  FReadAccessScope local_28;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`USourceControlHelpers::AsyncQueryFileStates'::`2'::<lambda_1>,0,1>
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

// CloneToEmptyStorage @ 146b08800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::QueryFileState'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceControlHelpers::QueryFileState'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 146b08820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::QueryFileStates'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceControlHelpers::QueryFileStates'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 146b08840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 146b08880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>,1,0>
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

// Destroy @ 146b13120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::AsyncQueryFileStates'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146b13150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::QueryFileState'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146b13155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146b13160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::QueryFileStates'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146b13165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146b13170

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146b131a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146b131a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 146b16130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::AsyncQueryFileStates'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146b16140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::QueryFileState'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146b16150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::QueryFileStates'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146b16160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 146b16170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

