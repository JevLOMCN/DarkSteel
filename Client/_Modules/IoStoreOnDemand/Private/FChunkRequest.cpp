// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// FChunkRequest @ 1445a2410

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FChunkRequest * __thiscall
UE::IoStore::FOnDemandInstallCache::FChunkRequest::FChunkRequest
          (FChunkRequest *this,TSharedPtr<IAsyncReadFileHandle,1> *param_1,FIoRequestImpl *param_2,
          FOnDemandChunkInfo *param_3,FIoOffsetAndLength *param_4,ulong64 param_5)

{
  undefined2 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FChunkRequest *pFVar5;
  
  (this->SharedFileHandle).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedFileHandle).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->FileReadRequest).Ptr = (IAsyncReadRequest *)0x0;
  this->DispatcherRequest = param_2;
  (this->ChunkInfo).SharedContainer.Object = (param_3->SharedContainer).Object;
  (this->ChunkInfo).SharedContainer.SharedReferenceCount.ReferenceController =
       (param_3->SharedContainer).SharedReferenceCount.ReferenceController;
  (param_3->SharedContainer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_3->SharedContainer).Object = (FOnDemandContainer *)0x0;
  (this->ChunkInfo).Entry = param_3->Entry;
  uVar1 = *(undefined2 *)(param_4->OffsetAndLength + 8);
  *(undefined8 *)(this->ChunkRange).OffsetAndLength = *(undefined8 *)param_4->OffsetAndLength;
  *(undefined2 *)((this->ChunkRange).OffsetAndLength + 8) = uVar1;
  FIoBuffer::FIoBuffer
            (&this->EncodedChunk,
             (ulonglong)
             CONCAT41(CONCAT31(CONCAT21(CONCAT11((this->ChunkRange).OffsetAndLength[5],
                                                 (this->ChunkRange).OffsetAndLength[6]),
                                        (this->ChunkRange).OffsetAndLength[7]),
                               (this->ChunkRange).OffsetAndLength[8]),
                      (this->ChunkRange).OffsetAndLength[9]));
  this->RawSize = param_5;
  if (this->DispatcherRequest == (FIoRequestImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DispatcherRequest != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                       ,0x663,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FChunkRequest *)(*pcVar3)();
      return pFVar5;
    }
  }
  if ((this->ChunkInfo).SharedContainer.Object == (FOnDemandContainer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChunkInfo.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                       ,0x664,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FChunkRequest *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (param_2->NextRequest != (FIoRequestImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Request->NextRequest == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                       ,0x665,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FChunkRequest *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (param_2->BackendData != (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Request->BackendData == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                       ,0x666,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FChunkRequest *)(*pcVar3)();
      return pFVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

