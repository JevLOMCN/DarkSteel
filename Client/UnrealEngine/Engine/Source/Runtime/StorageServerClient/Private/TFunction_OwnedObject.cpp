// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 3

// CloneToEmptyStorage @ 148cbf160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStorageServerConnection::ReadChunkRequestAsync'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = FMemory::Malloc(0x50,8);
  param_1->HeapAllocation = puVar4;
  *puVar4 = &TFunction_OwnedObject<`FStorageServerConnection::ReadChunkRequestAsync'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar4[1] = *(undefined8 *)((longlong)this + 8);
  puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
  uVar2 = *(undefined8 *)((longlong)this + 0x18);
  *(undefined1 *)(puVar4 + 5) = 0;
  puVar4[3] = uVar2;
  cVar1 = *(char *)((longlong)this + 0x28);
  *(char *)(puVar4 + 5) = cVar1;
  if (cVar1 != '\0') {
    puVar4[4] = 0;
    lVar3 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
  }
  *(undefined1 *)(puVar4 + 6) = *(undefined1 *)((longlong)this + 0x30);
  uVar2 = *(undefined8 *)((longlong)this + 0x38);
  puVar4[8] = 0;
  puVar4[7] = uVar2;
  puVar4[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar4[9] = *(undefined8 *)((longlong)this + 0x48);
  return puVar4 + 1;
}

// Destroy @ 148cc1440

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStorageServerConnection::ReadChunkRequestAsync'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 148cc6770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStorageServerConnection::ReadChunkRequestAsync'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

