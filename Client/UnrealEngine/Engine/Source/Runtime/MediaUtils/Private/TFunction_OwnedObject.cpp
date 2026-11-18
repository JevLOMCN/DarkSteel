// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 3

// CloneToEmptyStorage @ 146bf6700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification::Signal'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<``FMediaPlayerFacade::ContinueOpen'::`5'::FAsyncResourceReleaseNotification::Signal'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// Destroy @ 146bf7960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification::Signal'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 146bfd560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification::Signal'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

