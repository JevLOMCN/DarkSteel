// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// SeekValidContact @ 143a912c0

void __thiscall
Chaos::FContactPairModifierIterator::SeekValidContact(FContactPairModifierIterator *this)

{
  FCollisionContactModifier *pFVar1;
  FPBDCollisionConstraint *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = this->ConstraintIdx;
  if (uVar7 == 0xffffffff) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1523422602083697189>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ContactModification.cpp"
                       ,0x225,"IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar1 = this->Modifier;
    iVar6 = (pFVar1->Constraints).ArrayNum;
    if ((int)uVar7 < iVar6) {
      do {
        uVar5 = 0;
        if ((int)uVar7 < iVar6) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar2 = (pFVar1->Constraints).DataPtr[(int)uVar7];
        iVar6 = (pFVar2->ManifoldPoints).ArrayNum;
        if (iVar6 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
LAB_143a913cd:
          pFVar1 = this->Modifier;
          (this->PairModifier).Constraint = pFVar2;
          (this->PairModifier).Modifier = pFVar1;
          return;
        }
        if (iVar6 != 0) goto LAB_143a913cd;
        this->ConstraintIdx = this->ConstraintIdx + 1;
        uVar7 = this->ConstraintIdx;
        iVar6 = (pFVar1->Constraints).ArrayNum;
      } while ((int)uVar7 < iVar6);
    }
    this->ConstraintIdx = -1;
    this->Modifier = (FCollisionContactModifier *)0x0;
  }
  return;
}

