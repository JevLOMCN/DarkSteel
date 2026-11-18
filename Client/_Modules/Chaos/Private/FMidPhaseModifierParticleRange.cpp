// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// begin @ 143c1e190

FMidPhaseModifierParticleIterator * __thiscall
Chaos::FMidPhaseModifierParticleRange::begin
          (FMidPhaseModifierParticleRange *this,
          FMidPhaseModifierParticleIterator *__return_storage_ptr__)

{
  int iVar1;
  FMidPhaseModifierAccessor *pFVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FParticleCollisions *pFVar6;
  FMidPhaseModifierParticleIterator *pFVar7;
  FParticlePairMidPhase *pFVar8;
  
  pFVar2 = this->Accessor;
  pTVar3 = this->Particle;
  pFVar8 = (FParticlePairMidPhase *)0x0;
  __return_storage_ptr__->Particle = pTVar3;
  __return_storage_ptr__->Accessor = pFVar2;
  __return_storage_ptr__->MidPhaseIndex = 0;
  pFVar6 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                     ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,(int)pTVar3->_padding_)
  ;
  iVar1 = __return_storage_ptr__->MidPhaseIndex;
  if ((-1 < iVar1) && (iVar1 < (pFVar6->MidPhases).ArrayNum)) {
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FMidPhaseModifierParticleIterator *)(*pcVar4)();
        return pFVar7;
      }
    }
    pFVar8 = *(FParticlePairMidPhase **)
              ((pFVar6->MidPhases).AllocatorInstance.Data + (longlong)iVar1 * 0x10 + 8);
  }
  (__return_storage_ptr__->PairModifier).MidPhase = pFVar8;
  (__return_storage_ptr__->PairModifier).Accessor = pFVar2;
  return __return_storage_ptr__;
}

// end @ 143c1fd10

FMidPhaseModifierParticleIterator * __thiscall
Chaos::FMidPhaseModifierParticleRange::end
          (FMidPhaseModifierParticleRange *this,
          FMidPhaseModifierParticleIterator *__return_storage_ptr__)

{
  int iVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  FMidPhaseModifierAccessor *pFVar3;
  FParticleCollisions *pFVar4;
  FParticlePairMidPhase *pFVar5;
  
  pFVar4 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                     ((TGeometryParticlesImp<double,3,0> *)this->Particle->_padding_,
                      (int)this->Particle->_padding_);
  pTVar2 = this->Particle;
  pFVar3 = this->Accessor;
  iVar1 = (pFVar4->MidPhases).ArrayNum;
  __return_storage_ptr__->Particle = pTVar2;
  __return_storage_ptr__->Accessor = pFVar3;
  __return_storage_ptr__->MidPhaseIndex = iVar1;
  pFVar4 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                     ((TGeometryParticlesImp<double,3,0> *)pTVar2->_padding_,(int)pTVar2->_padding_)
  ;
  pFVar5 = FParticleCollisions::GetMidPhase(pFVar4,__return_storage_ptr__->MidPhaseIndex);
  (__return_storage_ptr__->PairModifier).MidPhase = pFVar5;
  (__return_storage_ptr__->PairModifier).Accessor = pFVar3;
  return __return_storage_ptr__;
}

