// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 1

// operator= @ 14da1bca0

TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>
* __thiscall
TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>
::operator=(TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>
            *this,TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>
                  *param_1)

{
  TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  
  if (this != param_1) {
    this_00 = (TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FJobSet *)0x0;
    if (this_00 !=
        (TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)0x0) {
      *(undefined4 *)&this_00[1].field_0x10 = 0;
      if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00[1].field_0x8);
      }
      TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_00);
      ::operator_delete(this_00,0x50);
    }
    return this;
  }
  return this;
}

