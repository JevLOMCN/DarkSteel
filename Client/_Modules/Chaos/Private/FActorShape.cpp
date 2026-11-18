// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Serialize @ 143b769e0

void __thiscall ChaosInterface::FActorShape::Serialize(FActorShape *this,FChaosArchive *param_1)

{
  TSerializablePtr<Chaos::FPerShapeData> local_res8;
  
  Chaos::FChaosArchive::SerializePtr<Chaos::TGeometryParticle<double,3>_>
            (param_1,(TSerializablePtr<Chaos::TGeometryParticle<double,3>_> *)this);
  local_res8.Ptr = this->Shape;
  Chaos::FChaosArchive::SerializePtr<Chaos::FPerShapeData>(param_1,&local_res8);
  this->Shape = local_res8.Ptr;
  return;
}

