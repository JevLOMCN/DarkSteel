// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 33

// CloneToEmptyStorage @ 142d42030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedInterceptor'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FMessageTracer::TraceAddedInterceptor'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 142d420a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedRecipient'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &TFunction_OwnedObject<`FMessageTracer::TraceAddedRecipient'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar3[1] = *(undefined8 *)((longlong)this + 8);
  uVar2 = *(undefined8 *)((longlong)this + 0x18);
  puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar3[3] = uVar2;
  puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  puVar3[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar3[6] = *(undefined8 *)((longlong)this + 0x30);
  return puVar3 + 1;
}

// CloneToEmptyStorage @ 142d42120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedSubscription'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FMessageTracer::TraceAddedSubscription'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142d42140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceDispatchedMessage'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FMessageTracer::TraceDispatchedMessage'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)((longlong)this + 0x30);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 142d421d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceHandledMessage'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FMessageTracer::TraceHandledMessage'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = *(undefined8 *)((longlong)this + 0x30);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 142d42260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceInterceptedMessage'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FMessageTracer::TraceInterceptedMessage'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = *(undefined8 *)((longlong)this + 0x30);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 142d422f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedInterceptor'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &TFunction_OwnedObject<`FMessageTracer::TraceRemovedInterceptor'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar3[1] = *(undefined8 *)((longlong)this + 8);
  puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar3[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x28);
  puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  puVar3[5] = uVar2;
  puVar3[6] = *(undefined8 *)((longlong)this + 0x30);
  return puVar3 + 1;
}

// CloneToEmptyStorage @ 142d42370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedRecipient'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FMessageTracer::TraceRemovedRecipient'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 142d423d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedSubscription'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &TFunction_OwnedObject<`FMessageTracer::TraceRemovedSubscription'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar3[1] = *(undefined8 *)((longlong)this + 8);
  puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar3[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x28);
  puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  puVar3[5] = uVar2;
  return puVar3 + 1;
}

// CloneToEmptyStorage @ 142d42440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRoutedMessage'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FMessageTracer::TraceRoutedMessage'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 142d424b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceSentMessage'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FMessageTracer::TraceSentMessage'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  return puVar2 + 1;
}

// Destroy @ 142d435b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedInterceptor'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142d435e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedRecipient'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142d43610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedSubscription'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d43615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142d43620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceDispatchedMessage'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142d43650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceHandledMessage'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142d43680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceInterceptedMessage'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142d436b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedInterceptor'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142d436e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedRecipient'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142d43710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedSubscription'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142d43740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRoutedMessage'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142d43770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceSentMessage'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 142d473b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedInterceptor'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142d473c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedRecipient'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142d473d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedSubscription'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142d473e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceDispatchedMessage'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142d473f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceHandledMessage'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142d47400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceInterceptedMessage'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142d47410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedInterceptor'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142d47420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedRecipient'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142d47430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedSubscription'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142d47440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRoutedMessage'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142d47450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceSentMessage'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

