// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayMediaEncoder
// Functions: 9

// CloneToEmptyStorage @ 148d20870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGameplayMediaEncoder::ObtainInputFrame'::__l8::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FGameplayMediaEncoder::ObtainInputFrame'::`8'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 148d208e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGameplayMediaEncoder::Initialize'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FGameplayMediaEncoder::Initialize'::`2'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148d20900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGameplayMediaEncoder::ObtainInputFrame'::__l12::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FGameplayMediaEncoder::ObtainInputFrame'::`12'::<lambda_2>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// Destroy @ 148d21610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGameplayMediaEncoder::ObtainInputFrame'::__l8::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148d21640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGameplayMediaEncoder::Initialize'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148d21645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148d21650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGameplayMediaEncoder::ObtainInputFrame'::__l12::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 148d21d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGameplayMediaEncoder::ObtainInputFrame'::__l8::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148d21d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGameplayMediaEncoder::Initialize'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148d21d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGameplayMediaEncoder::ObtainInputFrame'::__l12::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

