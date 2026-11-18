// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 3

// GetCurrentTraceId @ 1441dc340

uint __cdecl FNetTraceInternal::GetCurrentTraceId(void)

{
  return (uint)CurrentTraceId;
}

// GetNextNameId @ 1441dca10

uint __cdecl FNetTraceInternal::GetNextNameId(void)

{
  atomic<unsigned_int> aVar1;
  
  aVar1 = NextNameId;
  LOCK();
  NextNameId = (atomic<unsigned_int>)((int)NextNameId + 1);
  UNLOCK();
  return (uint)aVar1;
}

// GetThreadBuffer @ 1441dd0f0

FThreadBuffer * __cdecl FNetTraceInternal::GetThreadBuffer(void)

{
  void *pvVar1;
  code *pcVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  FThreadBuffer *pFVar5;
  FThreadBuffer *pFVar6;
  TDefaultDelete<FNetTraceInternal::FThreadBuffer> *this;
  TDefaultDelete<FNetTraceInternal::FThreadBuffer> local_18 [16];
  
  aVar3 = CurrentTraceId;
  this = (TDefaultDelete<FNetTraceInternal::FThreadBuffer> *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xe60);
  pFVar5 = *(FThreadBuffer **)this;
  if ((pFVar5 == (FThreadBuffer *)0x0) || ((atomic<unsigned_int>)pFVar5->TraceId != CurrentTraceId))
  {
    pFVar5 = ::operator_new(0x148);
    pFVar6 = (FThreadBuffer *)0x0;
    if (pFVar5 != (FThreadBuffer *)0x0) {
      memset(pFVar5,0,0x148);
      pFVar6 = FThreadBuffer::FThreadBuffer(pFVar5);
    }
    if (this == local_18) {
      if (pFVar6 != (FThreadBuffer *)0x0) {
        *(undefined4 *)&(pFVar6->DebugNameToNameIdMap).field_0x48 = 0;
        pvVar1 = *(void **)&(pFVar6->DebugNameToNameIdMap).field_0x40;
        if (pvVar1 != (void *)0x0) {
          FMemory::Free(pvVar1);
        }
        TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetDebugName_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetDebugName_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetDebugName_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar6->DebugNameToNameIdMap);
        *(undefined4 *)&(pFVar6->GameInstanceToObjectTraceCounterMap).field_0x48 = 0;
        pvVar1 = *(void **)&(pFVar6->GameInstanceToObjectTraceCounterMap).field_0x40;
        if (pvVar1 != (void *)0x0) {
          FMemory::Free(pvVar1);
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FObjectTraceCounter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FObjectTraceCounter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FObjectTraceCounter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar6->GameInstanceToObjectTraceCounterMap);
        *(undefined4 *)&(pFVar6->DynamicNameHashToNameIdMap).field_0x48 = 0;
        pvVar1 = *(void **)&(pFVar6->DynamicNameHashToNameIdMap).field_0x40;
        if (pvVar1 != (void *)0x0) {
          FMemory::Free(pvVar1);
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar6->DynamicNameHashToNameIdMap);
        *(undefined4 *)&(pFVar6->DynamicFNameToNameIdMap).field_0x48 = 0;
        pvVar1 = *(void **)&(pFVar6->DynamicFNameToNameIdMap).field_0x40;
        if (pvVar1 != (void *)0x0) {
          FMemory::Free(pvVar1);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar6->DynamicFNameToNameIdMap);
        ::operator_delete(pFVar6,0x148);
      }
    }
    else {
      pFVar5 = *(FThreadBuffer **)this;
      *(FThreadBuffer **)this = pFVar6;
      TDefaultDelete<FNetTraceInternal::FThreadBuffer>::operator()(this,pFVar5);
    }
    pFVar5 = *(FThreadBuffer **)this;
    pFVar5->TraceId = (uint)aVar3;
    if ((pFVar5 == (FThreadBuffer *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ThreadBufferPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                           ,0x73,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FThreadBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  return pFVar5;
}

