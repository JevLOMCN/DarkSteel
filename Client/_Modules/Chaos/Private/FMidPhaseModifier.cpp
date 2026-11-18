// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// Disable @ 143c016e0

void __thiscall Chaos::FMidPhaseModifier::Disable(FMidPhaseModifier *this)

{
  (this->MidPhase->Flags).Bits = (this->MidPhase->Flags).Bits & 0xfffe | 0x100;
  return;
}

// DisableCCD @ 143c01700

void __thiscall Chaos::FMidPhaseModifier::DisableCCD(FMidPhaseModifier *this)

{
  (this->MidPhase->Flags).Bits = (this->MidPhase->Flags).Bits & 0xfffb | 0x100;
  return;
}

// DisableConvexOptimization @ 143c01720

void __thiscall Chaos::FMidPhaseModifier::DisableConvexOptimization(FMidPhaseModifier *this)

{
  FParticlePairMidPhase *pFVar1;
  FMidPhaseModifier *local_res8 [4];
  code *local_18;
  FMidPhaseModifier **local_10;
  
  pFVar1 = this->MidPhase;
  if (pFVar1 != (FParticlePairMidPhase *)0x0) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FMidPhaseModifier::DisableConvexOptimization'::__l2::<lambda_1>_const_,void,Chaos::FPBDCollisionConstraint_*>
               ::Call;
    local_res8[0] = this;
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,0,&local_18);
  }
  return;
}

// GetOtherParticle @ 143c071d0

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::FMidPhaseModifier::GetOtherParticle
          (FMidPhaseModifier *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FParticlePairMidPhase *pFVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  pFVar1 = this->MidPhase;
  if (pFVar1 == (FParticlePairMidPhase *)0x0) {
    return (TGeometryParticleHandleImp<double,3,1> *)0x0;
  }
  if (param_1 == pFVar1->Particle0) {
    return pFVar1->Particle1;
  }
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (param_1 == pFVar1->Particle1) {
    pTVar2 = pFVar1->Particle0;
  }
  return pTVar2;
}

// GetOtherParticle @ 143c07200

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::FMidPhaseModifier::GetOtherParticle
          (FMidPhaseModifier *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FParticlePairMidPhase *pFVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  pFVar1 = this->MidPhase;
  if (pFVar1 == (FParticlePairMidPhase *)0x0) {
    return (TGeometryParticleHandleImp<double,3,1> *)0x0;
  }
  if (param_1 == pFVar1->Particle0) {
    return pFVar1->Particle1;
  }
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (param_1 == pFVar1->Particle1) {
    pTVar2 = pFVar1->Particle0;
  }
  return pTVar2;
}

// GetParticles @ 143c07240

void __thiscall
Chaos::FMidPhaseModifier::GetParticles
          (FMidPhaseModifier *this,TGeometryParticleHandleImp<double,3,1> **param_1,
          TGeometryParticleHandleImp<double,3,1> **param_2)

{
  *param_1 = this->MidPhase->Particle0;
  *param_2 = this->MidPhase->Particle1;
  return;
}

