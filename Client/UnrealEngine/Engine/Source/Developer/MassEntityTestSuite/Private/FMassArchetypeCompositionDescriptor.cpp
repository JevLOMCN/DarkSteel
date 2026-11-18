// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 12

// Add<FTestConstSharedFragment_Int> @ 1470d24b0

void __thiscall
FMassArchetypeCompositionDescriptor::Add<FTestConstSharedFragment_Int>
          (FMassArchetypeCompositionDescriptor *this)

{
  int iVar1;
  
  iVar1 = TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          ::GetTypeIndex<FTestConstSharedFragment_Int>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex
            ((FBitSetContainer *)&this->ConstSharedFragments,iVar1);
  return;
}

// Add<FTestFragment_Float> @ 1470d2670

void __thiscall
FMassArchetypeCompositionDescriptor::Add<FTestFragment_Float>
          (FMassArchetypeCompositionDescriptor *this)

{
  int iVar1;
  
  iVar1 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Float>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)this,iVar1);
  return;
}

// Add<FTestFragment_Int> @ 1470d2770

void __thiscall
FMassArchetypeCompositionDescriptor::Add<FTestFragment_Int>
          (FMassArchetypeCompositionDescriptor *this)

{
  int iVar1;
  
  iVar1 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Int>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)this,iVar1);
  return;
}

// Add<FTestSharedFragment_Float> @ 1470d28c0

void __thiscall
FMassArchetypeCompositionDescriptor::Add<FTestSharedFragment_Float>
          (FMassArchetypeCompositionDescriptor *this)

{
  int iVar1;
  
  iVar1 = TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          ::GetTypeIndex<FTestSharedFragment_Float>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->SharedFragments,iVar1);
  return;
}

// Add<FTestTag_B> @ 1470d2a30

void __thiscall
FMassArchetypeCompositionDescriptor::Add<FTestTag_B>(FMassArchetypeCompositionDescriptor *this)

{
  int iVar1;
  
  iVar1 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestTag_B>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->Tags,iVar1);
  return;
}

// GetContainer<FMassConstSharedFragment> @ 1470dee50

TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
* __thiscall
FMassArchetypeCompositionDescriptor::GetContainer<FMassConstSharedFragment>
          (FMassArchetypeCompositionDescriptor *this)

{
  return &this->ConstSharedFragments;
}

// GetContainer<FMassFragment> @ 1470dee60

TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> * __thiscall
FMassArchetypeCompositionDescriptor::GetContainer<FMassFragment>
          (FMassArchetypeCompositionDescriptor *this)

{
  return &this->Fragments;
}

// GetContainer<FMassSharedFragment> @ 1470dee70

TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct> *
__thiscall
FMassArchetypeCompositionDescriptor::GetContainer<FMassSharedFragment>
          (FMassArchetypeCompositionDescriptor *this)

{
  return &this->SharedFragments;
}

// GetContainer<FMassTag> @ 1470dee80

TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> * __thiscall
FMassArchetypeCompositionDescriptor::GetContainer<FMassTag>
          (FMassArchetypeCompositionDescriptor *this)

{
  return &this->Tags;
}

// FMassArchetypeCompositionDescriptor @ 1470f4570

FMassArchetypeCompositionDescriptor * __thiscall
FMassArchetypeCompositionDescriptor::FMassArchetypeCompositionDescriptor
          (FMassArchetypeCompositionDescriptor *this)

{
  *(undefined8 *)&(this->Fragments).field_0x10 = 0;
  *(undefined4 *)&(this->Fragments).field_0x18 = 0;
  *(undefined4 *)&(this->Fragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->Tags).field_0x10 = 0;
  *(undefined4 *)&(this->Tags).field_0x18 = 0;
  *(undefined4 *)&(this->Tags).field_0x1c = 0x80;
  *(undefined8 *)&(this->ChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->ChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->ChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->SharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->SharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->SharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->ConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->ConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->ConstSharedFragments).field_0x1c = 0x80;
  return this;
}

// ~FMassArchetypeCompositionDescriptor @ 1470f82c0

void __thiscall
FMassArchetypeCompositionDescriptor::~FMassArchetypeCompositionDescriptor
          (FMassArchetypeCompositionDescriptor *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->ConstSharedFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SharedFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->ChunkFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->Tags).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->Fragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// IsEquivalent @ 1471928a0

bool __thiscall
FMassArchetypeCompositionDescriptor::IsEquivalent
          (FMassArchetypeCompositionDescriptor *this,FMassArchetypeCompositionDescriptor *param_1)

{
  bool bVar1;
  
  bVar1 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)this,
                     (TBitArray<FDefaultBitArrayAllocator> *)param_1,false);
  if (bVar1) {
    bVar1 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                      ((TBitArray<FDefaultBitArrayAllocator> *)&this->Tags,
                       (TBitArray<FDefaultBitArrayAllocator> *)&param_1->Tags,false);
    if (bVar1) {
      bVar1 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                        ((TBitArray<FDefaultBitArrayAllocator> *)&this->ChunkFragments,
                         (TBitArray<FDefaultBitArrayAllocator> *)&param_1->ChunkFragments,false);
      if (bVar1) {
        bVar1 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                          ((TBitArray<FDefaultBitArrayAllocator> *)&this->SharedFragments,
                           (TBitArray<FDefaultBitArrayAllocator> *)&param_1->SharedFragments,false);
        if (bVar1) {
          bVar1 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                            ((TBitArray<FDefaultBitArrayAllocator> *)&this->ConstSharedFragments,
                             (TBitArray<FDefaultBitArrayAllocator> *)&param_1->ConstSharedFragments,
                             false);
          if (bVar1) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

