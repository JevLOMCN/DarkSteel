// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// operator() @ 1439c33b0

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

ECollisionVisitorResult __thiscall
`Chaos::FParticleMeshCollisionPruner::Prune'::__l2::<lambda_1>::operator()
          (void *this,FPBDCollisionConstraint *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ECollisionVisitorResult EVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  <lambda_1> local_28;
  
  bVar3 = Chaos::FImplicitObject::IsUnderlyingMesh(param_1->Implicit[1]);
  if ((!bVar3) || (bVar3 = Chaos::CollisionsHasTriangleEdgeContacts(param_1,1), !bVar3)) {
    return Continue;
  }
  local_28.__this = *(FParticleMeshCollisionPruner **)this;
  local_28.EdgePointBarycentricTolerance = *(double *)((longlong)this + 0x10);
  uVar7 = 0;
  plVar1 = *(longlong **)((longlong)this + 8);
  local_28.MeshParticleIndexA = 1;
  iVar6 = (int)plVar1[1];
  if (0 < iVar6) {
    lVar8 = 0;
    local_28.MeshCollisionA = param_1;
    do {
      uVar4 = 0;
      if ((int)uVar7 < iVar6) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      EVar5 = Chaos::FParticlePairMidPhase::
              VisitCollisions<__Chaos::FParticleMeshCollisionPruner::Prune_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                        (*(FParticlePairMidPhase **)(*plVar1 + 8 + lVar8),&local_28,VisitDefault);
      if (EVar5 == Stop) {
        return Continue;
      }
      iVar6 = (int)plVar1[1];
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < iVar6);
  }
  return Continue;
}

// Prune @ 1439d9a00

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

void __thiscall Chaos::FParticleMeshCollisionPruner::Prune(FParticleMeshCollisionPruner *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ECollisionVisitorResult EVar4;
  FParticleCollisions *pFVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  <lambda_1> local_28;
  
  pFVar5 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                     ((TGeometryParticlesImp<double,3,0> *)this->Particle->_padding_,
                      (int)this->Particle->_padding_);
  uVar7 = 0;
  local_28.EdgePointBarycentricTolerance = __real_3f50624dd2f1a9fc;
  iVar6 = (pFVar5->MidPhases).ArrayNum;
  if (0 < iVar6) {
    lVar8 = 0;
    local_28.__this = this;
    local_28.ParticleCollisions = pFVar5;
    do {
      uVar3 = 0;
      if ((int)uVar7 < iVar6) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      EVar4 = FParticlePairMidPhase::
              VisitCollisions<_Chaos::FParticleMeshCollisionPruner::Prune_::__l2::<lambda_1>_>
                        (*(FParticlePairMidPhase **)
                          ((pFVar5->MidPhases).AllocatorInstance.Data + lVar8 + 8),&local_28,
                         VisitDefault);
      if (EVar4 == Stop) {
        return;
      }
      iVar6 = (pFVar5->MidPhases).ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < iVar6);
  }
  return;
}

