// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// GetHighestBoneWeightedValue @ 14a92bad0

FPoseHistoryAnimationAttribute * __thiscall
UE::Anim::FAttributeBlendData::TAttributeSetIterator<FPoseHistoryAnimationAttribute>::
GetHighestBoneWeightedValue(TAttributeSetIterator<FPoseHistoryAnimationAttribute> *this)

{
  int iVar1;
  int iVar2;
  FAttributeSet *pFVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FPoseHistoryAnimationAttribute *pFVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [16];
  
  bVar6 = HasBoneWeights(this->Data);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.HasBoneWeights()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xd0,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FPoseHistoryAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  iVar11 = -1;
  piVar10 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  iVar1 = (pFVar3->WeightIndices).ArrayNum;
  piVar4 = piVar10 + iVar1;
  fVar13 = __real_bf800000;
  while( true ) {
    if ((pFVar3->WeightIndices).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (piVar10 == piVar4) break;
    iVar2 = *piVar10;
    fVar12 = GetBoneWeight(this->Data,iVar2,this->Collection->Identifier->Index);
    if (fVar12 <= fVar13) {
      iVar2 = iVar11;
      fVar12 = fVar13;
    }
    fVar13 = fVar12;
    iVar11 = iVar2;
    piVar10 = piVar10 + 1;
  }
  if ((iVar11 == -1) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6899413482651779293>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xdd,"HighestIndex != INDEX_NONE"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FPoseHistoryAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  piVar4 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  piVar10 = piVar4;
  do {
    if (piVar10 == piVar4 + (pFVar3->WeightIndices).ArrayNum) {
      uVar9 = 0xffffffff;
LAB_14a92bbf5:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FPoseHistoryAnimationAttribute *)(*pcVar5)();
        return pFVar8;
      }
LAB_14a92bc2b:
      return (FPoseHistoryAnimationAttribute *)(pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar9]
      ;
    }
    if (*piVar10 == iVar11) {
      uVar9 = (uint)((longlong)piVar10 - (longlong)piVar4 >> 2);
      uVar7 = 0;
      if ((int)uVar9 < (pFVar3->DataPtrs).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) goto LAB_14a92bbf5;
      goto LAB_14a92bc2b;
    }
    piVar10 = piVar10 + 1;
  } while( true );
}

