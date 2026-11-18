// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// MoveToBegin @ 14379a680

FCCDModifierParticleIterator * __thiscall
Chaos::FCCDModifierParticleIterator::MoveToBegin(FCCDModifierParticleIterator *this)

{
  FCCDModifierParticleRange *pFVar1;
  code *pcVar2;
  bool bVar3;
  FCCDModifierParticleIterator *pFVar4;
  FPBDCollisionConstraint *pFVar5;
  int iVar6;
  FPBDCollisionConstraint *pFVar7;
  
  this->ConstraintIndex = -1;
  if (0x7fffffff < (uint)(this->Range->Constraints).ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConstraintIndex < Range->GetNumConstraints()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDModification.cpp"
                       ,0x94,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCCDModifierParticleIterator *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = this->Range;
  iVar6 = this->ConstraintIndex + 1;
  this->ConstraintIndex = iVar6;
  if (iVar6 < (pFVar1->Constraints).ArrayNum) {
    if (iVar6 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FCCDModifierParticleIterator *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar5 = (FPBDCollisionConstraint *)this->Range->Accessor;
    pFVar7 = *(FPBDCollisionConstraint **)
              ((pFVar1->Constraints).AllocatorInstance.Data + (longlong)iVar6 * 8);
  }
  else {
    pFVar5 = (FPBDCollisionConstraint *)0x0;
    pFVar7 = pFVar5;
  }
  (this->PairModifier).Accessor = (FCCDModifierAccessor *)pFVar5;
  (this->PairModifier).Constraint = pFVar7;
  return this;
}

// MoveToEnd @ 14379a760

FCCDModifierParticleIterator * __thiscall
Chaos::FCCDModifierParticleIterator::MoveToEnd(FCCDModifierParticleIterator *this)

{
  int iVar1;
  
  iVar1 = (this->Range->Constraints).ArrayNum;
  (this->PairModifier).Accessor = (FCCDModifierAccessor *)0x0;
  (this->PairModifier).Constraint = (FPBDCollisionConstraint *)0x0;
  this->ConstraintIndex = iVar1;
  return this;
}

// MoveToNext @ 14379a780

FCCDModifierParticleIterator * __thiscall
Chaos::FCCDModifierParticleIterator::MoveToNext(FCCDModifierParticleIterator *this)

{
  FCCDModifierParticleRange *pFVar1;
  code *pcVar2;
  bool bVar3;
  FCCDModifierParticleIterator *pFVar4;
  FPBDCollisionConstraint *pFVar5;
  int iVar6;
  FPBDCollisionConstraint *pFVar7;
  
  if ((this->Range->Constraints).ArrayNum <= this->ConstraintIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConstraintIndex < Range->GetNumConstraints()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDModification.cpp"
                       ,0x94,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCCDModifierParticleIterator *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = this->Range;
  iVar6 = this->ConstraintIndex + 1;
  this->ConstraintIndex = iVar6;
  if (iVar6 < (pFVar1->Constraints).ArrayNum) {
    if (iVar6 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FCCDModifierParticleIterator *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar5 = (FPBDCollisionConstraint *)this->Range->Accessor;
    pFVar7 = *(FPBDCollisionConstraint **)
              ((pFVar1->Constraints).AllocatorInstance.Data + (longlong)iVar6 * 8);
  }
  else {
    pFVar5 = (FPBDCollisionConstraint *)0x0;
    pFVar7 = pFVar5;
  }
  (this->PairModifier).Accessor = (FCCDModifierAccessor *)pFVar5;
  (this->PairModifier).Constraint = pFVar7;
  return this;
}

