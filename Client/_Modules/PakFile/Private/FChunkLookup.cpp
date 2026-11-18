// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// Find @ 142a6dbf0

FIoOffsetAndLength * __thiscall
UE::IoStore::FChunkLookup::Find(FChunkLookup *this,FIoChunkId *param_1)

{
  uint uVar1;
  int iVar2;
  FIoOffsetAndLength *pFVar3;
  ulong64 uVar4;
  int *piVar5;
  FIoChunkId *pFVar6;
  uint uVar7;
  
  if (this->Type == Default) {
    pFVar3 = TMapBase<FIoChunkId,FIoOffsetAndLength,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>_>
             ::Find((TMapBase<FIoChunkId,FIoOffsetAndLength,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>_>
                     *)&this->DefaultMap,param_1);
    return pFVar3;
  }
  uVar1 = (this->PerfectMap).ChunkIds.ArrayNum;
  if (uVar1 != 0) {
    uVar7 = (this->PerfectMap).ChunkHashSeeds.ArrayNum;
    uVar4 = FIoStoreTocResource::HashChunkIdWithSeed(0,param_1);
    piVar5 = TArrayView<int_const_,int>::operator[]
                       ((TArrayView<int_const_,int> *)this,(int)(uVar4 % (ulonglong)uVar7));
    iVar2 = *piVar5;
    if (iVar2 != 0) {
      if (iVar2 < 0) {
        uVar7 = -iVar2 - 1;
        if (uVar1 <= uVar7) {
          pFVar3 = TMapBase<FIoChunkId,FIoOffsetAndLength,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>_>
                   ::Find((TMapBase<FIoChunkId,FIoOffsetAndLength,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>_>
                           *)&this->DefaultMap,param_1);
          return pFVar3;
        }
      }
      else {
        uVar4 = FIoStoreTocResource::HashChunkIdWithSeed(iVar2,param_1);
        uVar7 = (uint)(uVar4 % (ulonglong)uVar1);
      }
      pFVar6 = TArrayView<FIoChunkId_const_,int>::operator[](&(this->PerfectMap).ChunkIds,uVar7);
      if ((*(longlong *)pFVar6->Id == *(longlong *)param_1->Id) &&
         (*(int *)(pFVar6->Id + 8) == *(int *)(param_1->Id + 8))) {
        pFVar3 = TArrayView<FIoOffsetAndLength_const_,int>::operator[]
                           (&(this->PerfectMap).Offsets,uVar7);
        return pFVar3;
      }
    }
  }
  return (FIoOffsetAndLength *)0x0;
}

