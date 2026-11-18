// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Visit @ 143a9cf50

bool __thiscall
Chaos::FVisitedContactPairsTracker::Visit
          (FVisitedContactPairsTracker *this,FContactPairModifier *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  FPBDCollisionConstraint *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FPBDCollisionConstraint **ppFVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ForElementType<unsigned_int> FVar11;
  
  pFVar3 = param_1->Constraint;
  uVar1 = *(undefined4 *)&(pFVar3->ContainerCookie).field_0x10;
  iVar10 = SPULL(uVar1,0,0x1f);
  ppFVar7 = TArrayView<Chaos::FPBDCollisionConstraint_*_const,int>::operator[]
                      (&this->Constraints,iVar10);
  if (*ppFVar7 != pFVar3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Constraints[ConstraintIndex] == ContactPair.Constraint",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ContactModification.cpp"
                       ,0x267,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if ((iVar10 < 0) || ((this->VisitedContacts).NumBits <= iVar10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  FVar11 = (this->VisitedContacts).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<unsigned_int>)0x0) {
    FVar11 = (ForElementType<unsigned_int>)&this->VisitedContacts;
  }
  lVar8 = (longlong)((int)(iVar10 + (uVar1 * 2 >> 0x1f & 0x1fU)) >> 5);
  uVar2 = *(uint *)((longlong)FVar11 + lVar8 * 4);
  uVar9 = 1 << ((byte)iVar10 & 0x1f);
  if ((uVar9 & uVar2) == 0) {
    *(uint *)((longlong)FVar11 + lVar8 * 4) = uVar2 | uVar9;
    return true;
  }
  return false;
}

