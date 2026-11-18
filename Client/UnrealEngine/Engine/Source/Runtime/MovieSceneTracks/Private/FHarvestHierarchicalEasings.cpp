// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// PostTask @ 1468c6270

void __thiscall
UE::MovieScene::FHarvestHierarchicalEasings::PostTask(FHarvestHierarchicalEasings *this)

{
  double dVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  FHierarchicalEasingChannelData *pFVar8;
  FHierarchicalEasingChannelData *pFVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar5 = __real_3f800000;
  iVar10 = (this->ComputationData).ArrayNum;
  uVar12 = 0;
  if (0 < iVar10) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < iVar10) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = (this->ComputationData).DataPtr;
      if ((&pFVar8->BlendMode)[lVar11] == AccumulateParentToChild) {
        uVar2 = *(ushort *)((longlong)&pFVar8->ParentChannel + lVar11);
        if (uVar2 != 0xffff) {
          pFVar9 = TArrayView<UE::MovieScene::FHierarchicalEasingChannelData,int>::operator[]
                             (&this->ComputationData,(uint)uVar2);
          *(double *)((longlong)&pFVar8->FinalResult + lVar11) =
               pFVar9->FinalResult * *(double *)((longlong)&pFVar8->FinalResult + lVar11);
        }
        uVar2 = *(ushort *)((longlong)&pFVar8->ResultChannel + lVar11);
        if (uVar2 != 0xffff) {
          dVar1 = *(double *)((longlong)&pFVar8->FinalResult + lVar11);
          pFVar8 = TArrayView<UE::MovieScene::FHierarchicalEasingChannelData,int>::operator[]
                             (&this->ComputationData,(uint)uVar2);
          pFVar8->UnaccumulatedResult = dVar1 * pFVar8->UnaccumulatedResult;
        }
      }
      else if ((&pFVar8->BlendMode)[lVar11] == ChildFirstBlendTarget) {
        uVar2 = *(ushort *)((longlong)&pFVar8->ParentChannel + lVar11);
        if (((this->ComputationData).ArrayNum <= (int)(uint)uVar2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar14 = (float)*(double *)((longlong)&pFVar8->FinalResult + lVar11);
        uVar3 = *(ushort *)((longlong)&pFVar8->ResultChannel + lVar11);
        fVar15 = (float)(this->ComputationData).DataPtr[uVar2].UnaccumulatedResult * fVar14;
        fVar13 = fVar15;
        if (fVar5 <= fVar15) {
          fVar13 = fVar5;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        *(double *)((longlong)&pFVar8->FinalResult + lVar11) = (double)fVar13;
        if (uVar3 != 0xffff) {
          pFVar8 = TArrayView<UE::MovieScene::FHierarchicalEasingChannelData,int>::operator[]
                             (&this->ComputationData,(uint)uVar3);
          fVar14 = fVar14 - fVar15;
          if (fVar5 <= fVar14) {
            fVar14 = fVar5;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          pFVar8->FinalResult = (double)fVar14;
        }
      }
      iVar10 = (this->ComputationData).ArrayNum;
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x18;
    } while ((int)uVar12 < iVar10);
  }
  return;
}

// PreTask @ 1468c6ee0

void __thiscall
UE::MovieScene::FHarvestHierarchicalEasings::PreTask(FHarvestHierarchicalEasings *this)

{
  FHierarchicalEasingChannelData *pFVar1;
  FHierarchicalEasingChannelData *pFVar2;
  
  pFVar2 = (this->ComputationData).DataPtr;
  pFVar1 = pFVar2 + (this->ComputationData).ArrayNum;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
    pFVar2->FinalResult = 1.0;
    pFVar2->UnaccumulatedResult = 1.0;
  }
  return;
}

