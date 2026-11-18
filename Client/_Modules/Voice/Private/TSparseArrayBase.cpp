// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voice
// Functions: 1

// AddUninitialized @ 14ec3b2f0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AddUninitialized(TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  uint *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                       &(this->Data).ArrayMax);
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->AllocationFlags,1);
    FVar7 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    uVar6 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar6;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)&this->AllocationFlags;
    }
    puVar1 = (uint *)((longlong)FVar7 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x1f));
  }
  else {
    iVar4 = this->FirstFreeIndex;
    pFVar3 = (this->Data).AllocatorInstance.Data;
    iVar2 = *(int *)(pFVar3 + (longlong)iVar4 * 0x40 + 4);
    iVar5 = this->NumFreeIndices + -1;
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(pFVar3 + (longlong)iVar2 * 0x40) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

