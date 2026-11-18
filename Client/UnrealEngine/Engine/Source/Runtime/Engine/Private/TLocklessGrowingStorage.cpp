// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// ~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRegister> @ 14877ddf0

void __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRegister>::
~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRegister>
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRegister> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*,TSizedDefaultAllocator<32>_>
  local_38;
  
  ExtractShards(this,&local_38);
  iVar3 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar5.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar5.Data == pFVar1) break;
    pvVar2 = *(void **)FVar5.Data;
    if (pvVar2 != (void *)0x0) {
      lVar6 = 0x200;
      lVar4 = (longlong)pvVar2 + 0xf008;
      do {
        lVar6 = lVar6 + -1;
        if (*(void **)(lVar4 + -0x10) != (void *)0x0) {
          FMemory::Free(*(void **)(lVar4 + -0x10));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(lVar4 + -0x70));
        lVar4 = lVar4 + -0x78;
      } while (lVar6 != 0);
      ::operator_delete(pvVar2,0xf008);
    }
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  pFVar1 = (this->LockedStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord> @ 14877def0

void __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord>::
~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord>
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord> *this)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*,TSizedDefaultAllocator<32>_>
  local_38;
  
  ExtractShards(this,&local_38);
  iVar4 = local_38.ArrayNum;
  pFVar2 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar4) {
      `TCheckedPointerIterator<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6.Data == pFVar2) break;
    pvVar3 = *(void **)FVar6.Data;
    if (pvVar3 != (void *)0x0) {
      lVar7 = (longlong)pvVar3 + 0x4008;
      lVar5 = 0x200;
      do {
        puVar1 = (undefined8 *)(lVar7 + -0x18);
        lVar7 = lVar7 + -0x20;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)*puVar1);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      ::operator_delete(pvVar3,0x4008);
    }
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  pFVar2 = (this->LockedStorage).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// ~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUnregister> @ 14877dfe0

void __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUnregister>::
~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUnregister>
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUnregister> *this)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*,TSizedDefaultAllocator<32>_>
  local_38;
  
  ExtractShards(this,&local_38);
  iVar4 = local_38.ArrayNum;
  pFVar2 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar4) {
      `TCheckedPointerIterator<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6.Data == pFVar2) break;
    pvVar3 = *(void **)FVar6.Data;
    if (pvVar3 != (void *)0x0) {
      lVar7 = (longlong)pvVar3 + 0x3008;
      lVar5 = 0x200;
      do {
        puVar1 = (undefined8 *)(lVar7 + -0x10);
        lVar7 = lVar7 + -0x18;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)*puVar1);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      ::operator_delete(pvVar3,0x3008);
    }
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  pFVar2 = (this->LockedStorage).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// ~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdate> @ 14877e0d0

void __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdate>::
~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdate>
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdate> *this)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*,TSizedDefaultAllocator<32>_>
  local_38;
  
  ExtractShards(this,&local_38);
  iVar4 = local_38.ArrayNum;
  pFVar2 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar4) {
      `TCheckedPointerIterator<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6.Data == pFVar2) break;
    pvVar3 = *(void **)FVar6.Data;
    if (pvVar3 != (void *)0x0) {
      lVar7 = (longlong)pvVar3 + 0xd008;
      lVar5 = 0x200;
      do {
        puVar1 = (undefined8 *)(lVar7 + -0x60);
        lVar7 = lVar7 + -0x68;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)*puVar1);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      ::operator_delete(pvVar3,0xd008);
    }
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  pFVar2 = (this->LockedStorage).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// ~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime> @ 14877e1c0

void __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime>::
~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime>
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime> *this)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*,TSizedDefaultAllocator<32>_>
  local_38;
  
  ExtractShards(this,&local_38);
  iVar4 = local_38.ArrayNum;
  pFVar2 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar4) {
      `TCheckedPointerIterator<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6.Data == pFVar2) break;
    pvVar3 = *(void **)FVar6.Data;
    if (pvVar3 != (void *)0x0) {
      lVar7 = (longlong)pvVar3 + 0x4008;
      lVar5 = 0x200;
      do {
        puVar1 = (undefined8 *)(lVar7 + -0x18);
        lVar7 = lVar7 + -0x20;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)*puVar1);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      ::operator_delete(pvVar3,0x4008);
    }
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  pFVar2 = (this->LockedStorage).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// ExtractShards @ 148798a40

TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*,TSizedDefaultAllocator<32>_>
* __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRegister>::ExtractShards
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRegister> *this,
          TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*> *paVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*,TSizedDefaultAllocator<32>_>
  *pTVar6;
  bool bVar7;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*> local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  do {
    LOCK();
    bVar7 = this->StorageAllocatorGuard == (atomic<unsigned_int>)0x0;
    if (bVar7) {
      this->StorageAllocatorGuard = (atomic<unsigned_int>)0x1;
    }
    UNLOCK();
  } while (!bVar7);
  pTVar6 = &this->LockedStorage;
  if (__return_storage_ptr__ != pTVar6) {
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = (this->LockedStorage).ArrayNum;
    __return_storage_ptr__->ArrayMax = (this->LockedStorage).ArrayMax;
    (this->LockedStorage).ArrayNum = 0;
    (this->LockedStorage).ArrayMax = 0;
  }
  LOCK();
  local_28[0] = this->Shard;
  this->Shard = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>)0x0;
  UNLOCK();
  this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
  if (local_28[0] !=
      (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>)0x0) {
    do {
      uVar4 = 0x200;
      if (*(uint *)local_28[0] < 0x200) {
        uVar4 = *(uint *)local_28[0];
      }
    } while (*(uint *)((longlong)local_28[0] + 4) < uVar4);
    paVar2 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*> *)
             (__return_storage_ptr__->AllocatorInstance).Data;
    if (((paVar2 <= local_28) && (local_28 < paVar2 + __return_storage_ptr__->ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*,TSizedDefaultAllocator<32>_>
                *)(*pcVar3)();
      return pTVar6;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*> *)
     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
  }
  return __return_storage_ptr__;
}

// ExtractShards @ 148798b90

TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*,TSizedDefaultAllocator<32>_>
* __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord>::ExtractShards
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord> *this,
          TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*> *paVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*,TSizedDefaultAllocator<32>_>
  *pTVar6;
  bool bVar7;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>
  local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  do {
    LOCK();
    bVar7 = this->StorageAllocatorGuard == (atomic<unsigned_int>)0x0;
    if (bVar7) {
      this->StorageAllocatorGuard = (atomic<unsigned_int>)0x1;
    }
    UNLOCK();
  } while (!bVar7);
  pTVar6 = &this->LockedStorage;
  if (__return_storage_ptr__ != pTVar6) {
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = (this->LockedStorage).ArrayNum;
    __return_storage_ptr__->ArrayMax = (this->LockedStorage).ArrayMax;
    (this->LockedStorage).ArrayNum = 0;
    (this->LockedStorage).ArrayMax = 0;
  }
  LOCK();
  local_28[0] = this->Shard;
  this->Shard = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>
                 )0x0;
  UNLOCK();
  this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
  if (local_28[0] !=
      (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>)0x0)
  {
    do {
      uVar4 = 0x200;
      if (*(uint *)local_28[0] < 0x200) {
        uVar4 = *(uint *)local_28[0];
      }
    } while (*(uint *)((longlong)local_28[0] + 4) < uVar4);
    paVar2 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>
              *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((paVar2 <= local_28) && (local_28 < paVar2 + __return_storage_ptr__->ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*,TSizedDefaultAllocator<32>_>
                *)(*pcVar3)();
      return pTVar6;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*> *)
     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
  }
  return __return_storage_ptr__;
}

// ExtractShards @ 148798ce0

TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*,TSizedDefaultAllocator<32>_>
* __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUnregister>::ExtractShards
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUnregister> *this,
          TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*> *paVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*,TSizedDefaultAllocator<32>_>
  *pTVar6;
  bool bVar7;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*> local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  do {
    LOCK();
    bVar7 = this->StorageAllocatorGuard == (atomic<unsigned_int>)0x0;
    if (bVar7) {
      this->StorageAllocatorGuard = (atomic<unsigned_int>)0x1;
    }
    UNLOCK();
  } while (!bVar7);
  pTVar6 = &this->LockedStorage;
  if (__return_storage_ptr__ != pTVar6) {
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = (this->LockedStorage).ArrayNum;
    __return_storage_ptr__->ArrayMax = (this->LockedStorage).ArrayMax;
    (this->LockedStorage).ArrayNum = 0;
    (this->LockedStorage).ArrayMax = 0;
  }
  LOCK();
  local_28[0] = this->Shard;
  this->Shard = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>)
                0x0;
  UNLOCK();
  this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
  if (local_28[0] !=
      (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>)0x0) {
    do {
      uVar4 = 0x200;
      if (*(uint *)local_28[0] < 0x200) {
        uVar4 = *(uint *)local_28[0];
      }
    } while (*(uint *)((longlong)local_28[0] + 4) < uVar4);
    paVar2 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*> *)
             (__return_storage_ptr__->AllocatorInstance).Data;
    if (((paVar2 <= local_28) && (local_28 < paVar2 + __return_storage_ptr__->ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*,TSizedDefaultAllocator<32>_>
                *)(*pcVar3)();
      return pTVar6;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*> *)
     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
  }
  return __return_storage_ptr__;
}

// ExtractShards @ 148798e30

TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*,TSizedDefaultAllocator<32>_>
* __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdate>::ExtractShards
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdate> *this,
          TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*> *paVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*,TSizedDefaultAllocator<32>_>
  *pTVar6;
  bool bVar7;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*> local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  do {
    LOCK();
    bVar7 = this->StorageAllocatorGuard == (atomic<unsigned_int>)0x0;
    if (bVar7) {
      this->StorageAllocatorGuard = (atomic<unsigned_int>)0x1;
    }
    UNLOCK();
  } while (!bVar7);
  pTVar6 = &this->LockedStorage;
  if (__return_storage_ptr__ != pTVar6) {
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = (this->LockedStorage).ArrayNum;
    __return_storage_ptr__->ArrayMax = (this->LockedStorage).ArrayMax;
    (this->LockedStorage).ArrayNum = 0;
    (this->LockedStorage).ArrayMax = 0;
  }
  LOCK();
  local_28[0] = this->Shard;
  this->Shard = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>)0x0;
  UNLOCK();
  this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
  if (local_28[0] !=
      (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>)0x0) {
    do {
      uVar4 = 0x200;
      if (*(uint *)local_28[0] < 0x200) {
        uVar4 = *(uint *)local_28[0];
      }
    } while (*(uint *)((longlong)local_28[0] + 4) < uVar4);
    paVar2 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*> *)
             (__return_storage_ptr__->AllocatorInstance).Data;
    if (((paVar2 <= local_28) && (local_28 < paVar2 + __return_storage_ptr__->ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*,TSizedDefaultAllocator<32>_>
                *)(*pcVar3)();
      return pTVar6;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*> *)
     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
  }
  return __return_storage_ptr__;
}

// ExtractShards @ 148798f80

TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*,TSizedDefaultAllocator<32>_>
* __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime>::ExtractShards
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime> *this,
          TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*> *paVar2
  ;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*,TSizedDefaultAllocator<32>_>
  *pTVar6;
  bool bVar7;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
  local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  do {
    LOCK();
    bVar7 = this->StorageAllocatorGuard == (atomic<unsigned_int>)0x0;
    if (bVar7) {
      this->StorageAllocatorGuard = (atomic<unsigned_int>)0x1;
    }
    UNLOCK();
  } while (!bVar7);
  pTVar6 = &this->LockedStorage;
  if (__return_storage_ptr__ != pTVar6) {
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = (this->LockedStorage).ArrayNum;
    __return_storage_ptr__->ArrayMax = (this->LockedStorage).ArrayMax;
    (this->LockedStorage).ArrayNum = 0;
    (this->LockedStorage).ArrayMax = 0;
  }
  LOCK();
  local_28[0] = this->Shard;
  this->Shard = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
                 )0x0;
  UNLOCK();
  this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
  if (local_28[0] !=
      (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>)
      0x0) {
    do {
      uVar4 = 0x200;
      if (*(uint *)local_28[0] < 0x200) {
        uVar4 = *(uint *)local_28[0];
      }
    } while (*(uint *)((longlong)local_28[0] + 4) < uVar4);
    paVar2 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
              *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((paVar2 <= local_28) && (local_28 < paVar2 + __return_storage_ptr__->ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*,TSizedDefaultAllocator<32>_>
                *)(*pcVar3)();
      return pTVar6;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*> *)
     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
  }
  return __return_storage_ptr__;
}

// Push @ 1487b3c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRegister>::Push
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRegister> *this,
          FRegister *param_1)

{
  int *piVar1;
  TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*> *paVar4;
  code *pcVar5;
  int iVar6;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*> aVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint *puVar11;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*> aVar12;
  bool bVar13;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*> local_38 [2];
  
  do {
    while( true ) {
      do {
        local_38[0] = this->Shard;
        if (local_38[0] !=
            (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>)0x0) {
          LOCK();
          uVar3 = *(uint *)local_38[0];
          *(uint *)local_38[0] = *(uint *)local_38[0] + 1;
          UNLOCK();
          if (uVar3 < 0x200) {
            puVar10 = (uint *)((ulonglong)uVar3 * 0x78 + (longlong)local_38[0]);
            FSimpleStreamableAssetManager::FUpdate::operator=
                      ((FUpdate *)(puVar10 + 2),(FUpdate *)param_1);
            pTVar2 = &param_1->Assets;
            puVar11 = puVar10 + 0x1c;
            if ((TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *)puVar11 !=
                pTVar2) {
              if (*(void **)puVar11 != (void *)0x0) {
                FMemory::Free(*(void **)puVar11);
              }
              *(FScriptContainerElement **)puVar11 = (pTVar2->AllocatorInstance).Data;
              (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              puVar10[0x1e] = (param_1->Assets).ArrayNum;
              puVar10[0x1f] = (param_1->Assets).ArrayMax;
              (param_1->Assets).ArrayNum = 0;
              (param_1->Assets).ArrayMax = 0;
            }
            do {
              LOCK();
              bVar13 = uVar3 == *(uint *)((longlong)local_38[0] + 4);
              if (bVar13) {
                *(uint *)((longlong)local_38[0] + 4) = uVar3 + 1;
              }
              UNLOCK();
            } while (!bVar13);
            return;
          }
        }
        LOCK();
        bVar13 = this->StorageAllocatorGuard == (atomic<unsigned_int>)0x0;
        if (bVar13) {
          this->StorageAllocatorGuard = (atomic<unsigned_int>)0x1;
        }
        UNLOCK();
      } while (!bVar13);
      aVar7 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>)
              ::operator_new(0xf008);
      aVar12 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>)0x0;
      if (aVar7 != (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>)
                   0x0) {
        *(undefined8 *)aVar7 = 0;
        memset((undefined8 *)((longlong)aVar7 + 8),0,0xf000);
        puVar9 = (undefined8 *)((longlong)aVar7 + 0x18);
        lVar8 = 0x200;
        do {
          puVar9[10] = 0;
          puVar9[-2] = 0;
          puVar9[-1] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          *(byte *)(puVar9 + 10) = *(byte *)(puVar9 + 10) & 0xfe;
          puVar9[7] = 0;
          puVar9[8] = 0x3f800000;
          *(undefined4 *)(puVar9 + 9) = 0x7f7fffff;
          *(undefined4 *)((longlong)puVar9 + 0x4c) = 0xc47a0000;
          puVar9[0xb] = 0;
          puVar9[0xc] = 0;
          puVar9 = puVar9 + 0xf;
          lVar8 = lVar8 + -1;
          aVar12 = aVar7;
        } while (lVar8 != 0);
      }
      LOCK();
      aVar7 = this->Shard;
      bVar13 = local_38[0] == aVar7;
      if (bVar13) {
        this->Shard = aVar12;
        aVar7 = local_38[0];
      }
      UNLOCK();
      if (!bVar13) break;
      if (local_38[0] !=
          (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>)0x0) {
        paVar4 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*> *)
                 (this->LockedStorage).AllocatorInstance.Data;
        if (((paVar4 <= local_38) && (local_38 < paVar4 + (this->LockedStorage).ArrayMax)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar6 = (this->LockedStorage).ArrayNum;
        piVar1 = &(this->LockedStorage).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->LockedStorage).AllocatorInstance,piVar1);
        }
        (this->LockedStorage).ArrayNum = iVar6 + 1;
        *(atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*> *)
         ((this->LockedStorage).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38[0];
      }
code_r0x0001487b3e83:
      this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
    }
    if (aVar12 == (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>)
                  0x0) goto code_r0x0001487b3e83;
    lVar8 = 0x200;
    puVar9 = (undefined8 *)((longlong)aVar12 + 0xf008);
    local_38[0] = aVar7;
    do {
      lVar8 = lVar8 + -1;
      if ((void *)puVar9[-2] != (void *)0x0) {
        FMemory::Free((void *)puVar9[-2]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)puVar9[-0xe]);
      puVar9 = puVar9 + -0xf;
    } while (lVar8 != 0);
    ::operator_delete((void *)aVar12,0xf008);
    this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
  } while( true );
}

// Push @ 1487b3f10

void __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord>::Push
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord> *this,
          FRemovedAssetRecord *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*> *paVar4;
  code *pcVar5;
  int iVar6;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*> aVar7;
  undefined8 *puVar8;
  longlong lVar9;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*> aVar10;
  FRemovedAssetRecord *pFVar11;
  bool bVar12;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>
  local_38 [2];
  
  do {
    while( true ) {
      do {
        local_38[0] = this->Shard;
        if (local_38[0] !=
            (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>
             )0x0) {
          LOCK();
          uVar3 = *(uint *)local_38[0];
          *(uint *)local_38[0] = *(uint *)local_38[0] + 1;
          UNLOCK();
          if (uVar3 < 0x200) {
            pFVar11 = (FRemovedAssetRecord *)
                      ((uint *)((longlong)local_38[0] + 8) + (ulonglong)uVar3 * 8);
            if (pFVar11 != param_1) {
              (pFVar11->SimpleStreamableAssetManagerIndex).Object =
                   (param_1->SimpleStreamableAssetManagerIndex).Object;
              (param_1->SimpleStreamableAssetManagerIndex).Object = (int *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(pFVar11->SimpleStreamableAssetManagerIndex).SharedReferenceCount,
                         &(param_1->SimpleStreamableAssetManagerIndex).SharedReferenceCount);
            }
            pFVar11->AssetElementIndex = param_1->AssetElementIndex;
            pFVar11->StreamableRenderAsset_ForDebug = param_1->StreamableRenderAsset_ForDebug;
            do {
              LOCK();
              bVar12 = uVar3 == *(uint *)((longlong)local_38[0] + 4);
              if (bVar12) {
                *(uint *)((longlong)local_38[0] + 4) = uVar3 + 1;
              }
              UNLOCK();
            } while (!bVar12);
            return;
          }
        }
        LOCK();
        bVar12 = this->StorageAllocatorGuard == (atomic<unsigned_int>)0x0;
        if (bVar12) {
          this->StorageAllocatorGuard = (atomic<unsigned_int>)0x1;
        }
        UNLOCK();
      } while (!bVar12);
      aVar7 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>
               )::operator_new(0x4008);
      aVar10 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>
                )0x0;
      if (aVar7 != (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>
                    )0x0) {
        *(undefined8 *)aVar7 = 0;
        memset((undefined8 *)((longlong)aVar7 + 8),0,0x4000);
        puVar8 = (undefined8 *)((longlong)aVar7 + 0x18);
        lVar9 = 0x200;
        do {
          puVar8[-2] = 0;
          puVar8[-1] = 0;
          *(undefined4 *)puVar8 = 0xffffffff;
          puVar8[1] = 0;
          puVar8 = puVar8 + 4;
          lVar9 = lVar9 + -1;
          aVar10 = aVar7;
        } while (lVar9 != 0);
      }
      LOCK();
      aVar7 = this->Shard;
      bVar12 = local_38[0] == aVar7;
      if (bVar12) {
        this->Shard = aVar10;
        aVar7 = local_38[0];
      }
      UNLOCK();
      if (!bVar12) break;
      if (local_38[0] !=
          (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>)
          0x0) {
        paVar4 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>
                  *)(this->LockedStorage).AllocatorInstance.Data;
        if (((paVar4 <= local_38) && (local_38 < paVar4 + (this->LockedStorage).ArrayMax)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar6 = (this->LockedStorage).ArrayNum;
        piVar2 = &(this->LockedStorage).ArrayMax;
        if (iVar6 == *piVar2) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->LockedStorage).AllocatorInstance,piVar2);
        }
        (this->LockedStorage).ArrayNum = iVar6 + 1;
        *(atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*> *
         )((this->LockedStorage).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38[0];
      }
code_r0x0001487b40c2:
      this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
    }
    if (aVar10 == (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>
                   )0x0) goto code_r0x0001487b40c2;
    puVar8 = (undefined8 *)((longlong)aVar10 + 0x4008);
    lVar9 = 0x200;
    local_38[0] = aVar7;
    do {
      puVar1 = puVar8 + -3;
      puVar8 = puVar8 + -4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    ::operator_delete((void *)aVar10,0x4008);
    this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
  } while( true );
}

// Push @ 1487b4150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUnregister>::Push
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUnregister> *this,
          FUnregister *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  FUnregister *pFVar3;
  uint uVar4;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*> *paVar5;
  code *pcVar6;
  int iVar7;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*> aVar8;
  longlong lVar9;
  undefined8 *puVar10;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*> aVar11;
  bool bVar12;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*> local_38 [2];
  
  do {
    while( true ) {
      do {
        local_38[0] = this->Shard;
        if (local_38[0] !=
            (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>)0x0) {
          LOCK();
          uVar4 = *(uint *)local_38[0];
          *(uint *)local_38[0] = *(uint *)local_38[0] + 1;
          UNLOCK();
          if (uVar4 < 0x200) {
            pFVar3 = (FUnregister *)((longlong)local_38[0] + ((ulonglong)uVar4 * 3 + 1) * 8);
            if (pFVar3 != param_1) {
              (pFVar3->ObjectRegistrationIndex).Object = (param_1->ObjectRegistrationIndex).Object;
              (param_1->ObjectRegistrationIndex).Object = (int *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(pFVar3->ObjectRegistrationIndex).SharedReferenceCount,
                         &(param_1->ObjectRegistrationIndex).SharedReferenceCount);
            }
            pFVar3->field1_0x10 = param_1->field1_0x10;
            pFVar3->field1_0x10 = param_1->field1_0x10;
            do {
              LOCK();
              bVar12 = uVar4 == *(uint *)((longlong)local_38[0] + 4);
              if (bVar12) {
                *(uint *)((longlong)local_38[0] + 4) = uVar4 + 1;
              }
              UNLOCK();
            } while (!bVar12);
            return;
          }
        }
        LOCK();
        bVar12 = this->StorageAllocatorGuard == (atomic<unsigned_int>)0x0;
        if (bVar12) {
          this->StorageAllocatorGuard = (atomic<unsigned_int>)0x1;
        }
        UNLOCK();
      } while (!bVar12);
      aVar8 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>)
              ::operator_new(0x3008);
      aVar11 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>)0x0
      ;
      if (aVar8 != (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>
                   )0x0) {
        puVar10 = (undefined8 *)((longlong)aVar8 + 8);
        *(undefined8 *)aVar8 = 0;
        memset(puVar10,0,0x3000);
        lVar9 = 0x200;
        do {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10 = puVar10 + 3;
          lVar9 = lVar9 + -1;
          aVar11 = aVar8;
        } while (lVar9 != 0);
      }
      LOCK();
      aVar8 = this->Shard;
      bVar12 = local_38[0] == aVar8;
      if (bVar12) {
        this->Shard = aVar11;
        aVar8 = local_38[0];
      }
      UNLOCK();
      if (!bVar12) break;
      if (local_38[0] !=
          (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>)0x0) {
        paVar5 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*> *
                 )(this->LockedStorage).AllocatorInstance.Data;
        if (((paVar5 <= local_38) && (local_38 < paVar5 + (this->LockedStorage).ArrayMax)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar7 = (this->LockedStorage).ArrayNum;
        piVar2 = &(this->LockedStorage).ArrayMax;
        if (iVar7 == *piVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->LockedStorage).AllocatorInstance,piVar2);
        }
        (this->LockedStorage).ArrayNum = iVar7 + 1;
        *(atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*> *)
         ((this->LockedStorage).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38[0];
      }
code_r0x0001487b42f2:
      this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
    }
    if (aVar11 == (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>)
                  0x0) goto code_r0x0001487b42f2;
    puVar10 = (undefined8 *)((longlong)aVar11 + 0x3008);
    lVar9 = 0x200;
    local_38[0] = aVar8;
    do {
      puVar1 = puVar10 + -2;
      puVar10 = puVar10 + -3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    ::operator_delete((void *)aVar11,0x3008);
    this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
  } while( true );
}

// Push @ 1487b4380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdate>::Push
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdate> *this,FUpdate *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*> *paVar4;
  code *pcVar5;
  int iVar6;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*> aVar7;
  longlong lVar8;
  undefined8 *puVar9;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*> aVar10;
  bool bVar11;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*> local_38 [2];
  
  do {
    while( true ) {
      do {
        local_38[0] = this->Shard;
        if (local_38[0] !=
            (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>)0x0) {
          LOCK();
          uVar3 = *(uint *)local_38[0];
          *(uint *)local_38[0] = *(uint *)local_38[0] + 1;
          UNLOCK();
          if (uVar3 < 0x200) {
            FSimpleStreamableAssetManager::FUpdate::operator=
                      ((FUpdate *)((uint *)((longlong)local_38[0] + 8) + (ulonglong)uVar3 * 0x1a),
                       param_1);
            do {
              LOCK();
              bVar11 = uVar3 == *(uint *)((longlong)local_38[0] + 4);
              if (bVar11) {
                *(uint *)((longlong)local_38[0] + 4) = uVar3 + 1;
              }
              UNLOCK();
            } while (!bVar11);
            return;
          }
        }
        LOCK();
        bVar11 = this->StorageAllocatorGuard == (atomic<unsigned_int>)0x0;
        if (bVar11) {
          this->StorageAllocatorGuard = (atomic<unsigned_int>)0x1;
        }
        UNLOCK();
      } while (!bVar11);
      aVar7 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>)
              ::operator_new(0xd008);
      aVar10 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>)0x0;
      if (aVar7 != (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>)0x0
         ) {
        *(undefined8 *)aVar7 = 0;
        memset((undefined8 *)((longlong)aVar7 + 8),0,0xd000);
        puVar9 = (undefined8 *)((longlong)aVar7 + 0x18);
        lVar8 = 0x200;
        do {
          puVar9[10] = 0;
          puVar9[-2] = 0;
          puVar9[-1] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          *(byte *)(puVar9 + 10) = *(byte *)(puVar9 + 10) & 0xfe;
          puVar9[7] = 0;
          puVar9[8] = 0x3f800000;
          *(undefined4 *)(puVar9 + 9) = 0x7f7fffff;
          *(undefined4 *)((longlong)puVar9 + 0x4c) = 0xc47a0000;
          puVar9 = puVar9 + 0xd;
          lVar8 = lVar8 + -1;
          aVar10 = aVar7;
        } while (lVar8 != 0);
      }
      LOCK();
      aVar7 = this->Shard;
      bVar11 = local_38[0] == aVar7;
      if (bVar11) {
        this->Shard = aVar10;
        aVar7 = local_38[0];
      }
      UNLOCK();
      if (!bVar11) break;
      if (local_38[0] !=
          (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>)0x0) {
        paVar4 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*> *)
                 (this->LockedStorage).AllocatorInstance.Data;
        if (((paVar4 <= local_38) && (local_38 < paVar4 + (this->LockedStorage).ArrayMax)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar6 = (this->LockedStorage).ArrayNum;
        piVar2 = &(this->LockedStorage).ArrayMax;
        if (iVar6 == *piVar2) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->LockedStorage).AllocatorInstance,piVar2);
        }
        (this->LockedStorage).ArrayNum = iVar6 + 1;
        *(atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*> *)
         ((this->LockedStorage).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38[0];
      }
code_r0x0001487b4565:
      this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
    }
    if (aVar10 == (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>)0x0)
    goto code_r0x0001487b4565;
    puVar9 = (undefined8 *)((longlong)aVar10 + 0xd008);
    lVar8 = 0x200;
    local_38[0] = aVar7;
    do {
      puVar1 = puVar9 + -0xc;
      puVar9 = puVar9 + -0xd;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    ::operator_delete((void *)aVar10,0xd008);
    this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
  } while( true );
}

// Push @ 1487b45d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime>::Push
          (TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime> *this,
          FUpdateLastRenderTime *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*> *paVar4
  ;
  code *pcVar5;
  int iVar6;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*> aVar7;
  longlong lVar8;
  undefined8 *puVar9;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*> aVar10;
  FUpdateLastRenderTime *pFVar11;
  bool bVar12;
  atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
  local_38 [2];
  
  do {
    while( true ) {
      do {
        local_38[0] = this->Shard;
        if (local_38[0] !=
            (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
             )0x0) {
          LOCK();
          uVar3 = *(uint *)local_38[0];
          *(uint *)local_38[0] = *(uint *)local_38[0] + 1;
          UNLOCK();
          if (uVar3 < 0x200) {
            pFVar11 = (FUpdateLastRenderTime *)
                      ((uint *)((longlong)local_38[0] + 8) + (ulonglong)uVar3 * 8);
            if (pFVar11 != param_1) {
              (pFVar11->ObjectRegistrationIndex).Object = (param_1->ObjectRegistrationIndex).Object;
              (param_1->ObjectRegistrationIndex).Object = (int *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(pFVar11->ObjectRegistrationIndex).SharedReferenceCount,
                         &(param_1->ObjectRegistrationIndex).SharedReferenceCount);
            }
            pFVar11->field1_0x10 = param_1->field1_0x10;
            pFVar11->field1_0x10 = param_1->field1_0x10;
            pFVar11->LastRenderedTime = param_1->LastRenderedTime;
            do {
              LOCK();
              bVar12 = uVar3 == *(uint *)((longlong)local_38[0] + 4);
              if (bVar12) {
                *(uint *)((longlong)local_38[0] + 4) = uVar3 + 1;
              }
              UNLOCK();
            } while (!bVar12);
            return;
          }
        }
        LOCK();
        bVar12 = this->StorageAllocatorGuard == (atomic<unsigned_int>)0x0;
        if (bVar12) {
          this->StorageAllocatorGuard = (atomic<unsigned_int>)0x1;
        }
        UNLOCK();
      } while (!bVar12);
      aVar7 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
               )::operator_new(0x4008);
      aVar10 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
                )0x0;
      if (aVar7 != (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
                    )0x0) {
        *(undefined8 *)aVar7 = 0;
        memset((undefined8 *)((longlong)aVar7 + 8),0,0x4000);
        puVar9 = (undefined8 *)((longlong)aVar7 + 0x18);
        lVar8 = 0x200;
        do {
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          puVar9[-2] = 0;
          puVar9[-1] = 0;
          *puVar9 = 0;
          *(undefined4 *)(puVar9 + 1) = 0xc47a0000;
          puVar9 = puVar9 + 4;
          lVar8 = lVar8 + -1;
          aVar10 = aVar7;
        } while (lVar8 != 0);
      }
      LOCK();
      aVar7 = this->Shard;
      bVar12 = local_38[0] == aVar7;
      if (bVar12) {
        this->Shard = aVar10;
        aVar7 = local_38[0];
      }
      UNLOCK();
      if (!bVar12) break;
      if (local_38[0] !=
          (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
           )0x0) {
        paVar4 = (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
                  *)(this->LockedStorage).AllocatorInstance.Data;
        if (((paVar4 <= local_38) && (local_38 < paVar4 + (this->LockedStorage).ArrayMax)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar6 = (this->LockedStorage).ArrayNum;
        piVar2 = &(this->LockedStorage).ArrayMax;
        if (iVar6 == *piVar2) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->LockedStorage).AllocatorInstance,piVar2);
        }
        (this->LockedStorage).ArrayNum = iVar6 + 1;
        *(atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
          *)((this->LockedStorage).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38[0];
      }
code_r0x0001487b4782:
      this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
    }
    if (aVar10 == (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
                   )0x0) goto code_r0x0001487b4782;
    puVar9 = (undefined8 *)((longlong)aVar10 + 0x4008);
    lVar8 = 0x200;
    local_38[0] = aVar7;
    do {
      puVar1 = puVar9 + -3;
      puVar9 = puVar9 + -4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    ::operator_delete((void *)aVar10,0x4008);
    this->StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
  } while( true );
}

