// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// MakeContributorKey @ 146840600

FContributorKey __thiscall
UMovieScenePropertyInstantiatorSystem::FPropertyParameters::MakeContributorKey
          (FPropertyParameters *this)

{
  int *in_RDX;
  
  *in_RDX = this->PropertyInfoIndex;
  return (FContributorKey)(int)in_RDX;
}

// MakeOutputComponentType @ 146840b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::FPropertyParameters::MakeOutputComponentType
          (FPropertyParameters *this,FEntityManager *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FComponentMask *param_3)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  FObjectPropertyInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TBitArray<TFixedAllocator<12>_> *pTVar7;
  FBuiltInComponentTypes *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  
  if (((this->PropertyInfo->FinalBlendOutputID).Value != 0xffff) &&
     (pTVar7 = &UE::MovieScene::FEntityManager::GetEntityType
                          (param_1,(FMovieSceneEntityID)
                                   (this->PropertyInfo->FinalBlendOutputID).Value)->Bits,
     &param_3->Bits != pTVar7)) {
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&param_3->Bits,pTVar7);
  }
  iVar11 = param_2->ArrayNum;
  uVar10 = 0;
  if (0 < iVar11) {
    uVar12 = 1;
    lVar13 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar11) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = this->PropertyInfo;
      uVar2 = *(ushort *)((longlong)&(param_2->DataPtr->ComponentTypeID).Value + lVar13);
      if ((((int)uVar10 < 0) || ((pFVar3->EmptyChannels).NumBits <= (int)uVar10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (param_3->Bits).NumBits;
      uVar9 = (uint)uVar2;
      uVar6 = uVar10;
      if ((int)uVar10 < 0) {
        uVar6 = uVar10 + 0x1f;
      }
      if ((*(uint *)(&(pFVar3->EmptyChannels).AllocatorInstance)[(int)uVar6 >> 5].InlineData[0].Pad
          & uVar12) == 0) {
        iVar11 = (uVar9 - iVar11) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&param_3->Bits,false,iVar11);
        }
        if (((param_3->Bits).NumBits <= (int)uVar9) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar1 = (param_3->Bits).AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      else if ((int)uVar9 < iVar11) {
        pTVar1 = (param_3->Bits).AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & ~(1 << ((byte)uVar2 & 0x1f));
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 4;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      iVar11 = param_2->ArrayNum;
    } while ((int)uVar10 < iVar11);
  }
  UE::MovieScene::FComponentMask::Set
            (param_3,(FComponentTypeID)(this->PropertyDefinition->PropertyType).Value);
  if (this->PropertyInfo->bWantsRestoreState == 0) {
    pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
    uVar2 = (pFVar8->Tags).RestoreState.Value;
    if ((int)(uint)uVar2 < (param_3->Bits).NumBits) {
      pTVar1 = (param_3->Bits).AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & ~(1 << ((byte)uVar2 & 0x1f));
    }
    return;
  }
  pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
  UE::MovieScene::FComponentMask::Set(param_3,(FComponentTypeID)(pFVar8->Tags).RestoreState.Value);
  return;
}

