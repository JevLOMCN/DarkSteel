// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 15

// CloneToEmptyStorage @ 14f021a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChunkDownloader::FMultiCallback::FMultiCallback'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FMultiCallback_FChunkDownloader__QEAA_AEBV__TFunction___A6AX_N_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f021a30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FDownload::StartDownload'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FDownload::StartDownload'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f021a60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChunkDownloader::MountChunkInternal'::__l65::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FChunkDownloader::MountChunkInternal'::`65'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  puVar2[6] = lVar1;
  puVar2[0xb] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x40);
    if (*(undefined8 **)((longlong)this + 0x58) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x58);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14f021b00

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FDownload::StartDownload'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FDownload::StartDownload'::`2'::<lambda_2>,0,1>::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  ::FString::FString((FString *)(puVar2 + 4),(FString *)((longlong)this + 0x20));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14f021b70

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`PlatformStreamDownload'::__l2::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`PlatformStreamDownload'::`2'::<lambda_3>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14f022ff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChunkDownloader::FMultiCallback::FMultiCallback'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f022ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f023000

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FDownload::StartDownload'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f023005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f023010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChunkDownloader::MountChunkInternal'::__l65::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f023040

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FDownload::StartDownload'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f023070

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`PlatformStreamDownload'::__l2::<lambda_3>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f023075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14f025a20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChunkDownloader::FMultiCallback::FMultiCallback'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f025a30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FDownload::StartDownload'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f025a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChunkDownloader::MountChunkInternal'::__l65::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14f025a50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FDownload::StartDownload'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f025a60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`PlatformStreamDownload'::__l2::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

