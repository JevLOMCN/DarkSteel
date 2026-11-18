// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// CopyFrom<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> @ 1440c13c0

void __thiscall
Chaos::FParticleVelocities::CopyFrom<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
          (FParticleVelocities *this,TKinematicGeometryParticleHandleImp<double,3,1> *param_1)

{
  double local_28;
  double local_20;
  double local_18;
  
  TKinematicGeometryParticlesImp<double,3,0>::GetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,(TVector<double,3> *)&local_28,
             *(int *)&param_1->field_0x8);
  *(float *)&this->MV = (float)local_28;
  *(float *)&(this->MV).field_0x4 = (float)local_20;
  *(float *)&(this->MV).field_0x8 = (float)local_18;
  TKinematicGeometryParticlesImp<double,3,0>::GetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,(TVector<double,3> *)&local_28,
             *(int *)&param_1->field_0x8);
  *(float *)&this->MW = (float)local_28;
  *(float *)&(this->MW).field_0x4 = (float)local_20;
  *(float *)&(this->MW).field_0x8 = (float)local_18;
  return;
}

