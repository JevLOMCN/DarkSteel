// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// FEntry @ 14617e970

FEntry * __thiscall
UE::MovieScene::
TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
::FEntry::FEntry(FEntry *this,FEntry *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Bits).Buckets.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Bits).Buckets.Storage.ArrayMax;
  iVar2 = (param_1->Bits).Buckets.Storage.ArrayNum;
  _Src = (param_1->Bits).Buckets.Storage.AllocatorInstance.Data;
  (this->Bits).Buckets.Storage.ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Bits).Buckets.Storage.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  }
  (this->Bits).BucketHash = (param_1->Bits).BucketHash;
  this->Offset = param_1->Offset;
  return this;
}

