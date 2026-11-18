// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 12

// CloneToEmptyStorage @ 14d98a770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::SetTriggerParameter'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UAudioComponentGroup::SetTriggerParameter'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d98a790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::UpdateComponentParameters'::__l8::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UAudioComponentGroup::UpdateComponentParameters'::`8'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d98a7b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioParameterComponent::SetParameterInternal'::__l36::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 14d98a7f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::UpdateExtensions'::__l12::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UAudioComponentGroup::UpdateExtensions'::`12'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14d98b280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::SetTriggerParameter'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d98b285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d98b290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::UpdateComponentParameters'::__l8::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d98b295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d98b2a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioParameterComponent::SetParameterInternal'::__l36::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d98b2d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::UpdateExtensions'::__l12::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d98b2d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14d98d1a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::SetTriggerParameter'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d98d1b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::UpdateComponentParameters'::__l8::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d98d1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioParameterComponent::SetParameterInternal'::__l36::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d98d1d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::UpdateExtensions'::__l12::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

