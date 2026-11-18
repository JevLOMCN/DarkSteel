// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 7

// FCollectionClothSeamConstFacade @ 14db3ae50

FCollectionClothSeamConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamConstFacade::FCollectionClothSeamConstFacade
          (FCollectionClothSeamConstFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCollectionClothSeamConstFacade *pFVar5;
  
  this->_padding_ = (longlong)&___7FCollectionClothSeamConstFacade_ClothAsset_Chaos_UE__6B_;
  (this->ClothCollection).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ClothCollection).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->SeamIndex = param_2;
  bVar3 = FConstClothCollection::IsValid(param_1->Object,None);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClothCollection->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                         ,0x28a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FCollectionClothSeamConstFacade *)(*pcVar2)();
    return pFVar5;
  }
  if ((-1 < param_2) &&
     (iVar4 = FManagedArrayCollection::NumElements
                        ((param_1->Object->ManagedArrayCollection).Object,
                         ClothCollectionGroup::Seams), param_2 < iVar4)) {
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("SeamIndex >= 0 && SeamIndex < ClothCollection->GetNumElements(ClothCollectionGroup::Seams)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                     ,0x28b,L"");
  if (!bVar3) {
    return this;
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FCollectionClothSeamConstFacade *)(*pcVar2)();
  return pFVar5;
}

// ~FCollectionClothSeamConstFacade @ 14db3bb70

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamConstFacade::~FCollectionClothSeamConstFacade
          (FCollectionClothSeamConstFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  return;
}

// GetNumSeamStitches @ 14db582d0

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamConstFacade::GetNumSeamStitches
          (FCollectionClothSeamConstFacade *this)

{
  FConstClothCollection *this_00;
  int iVar1;
  
  this_00 = (this->ClothCollection).Object;
  iVar1 = FConstClothCollection::GetNumElements
                    (this_00,this_00->SeamStitchStart,this_00->SeamStitchEnd,this->SeamIndex);
  return iVar1;
}

// GetSeamStitch2DEndIndices @ 14db5c4f0

TArrayView<UE::Math::TIntVector2<int>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamConstFacade::GetSeamStitch2DEndIndices
          (FCollectionClothSeamConstFacade *this,
          TArrayView<UE::Math::TIntVector2<int>_const_,int> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FConstClothCollection *pFVar4;
  TManagedArray<int> *pTVar5;
  TManagedArray<int> *pTVar6;
  TManagedArray<UE::Math::TIntVector2<int>_> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TArrayView<UE::Math::TIntVector2<int>_const_,int> *pTVar11;
  
  pFVar4 = (this->ClothCollection).Object;
  uVar1 = this->SeamIndex;
  pTVar5 = pFVar4->SeamStitchStart;
  if (((pTVar5 != (TManagedArray<int> *)0x0) &&
      (pTVar6 = pFVar4->SeamStitchEnd, pTVar6 != (TManagedArray<int> *)0x0)) &&
     (pTVar7 = pFVar4->SeamStitch2DEndIndices,
     pTVar7 != (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0)) {
    uVar10 = 0;
    if ((int)uVar1 < *(int *)&pTVar5->field_0x18) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<UE::Math::TIntVector2<int>_const_,int> *)(*pcVar8)();
      return pTVar11;
    }
    iVar2 = *(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar1 * 4);
    uVar10 = 0;
    if ((int)uVar1 < *(int *)&pTVar6->field_0x18) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<UE::Math::TIntVector2<int>_const_,int> *)(*pcVar8)();
      return pTVar11;
    }
    iVar3 = *(int *)(*(longlong *)&pTVar6->field_0x10 + (longlong)(int)uVar1 * 4);
    if (iVar2 == -1) {
      if (iVar3 == -1) goto LAB_14db5c63a;
    }
    else if (iVar3 != -1) {
      TArrayView<UE::Math::TIntVector2<int>_const_,int>::
      TArrayView<UE::Math::TIntVector2<int>_const_,int><UE::Math::TIntVector2<int>_const_>
                (__return_storage_ptr__,
                 (TIntVector2<int> *)(*(longlong *)&pTVar7->field_0x10 + (longlong)iVar2 * 8),
                 (iVar3 - iVar2) + 1);
      return __return_storage_ptr__;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x23d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<UE::Math::TIntVector2<int>_const_,int> *)(*pcVar8)();
      return pTVar11;
    }
  }
LAB_14db5c63a:
  __return_storage_ptr__->DataPtr = (TIntVector2<int> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetSeamStitch3DIndex @ 14db5c8a0

TArrayView<int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamConstFacade::GetSeamStitch3DIndex
          (FCollectionClothSeamConstFacade *this,TArrayView<int_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<int>
            (__return_storage_ptr__,pFVar1->SeamStitch3DIndex,pFVar1->SeamStitchStart,
             pFVar1->SeamStitchEnd,this->SeamIndex);
  return __return_storage_ptr__;
}

// GetSeamStitchesOffset @ 14db5cb60

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamConstFacade::GetSeamStitchesOffset
          (FCollectionClothSeamConstFacade *this)

{
  int iVar1;
  
  iVar1 = FConstClothCollection::GetElementsOffset
                    (((this->ClothCollection).Object)->SeamStitchStart,0,this->SeamIndex);
  return iVar1;
}

// ValidateSeam @ 14db75650

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamConstFacade::ValidateSeam
          (FCollectionClothSeamConstFacade *this)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FConstClothCollection *pFVar3;
  FConstClothCollection *pFVar4;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar5;
  TManagedArray<int> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int local_res10;
  longlong local_res20;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  TArrayView<UE::Math::TIntVector2<int>_const_,int> local_60;
  TArrayView<int_const_,int> local_50;
  
  if (bEnableSeamChecks) {
    pTVar2 = (this->ClothCollection).SharedReferenceCount.ReferenceController;
    pFVar3 = (this->ClothCollection).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    GetSeamStitch2DEndIndices(this,&local_60);
    pFVar4 = (this->ClothCollection).Object;
    FConstClothCollection::GetElements<int>
              (&local_50,pFVar4->SeamStitch3DIndex,pFVar4->SeamStitchStart,pFVar4->SeamStitchEnd,
               this->SeamIndex);
    pTVar5 = pFVar3->SimVertex2DLookup;
    uVar18 = 0;
    iVar9 = 0;
    if (pTVar5 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      local_res20 = 0;
    }
    else {
      iVar9 = (**(code **)(*(longlong *)pTVar5 + 0x60))(pTVar5);
      local_res20 = *(longlong *)&pTVar5->field_0x10;
      if ((iVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pTVar5 = pFVar3->SeamStitchLookup;
    if (pTVar5 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      local_70 = 0;
      local_res10 = 0;
    }
    else {
      local_res10 = (**(code **)(*(longlong *)pTVar5 + 0x60))(pTVar5);
      local_70 = *(longlong *)&pTVar5->field_0x10;
      if ((local_res10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pTVar6 = pFVar3->SimVertex3DLookup;
    if (pTVar6 == (TManagedArray<int> *)0x0) {
      local_88 = 0;
      iVar10 = 0;
    }
    else {
      iVar10 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar11 = FConstClothCollection::GetElementsOffset
                       (((this->ClothCollection).Object)->SeamStitchStart,0,this->SeamIndex);
    pFVar3 = (this->ClothCollection).Object;
    iVar12 = FConstClothCollection::GetNumElements
                       (pFVar3,pFVar3->SeamStitchStart,pFVar3->SeamStitchEnd,this->SeamIndex);
    if (0 < iVar12) {
      lVar19 = 0;
      local_78 = 0;
      local_80 = 0;
      do {
        uVar17 = ~uVar18 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar18 < local_60.ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)((longlong)&(local_60.DataPtr)->field0_0x0 + local_78) != -1) {
          uVar13 = 0;
          if ((int)uVar18 < local_60.ArrayNum) {
            uVar13 = uVar17;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (local_60.DataPtr[lVar19].field0_0x0._s_0.Y != -1) {
            uVar13 = 0;
            if ((int)uVar18 < local_50.ArrayNum) {
              uVar13 = uVar17;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(int *)(local_80 + (longlong)local_50.DataPtr) != -1) {
              uVar13 = 0;
              if ((int)uVar18 < local_50.ArrayNum) {
                uVar13 = uVar17;
              }
              if ((uVar13 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar13 = local_50.DataPtr[lVar19];
              uVar14 = 0;
              if ((int)uVar13 < local_res10) {
                uVar14 = ~uVar13 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              piVar15 = *(int **)(local_70 + (longlong)(int)uVar13 * 0x10);
              piVar1 = piVar15 + *(int *)(local_70 + 8 + (longlong)(int)uVar13 * 0x10);
              if (piVar15 != piVar1) {
                do {
                  if (*piVar15 == iVar11 + uVar18) goto LAB_14db75a2a;
                  piVar15 = piVar15 + 1;
                } while (piVar15 != piVar1);
              }
              bVar8 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<2100091067595489914>,true,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                 ,0x27a,
                                 "StitchLookup[Index3D[StitchIndex]].Contains(StitchOffset + StitchIndex)"
                                );
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
LAB_14db75a2a:
              uVar13 = 0;
              if ((int)uVar18 < local_50.ArrayNum) {
                uVar13 = uVar17;
              }
              if ((uVar13 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar13 = local_50.DataPtr[lVar19];
              uVar14 = 0;
              if ((int)uVar13 < iVar9) {
                uVar14 = ~uVar13 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              puVar16 = (undefined8 *)((longlong)(int)uVar13 * 0x10 + local_res20);
              uVar13 = 0;
              if ((int)uVar18 < local_60.ArrayNum) {
                uVar13 = uVar17;
              }
              if ((uVar13 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              piVar15 = (int *)*puVar16;
              piVar1 = piVar15 + *(int *)(puVar16 + 1);
              if (piVar15 != piVar1) {
                do {
                  if (*piVar15 == local_60.DataPtr[lVar19].field0_0x0._s_0.X) goto LAB_14db75b5d;
                  piVar15 = piVar15 + 1;
                } while (piVar15 != piVar1);
              }
              bVar8 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<2100091067595489915>,true,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                 ,0x27b,
                                 "Lookup2D[Index3D[StitchIndex]].Contains(Ends[StitchIndex][0])");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
LAB_14db75b5d:
              uVar13 = 0;
              if ((int)uVar18 < local_50.ArrayNum) {
                uVar13 = uVar17;
              }
              if ((uVar13 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar13 = local_50.DataPtr[lVar19];
              uVar14 = 0;
              if ((int)uVar13 < iVar9) {
                uVar14 = ~uVar13 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              puVar16 = (undefined8 *)((longlong)(int)uVar13 * 0x10 + local_res20);
              uVar13 = 0;
              if ((int)uVar18 < local_60.ArrayNum) {
                uVar13 = uVar17;
              }
              if ((uVar13 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              piVar15 = (int *)*puVar16;
              piVar1 = piVar15 + *(int *)(puVar16 + 1);
              if (piVar15 != piVar1) {
                do {
                  if (*piVar15 == local_60.DataPtr[lVar19].field0_0x0._s_0.Y) goto LAB_14db75c8b;
                  piVar15 = piVar15 + 1;
                } while (piVar15 != piVar1);
              }
              bVar8 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<2100091067595489916>,true,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                 ,0x27c,
                                 "Lookup2D[Index3D[StitchIndex]].Contains(Ends[StitchIndex][1])");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
LAB_14db75c8b:
              uVar13 = 0;
              if ((int)uVar18 < local_60.ArrayNum) {
                uVar13 = uVar17;
              }
              if ((uVar13 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar13 = local_60.DataPtr[lVar19].field0_0x0._s_0.X;
              uVar14 = 0;
              if ((int)uVar13 < iVar10) {
                uVar14 = ~uVar13 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar14 = 0;
              if ((int)uVar18 < local_50.ArrayNum) {
                uVar14 = uVar17;
              }
              if ((uVar14 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if ((*(int *)(local_88 + (longlong)(int)uVar13 * 4) != local_50.DataPtr[lVar19]) &&
                 (bVar8 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<2100091067595489917>,true,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                     ,0x27d,"Lookup3D[Ends[StitchIndex][0]] == Index3D[StitchIndex]"
                                    ), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar13 = 0;
              if ((int)uVar18 < local_60.ArrayNum) {
                uVar13 = uVar17;
              }
              if ((uVar13 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar13 = local_60.DataPtr[lVar19].field0_0x0._s_0.Y;
              uVar14 = 0;
              if ((int)uVar13 < iVar10) {
                uVar14 = ~uVar13 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar14 = 0;
              if ((int)uVar18 < local_50.ArrayNum) {
                uVar14 = uVar17;
              }
              if ((uVar14 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if ((*(int *)(local_88 + (longlong)(int)uVar13 * 4) != local_50.DataPtr[lVar19]) &&
                 (bVar8 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<2100091067595489918>,true,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                     ,0x27e,"Lookup3D[Ends[StitchIndex][1]] == Index3D[StitchIndex]"
                                    ), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
          }
        }
        pFVar3 = (this->ClothCollection).Object;
        uVar18 = uVar18 + 1;
        lVar19 = lVar19 + 1;
        local_78 = local_78 + 8;
        local_80 = local_80 + 4;
        iVar12 = FConstClothCollection::GetNumElements
                           (pFVar3,pFVar3->SeamStitchStart,pFVar3->SeamStitchEnd,this->SeamIndex);
      } while ((int)uVar18 < iVar12);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

