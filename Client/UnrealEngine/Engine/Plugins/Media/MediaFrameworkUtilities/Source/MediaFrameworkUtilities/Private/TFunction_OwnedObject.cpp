// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 9

// CloneToEmptyStorage @ 14d7d44e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartActiveViewportOutput'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0xd8,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartActiveViewportOutput'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  FMediaCaptureOptions::FMediaCaptureOptions
            ((FMediaCaptureOptions *)(puVar1 + 2),(FMediaCaptureOptions *)((longlong)this + 0x10));
  *(undefined1 *)(puVar1 + 0x1a) = *(undefined1 *)((longlong)this + 0xd0);
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14d7d4550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartManagedViewportOutput'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0xd8,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartManagedViewportOutput'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  FMediaCaptureOptions::FMediaCaptureOptions
            ((FMediaCaptureOptions *)(puVar1 + 2),(FMediaCaptureOptions *)((longlong)this + 0x10));
  *(undefined1 *)(puVar1 + 0x1a) = *(undefined1 *)((longlong)this + 0xd0);
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14d7d45c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartRenderTargetOutput'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0xe0,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartRenderTargetOutput'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  FMediaCaptureOptions::FMediaCaptureOptions
            ((FMediaCaptureOptions *)(puVar1 + 3),(FMediaCaptureOptions *)((longlong)this + 0x18));
  *(undefined1 *)(puVar1 + 0x1b) = *(undefined1 *)((longlong)this + 0xd8);
  return puVar1 + 1;
}

// Destroy @ 14d7d6570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartActiveViewportOutput'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d7d65a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartManagedViewportOutput'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d7d65d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartRenderTargetOutput'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14d7d8080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartActiveViewportOutput'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d7d8090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartManagedViewportOutput'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d7d80a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartRenderTargetOutput'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

