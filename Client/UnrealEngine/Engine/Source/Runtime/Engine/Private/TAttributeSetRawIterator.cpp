// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetHighestBoneWeightedValue @ 14755caa0

uchar * __thiscall
UE::Anim::FAttributeBlendData::TAttributeSetRawIterator::GetHighestBoneWeightedValue
          (TAttributeSetRawIterator *this)

{
  int iVar1;
  int iVar2;
  FAttributeSet *pFVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uchar *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [16];
  
  if (((this->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.HasBoneWeights()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0x141,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    puVar8 = (uchar *)(*pcVar5)();
    return puVar8;
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
                        (&bGEnsureHasExecuted<6899413482651779406>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0x14e,"HighestIndex != INDEX_NONE"), bVar6)) {
    pcVar5 = (code *)swi(3);
    puVar8 = (uchar *)(*pcVar5)();
    return puVar8;
  }
  pFVar3 = this->Collection;
  piVar4 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  piVar10 = piVar4;
  do {
    if (piVar10 == piVar4 + (pFVar3->WeightIndices).ArrayNum) {
      uVar9 = 0xffffffff;
LAB_14755cbc5:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        puVar8 = (uchar *)(*pcVar5)();
        return puVar8;
      }
LAB_14755cbfb:
      return (pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar9];
    }
    if (*piVar10 == iVar11) {
      uVar9 = (uint)((longlong)piVar10 - (longlong)piVar4 >> 2);
      uVar7 = 0;
      if ((int)uVar9 < (pFVar3->DataPtrs).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 != 0) goto LAB_14755cbfb;
      goto LAB_14755cbc5;
    }
    piVar10 = piVar10 + 1;
  } while( true );
}

