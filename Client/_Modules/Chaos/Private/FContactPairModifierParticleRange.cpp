// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FContactPairModifierParticleRange @ 143a371c0

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

FContactPairModifierParticleRange * __thiscall
Chaos::FContactPairModifierParticleRange::FContactPairModifierParticleRange
          (FContactPairModifierParticleRange *this,FCollisionContactModifier *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ECollisionVisitorResult EVar4;
  FParticleCollisions *pFVar5;
  FContactPairModifierParticleRange *pFVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  <lambda_1> local_res8;
  
  this->Particle = param_2;
  (this->Constraints).AllocatorInstance.SecondaryData =
       (ForElementType<Chaos::FPBDCollisionConstraint_*>)0x0;
  this->Modifier = param_1;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0x10;
  pFVar5 = TGeometryParticleHandleImp<double,3,1>::ParticleCollisions(param_2);
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
      pFVar6 = (FContactPairModifierParticleRange *)(*pcVar1)();
      return pFVar6;
    }
    EVar4 = FParticlePairMidPhase::
            VisitCollisions<_Chaos::FContactPairModifierParticleRange::FContactPairModifierParticleRange_::__l2::<lambda_1>_>
                      (*(FParticlePairMidPhase **)
                        ((pFVar5->MidPhases).AllocatorInstance.Data + lVar9 + 8),&local_res8,
                       VisitDisabled);
    if (EVar4 == Stop) {
      return this;
    }
    iVar7 = (pFVar5->MidPhases).ArrayNum;
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x10;
  } while ((int)uVar8 < iVar7);
  return this;
}

// operator() @ 143a3cd90

ECollisionVisitorResult __thiscall
`Chaos::FContactPairModifierParticleRange::FContactPairModifierParticleRange'::__l2::<lambda_1>::
operator()(void *this,FPBDCollisionConstraint *param_1)

{
  ForElementType<Chaos::FPBDCollisionConstraint_*> *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ECollisionVisitorResult EVar5;
  int iVar6;
  ForElementType<Chaos::FPBDCollisionConstraint_*> *pFVar7;
  FPBDCollisionConstraint *local_18;
  
  iVar6 = (param_1->ManifoldPoints).ArrayNum;
  if (iVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  else if ((0 < iVar6) && ((*(byte *)&param_1->Flags >> 1 & 1) == 0)) {
    lVar2 = *(longlong *)this;
    pFVar1 = (ForElementType<Chaos::FPBDCollisionConstraint_*> *)(lVar2 + 0x10);
    pFVar7 = *(ForElementType<Chaos::FPBDCollisionConstraint_*> **)(lVar2 + 0x90);
    if (*(ForElementType<Chaos::FPBDCollisionConstraint_*> **)(lVar2 + 0x90) ==
        (ForElementType<Chaos::FPBDCollisionConstraint_*> *)0x0) {
      pFVar7 = pFVar1;
    }
    local_18 = param_1;
    if ((pFVar7 <= (ForElementType<Chaos::FPBDCollisionConstraint_*> *)&stack0xffffffffffffffe8) &&
       (&stack0xffffffffffffffe8 < pFVar7->InlineData + (longlong)*(int *)(lVar2 + 0x9c) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    iVar6 = *(int *)(lVar2 + 0x98);
    if (iVar6 == *(int *)(lVar2 + 0x9c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FPBDCollisionConstraint_*>_>
                        (0x808,pFVar1,(int *)(lVar2 + 0x9c));
    }
    *(int *)(lVar2 + 0x98) = iVar6 + 1;
    pFVar7 = *(ForElementType<Chaos::FPBDCollisionConstraint_*> **)(lVar2 + 0x90);
    if (*(ForElementType<Chaos::FPBDCollisionConstraint_*> **)(lVar2 + 0x90) ==
        (ForElementType<Chaos::FPBDCollisionConstraint_*> *)0x0) {
      pFVar7 = pFVar1;
    }
    *(FPBDCollisionConstraint **)(pFVar7->InlineData + (longlong)iVar6 * 8) = local_18;
  }
  return Continue;
}

// begin @ 143a9efa0

FContactPairModifierParticleRangeIterator * __thiscall
Chaos::FContactPairModifierParticleRange::begin
          (FContactPairModifierParticleRange *this,
          FContactPairModifierParticleRangeIterator *__return_storage_ptr__)

{
  ForElementType<Chaos::FPBDCollisionConstraint_*> FVar1;
  
  __return_storage_ptr__->Modifier = this->Modifier;
  (__return_storage_ptr__->PairModifier).Constraint = (FPBDCollisionConstraint *)0x0;
  (__return_storage_ptr__->PairModifier).Modifier = (FCollisionContactModifier *)0x0;
  __return_storage_ptr__->Constraints = &this->Constraints;
  __return_storage_ptr__->Index = 0;
  if (0 < (this->Constraints).ArrayNum) {
    FVar1 = (this->Constraints).AllocatorInstance.SecondaryData;
    if (FVar1 == (ForElementType<Chaos::FPBDCollisionConstraint_*>)0x0) {
      FVar1 = (ForElementType<Chaos::FPBDCollisionConstraint_*>)&this->Constraints;
    }
    (__return_storage_ptr__->PairModifier).Constraint = *(FPBDCollisionConstraint **)FVar1;
    (__return_storage_ptr__->PairModifier).Modifier = __return_storage_ptr__->Modifier;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->PairModifier).Constraint = (FPBDCollisionConstraint *)0x0;
  (__return_storage_ptr__->PairModifier).Modifier = (FCollisionContactModifier *)0x0;
  return __return_storage_ptr__;
}

// end @ 143a9f020

FContactPairModifierParticleRangeIterator * __thiscall
Chaos::FContactPairModifierParticleRange::end
          (FContactPairModifierParticleRange *this,
          FContactPairModifierParticleRangeIterator *__return_storage_ptr__)

{
  FContactPairModifierParticleRangeIterator::FContactPairModifierParticleRangeIterator
            (__return_storage_ptr__,this->Modifier,&this->Constraints,(this->Constraints).ArrayNum);
  return __return_storage_ptr__;
}

