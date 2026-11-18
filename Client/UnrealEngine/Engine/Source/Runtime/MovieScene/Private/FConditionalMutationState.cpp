// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// FConditionalMutationState @ 146118020

FConditionalMutationState * __thiscall
`UE::MovieScene::FEntityManager::MutateConditional'::__l2::FConditionalMutationState::
FConditionalMutationState(void *this,FConditionalMutationState *param_1)

{
  memmove(this,param_1,0x30);
  *(int *)((longlong)this + 0x30) = (param_1->NewType).Bits.NumBits;
  *(int *)((longlong)this + 0x34) = (param_1->NewType).Bits.MaxBits;
  (param_1->NewType).Bits.NumBits = 0;
  (param_1->NewType).Bits.MaxBits = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  if ((param_1->MarkedEntities).AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0
     ) {
    memmove((void *)((longlong)this + 0x38),&param_1->MarkedEntities,0x10);
  }
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  *(ForElementType<unsigned_int> *)((longlong)this + 0x48) =
       (param_1->MarkedEntities).AllocatorInstance.SecondaryData;
  (param_1->MarkedEntities).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  *(int *)((longlong)this + 0x50) = (param_1->MarkedEntities).NumBits;
  *(int *)((longlong)this + 0x54) = (param_1->MarkedEntities).MaxBits;
  (param_1->MarkedEntities).NumBits = 0;
  (param_1->MarkedEntities).MaxBits = 0;
  UE::MovieScene::FMutualComponentInitializers::FMutualComponentInitializers
            ((FMutualComponentInitializers *)((longlong)this + 0x58),&param_1->MutualInitializers);
  return this;
}

