// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 1

// operator() @ 1441d5370

void __thiscall
TDefaultDelete<FNetTraceInternal::FThreadBuffer>::operator()
          (TDefaultDelete<FNetTraceInternal::FThreadBuffer> *this,FThreadBuffer *param_1)

{
  void *pvVar1;
  
  if (param_1 != (FThreadBuffer *)0x0) {
    *(undefined4 *)&(param_1->DebugNameToNameIdMap).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->DebugNameToNameIdMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetDebugName_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetDebugName_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetDebugName_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->DebugNameToNameIdMap);
    *(undefined4 *)&(param_1->GameInstanceToObjectTraceCounterMap).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->GameInstanceToObjectTraceCounterMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FObjectTraceCounter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FObjectTraceCounter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FObjectTraceCounter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->GameInstanceToObjectTraceCounterMap);
    *(undefined4 *)&(param_1->DynamicNameHashToNameIdMap).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->DynamicNameHashToNameIdMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->DynamicNameHashToNameIdMap);
    *(undefined4 *)&(param_1->DynamicFNameToNameIdMap).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->DynamicFNameToNameIdMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->DynamicFNameToNameIdMap);
    ::operator_delete(param_1,0x148);
  }
  return;
}

