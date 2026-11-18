// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// FMassQueryRequirementIndicesMapping @ 1471db300

FMassQueryRequirementIndicesMapping * __thiscall
FMassQueryRequirementIndicesMapping::FMassQueryRequirementIndicesMapping
          (FMassQueryRequirementIndicesMapping *this,FMassQueryRequirementIndicesMapping *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<int> _Dst;
  ForElementType<int> FVar3;
  ForElementType<int> FVar4;
  
  (this->EntityFragments).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  FVar4 = (param_1->EntityFragments).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->EntityFragments).ArrayNum;
  (this->EntityFragments).ArrayNum = iVar2;
  FVar3 = (ForElementType<int>)param_1;
  if (FVar4 != (ForElementType<int>)0x0) {
    FVar3 = FVar4;
  }
  piVar1 = &(this->EntityFragments).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x10;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar2,0,(ForElementType<int> *)this,iVar2,piVar1);
    FVar4 = (this->EntityFragments).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<int>)this;
    if (FVar4 != (ForElementType<int>)0x0) {
      _Dst = FVar4;
    }
    memcpy((void *)_Dst,(void *)FVar3,(longlong)iVar2 << 2);
  }
  (this->ChunkFragments).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  FVar4 = (param_1->ChunkFragments).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ChunkFragments).ArrayNum;
  (this->ChunkFragments).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<int>)0x0) {
    FVar4 = (ForElementType<int>)&param_1->ChunkFragments;
  }
  piVar1 = &(this->ChunkFragments).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x10;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar2,0,&(this->ChunkFragments).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ChunkFragments).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<int>)0x0) {
      FVar3 = (ForElementType<int>)&this->ChunkFragments;
    }
    memcpy((void *)FVar3,(void *)FVar4,(longlong)iVar2 << 2);
  }
  (this->ConstSharedFragments).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  FVar4 = (param_1->ConstSharedFragments).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ConstSharedFragments).ArrayNum;
  (this->ConstSharedFragments).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<int>)0x0) {
    FVar4 = (ForElementType<int>)&param_1->ConstSharedFragments;
  }
  piVar1 = &(this->ConstSharedFragments).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x10;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar2,0,&(this->ConstSharedFragments).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ConstSharedFragments).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<int>)0x0) {
      FVar3 = (ForElementType<int>)&this->ConstSharedFragments;
    }
    memcpy((void *)FVar3,(void *)FVar4,(longlong)iVar2 << 2);
  }
  (this->SharedFragments).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  FVar4 = (param_1->SharedFragments).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->SharedFragments).ArrayNum;
  (this->SharedFragments).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<int>)0x0) {
    FVar4 = (ForElementType<int>)&param_1->SharedFragments;
  }
  piVar1 = &(this->SharedFragments).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x10;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar2,0,&(this->SharedFragments).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->SharedFragments).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<int>)0x0) {
      FVar3 = (ForElementType<int>)&this->SharedFragments;
    }
    memcpy((void *)FVar3,(void *)FVar4,(longlong)iVar2 << 2);
  }
  return this;
}

