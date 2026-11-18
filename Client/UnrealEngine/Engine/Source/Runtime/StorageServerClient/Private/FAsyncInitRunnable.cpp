// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 5

// FAsyncInitRunnable @ 148cb2d60

FAsyncInitRunnable * __thiscall
FStorageServerPackageStoreBackend::FAsyncInitRunnable::FAsyncInitRunnable
          (FAsyncInitRunnable *this,FStorageServerPackageStoreBackend *param_1,
          FStorageServerConnection *param_2)

{
  FEvent *pFVar1;
  FRunnableThread *pFVar2;
  
  this->Owner = param_1;
  this->_padding_ = (longlong)&___7FAsyncInitRunnable_FStorageServerPackageStoreBackend__6B_;
  this->Connection = param_2;
  pFVar1 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->IsCompleted = pFVar1;
  pFVar2 = FRunnableThread::Create
                     ((FRunnable *)this,L"StorageServerPackageStoreInit",0,TPri_Normal,
                      0xffffffffffffffff,None);
  if (pFVar2 == (FRunnableThread *)0x0) {
    (**(code **)(this->IsCompleted->_padding_ + 0x10))();
  }
  return this;
}

// ~FAsyncInitRunnable @ 148cb5c10

void __thiscall
FStorageServerPackageStoreBackend::FAsyncInitRunnable::~FAsyncInitRunnable(FAsyncInitRunnable *this)

{
  this->_padding_ = (longlong)&___7FAsyncInitRunnable_FStorageServerPackageStoreBackend__6B_;
  (**(code **)(this->IsCompleted->_padding_ + 0x20))(this->IsCompleted,0xffffffff,0);
  FGenericPlatformProcess::ReturnSynchEventToPool(this->IsCompleted);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// operator() @ 148cb83d0

void __thiscall
`FStorageServerPackageStoreBackend::FAsyncInitRunnable::Run'::__l2::<lambda_1>::operator()
          (void *this,FPackageStoreEntryResource *param_1)

{
  TArray<FPackageId,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FSHAHash,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FStoreEntry *pFVar4;
  TArray<FSHAHash,TSizedDefaultAllocator<32>_> *pTVar5;
  FPackageId local_res10;
  
  if ((param_1->Flags & HasPackageData) != None) {
    local_res10.Id = (param_1->PackageId).Id;
    pFVar4 = TMapBase<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,0>_>
             ::FindOrAddImpl<FPackageId>
                       ((TMapBase<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,0>_>
                         *)(*(longlong *)(*(longlong *)this + 8) + 8),(uint)local_res10.Id,
                        &local_res10);
    pTVar1 = &param_1->ImportedPackageIds;
    if (pFVar4 != (FStoreEntry *)pTVar1) {
      pFVar3 = (pFVar4->ImportedPackages).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar4->ImportedPackages).AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar4->ImportedPackages).ArrayNum = (param_1->ImportedPackageIds).ArrayNum;
      (pFVar4->ImportedPackages).ArrayMax = (param_1->ImportedPackageIds).ArrayMax;
      (param_1->ImportedPackageIds).ArrayNum = 0;
      (param_1->ImportedPackageIds).ArrayMax = 0;
    }
    pTVar2 = &param_1->ShaderMapHashes;
    pTVar5 = &pFVar4->ShaderMapHashes;
    if (pTVar5 != pTVar2) {
      pFVar3 = (pTVar5->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar5->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar4->ShaderMapHashes).ArrayNum = (param_1->ShaderMapHashes).ArrayNum;
      (pFVar4->ShaderMapHashes).ArrayMax = (param_1->ShaderMapHashes).ArrayMax;
      (param_1->ShaderMapHashes).ArrayNum = 0;
      (param_1->ShaderMapHashes).ArrayMax = 0;
    }
  }
  return;
}

// Run @ 148cdb960

uint __thiscall FStorageServerPackageStoreBackend::FAsyncInitRunnable::Run(FAsyncInitRunnable *this)

{
  bool bVar1;
  FAsyncInitRunnable *local_res8;
  code *local_18;
  FAsyncInitRunnable **local_10;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId105,"StorageServerPackageStoreRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPackageStore.cpp"
               ,0x69);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId105);
  }
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStorageServerPackageStoreBackend::FAsyncInitRunnable::Run'::__l2::<lambda_1>,void,FPackageStoreEntryResource_&&>
             ::Call;
  local_res8 = this;
  FStorageServerConnection::PackageStoreRequest
            (this->Connection,(TFunctionRef<void___cdecl(FPackageStoreEntryResource_&&)> *)&local_18
            );
  (**(code **)(this->IsCompleted->_padding_ + 0x10))();
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return 0;
}

// WaitForCompletion @ 148ce39b0

void __thiscall
FStorageServerPackageStoreBackend::FAsyncInitRunnable::WaitForCompletion(FAsyncInitRunnable *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148ce39bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->IsCompleted->_padding_ + 0x20))(this->IsCompleted,0xffffffff,0);
  return;
}

