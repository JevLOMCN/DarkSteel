// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 1

// Find @ 14a726ac0

FCurveElement * __thiscall
UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Find
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *this,FName param_1)

{
  FName FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FCurveElement *pFVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FIdentityFunctor local_res10;
  uint uStackX_14;
  
  if (this->bSorted == false) {
    local_res10 = param_1.ComparisonIndex.Value._0_1_;
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
              ((this->Elements).AllocatorInstance.Data,(this->Elements).ArrayNum,local_res10,
               (FElementSortPredicate)local_res10);
    this->bSorted = true;
  }
  uVar7 = (this->Elements).ArrayNum;
  iVar9 = 0;
  pFVar5 = (this->Elements).AllocatorInstance.Data;
  uStackX_14 = param_1.Number;
  if (0 < (int)uVar7) {
    do {
      iVar8 = (uVar7 >> 1) + iVar9;
      FVar1 = pFVar5[iVar8].Name;
      iVar6 = FVar1.ComparisonIndex.Value.Value - param_1.ComparisonIndex.Value;
      if (iVar6 == 0) {
        iVar6 = FVar1.Number - uStackX_14;
      }
      if (iVar6 < 0) {
        iVar9 = iVar8 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
  }
  if (iVar9 < (this->Elements).ArrayNum) {
    FVar1 = pFVar5[iVar9].Name;
    iVar8 = param_1.ComparisonIndex.Value.Value - FVar1.ComparisonIndex.Value;
    if (iVar8 == 0) {
      iVar8 = uStackX_14 - FVar1.Number;
    }
    if ((-1 < iVar8) && (iVar9 != -1)) {
      if ((iVar9 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FCurveElement *)(*pcVar2)();
        return pFVar5;
      }
      return (this->Elements).AllocatorInstance.Data + iVar9;
    }
  }
  return (FCurveElement *)0x0;
}

