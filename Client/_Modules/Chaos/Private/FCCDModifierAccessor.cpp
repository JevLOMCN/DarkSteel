// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FCCDModifierAccessor @ 14373c850

FCCDModifierAccessor * __thiscall
Chaos::FCCDModifierAccessor::FCCDModifierAccessor(FCCDModifierAccessor *this,double param_1)

{
  this->Dt = param_1;
  return this;
}

// GetModifiers @ 143791a80

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

FCCDModifierParticleRange * __thiscall
Chaos::FCCDModifierAccessor::GetModifiers
          (FCCDModifierAccessor *this,FCCDModifierParticleRange *__return_storage_ptr__,
          TGeometryParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ECollisionVisitorResult EVar4;
  FParticleCollisions *pFVar5;
  FCCDModifierParticleRange *pFVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  <lambda_1> local_res8;
  
  __return_storage_ptr__->Particle = param_1;
  (__return_storage_ptr__->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->Accessor = this;
  (__return_storage_ptr__->Constraints).ArrayNum = 0;
  (__return_storage_ptr__->Constraints).ArrayMax = 0;
  pFVar5 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  uVar8 = 0;
  iVar7 = (pFVar5->MidPhases).ArrayNum;
  if (iVar7 < 1) {
    return __return_storage_ptr__;
  }
  lVar9 = 0;
  local_res8.__this = __return_storage_ptr__;
  do {
    uVar3 = 0;
    if ((int)uVar8 < iVar7) {
      uVar3 = ~uVar8 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FCCDModifierParticleRange *)(*pcVar1)();
      return pFVar6;
    }
    EVar4 = FParticlePairMidPhase::
            VisitCollisions<_Chaos::FCCDModifierParticleRange::CollectConstraints_::__l2::<lambda_1>_>
                      (*(FParticlePairMidPhase **)
                        ((pFVar5->MidPhases).AllocatorInstance.Data + lVar9 + 8),&local_res8,
                       VisitDefault);
    if (EVar4 == Stop) {
      return __return_storage_ptr__;
    }
    iVar7 = (pFVar5->MidPhases).ArrayNum;
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x10;
  } while ((int)uVar8 < iVar7);
  return __return_storage_ptr__;
}

