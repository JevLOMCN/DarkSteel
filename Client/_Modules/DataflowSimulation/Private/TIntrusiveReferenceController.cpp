// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 1

// DestroyObject @ 1462f55f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>,1>
              *this)

{
  UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::
  ~TSimulationContext<UE::Dataflow::FContextSingle>
            ((TSimulationContext<UE::Dataflow::FContextSingle> *)&this->ObjectStorage);
  return;
}

