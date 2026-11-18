// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FContactPairModifierParticleRangeIterator @ 143a372d0

FContactPairModifierParticleRangeIterator * __thiscall
Chaos::FContactPairModifierParticleRangeIterator::FContactPairModifierParticleRangeIterator
          (FContactPairModifierParticleRangeIterator *this,FCollisionContactModifier *param_1,
          TArray<Chaos::FPBDCollisionConstraint_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_2,int param_3)

{
  ForElementType<Chaos::FPBDCollisionConstraint_*> FVar1;
  code *pcVar2;
  FCollisionContactModifier *pFVar3;
  bool bVar4;
  FContactPairModifierParticleRangeIterator *pFVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  FCollisionContactModifier *pFStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  this->Modifier = param_1;
  (this->PairModifier).Constraint = (FPBDCollisionConstraint *)0x0;
  (this->PairModifier).Modifier = (FCollisionContactModifier *)0x0;
  this->Constraints = param_2;
  this->Index = param_3;
  if ((param_3 < 0) || (param_2->ArrayNum <= param_3)) {
    puVar6 = &local_18;
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    if (param_3 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FContactPairModifierParticleRangeIterator *)(*pcVar2)();
        return pFVar5;
      }
    }
    FVar1 = (param_2->AllocatorInstance).SecondaryData;
    pFStack_20 = param_1;
    if (FVar1 != (ForElementType<Chaos::FPBDCollisionConstraint_*>)0x0) {
      param_2 = (TArray<Chaos::FPBDCollisionConstraint_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar1;
    }
    puVar6 = &local_28;
    local_28 = *(undefined8 *)((longlong)param_2 + (longlong)param_3 * 8);
  }
  pFVar3 = (FCollisionContactModifier *)puVar6[1];
  (this->PairModifier).Constraint = (FPBDCollisionConstraint *)*puVar6;
  (this->PairModifier).Modifier = pFVar3;
  return this;
}

