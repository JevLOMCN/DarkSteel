// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// GetMidPhase @ 143c06f70

FMidPhaseModifier * __thiscall
Chaos::FMidPhaseModifierAccessor::GetMidPhase
          (FMidPhaseModifierAccessor *this,FMidPhaseModifier *__return_storage_ptr__,
          TGeometryParticleHandleImp<double,3,1> *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FParticleCollisions *pFVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  FMidPhaseModifier *pFVar6;
  FParticlePairMidPhase *pFVar7;
  int iVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  
  if ((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (param_2 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
    pFVar4 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                       ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                        (int)param_1->_padding_);
    iVar8 = (pFVar4->MidPhases).ArrayNum;
    pFVar4 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                       ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                        (int)param_2->_padding_);
    pTVar9 = param_1;
    if (iVar8 <= (pFVar4->MidPhases).ArrayNum) {
      pTVar9 = param_2;
      param_2 = param_1;
    }
    iVar8 = 0;
    pFVar4 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                       ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                        (int)param_2->_padding_);
    if ((pFVar4->MidPhases).ArrayNum < 1) {
      pFVar7 = (FParticlePairMidPhase *)0x0;
    }
    else {
      pFVar7 = *(FParticlePairMidPhase **)((pFVar4->MidPhases).AllocatorInstance.Data + 8);
    }
    pFVar4 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                       ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                        (int)param_2->_padding_);
    iVar1 = (pFVar4->MidPhases).ArrayNum;
    pFVar4 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                       ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                        (int)param_2->_padding_);
    FParticleCollisions::GetMidPhase(pFVar4,iVar1);
    if (iVar1 != 0) {
      do {
        if (pFVar7 == (FParticlePairMidPhase *)0x0) {
LAB_143c07042:
          pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        }
        else {
          pTVar5 = pFVar7->Particle1;
          if ((param_2 != pFVar7->Particle0) &&
             (pTVar5 = pFVar7->Particle0, param_2 != pFVar7->Particle1)) goto LAB_143c07042;
        }
        if (pTVar5 == pTVar9) {
          __return_storage_ptr__->MidPhase = pFVar7;
          __return_storage_ptr__->Accessor = this;
          return __return_storage_ptr__;
        }
        pFVar4 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                           ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                            (int)param_2->_padding_);
        iVar8 = iVar8 + 1;
        if ((iVar8 < 0) || ((pFVar4->MidPhases).ArrayNum <= iVar8)) {
          pFVar7 = (FParticlePairMidPhase *)0x0;
        }
        else {
          if ((iVar8 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FMidPhaseModifier *)(*pcVar2)();
            return pFVar6;
          }
          pFVar7 = *(FParticlePairMidPhase **)
                    ((pFVar4->MidPhases).AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8);
        }
      } while (iVar8 != iVar1);
    }
  }
  __return_storage_ptr__->MidPhase = (FParticlePairMidPhase *)0x0;
  __return_storage_ptr__->Accessor = (FMidPhaseModifierAccessor *)0x0;
  return __return_storage_ptr__;
}

// GetMidPhases @ 143c07190

FMidPhaseModifierParticleRange * __thiscall
Chaos::FMidPhaseModifierAccessor::GetMidPhases
          (FMidPhaseModifierAccessor *this,FMidPhaseModifierParticleRange *__return_storage_ptr__,
          TGeometryParticleHandleImp<double,3,1> *param_1)

{
  __return_storage_ptr__->Accessor = this;
  __return_storage_ptr__->Particle = param_1;
  return __return_storage_ptr__;
}

// VisitMidPhases @ 143c1d740

void __thiscall
Chaos::FMidPhaseModifierAccessor::VisitMidPhases
          (FMidPhaseModifierAccessor *this,
          TFunction<void___cdecl(Chaos::FMidPhaseModifier_&)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPBDRigidsEvolutionGBF *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined8 local_38;
  FMidPhaseModifierAccessor *local_30;
  
  pFVar3 = this->Evolution;
  pFVar7 = (pFVar3->CollisionConstraints).ConstraintAllocator.ParticlePairMidPhases.
           AllocatorInstance.Data;
  iVar2 = (pFVar3->CollisionConstraints).ConstraintAllocator.ParticlePairMidPhases.ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar3->CollisionConstraints).ConstraintAllocator.ParticlePairMidPhases.ArrayNum != iVar2)
    {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FParticlePairMidPhase,TDefaultDelete<Chaos::FParticlePairMidPhase>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    local_38 = *(undefined8 *)pFVar7;
    local_30 = this;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar4 = *(code **)param_1;
    plVar6 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar6 = (longlong *)&param_1->field_0x10;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar4)(uVar5,&local_38);
    pFVar7 = pFVar7 + 8;
  }
  return;
}

