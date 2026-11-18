// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// FCCDModifierParticleRange @ 14373c860

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

FCCDModifierParticleRange * __thiscall
Chaos::FCCDModifierParticleRange::FCCDModifierParticleRange
          (FCCDModifierParticleRange *this,FCCDModifierAccessor *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

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
  
  this->Particle = param_2;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Accessor = param_1;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  pFVar5 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                     ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                      (int)param_2->_padding_);
  uVar8 = 0;
  iVar7 = (pFVar5->MidPhases).ArrayNum;
  if (iVar7 < 1) {
    return this;
  }
  lVar9 = 0;
  local_res8.__this = this;
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
      return this;
    }
    iVar7 = (pFVar5->MidPhases).ArrayNum;
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x10;
  } while ((int)uVar8 < iVar7);
  return this;
}

// operator() @ 1437425d0

ECollisionVisitorResult __thiscall
`Chaos::FCCDModifierParticleRange::CollectConstraints'::__l2::<lambda_1>::operator()
          (void *this,FPBDCollisionConstraint *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ECollisionVisitorResult EVar4;
  int iVar5;
  FPBDCollisionConstraint *local_18 [2];
  
  if (((param_1->Flags).Bits >> 9 & 1) != 0) {
    lVar1 = *(longlong *)this;
    local_18[0] = param_1;
    if ((*(FPBDCollisionConstraint ***)(lVar1 + 0x10) <= local_18) &&
       (local_18 < *(FPBDCollisionConstraint ***)(lVar1 + 0x10) + *(int *)(lVar1 + 0x1c))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
    iVar5 = *(int *)(lVar1 + 0x18);
    if (iVar5 == *(int *)(lVar1 + 0x1c)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(lVar1 + 0x10),(int *)(lVar1 + 0x1c));
    }
    *(int *)(lVar1 + 0x18) = iVar5 + 1;
    *(FPBDCollisionConstraint **)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar5 * 8) = local_18[0];
  }
  return Continue;
}

// CollectConstraints @ 143759a90

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

void __thiscall
Chaos::FCCDModifierParticleRange::CollectConstraints(FCCDModifierParticleRange *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ECollisionVisitorResult EVar4;
  FParticleCollisions *pFVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  <lambda_1> local_res8;
  
  (this->Constraints).ArrayNum = 0;
  if ((this->Constraints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Constraints).AllocatorInstance,0,&(this->Constraints).ArrayMax);
  }
  pFVar5 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                     ((TGeometryParticlesImp<double,3,0> *)this->Particle->_padding_,
                      (int)this->Particle->_padding_);
  uVar7 = 0;
  iVar6 = (pFVar5->MidPhases).ArrayNum;
  if (0 < iVar6) {
    lVar8 = 0;
    local_res8.__this = this;
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
              VisitCollisions<_Chaos::FCCDModifierParticleRange::CollectConstraints_::__l2::<lambda_1>_>
                        (*(FParticlePairMidPhase **)
                          ((pFVar5->MidPhases).AllocatorInstance.Data + lVar8 + 8),&local_res8,
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

// begin @ 1437c1720

FCCDModifierParticleIterator * __thiscall
Chaos::FCCDModifierParticleRange::begin
          (FCCDModifierParticleRange *this,FCCDModifierParticleIterator *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FCCDModifierParticleIterator *pFVar3;
  FCCDModifierAccessor *pFVar4;
  FPBDCollisionConstraint *pFVar5;
  uint uStack_1c;
  
  if (0x7fffffff < (uint)(this->Constraints).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConstraintIndex < Range->GetNumConstraints()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDModification.cpp"
                       ,0x94,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCCDModifierParticleIterator *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->Constraints).ArrayNum < 1) {
    pFVar4 = (FCCDModifierAccessor *)0x0;
    pFVar5 = (FPBDCollisionConstraint *)0x0;
  }
  else {
    pFVar4 = this->Accessor;
    pFVar5 = *(FPBDCollisionConstraint **)(this->Constraints).AllocatorInstance.Data;
  }
  __return_storage_ptr__->Range = this;
  *(ulonglong *)&__return_storage_ptr__->ConstraintIndex = (ulonglong)uStack_1c << 0x20;
  (__return_storage_ptr__->PairModifier).Accessor = pFVar4;
  (__return_storage_ptr__->PairModifier).Constraint = pFVar5;
  return __return_storage_ptr__;
}

// end @ 1437c17b0

FCCDModifierParticleIterator * __thiscall
Chaos::FCCDModifierParticleRange::end
          (FCCDModifierParticleRange *this,FCCDModifierParticleIterator *__return_storage_ptr__)

{
  int iVar1;
  undefined4 uStack_1c;
  
  iVar1 = (this->Constraints).ArrayNum;
  __return_storage_ptr__->Range = this;
  *(ulonglong *)&__return_storage_ptr__->ConstraintIndex = CONCAT44(uStack_1c,iVar1);
  (__return_storage_ptr__->PairModifier).Accessor = (FCCDModifierAccessor *)0x0;
  (__return_storage_ptr__->PairModifier).Constraint = (FPBDCollisionConstraint *)0x0;
  return __return_storage_ptr__;
}

