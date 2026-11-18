// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// Reset @ 147248e10

void __thiscall FMassProcessorDependencySolver::FResult::Reset(FResult *this)

{
  (this->PrunedProcessors).ArrayNum = 0;
  if ((this->PrunedProcessors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PrunedProcessors).AllocatorInstance,0,
               &(this->PrunedProcessors).ArrayMax);
  }
  this->MaxSequenceLength = 0;
  this->ArchetypeDataVersion = 0;
  return;
}

