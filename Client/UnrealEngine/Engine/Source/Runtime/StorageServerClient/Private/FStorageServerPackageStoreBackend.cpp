// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 7

// FStorageServerPackageStoreBackend @ 148cb4a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FStorageServerPackageStoreBackend * __thiscall
FStorageServerPackageStoreBackend::FStorageServerPackageStoreBackend
          (FStorageServerPackageStoreBackend *this,FStorageServerConnection *param_1)

{
  TSharedPtr<FStorageServerPackageStoreBackend::FAsyncInitRunnable,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FEvent *pFVar5;
  FRunnableThread *pFVar6;
  FStorageServerPackageStoreBackend *pFVar7;
  FAsyncInitRunnable *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FAsyncInitRunnable *local_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar1 = &this->AsyncInit;
  *(undefined8 *)&this->StoreEntriesMap = 0;
  this->_padding_ = (longlong)&___7FStorageServerPackageStoreBackend__6B_;
  *(undefined8 *)&(this->StoreEntriesMap).field_0x8 = 0;
  *(undefined8 *)&(this->StoreEntriesMap).field_0x20 = 0;
  *(undefined4 *)&(this->StoreEntriesMap).field_0x28 = 0;
  *(undefined4 *)&(this->StoreEntriesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StoreEntriesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StoreEntriesMap).field_0x34 = 0;
  *(undefined8 *)&(this->StoreEntriesMap).field_0x40 = 0;
  *(undefined4 *)&(this->StoreEntriesMap).field_0x48 = 0;
  pTVar1->Object = (FAsyncInitRunnable *)0x0;
  (this->AsyncInit).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = ::operator_new(0x30);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    local_28 = ___xmm_00000000000000000000000000000010;
    pFVar8 = (FAsyncInitRunnable *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAsyncInitRunnable_FStorageServerPackageStoreBackend___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)&___7FAsyncInitRunnable_FStorageServerPackageStoreBackend__6B_;
    *(FStorageServerPackageStoreBackend **)&pTVar4[1].SharedReferenceCount = this;
    pTVar4[2]._padding_ = (longlong)param_1;
    pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    *(FEvent **)&pTVar4[2].SharedReferenceCount = pFVar5;
    pFVar6 = FRunnableThread::Create
                       ((FRunnable *)(pTVar4 + 1),L"StorageServerPackageStoreInit",0,TPri_Normal,
                        0xffffffffffffffff,None);
    if (pFVar6 == (FRunnableThread *)0x0) {
      (**(code **)(**(longlong **)&pTVar4[2].SharedReferenceCount + 0x10))();
    }
    pFVar8 = (FAsyncInitRunnable *)(pTVar4 + 1);
    if (pFVar8 == (FAsyncInitRunnable *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FStorageServerPackageStoreBackend *)(*pcVar2)();
        return pFVar7;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_20.ReferenceController = pTVar4;
    pTVar9 = pTVar4;
    local_28 = pFVar8;
  }
  if (pTVar1 != (TSharedPtr<FStorageServerPackageStoreBackend::FAsyncInitRunnable,1> *)&local_28) {
    pTVar1->Object = pFVar8;
    local_28 = (FAsyncInitRunnable *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AsyncInit).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return this;
}

// ~FStorageServerPackageStoreBackend @ 148cb68a0

void __thiscall
FStorageServerPackageStoreBackend::~FStorageServerPackageStoreBackend
          (FStorageServerPackageStoreBackend *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncInit).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->StoreEntriesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StoreEntriesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StoreEntriesMap);
  this->_padding_ = (longlong)&___7IPackageStoreBackend__6B_;
  return;
}

// BeginRead @ 148cbcf50

void __thiscall
FStorageServerPackageStoreBackend::BeginRead(FStorageServerPackageStoreBackend *this)

{
  return;
}

// EndRead @ 148cc2a80

void __thiscall FStorageServerPackageStoreBackend::EndRead(FStorageServerPackageStoreBackend *this)

{
  return;
}

// GetPackageRedirectInfo @ 148cc78f0

bool __thiscall
FStorageServerPackageStoreBackend::GetPackageRedirectInfo
          (FStorageServerPackageStoreBackend *this,FPackageId param_1,FName *param_2,
          FPackageId *param_3)

{
  return false;
}

// GetPackageStoreEntry @ 148cc7ad0

EPackageStoreEntryStatus __thiscall
FStorageServerPackageStoreBackend::GetPackageStoreEntry
          (FStorageServerPackageStoreBackend *this,FPackageId param_1,FName param_2,
          FPackageStoreEntry *param_3)

{
  TSharedPtr<FStorageServerPackageStoreBackend::FAsyncInitRunnable,1> *pTVar1;
  FEvent *pFVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  EPackageStoreEntryStatus EVar6;
  int iVar7;
  ulong64 *puVar8;
  undefined1 *puVar9;
  ulong64 *puVar10;
  bool bVar11;
  longlong local_38;
  FSharedReferencer<1> FStack_30;
  FSHAHash *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  
  pTVar1 = &this->AsyncInit;
  if (pTVar1->Object != (FAsyncInitRunnable *)0x0) {
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId24,"StorageServerPackageStoreWaitForInit",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPackageStore.cpp"
                 ,0x18);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId24);
    }
    if ((pTVar1->Object == (FAsyncInitRunnable *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    pFVar2 = pTVar1->Object->IsCompleted;
    (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,0xffffffff,0);
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FStorageServerPackageStoreBackend::FAsyncInitRunnable,1> *)&local_38)
    {
      pTVar1->Object = (FAsyncInitRunnable *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncInit).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (*(int *)&(this->StoreEntriesMap).field_0x8 != *(int *)&(this->StoreEntriesMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->StoreEntriesMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->StoreEntriesMap).field_0x38;
    }
    iVar7 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(this->StoreEntriesMap).field_0x48 - 1) &
                              param_1.Id & 0xffffffff) * 4);
    if (iVar7 != -1) {
      do {
        puVar8 = (ulong64 *)((longlong)iVar7 * 0x30 + *(longlong *)&this->StoreEntriesMap);
        if (*puVar8 == param_1.Id) {
          puVar10 = puVar8 + 1;
          if (puVar8 == (ulong64 *)0x0) {
            puVar10 = (ulong64 *)0x0;
          }
          if (puVar10 == (ulong64 *)0x0) {
            return Missing;
          }
          local_28 = (FSHAHash *)puVar10[2];
          iVar7 = (int)puVar10[3];
          if ((iVar7 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar3 = (code *)swi(3);
            EVar6 = (*pcVar3)();
            return EVar6;
          }
          (param_3->ShaderMapHashes).DataPtr = local_28;
          *(ulonglong *)&(param_3->ShaderMapHashes).ArrayNum = CONCAT44(uStack_1c,iVar7);
          local_28 = (FSHAHash *)*puVar10;
          uVar4 = puVar10[1];
          if (((int)uVar4 < 0) &&
             (iStack_20 = iVar7,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar11)) {
            pcVar3 = (code *)swi(3);
            EVar6 = (*pcVar3)();
            return EVar6;
          }
          (param_3->ImportedPackageIds).DataPtr = (FPackageId *)local_28;
          *(ulonglong *)&(param_3->ImportedPackageIds).ArrayNum = CONCAT44(uStack_1c,(int)uVar4);
          return Ok;
        }
        iVar7 = (int)puVar8[5];
      } while (iVar7 != -1);
    }
  }
  return Missing;
}

// OnMounted @ 148cd1520

void __thiscall
FStorageServerPackageStoreBackend::OnMounted
          (FStorageServerPackageStoreBackend *this,
          TSharedRef<FPackageStoreBackendContext_const_,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

