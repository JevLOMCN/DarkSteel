// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// begin @ 14c77c1d0

MappedIterator<int,UE::Geometry::FIndex3i,UE::Geometry::FRefCountVector::IndexIterator> * __thiscall
UE::Geometry::FRefCountVector::MappedEnumerable<UE::Geometry::FIndex3i>::begin
          (MappedEnumerable<UE::Geometry::FIndex3i> *this,
          MappedIterator<int,UE::Geometry::FIndex3i,UE::Geometry::FRefCountVector::IndexIterator>
          *__return_storage_ptr__)

{
  short sVar1;
  FRefCountVector *pFVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uStack_10;
  
  pFVar2 = (this->enumerable).Vector;
  uStack_10 = 0;
  iVar5 = (pFVar2->RefCounts).CurBlock * 0x200 + (pFVar2->RefCounts).CurBlockUsed;
  if ((iVar5 != 0) &&
     (pFVar3 = (pFVar2->RefCounts).Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar4 = 1;
    uStack_10 = 1;
    if (1 < iVar5) {
      do {
        sVar1 = *(short *)(*(longlong *)(pFVar3 + (uVar4 >> 9) * 8) +
                          (ulonglong)(uStack_10 & 0x1ff) * 2);
        if ((sVar1 != 0) && (sVar1 != -1)) break;
        uStack_10 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uStack_10;
      } while ((int)uStack_10 < iVar5);
    }
  }
  *(undefined8 *)&__return_storage_ptr__->MapFunction = 0;
  *(undefined8 *)&(__return_storage_ptr__->MapFunction).field_0x28 = 0;
  *(FRefCountVector **)&__return_storage_ptr__->Cur = pFVar2;
  *(ulonglong *)&(__return_storage_ptr__->Cur).field_0x8 = CONCAT44(iVar5,uStack_10);
  TFunction<UE::Geometry::FIndex3i___cdecl(int)>::operator=
            (&__return_storage_ptr__->MapFunction,&this->MapFunc);
  return __return_storage_ptr__;
}

// FRefCountVector @ 14c7b3d70

FRefCountVector * __thiscall UE::Geometry::FRefCountVector::FRefCountVector(FRefCountVector *this)

{
  TDynamicVector<int,512> *this_00;
  
  (this->RefCounts).CurBlock = 0;
  (this->RefCounts).CurBlockUsed = 0;
  (this->RefCounts).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefCounts).Blocks.ArrayNum = 0;
  (this->RefCounts).Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&this->RefCounts);
  this_00 = &this->FreeIndices;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->FreeIndices).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeIndices).Blocks.ArrayNum = 0;
  (this->FreeIndices).Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(this_00);
  this->UsedCount = 0;
  return this;
}

