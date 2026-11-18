// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 11

// FCollectionClothSeamFacade @ 14db3af20

FCollectionClothSeamFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamFacade::FCollectionClothSeamFacade
          (FCollectionClothSeamFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = (FConstClothCollection *)param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FCollectionClothSeamConstFacade::FCollectionClothSeamConstFacade
            ((FCollectionClothSeamConstFacade *)this,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)this = &___7FCollectionClothSeamFacade_ClothAsset_Chaos_UE__6B_;
  return this;
}

// ~FCollectionClothSeamFacade @ 14db3bb80

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamFacade::~FCollectionClothSeamFacade
          (FCollectionClothSeamFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  return;
}

// CleanupAndCompact @ 14db4af90

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamFacade::CleanupAndCompact
          (FCollectionClothSeamFacade *this)

{
  FNewStitches *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  FConstClothCollection *pFVar5;
  TIntVector2<int> *pTVar6;
  TIntVector2<int>_u_0 TVar7;
  FClothCollection *this_00;
  TManagedArray<int> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  TIntVector2<int>_u_0 *pTVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *pTVar19;
  int *piVar20;
  TArrayView<int,int> *pTVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  uint uVar25;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_01;
  ForAnyElementType FVar26;
  longlong lVar27;
  uint uVar28;
  int iVar29;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar30;
  FScriptContainerElement *pFVar31;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint uVar35;
  ulonglong uVar36;
  TIntVector2<int>_u_0 *pTVar37;
  ulonglong uVar38;
  bool local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_1e8;
  uint local_1e4;
  TArray<int,TSizedDefaultAllocator<32>_> local_1e0;
  undefined1 local_1d0 [8];
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  local_1c8;
  uint local_1b8;
  TArrayView<UE::Math::TIntVector2<int>,int> local_1a8;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  TArrayView<int,int> local_188;
  ForAnyElementType local_178;
  undefined8 local_170;
  uint local_168;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_148;
  ulonglong local_138;
  longlong local_130;
  TIntVector2<int>_u_0 *local_128;
  FNewStitches *local_120;
  undefined **local_118;
  longlong local_110;
  TReferenceControllerBase<1> *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_100;
  int local_e0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_d8;
  TIntVector2<int>_u_0 *local_d0;
  FNewStitches *local_c8;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> local_c0 [2];
  TArrayView<int,int> local_a0;
  undefined8 local_88;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_80;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar34 = *(longlong *)&this->field_0x8;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_110 = lVar34;
  local_108 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_118 = &___7FCollectionClothFacade_ClothAsset_Chaos_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar27 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  plVar4 = *(longlong **)(lVar27 + 0xb8);
  if (plVar4 == (longlong *)0x0) {
    local_1a8.DataPtr = (TIntVector2<int> *)0x0;
    local_1a8.ArrayNum = 0;
  }
  else {
    local_1a8.ArrayNum = (**(code **)(*plVar4 + 0x60))(plVar4);
    local_1a8.DataPtr = (TIntVector2<int> *)plVar4[2];
    if ((local_1a8.ArrayNum < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  GetSeamStitch3DIndex(this,&local_188);
  plVar4 = *(longlong **)(lVar34 + 0x180);
  if (plVar4 == (longlong *)0x0) {
    uVar13 = 0;
    local_158 = 0;
    local_1b8 = 0;
  }
  else {
    uVar13 = (**(code **)(*plVar4 + 0x60))(plVar4);
    local_158 = plVar4[2];
    local_1b8 = uVar13;
    if (((int)uVar13 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (((*(longlong **)(lVar34 + 0x140) != (longlong *)0x0) &&
      (iVar14 = (**(code **)(**(longlong **)(lVar34 + 0x140) + 0x60))(), iVar14 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FCollectionClothFacade::GetSeamStitchLookupPrivate
            ((FCollectionClothFacade *)&local_118,&local_148);
  local_1e4 = FConstClothCollection::GetElementsOffset
                        (*(TManagedArray<int> **)(*(longlong *)&this->field_0x8 + 0xa8),0,
                         *(int *)&this->field_0x18);
  uVar33 = (ulonglong)(int)local_1e4;
  uVar35 = 0;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  local_178.Data = (FScriptContainerElement *)0x0;
  pFVar5 = *(FConstClothCollection **)&this->field_0x8;
  local_170 = 0;
  iVar14 = FConstClothCollection::GetNumElements
                     (pFVar5,pFVar5->SeamStitchStart,pFVar5->SeamStitchEnd,*(int *)&this->field_0x18
                     );
  if (0 < iVar14) {
    uVar36 = 0;
    local_160 = 0;
    local_150 = uVar33;
    do {
      uVar22 = local_150;
      uVar25 = ~uVar35 >> 0x1f;
      uVar28 = 0;
      if ((int)uVar35 < local_188.ArrayNum) {
        uVar28 = uVar25;
      }
      if ((uVar28 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar28 = (int)uVar33 + uVar35;
      if (local_188.DataPtr[uVar36] == -1) {
        local_198 = uVar28;
        if (((local_1e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_198) &&
            ((FScriptContainerElement *)&local_198 <
             local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 4)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar14 = local_1e0.ArrayNum;
        if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
          iVar14 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
        }
        local_1e0.ArrayNum = iVar14 + 1;
        *(uint *)(local_1e0.AllocatorInstance.Data + (longlong)iVar14 * 4) = local_198;
      }
      else {
        uVar15 = 0;
        if ((int)uVar28 < local_1a8.ArrayNum) {
          uVar15 = ~uVar28 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar6 = local_1a8.DataPtr + uVar22 + uVar36;
        if ((local_1a8.DataPtr[uVar22 + uVar36].field0_0x0._s_0.X == -1) ||
           ((pTVar6->field0_0x0)._s_0.Y == -1)) {
          local_res10[0] = false;
          uVar15 = 0;
          if ((int)uVar35 < local_188.ArrayNum) {
            uVar15 = uVar25;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar15 = local_188.DataPtr[uVar36];
          uVar16 = 0;
          if ((int)uVar15 < (int)uVar13) {
            uVar16 = ~uVar15 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar33 = 0;
          pTVar30 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                    ((longlong)(int)uVar15 * 0x10 + local_158);
          uVar13 = 0;
          if ((int)uVar35 < local_188.ArrayNum) {
            uVar13 = uVar25;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar13 = local_188.DataPtr[uVar36];
          uVar15 = 0;
          uVar25 = uVar15;
          if ((int)uVar13 < local_148.ArrayNum) {
            uVar25 = ~uVar13 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          ClothAsset::Private::BuildStitchGroupsForVertex3D
                    (&local_1c8,local_148.DataPtr + (int)uVar13,pTVar30,&local_1a8,uVar28,
                     local_res10);
          if (local_1c8.ArrayNum < 2) {
            local_194 = uVar28;
            if (((local_1e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_194) &&
                ((FScriptContainerElement *)&local_194 <
                 local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 4)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar14 = local_1e0.ArrayNum;
            if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
              iVar14 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
            }
            local_1e0.ArrayNum = iVar14 + 1;
            *(uint *)(local_1e0.AllocatorInstance.Data + (longlong)iVar14 * 4) = local_194;
            DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                       local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
            if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                local_1c8.AllocatorInstance.Data !=
                (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
              FMemory::Free(local_1c8.AllocatorInstance.Data);
            }
          }
          else {
            iVar14 = (pTVar6->field0_0x0)._s_0.Y;
            if (iVar14 != -1) {
              (pTVar6->field0_0x0)._s_0.X = iVar14;
              (pTVar6->field0_0x0)._s_0.Y = -1;
            }
            if ((pTVar6->field0_0x0)._s_0.X == -1) {
              if ((local_1c8.ArrayNum < 1) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              FVar26.Data = local_1c8.AllocatorInstance.Data;
              local_100._padding_._0_4_ = 0;
              local_100._padding_._4_4_ = 1;
              local_100.UnvisitedBitMask = 0xffffffff;
              local_100.Array =
                   (TBitArray<FDefaultBitArrayAllocator> *)(local_1c8.AllocatorInstance.Data + 0x10)
              ;
              local_100.CurrentBitIndex = 0;
              local_100.BaseBitIndex = 0;
              if (*(int *)(local_1c8.AllocatorInstance.Data + 0x28) != 0) {
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_100);
              }
              local_88 = CONCAT44(local_100._padding_._4_4_,(undefined4)local_100._padding_);
              pTStack_80 = local_100.Array;
              (pTVar6->field0_0x0)._s_0.X =
                   *(int *)(*(longlong *)FVar26.Data + (longlong)local_100.CurrentBitIndex * 0xc);
              iVar14 = local_1c8.ArrayNum;
            }
            else {
              uVar36 = uVar33;
              uVar13 = 0xffffffff;
              iVar14 = local_1c8.ArrayNum;
              if (0 < local_1c8.ArrayNum) {
                do {
                  uVar28 = (uint)uVar33;
                  uVar13 = uVar15;
                  if ((int)uVar28 < iVar14) {
                    uVar13 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), iVar14 = local_1c8.ArrayNum, bVar12)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  uVar25 = (pTVar6->field0_0x0)._s_0.X;
                  pFVar31 = local_1c8.AllocatorInstance.Data + uVar36;
                  if (*(int *)(pFVar31 + 8) != *(int *)(pFVar31 + 0x34)) {
                    pFVar23 = pFVar31 + 0x38;
                    if (*(FScriptContainerElement **)(pFVar31 + 0x40) !=
                        (FScriptContainerElement *)0x0) {
                      pFVar23 = *(FScriptContainerElement **)(pFVar31 + 0x40);
                    }
                    iVar29 = *(int *)(pFVar23 +
                                     (ulonglong)(*(int *)(pFVar31 + 0x48) - 1U & uVar25) * 4);
                    if (iVar29 != -1) {
                      do {
                        uVar13 = uVar28;
                        if (*(uint *)(*(longlong *)pFVar31 + (longlong)iVar29 * 0xc) == uVar25)
                        goto LAB_14db4b699;
                        iVar29 = *(int *)(*(longlong *)pFVar31 + 4 + (longlong)iVar29 * 0xc);
                      } while (iVar29 != -1);
                    }
                  }
                  uVar33 = (ulonglong)(uVar28 + 1);
                  uVar36 = uVar36 + 0x50;
                  uVar13 = 0xffffffff;
                } while ((int)(uVar28 + 1) < iVar14);
              }
LAB_14db4b699:
              uVar15 = uVar13;
              if ((uVar15 == 0xffffffff) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("GroupIndex0 != INDEX_NONE",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                      ,999,L""), iVar14 = local_1c8.ArrayNum, bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            uVar33 = (ulonglong)(uVar15 == 0);
            uVar13 = (uint)(uVar15 == 0);
            if ((iVar14 <= (int)uVar13) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar14 = local_1c8.ArrayNum, bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar32 = 0;
            iVar18 = 0;
            pFVar31 = local_1c8.AllocatorInstance.Data + uVar33 * 0x50;
            iVar29 = *(int *)(pFVar31 + 0x28);
            iVar17 = 0;
            if (iVar29 != 0) {
              pFVar23 = pFVar31 + 0x10;
              if (*(FScriptContainerElement **)(pFVar31 + 0x20) != (FScriptContainerElement *)0x0) {
                pFVar23 = *(FScriptContainerElement **)(pFVar31 + 0x20);
              }
              uVar28 = *(uint *)pFVar23;
              while (uVar28 == 0) {
                lVar34 = (longlong)iVar32;
                iVar18 = iVar18 + 0x20;
                iVar32 = iVar32 + 1;
                iVar17 = iVar29;
                if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar32)
                goto LAB_14db4b83c;
                uVar28 = *(uint *)(pFVar23 + (lVar34 + 1) * 4);
              }
              uVar36 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
              lVar34 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                }
              }
              local_e0 = (int)lVar34;
              iVar17 = iVar18 + -1 + local_e0;
              if (iVar29 < iVar17) {
                iVar17 = iVar29;
              }
            }
LAB_14db4b83c:
            (pTVar6->field0_0x0)._s_0.Y =
                 *(int *)(*(longlong *)&pFVar31->field_0x0 + (longlong)iVar17 * 0xc);
            if ((2 < iVar14) && (local_res10[0] == false)) {
              uVar28 = 0;
              if ((int)uVar15 < iVar14) {
                uVar28 = ~uVar15 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , iVar14 = local_1c8.ArrayNum, bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              this_01 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                        (local_1c8.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x50);
              if ((iVar14 <= (int)uVar13) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                        (this_01,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                                 (local_1c8.AllocatorInstance.Data + uVar33 * 0x50));
              if ((local_1c8.ArrayNum <= (int)uVar13) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
              ::RemoveAtSwapImpl(&local_1c8,uVar13);
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x50,8,&local_1c8.AllocatorInstance,local_1c8.ArrayNum,&local_1c8.ArrayMax)
              ;
              pTVar19 = ClothAsset::Private::GenerateRemainderStitchesAfterCleanup
                                  (local_c0,&local_1c8);
              piVar20 = TArrayView<int,int>::operator[](&local_188,uVar35);
              iVar14 = (int)local_170;
              if ((int)local_170 == local_170._4_4_) {
                iVar14 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&local_178,(int *)((longlong)&local_170 + 4));
              }
              local_170 = CONCAT44(local_170._4_4_,iVar14 + 1);
              pFVar31 = local_178.Data + (longlong)iVar14 * 0x18;
              *(int *)&pFVar31->field_0x0 = *piVar20;
              *(undefined8 *)(pFVar31 + 8) = 0;
              *(FScriptContainerElement **)(pFVar31 + 8) = (pTVar19->AllocatorInstance).Data;
              (pTVar19->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar31 + 0x10) = pTVar19->ArrayNum;
              *(int *)(pFVar31 + 0x14) = pTVar19->ArrayMax;
              pTVar19->ArrayNum = 0;
              pTVar19->ArrayMax = 0;
              iVar14 = local_1c8.ArrayNum;
              if (local_c0[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0[0].AllocatorInstance.Data);
                iVar14 = local_1c8.ArrayNum;
              }
            }
            DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                       local_1c8.AllocatorInstance.Data,iVar14);
            uVar36 = local_160;
            if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                local_1c8.AllocatorInstance.Data !=
                (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
              FMemory::Free(local_1c8.AllocatorInstance.Data);
              uVar36 = local_160;
            }
          }
        }
        uVar33 = (ulonglong)local_1e4;
      }
      uVar36 = uVar36 + 1;
      uVar35 = uVar35 + 1;
      pFVar5 = *(FConstClothCollection **)&this->field_0x8;
      local_160 = uVar36;
      iVar14 = FConstClothCollection::GetNumElements
                         (pFVar5,pFVar5->SeamStitchStart,pFVar5->SeamStitchEnd,
                          *(int *)&this->field_0x18);
      uVar13 = local_1b8;
    } while ((int)uVar35 < iVar14);
  }
  iVar14 = (int)local_170;
  uVar36 = (ulonglong)(int)local_170;
  iVar29 = 0;
  pFVar1 = (FNewStitches *)(local_178.Data + uVar36 * 0x18);
  FVar26.Data = local_178.Data;
  while( true ) {
    if ((int)uVar36 != iVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<`UE::Chaos::ClothAsset::FCollectionClothSeamFacade::CleanupAndCompact'::__l2::FNewStitches,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      uVar36 = local_170 & 0xffffffff;
    }
    if ((FNewStitches *)FVar26.Data == pFVar1) break;
    iVar29 = iVar29 + (((FNewStitches *)FVar26.Data)->StitchEnds).ArrayNum;
    FVar26.Data = FVar26.Data + 0x18;
  }
  pFVar5 = *(FConstClothCollection **)&this->field_0x8;
  local_1b8 = FConstClothCollection::GetNumElements
                        (pFVar5,pFVar5->SeamStitchStart,pFVar5->SeamStitchEnd,
                         *(int *)&this->field_0x18);
  uVar36 = (ulonglong)(int)local_1b8;
  if (local_1e0.ArrayNum < iVar29) {
    SetNumSeamStitches(this,(local_1b8 - local_1e0.ArrayNum) + iVar29);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    lVar34 = *(longlong *)&this->field_0x8;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    plVar4 = *(longlong **)(lVar34 + 0xb8);
    if (plVar4 == (longlong *)0x0) {
      local_1a8.DataPtr = (TIntVector2<int> *)0x0;
      local_1a8.ArrayNum = 0;
      pTVar6 = local_1a8.DataPtr;
      iVar14 = local_1a8.ArrayNum;
    }
    else {
      iVar14 = (**(code **)(*plVar4 + 0x60))(plVar4);
      pTVar6 = (TIntVector2<int> *)plVar4[2];
      if ((iVar14 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    local_1a8.ArrayNum = iVar14;
    local_1a8.DataPtr = pTVar6;
    iVar14 = local_1a8.ArrayNum;
    pTVar6 = local_1a8.DataPtr;
    local_1a8._12_4_ = local_c0[1].ArrayMax;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar21 = GetSeamStitch3DIndex(this,&local_a0);
    local_188.DataPtr = pTVar21->DataPtr;
    local_188._12_4_ = SUB84((ulonglong)*(undefined8 *)&pTVar21->ArrayNum >> 0x20,0);
    local_188.ArrayNum = (int)*(undefined8 *)&pTVar21->ArrayNum;
    local_1a8.DataPtr = pTVar6;
    local_1a8.ArrayNum = iVar14;
  }
  uVar24 = (ulonglong)(int)local_170;
  local_150 = (ulonglong)(int)uVar33;
  local_160 = CONCAT44(local_160._4_4_,(int)local_170);
  local_c8 = (FNewStitches *)(local_178.Data + uVar24 * 0x18);
  FVar26.Data = local_178.Data;
  uVar22 = uVar24;
  uVar38 = uVar36;
  iVar14 = local_1e0.ArrayNum;
  local_138 = uVar36;
  do {
    pFVar1 = local_c8;
    local_120 = (FNewStitches *)FVar26.Data;
    if ((int)uVar24 != (int)uVar22) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<`UE::Chaos::ClothAsset::FCollectionClothSeamFacade::CleanupAndCompact'::__l2::FNewStitches,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      iVar14 = local_1e0.ArrayNum;
    }
    if ((FNewStitches *)FVar26.Data == pFVar1) {
      pFVar5 = *(FConstClothCollection **)&this->field_0x8;
      iVar14 = FConstClothCollection::GetNumElements
                         (pFVar5,pFVar5->SeamStitchStart,pFVar5->SeamStitchEnd,
                          *(int *)&this->field_0x18);
      if (((int)uVar38 != iVar14) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("NewStitchIndex == GetNumSeamStitches()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                              ,0x421,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (local_1e0.ArrayNum != 0) {
        this_00 = *(FClothCollection **)&this->field_0x8;
        pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
        iVar14 = *(int *)&this->field_0x18;
        lVar34 = *(longlong *)&this->field_0x8;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        pTVar8 = *(TManagedArray<int> **)(lVar34 + 0xb0);
        lVar34 = *(longlong *)&this->field_0x8;
        pTVar9 = *(TReferenceControllerBase<1> **)&this->field_0x10;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        FClothCollection::RemoveElements
                  (this_00,&ClothCollectionGroup::SeamStitches,&local_1e0,
                   *(TManagedArray<int> **)(lVar34 + 0xa8),pTVar8,iVar14);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      DestructItems<_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::CleanupAndCompact_::__l2::FNewStitches,int>
                ((FNewStitches *)local_178.Data,(int)local_170);
      if ((FNewStitches *)local_178.Data != (FNewStitches *)0x0) {
        FMemory::Free(local_178.Data);
      }
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_108)
      ;
      return;
    }
    iVar29 = (((FNewStitches *)FVar26.Data)->StitchEnds).ArrayNum;
    uVar22 = (ulonglong)iVar29;
    local_168 = (int)uVar38 + (int)uVar33;
    pTVar37 = (TIntVector2<int>_u_0 *)
              (((FNewStitches *)FVar26.Data)->StitchEnds).AllocatorInstance.Data;
    lVar34 = (local_150 + uVar36) * 8;
    local_158 = CONCAT44(local_158._4_4_,iVar29);
    local_d0 = pTVar37 + uVar22;
    local_130 = lVar34;
    while( true ) {
      pTVar11 = local_d0;
      uVar13 = local_168;
      local_128 = pTVar37;
      if ((((FNewStitches *)FVar26.Data)->StitchEnds).ArrayNum != (int)uVar22) {
        local_1d0[0] = 0;
        `TCheckedPointerIterator<UE::Math::TIntVector2<int>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1d0);
        iVar14 = local_1e0.ArrayNum;
      }
      if (pTVar37 == pTVar11) break;
      if (iVar14 < 1) {
        iVar14 = ((FNewStitches *)FVar26.Data)->Vertex3D;
        uVar28 = (uint)uVar38;
        uVar35 = 0;
        if ((int)uVar28 < local_188.ArrayNum) {
          uVar35 = ~uVar28 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_188.DataPtr[uVar36] = iVar14;
        TVar7 = *pTVar37;
        uVar35 = 0;
        if ((int)uVar13 < local_1a8.ArrayNum) {
          uVar35 = ~uVar13 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(TIntVector2<int>_u_0 *)((longlong)&(local_1a8.DataPtr)->field0_0x0 + lVar34) = TVar7;
        uVar35 = ((FNewStitches *)FVar26.Data)->Vertex3D;
        uVar25 = 0;
        if ((int)uVar35 < local_148.ArrayNum) {
          uVar25 = ~uVar35 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar30 = local_148.DataPtr + (int)uVar35;
        pFVar31 = (pTVar30->AllocatorInstance).Data;
        local_18c = uVar13;
        if (((pFVar31 <= (FScriptContainerElement *)&local_18c) &&
            ((FScriptContainerElement *)&local_18c < pFVar31 + (longlong)pTVar30->ArrayMax * 4)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar14 = pTVar30->ArrayNum;
        if (iVar14 == pTVar30->ArrayMax) {
          iVar14 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar30->AllocatorInstance,&pTVar30->ArrayMax);
        }
        local_1b8 = uVar28 + 1;
        uVar38 = (ulonglong)local_1b8;
        local_168 = uVar13 + 1;
        uVar36 = uVar36 + 1;
        lVar34 = lVar34 + 8;
        pTVar30->ArrayNum = iVar14 + 1;
        uVar13 = local_18c;
        local_138 = uVar36;
        local_130 = lVar34;
      }
      else {
        iVar29 = iVar14 + -1;
        iVar32 = *(int *)(local_1e0.AllocatorInstance.Data + (longlong)iVar29 * 4);
        iVar18 = (iVar14 - iVar29) + -1;
        if (iVar18 != 0) {
          memmove(local_1e0.AllocatorInstance.Data + (longlong)iVar29 * 4,
                  local_1e0.AllocatorInstance.Data + (longlong)iVar29 * 4 + 4,(longlong)iVar18 << 2)
          ;
          iVar14 = local_1e0.ArrayNum;
        }
        local_1e0.ArrayNum = iVar14 + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_1e0.AllocatorInstance,iVar14 + -1,&local_1e0.ArrayMax);
        uVar35 = iVar32 - local_1e4;
        uVar13 = 0;
        if ((int)uVar35 < local_188.ArrayNum) {
          uVar13 = ~uVar35 >> 0x1f;
        }
        local_1e8 = uVar35;
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (local_188.DataPtr[(int)uVar35] != -1) {
          lVar27 = (longlong)(int)local_1e8;
          uVar13 = 0;
          if ((int)local_1e8 < local_188.ArrayNum) {
            uVar13 = ~local_1e8 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar13 = local_188.DataPtr[lVar27];
          uVar35 = 0;
          if ((int)uVar13 < local_148.ArrayNum) {
            uVar35 = ~uVar13 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar30 = local_148.DataPtr + (int)uVar13;
          pFVar31 = (pTVar30->AllocatorInstance).Data;
          local_d8 = pTVar30;
          if (((pFVar31 <= (FScriptContainerElement *)&local_1e8) &&
              ((FScriptContainerElement *)&local_1e8 < pFVar31 + (longlong)pTVar30->ArrayMax * 4))
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar14 = pTVar30->ArrayNum;
          if (iVar14 != 0) {
            pFVar31 = (pTVar30->AllocatorInstance).Data;
            iVar32 = 0;
            lVar34 = 0;
            bVar12 = *(uint *)pFVar31 != local_1e8;
            iVar29 = 0;
            do {
              iVar18 = iVar29;
              do {
                lVar34 = lVar34 + 1;
                iVar18 = iVar18 + 1;
                if (iVar14 <= lVar34) break;
              } while (bVar12 == (*(uint *)(pFVar31 + lVar34 * 4) != local_1e8));
              if (bVar12 != false) {
                if (iVar32 != iVar29) {
                  memmove(pFVar31 + (longlong)iVar32 * 4,pFVar31 + (longlong)iVar29 * 4,
                          (longlong)(iVar18 - iVar29) << 2);
                }
                iVar32 = iVar32 + (iVar18 - iVar29);
              }
              bVar12 = (bool)(bVar12 ^ 1);
              iVar29 = iVar18;
            } while (lVar34 < iVar14);
            uVar38 = (ulonglong)local_1b8;
            local_d8->ArrayNum = iVar32;
            FVar26.Data = (FScriptContainerElement *)local_120;
            lVar34 = local_130;
            uVar36 = local_138;
            pTVar37 = local_128;
          }
        }
        lVar27 = (longlong)(int)local_1e8;
        iVar14 = ((FNewStitches *)FVar26.Data)->Vertex3D;
        uVar13 = 0;
        if ((int)local_1e8 < local_188.ArrayNum) {
          uVar13 = ~local_1e8 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_188.DataPtr[lVar27] = iVar14;
        uVar35 = local_1e8 + local_1e4;
        TVar7 = *pTVar37;
        uVar13 = 0;
        if ((int)uVar35 < local_1a8.ArrayNum) {
          uVar13 = ~uVar35 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_1a8.DataPtr[(int)uVar35].field0_0x0 = TVar7;
        uVar13 = ((FNewStitches *)FVar26.Data)->Vertex3D;
        uVar35 = 0;
        if ((int)uVar13 < local_148.ArrayNum) {
          uVar35 = ~uVar13 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_190 = local_1e4 + local_1e8;
        pTVar30 = local_148.DataPtr + (int)uVar13;
        pFVar31 = (pTVar30->AllocatorInstance).Data;
        if (((pFVar31 <= (FScriptContainerElement *)&local_190) &&
            ((FScriptContainerElement *)&local_190 < pFVar31 + (longlong)pTVar30->ArrayMax * 4)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar14 = pTVar30->ArrayNum;
        if (iVar14 == pTVar30->ArrayMax) {
          iVar14 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar30->AllocatorInstance,&pTVar30->ArrayMax);
        }
        pTVar30->ArrayNum = iVar14 + 1;
        uVar13 = local_190;
      }
      pTVar37 = pTVar37 + 1;
      *(uint *)((pTVar30->AllocatorInstance).Data + (longlong)iVar14 * 4) = uVar13;
      uVar22 = local_158 & 0xffffffff;
      iVar14 = local_1e0.ArrayNum;
    }
    uVar24 = local_170 & 0xffffffff;
    FVar26.Data = FVar26.Data + 0x18;
    uVar22 = local_160 & 0xffffffff;
    uVar33 = (ulonglong)local_1e4;
  } while( true );
}

// GetClothCollection @ 14db57610

TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamFacade::GetClothCollection
          (FCollectionClothSeamFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> *__return_storage_ptr__)

{
  FClothCollection *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = *(FClothCollection **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetSeamStitch2DEndIndices @ 14db5c670

TArrayView<UE::Math::TIntVector2<int>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamFacade::GetSeamStitch2DEndIndices
          (FCollectionClothSeamFacade *this,
          TArrayView<UE::Math::TIntVector2<int>,int> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TArrayView<UE::Math::TIntVector2<int>,int> *pTVar14;
  
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  uVar1 = *(uint *)&this->field_0x18;
  lVar6 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)(lVar6 + 0xb0);
  lVar8 = *(longlong *)&this->field_0x8;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar9 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)(lVar8 + 0xa8);
  lVar10 = *(longlong *)&this->field_0x8;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  lVar10 = *(longlong *)(lVar10 + 0xb8);
  if (((lVar8 != 0) && (lVar6 != 0)) && (lVar10 != 0)) {
    uVar13 = 0;
    if ((int)uVar1 < *(int *)(lVar8 + 0x18)) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<UE::Math::TIntVector2<int>,int> *)(*pcVar11)();
      return pTVar14;
    }
    iVar2 = *(int *)(*(longlong *)(lVar8 + 0x10) + (longlong)(int)uVar1 * 4);
    uVar13 = 0;
    if ((int)uVar1 < *(int *)(lVar6 + 0x18)) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<UE::Math::TIntVector2<int>,int> *)(*pcVar11)();
      return pTVar14;
    }
    iVar3 = *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar1 * 4);
    if (iVar2 == -1) {
      if (iVar3 == -1) goto LAB_14db5c840;
    }
    else if (iVar3 != -1) {
      TArrayView<UE::Math::TIntVector2<int>,int>::
      TArrayView<UE::Math::TIntVector2<int>,int><UE::Math::TIntVector2<int>_>
                (__return_storage_ptr__,
                 (TIntVector2<int> *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar2 * 8),
                 (iVar3 - iVar2) + 1);
      goto LAB_14db5c84f;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Start == End",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                        ,0x24d,
                        L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<UE::Math::TIntVector2<int>,int> *)(*pcVar11)();
      return pTVar14;
    }
  }
LAB_14db5c840:
  __return_storage_ptr__->DataPtr = (TIntVector2<int> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
LAB_14db5c84f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetSeamStitch3DIndex @ 14db5c8e0

TArrayView<int,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamFacade::GetSeamStitch3DIndex
          (FCollectionClothSeamFacade *this,TArrayView<int,int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xb0);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xa8);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<int>
            (__return_storage_ptr__,*(TManagedArray<int> **)(lVar8 + 0xc0),pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// Initialize @ 14db63300

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize
          (FCollectionClothSeamFacade *this,FCollectionClothSeamConstFacade *param_1,int param_2,
          int param_3)

{
  FConstClothCollection *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArrayView<UE::Math::TIntVector2<int>_const_,int> *pTVar7;
  TArrayView<UE::Math::TIntVector2<int>,int> *pTVar8;
  TArrayView<int,int> *pTVar9;
  uint uVar10;
  longlong lVar11;
  int iStackX_14;
  TArrayView<int_const_,int> local_78;
  TArrayView<UE::Math::TIntVector2<int>_const_,int> local_68;
  TArrayView<UE::Math::TIntVector2<int>,int> local_58;
  TArrayView<int,int> local_48;
  
  pFVar1 = (param_1->ClothCollection).Object;
  iVar5 = FConstClothCollection::GetNumElements
                    (pFVar1,pFVar1->SeamStitchStart,pFVar1->SeamStitchEnd,param_1->SeamIndex);
  SetNumSeamStitches(this,iVar5);
  pTVar7 = FCollectionClothSeamConstFacade::GetSeamStitch2DEndIndices(param_1,&local_68);
  pTVar8 = GetSeamStitch2DEndIndices(this,&local_58);
  if ((pTVar8->ArrayNum != pTVar7->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x2a1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar10 = 0;
  if (0 < pTVar8->ArrayNum) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < pTVar7->ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = *(undefined8 *)((longlong)&pTVar7->DataPtr->field0_0x0 + lVar11);
      iStackX_14 = (int)((ulonglong)uVar2 >> 0x20);
      uVar6 = 0;
      if ((int)uVar10 < pTVar8->ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = uVar10 + 1;
      *(ulonglong *)((longlong)&pTVar8->DataPtr->field0_0x0 + lVar11) =
           CONCAT44(iStackX_14 + param_2,(int)uVar2 + param_2);
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < pTVar8->ArrayNum);
  }
  pFVar1 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<int>
            (&local_78,pFVar1->SeamStitch3DIndex,pFVar1->SeamStitchStart,pFVar1->SeamStitchEnd,
             param_1->SeamIndex);
  pTVar9 = GetSeamStitch3DIndex(this,&local_48);
  FConstClothCollection::CopyArrayViewDataAndApplyOffset<int>(pTVar9,&local_78,param_3);
  return;
}

// Initialize @ 14db63510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize
          (FCollectionClothSeamFacade *this,
          TArrayView<UE::Math::TIntVector2<int>_const_,int> *param_1)

{
  TIntVector3<int> *pTVar1;
  TIntVector2<int> *pTVar2;
  FName *pFVar3;
  FConstClothCollection *pFVar4;
  TManagedArray<int> *pTVar5;
  TIntVector2<int>_u_0 TVar6;
  TReferenceControllerBase<1> *pTVar7;
  TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FManagedArrayCollection *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  code *pcVar11;
  <lambda_1> <Var12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  TTuple<int,int> *pTVar17;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar18;
  TArrayView<int,int> *pTVar19;
  TArrayView<UE::Math::TVector<float>,int> *pTVar20;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar21;
  uint *puVar22;
  uint *puVar23;
  TManagedArray<float> *pTVar24;
  int iVar25;
  uint *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  int *piVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  FCollectionClothSeamConstFacade *pFVar32;
  ForAnyElementType FVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  TIntVector2<int>_u_0 *pTVar37;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar38;
  atomic<int> *paVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  uint *puVar42;
  TReferenceControllerBase<1> *pTVar43;
  ForElementType<FSetElementId> FVar44;
  uint *puVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  undefined1 auStackY_408 [32];
  <lambda_1> local_3b8;
  undefined1 local_3b7;
  FIdentityFunctor local_3b6 [2];
  int local_3b4;
  undefined **local_3b0;
  FConstClothCollection *local_3a8;
  TReferenceControllerBase<1> *local_3a0;
  ForAnyElementType local_398;
  undefined8 local_390;
  ForAnyElementType local_388;
  undefined8 local_380;
  TIntVector2<int>_u_0 local_378;
  TArrayView<int,int> local_370;
  int local_360;
  FCollectionClothSeamConstFacade *local_358;
  longlong local_350;
  TArrayView<int,int> local_348;
  TArrayView<float,int> local_338;
  TArray<FName,TSizedDefaultAllocator<32>_> local_328;
  longlong local_318;
  int local_310;
  longlong *local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_300;
  longlong *local_2e0;
  uint uStack_2d8;
  uint uStack_2d4;
  TBitArray<FDefaultBitArrayAllocator> *local_2d0;
  undefined4 uStack_2c8;
  int iStack_2c4;
  uint local_2c0;
  undefined4 uStack_2bc;
  FCollectionClothSimAccessoryMeshConstFacade local_2b0;
  TArrayView<UE::Math::TIntVector2<int>,int> local_290;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_280;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_270;
  TArrayView<UE::Math::TIntVector3<int>,int> local_260;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_248;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_238;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_228;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_218;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_208;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_1f8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_1e8;
  TArrayView<UE::Math::TVector<float>,int> local_1d8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_1c8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_1b8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_1a8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_198;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_188;
  TArrayView<UE::Math::TVector<float>,int> local_178;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_168;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_158;
  TArrayView<int,int> local_148;
  TArrayView<UE::Math::TVector<float>,int> local_138;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_128;
  TArrayView<UE::Math::TVector<float>,int> local_118 [2];
  undefined4 local_ec;
  undefined1 local_e8 [32];
  ForElementType<FSetElementId> local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  uint local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  uint local_a0;
  ForElementType<FSetElementId> local_98;
  undefined8 local_90;
  ForElementType<FSetElementId> local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  ForElementType<FSetElementId> local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_358 = (FCollectionClothSeamConstFacade *)this;
  Reset(this);
  pTVar43 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar4 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar43 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
    LOCK();
    pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3a8 = pFVar4;
  local_3a0 = pTVar43;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
  local_3b0 = &___7FCollectionClothFacade_ClothAsset_Chaos_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
  iVar14 = FManagedArrayCollection::NumElements
                     ((pFVar4->ManagedArrayCollection).Object,ClothCollectionGroup::SimVertices2D);
  uVar31 = param_1->ArrayNum;
  local_380._0_4_ = 0;
  local_388.Data = (FScriptContainerElement *)0x0;
  local_380 = 0;
  if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
  }
  if (0 < (int)uVar31) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar31,&local_388,0,(int *)((longlong)&local_380 + 4));
  }
  pTVar37 = &param_1->DataPtr->field0_0x0;
  pTVar2 = (TIntVector2<int> *)(pTVar37 + (int)uVar31);
  iVar25 = (int)local_380;
  for (; pTVar37 != (TIntVector2<int>_u_0 *)pTVar2; pTVar37 = pTVar37 + 1) {
    local_378 = (TIntVector2<int>_u_0)*(TIntVector2<int>_u_0 *)&pTVar37->_s_0;
    iVar15 = local_378._0_4_;
    if ((((-1 < iVar15) && (-1 < (longlong)local_378)) && (iVar15 < iVar14)) &&
       ((local_378._4_4_ < iVar14 && (iVar15 != local_378._4_4_)))) {
      iVar15 = iVar25;
      if ((local_388.Data <= &local_378) &&
         (local_380._4_4_ = (int)((ulonglong)local_380 >> 0x20), lVar27 = (longlong)local_380._4_4_,
         &local_378 < (TIntVector2<int>_u_0 *)((longlong)local_388.Data + lVar27 * 8))) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar15 = (int)local_380;
      }
      if (iVar15 == local_380._4_4_) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_388,(int *)((longlong)&local_380 + 4));
      }
      iVar25 = iVar15 + 1;
      local_380 = CONCAT44(local_380._4_4_,iVar25);
      ((TIntVector2<int>_u_0 *)(local_388.Data + (longlong)iVar15 * 8))->_s_0 =
           (TIntVector2<int>_u_0_s_0)local_378;
    }
    pFVar4 = local_3a8;
  }
  SetNumSeamStitches(this,iVar25);
  GetSeamStitch2DEndIndices(this,&local_290);
  GetSeamStitch3DIndex(this,&local_370);
  pTVar5 = pFVar4->SimVertex3DLookup;
  if (pTVar5 == (TManagedArray<int> *)0x0) {
    iVar14 = 0;
    lVar27 = 0;
    local_350 = 0;
  }
  else {
    iVar14 = (**(code **)(*(longlong *)pTVar5 + 0x60))(pTVar5);
    lVar27 = *(longlong *)&pTVar5->field_0x10;
    local_350 = lVar27;
    if ((iVar14 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  FVar44 = (ForElementType<FSetElementId>)0x0;
  FConstClothCollection::GetElements<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_218,pFVar4->SimVertex2DLookup);
  local_e8._8_8_ = 0;
  uVar34 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_e8._0_8_ = FVar44;
  local_c8 = FVar44;
  local_c0 = uVar34;
  local_b4 = uVar34;
  local_a8 = FVar44;
  local_a0 = uVar34;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             local_e8,iVar25);
  local_318 = (longlong)iVar25;
  uVar31 = 0;
  local_90 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_98 = FVar44;
  local_78 = FVar44;
  local_70 = uVar34;
  local_64 = uVar34;
  local_58 = FVar44;
  local_50 = uVar34;
  if (0 < iVar25) {
    do {
      uVar35 = ~uVar31 >> 0x1f;
      uVar34 = 0;
      if ((int)uVar31 < (int)local_380) {
        uVar34 = uVar35;
      }
      if ((uVar34 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar34 = *(uint *)(local_388.Data + (longlong)FVar44 * 8 + 4);
      pTVar37 = (TIntVector2<int>_u_0 *)(local_388.Data + (longlong)FVar44 * 8);
      uVar36 = 0;
      if ((int)uVar34 < iVar14) {
        uVar36 = ~uVar34 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_360 = *(int *)(lVar27 + (longlong)(int)uVar34 * 4);
      uVar34 = (pTVar37->_s_0).X;
      uVar36 = 0;
      if ((int)uVar34 < iVar14) {
        uVar36 = ~uVar34 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar25 = *(int *)(lVar27 + (longlong)(int)uVar34 * 4);
      TVar6 = *pTVar37;
      uVar34 = 0;
      if ((int)uVar31 < local_290.ArrayNum) {
        uVar34 = uVar35;
      }
      if ((uVar34 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_290.DataPtr[(longlong)FVar44].field0_0x0 = TVar6;
      uVar34 = 0;
      if ((int)uVar31 < local_370.ArrayNum) {
        uVar34 = uVar35;
      }
      if ((uVar34 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_370.DataPtr[(longlong)FVar44] = iVar25;
      ClothAsset::Private::UpdateWeldingMap
                ((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                 local_e8,(TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                           *)&local_98,iVar25,local_360,&local_218);
      uVar31 = uVar31 + 1;
      FVar44 = (ForElementType<FSetElementId>)((longlong)FVar44 + 1);
      lVar27 = local_350;
    } while ((longlong)FVar44 < local_318);
  }
  lVar27 = local_318;
  pFVar32 = local_358;
  iVar14 = FConstClothCollection::GetElementsOffset
                     (((local_358->ClothCollection).Object)->SeamStitchStart,0,local_358->SeamIndex)
  ;
  FCollectionClothFacade::GetSeamStitchLookupPrivate
            ((FCollectionClothFacade *)&local_3b0,&local_280);
  puVar42 = (uint *)0x0;
  uVar34 = 0;
  puVar45 = puVar42;
  uVar31 = uVar34;
  if (0 < lVar27) {
    do {
      uVar36 = ~uVar31 >> 0x1f;
      uVar35 = uVar34;
      if ((int)uVar31 < local_370.ArrayNum) {
        uVar35 = uVar36;
      }
      if ((uVar35 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar35 = local_370.DataPtr[(longlong)puVar45];
      pTVar17 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Find((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)local_e8,uVar35);
      puVar22 = (uint *)&pTVar17->field_0x4;
      if (pTVar17 == (TTuple<int,int> *)0x0) {
        puVar22 = puVar42;
      }
      if (puVar22 != (uint *)0x0) {
        uVar35 = *puVar22;
      }
      uVar16 = uVar34;
      if ((int)uVar31 < local_370.ArrayNum) {
        uVar16 = uVar36;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_370.DataPtr[(longlong)puVar45] = uVar35;
      uVar35 = 0;
      if ((int)uVar31 < local_370.ArrayNum) {
        uVar35 = uVar36;
      }
      if ((uVar35 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar35 = local_370.DataPtr[(longlong)puVar45];
      uVar36 = 0;
      if ((int)uVar35 < local_280.ArrayNum) {
        uVar36 = ~uVar35 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_3b4 = uVar31 + iVar14;
      pTVar38 = local_280.DataPtr + (int)uVar35;
      pFVar30 = (pTVar38->AllocatorInstance).Data;
      if (((pFVar30 <= (FScriptContainerElement *)&local_3b4) &&
          ((FScriptContainerElement *)&local_3b4 < pFVar30 + (longlong)pTVar38->ArrayMax * 4)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar25 = pTVar38->ArrayNum;
      if (iVar25 == pTVar38->ArrayMax) {
        iVar25 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar38->AllocatorInstance,&pTVar38->ArrayMax);
      }
      pTVar38->ArrayNum = iVar25 + 1;
      puVar45 = (uint *)((longlong)puVar45 + 1);
      *(int *)((pTVar38->AllocatorInstance).Data + (longlong)iVar25 * 4) = local_3b4;
      pFVar32 = local_358;
      uVar31 = uVar31 + 1;
    } while ((longlong)puVar45 < lVar27);
  }
  pTVar43 = local_3a0;
  if (local_e8._8_4_ != local_b4) {
    pTVar18 = FCollectionClothFacade::GetSimVertex2DLookupPrivate
                        ((FCollectionClothFacade *)&local_3b0,&local_188);
    pTVar19 = FCollectionClothFacade::GetSimVertex3DLookupPrivate
                        ((FCollectionClothFacade *)&local_3b0,&local_148);
    ClothAsset::Private::UpdateWeldingLookups
              ((TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                *)&local_98,pTVar19,pTVar18);
    pTVar18 = FCollectionClothFacade::GetSeamStitchLookupPrivate
                        ((FCollectionClothFacade *)&local_3b0,&local_128);
    pTVar43 = (pFVar32->ClothCollection).SharedReferenceCount.ReferenceController;
    if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
    pTVar7 = (pFVar32->ClothCollection).SharedReferenceCount.ReferenceController;
    pFVar4 = (pFVar32->ClothCollection).Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar5 = pFVar4->SeamStitch3DIndex;
    if (pTVar5 == (TManagedArray<int> *)0x0) {
      local_348.DataPtr = (int *)0x0;
      local_348.ArrayNum = 0;
    }
    else {
      local_348.ArrayNum = (**(code **)(*(longlong *)pTVar5 + 0x60))(pTVar5);
      local_348.DataPtr = *(int **)&pTVar5->field_0x10;
      if ((local_348.ArrayNum < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    ClothAsset::Private::UpdateWeldingLookups
              ((TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                *)&local_98,&local_348,pTVar18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
    pTVar20 = FCollectionClothFacade::GetSimPosition3D
                        ((FCollectionClothFacade *)&local_3b0,local_118);
    ClothAsset::Private::WeldByWeightedAverage<UE::Math::TVector<float>_>
              ((TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                *)&local_98,pTVar20);
    pTVar20 = FCollectionClothFacade::GetSimNormal((FCollectionClothFacade *)&local_3b0,&local_1d8);
    ClothAsset::Private::WeldNormals
              ((TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                *)&local_98,pTVar20);
    pTVar21 = FCollectionClothFacade::GetSimBoneWeights
                        ((FCollectionClothFacade *)&local_3b0,&local_1c8);
    local_208.DataPtr = pTVar21->DataPtr;
    local_208.ArrayNum = pTVar21->ArrayNum;
    local_208._12_4_ = *(undefined4 *)&pTVar21->field_0xc;
    pTVar18 = FCollectionClothFacade::GetSimBoneIndices
                        ((FCollectionClothFacade *)&local_3b0,&local_1b8);
    local_1f8.DataPtr = pTVar18->DataPtr;
    local_1f8.ArrayNum = pTVar18->ArrayNum;
    local_1f8._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
    ClothAsset::Private::
    WeldIndexAndFloatArrays<1,12,_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize_::__l2::<lambda_1>_>
              ((TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                *)&local_98,&local_1f8,&local_208,local_3b8);
    pTVar21 = FCollectionClothFacade::GetTetherReferenceLength
                        ((FCollectionClothFacade *)&local_3b0,&local_1a8);
    local_1e8.DataPtr = pTVar21->DataPtr;
    local_1e8.ArrayNum = pTVar21->ArrayNum;
    local_1e8._12_4_ = *(undefined4 *)&pTVar21->field_0xc;
    pTVar18 = FCollectionClothFacade::GetTetherKinematicIndex
                        ((FCollectionClothFacade *)&local_3b0,&local_198);
    local_248.DataPtr = pTVar18->DataPtr;
    local_248.ArrayNum = pTVar18->ArrayNum;
    local_248._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
    ClothAsset::Private::WeldTethers
              ((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               local_e8,(TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                         *)&local_98,&local_248,&local_1e8);
    pFVar4 = local_3a8;
    iVar14 = FManagedArrayCollection::NumElements
                       ((local_3a8->ManagedArrayCollection).Object,
                        ClothCollectionGroup::SimAccessoryMeshes);
    pTVar43 = local_3a0;
    <Var12 = local_3b8;
    if (0 < iVar14) {
      local_270.SharedReferenceCount.ReferenceController = local_3a0;
      local_270.Object = pFVar4;
      puVar45 = puVar42;
      do {
        if (pTVar43 == (TReferenceControllerBase<1> *)0x0) {
          paVar39 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar39 = &pTVar43->SharedReferenceCount;
          LOCK();
          *paVar39 = (atomic<int>)((int)*paVar39 + 1);
          UNLOCK();
          LOCK();
          *paVar39 = (atomic<int>)((int)*paVar39 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43)
        ;
        if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar39 = (atomic<int>)((int)*paVar39 + 1);
          UNLOCK();
        }
        FCollectionClothSimAccessoryMeshConstFacade::FCollectionClothSimAccessoryMeshConstFacade
                  (&local_2b0,&local_270,(int)puVar45);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43)
        ;
        local_2b0._padding_ =
             (longlong)&___7FCollectionClothSimAccessoryMeshFacade_ClothAsset_Chaos_UE__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43)
        ;
        pTVar20 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshPosition3D
                            ((FCollectionClothSimAccessoryMeshFacade *)&local_2b0,&local_138);
        ClothAsset::Private::WeldByWeightedAverage<UE::Math::TVector<float>_>
                  ((TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                    *)&local_98,pTVar20);
        pTVar20 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshNormal
                            ((FCollectionClothSimAccessoryMeshFacade *)&local_2b0,&local_178);
        ClothAsset::Private::WeldNormals
                  ((TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                    *)&local_98,pTVar20);
        pTVar21 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneWeights
                            ((FCollectionClothSimAccessoryMeshFacade *)&local_2b0,&local_168);
        local_238.DataPtr = pTVar21->DataPtr;
        local_238.ArrayNum = pTVar21->ArrayNum;
        local_238._12_4_ = *(undefined4 *)&pTVar21->field_0xc;
        pTVar18 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneIndices
                            ((FCollectionClothSimAccessoryMeshFacade *)&local_2b0,&local_158);
        local_228.DataPtr = pTVar18->DataPtr;
        local_228.ArrayNum = pTVar18->ArrayNum;
        local_228._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
        ClothAsset::Private::
        WeldIndexAndFloatArrays<1,12,_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize_::__l18::<lambda_2>_>
                  ((TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                    *)&local_98,&local_228,&local_238,(<lambda_2>)<Var12);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2b0.ClothCollection.SharedReferenceCount.ReferenceController);
        uVar31 = (int)puVar45 + 1;
        puVar45 = (uint *)(ulonglong)uVar31;
        iVar14 = FManagedArrayCollection::NumElements
                           ((pFVar4->ManagedArrayCollection).Object,
                            ClothCollectionGroup::SimAccessoryMeshes);
      } while ((int)uVar31 < iVar14);
    }
    FCollectionClothFacade::GetSimIndices3D((FCollectionClothFacade *)&local_3b0,&local_260);
    if (local_260.DataPtr != local_260.DataPtr + local_260.ArrayNum) {
      piVar29 = &((local_260.DataPtr)->field0_0x0)._s_0.Z;
      do {
        uVar31 = ((TIntVector3<int>_u_0_s_0 *)(piVar29 + -2))->X;
        pTVar17 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)local_e8,uVar31);
        puVar45 = (uint *)&pTVar17->field_0x4;
        if (pTVar17 == (TTuple<int,int> *)0x0) {
          puVar45 = puVar42;
        }
        if (puVar45 != (uint *)0x0) {
          uVar31 = *puVar45;
        }
        ((TIntVector3<int>_u_0_s_0 *)(piVar29 + -2))->X = uVar31;
        uVar31 = piVar29[-1];
        if (local_e8._8_4_ != local_b4) {
          FVar44 = (ForElementType<FSetElementId>)local_b0;
          if (local_a8 != (ForElementType<FSetElementId>)0x0) {
            FVar44 = local_a8;
          }
          uVar34 = *(uint *)((longlong)FVar44 + (ulonglong)(local_a0 - 1 & uVar31) * 4);
          while (uVar34 != 0xffffffff) {
            puVar45 = (uint *)((longlong)(int)uVar34 * 0x10 + local_e8._0_8_);
            if (*puVar45 == uVar31) {
              puVar22 = puVar45 + 1;
              if (puVar45 == (uint *)0x0) {
                puVar22 = puVar42;
              }
              if (puVar22 != (uint *)0x0) {
                uVar31 = *puVar22;
              }
              break;
            }
            uVar34 = puVar45[2];
          }
        }
        piVar29[-1] = uVar31;
        uVar31 = *piVar29;
        pTVar17 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)local_e8,uVar31);
        puVar45 = (uint *)&pTVar17->field_0x4;
        if (pTVar17 == (TTuple<int,int> *)0x0) {
          puVar45 = puVar42;
        }
        if (puVar45 != (uint *)0x0) {
          uVar31 = *puVar45;
        }
        *piVar29 = uVar31;
        pTVar1 = (TIntVector3<int> *)(piVar29 + 1);
        piVar29 = piVar29 + 3;
      } while (pTVar1 != local_260.DataPtr + local_260.ArrayNum);
    }
    pTVar43 = local_3a0;
    if (local_3a0 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      paVar39 = &local_3a0->SharedReferenceCount;
      LOCK();
      *paVar39 = (atomic<int>)((int)*paVar39 + 1);
      UNLOCK();
      LOCK();
      *paVar39 = (atomic<int>)((int)*paVar39 + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3a0)
      ;
      LOCK();
      *paVar39 = (atomic<int>)((int)*paVar39 + 1);
      UNLOCK();
      LOCK();
      *paVar39 = (atomic<int>)((int)*paVar39 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
    pFVar4 = local_3a8;
    pTVar8 = local_3a8->RenderDeformerSimIndices3D;
    if (pTVar8 == (TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *)
                  0x0) {
      puVar47 = (undefined8 *)0x0;
      iVar14 = 0;
    }
    else {
      iVar14 = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
      puVar47 = *(undefined8 **)&pTVar8->field_0x10;
      if ((iVar14 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
    puVar46 = puVar47 + (longlong)iVar14 * 2;
    if (puVar47 != puVar46) {
      puVar45 = (uint *)0x0;
      do {
        iVar14 = *(int *)(puVar47 + 1);
        puVar22 = (uint *)*puVar47;
        puVar42 = puVar22 + (longlong)iVar14 * 3;
        while( true ) {
          if (*(int *)(puVar47 + 1) != iVar14) {
            local_3b7 = 0;
            `TCheckedPointerIterator<UE::Math::TIntVector3<int>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_3b7);
          }
          if (puVar22 == puVar42) break;
          uVar31 = *puVar22;
          if (local_e8._8_4_ != local_b4) {
            FVar44 = (ForElementType<FSetElementId>)local_b0;
            if (local_a8 != (ForElementType<FSetElementId>)0x0) {
              FVar44 = local_a8;
            }
            uVar34 = *(uint *)((longlong)FVar44 + (ulonglong)(local_a0 - 1 & uVar31) * 4);
            while (uVar34 != 0xffffffff) {
              puVar26 = (uint *)((longlong)(int)uVar34 * 0x10 + local_e8._0_8_);
              if (*puVar26 == uVar31) {
                puVar23 = puVar26 + 1;
                if (puVar26 == (uint *)0x0) {
                  puVar23 = puVar45;
                }
                if (puVar23 != (uint *)0x0) {
                  uVar31 = *puVar23;
                }
                break;
              }
              uVar34 = puVar26[2];
            }
          }
          *puVar22 = uVar31;
          uVar31 = puVar22[1];
          if (local_e8._8_4_ != local_b4) {
            FVar44 = (ForElementType<FSetElementId>)local_b0;
            if (local_a8 != (ForElementType<FSetElementId>)0x0) {
              FVar44 = local_a8;
            }
            uVar34 = *(uint *)((longlong)FVar44 + (ulonglong)(local_a0 - 1 & uVar31) * 4);
            while (uVar34 != 0xffffffff) {
              puVar26 = (uint *)((longlong)(int)uVar34 * 0x10 + local_e8._0_8_);
              if (*puVar26 == uVar31) {
                puVar23 = puVar26 + 1;
                if (puVar26 == (uint *)0x0) {
                  puVar23 = puVar45;
                }
                if (puVar23 != (uint *)0x0) {
                  uVar31 = *puVar23;
                }
                break;
              }
              uVar34 = puVar26[2];
            }
          }
          puVar22[1] = uVar31;
          uVar31 = puVar22[2];
          if (local_e8._8_4_ == local_b4) {
LAB_14db64307:
            puVar22[2] = uVar31;
            puVar22 = puVar22 + 3;
          }
          else {
            FVar44 = (ForElementType<FSetElementId>)local_b0;
            if (local_a8 != (ForElementType<FSetElementId>)0x0) {
              FVar44 = local_a8;
            }
            uVar34 = *(uint *)((longlong)FVar44 + (ulonglong)(local_a0 - 1 & uVar31) * 4);
            if (uVar34 == 0xffffffff) goto LAB_14db64307;
            do {
              puVar26 = (uint *)((longlong)(int)uVar34 * 0x10 + local_e8._0_8_);
              if (*puVar26 == uVar31) {
                puVar23 = puVar26 + 1;
                if (puVar26 == (uint *)0x0) {
                  puVar23 = puVar45;
                }
                if (puVar23 != (uint *)0x0) {
                  uVar31 = *puVar23;
                }
                goto LAB_14db64307;
              }
              uVar34 = puVar26[2];
            } while (uVar34 != 0xffffffff);
            puVar22[2] = uVar31;
            puVar22 = puVar22 + 3;
          }
        }
        puVar47 = puVar47 + 2;
        pTVar43 = local_3a0;
      } while (puVar47 != puVar46);
    }
    FConstClothCollection::GetUserDefinedAttributeNames<float>
              (pFVar4,&local_328,&ClothCollectionGroup::SimVertices3D);
    iVar14 = local_328.ArrayNum;
    pFVar3 = (FName *)(local_328.AllocatorInstance.Data + (longlong)iVar14 * 8);
    FVar33.Data = local_328.AllocatorInstance.Data;
    while( true ) {
      if (local_328.ArrayNum != iVar14) {
        local_3b8 = (<lambda_1>)0x0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3b8);
      }
      if ((FName *)FVar33.Data == pFVar3) break;
      if (pTVar43 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        paVar39 = &pTVar43->SharedReferenceCount;
        LOCK();
        *paVar39 = (atomic<int>)((int)*paVar39 + 1);
        UNLOCK();
        LOCK();
        *paVar39 = (atomic<int>)((int)*paVar39 + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43)
        ;
        LOCK();
        *paVar39 = (atomic<int>)((int)*paVar39 + 1);
        UNLOCK();
        LOCK();
        *paVar39 = (atomic<int>)((int)*paVar39 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
      pTVar24 = FClothCollection::GetUserDefinedAttribute<float>
                          ((FClothCollection *)local_3a8,(FName *)FVar33.Data,
                           &ClothCollectionGroup::SimVertices3D);
      if (pTVar24 == (TManagedArray<float> *)0x0) {
        local_338.ArrayNum = 0;
        local_338.DataPtr = (float *)0x0;
      }
      else {
        local_338.ArrayNum = (**(code **)(*(longlong *)pTVar24 + 0x60))(pTVar24);
        local_338.DataPtr = *(float **)&pTVar24->field_0x10;
        if ((local_338.ArrayNum < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
      ClothAsset::Private::WeldByWeightedAverage<float>
                ((TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                  *)&local_98,&local_338);
      FVar33.Data = FVar33.Data + 8;
    }
    uVar41 = 0;
    local_390._0_4_ = 0;
    local_398.Data = (FScriptContainerElement *)0x0;
    uStack_2d8 = 0;
    local_390 = 0;
    uStack_2d4 = 1;
    local_2c0 = 0;
    uVar28 = uVar41;
    if (local_c0 != 0) {
      FVar44 = (ForElementType<FSetElementId>)((longlong)local_e8 + 0x10);
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FVar44 = local_c8;
      }
      uVar31 = *(uint *)FVar44;
      uVar40 = uVar41;
      local_2c0 = (uint)local_390;
      while (uVar31 == 0) {
        iVar14 = (int)uVar28;
        local_2c0 = (int)uVar40 + 0x20;
        uVar40 = (ulonglong)local_2c0;
        uStack_2d8 = iVar14 + 1;
        uVar28 = (ulonglong)uStack_2d8;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2d8) {
          uVar28 = (ulonglong)local_c0;
          goto LAB_14db644cd;
        }
        uVar31 = ((uint *)((longlong)FVar44 + 4))[iVar14];
      }
      uStack_2d4 = -uVar31 & uVar31;
      uVar28 = (ulonglong)uStack_2d4 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_310 = (int)lVar27;
      uVar31 = local_310 + -1 + local_2c0;
      uVar28 = (ulonglong)uVar31;
      if ((int)local_c0 < (int)uVar31) {
        uVar28 = (ulonglong)local_c0;
      }
    }
LAB_14db644cd:
    local_308 = (longlong *)local_e8;
    TStack_300.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    uStack_2c8 = 0xffffffff;
    iStack_2c4 = (int)uVar28;
    uStack_2bc = local_ec;
    TStack_300._padding_ = CONCAT44(uStack_2d4,uStack_2d8);
    TStack_300.CurrentBitIndex = iStack_2c4;
    TStack_300.UnvisitedBitMask = 0xffffffff;
    TStack_300._28_4_ = local_ec;
    TStack_300.BaseBitIndex = local_2c0;
    local_2e0 = local_308;
    local_2d0 = TStack_300.Array;
    if (iStack_2c4 < (int)local_c0) {
      do {
        pFVar30 = (FScriptContainerElement *)((longlong)(int)uVar28 * 0x10 + *local_308);
        if (*(int *)pFVar30 != *(int *)(*local_308 + 4 + (longlong)(int)uVar28 * 0x10)) {
          iVar14 = (int)uVar41;
          if ((local_398.Data <= pFVar30) &&
             (pFVar30 < local_398.Data + (longlong)local_390._4_4_ * 4)) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar14 = (uint)local_390;
          }
          if (iVar14 == local_390._4_4_) {
            iVar14 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_398,(int *)((longlong)&local_390 + 4));
          }
          local_390 = CONCAT44(local_390._4_4_,iVar14 + 1);
          *(int *)(local_398.Data + (longlong)iVar14 * 4) = *(int *)pFVar30;
        }
        TStack_300.UnvisitedBitMask = TStack_300.UnvisitedBitMask & ~TStack_300._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_300);
        uVar28 = (ulonglong)(uint)TStack_300.CurrentBitIndex;
        uVar41 = local_390 & 0xffffffff;
        pTVar43 = local_3a0;
      } while (TStack_300.CurrentBitIndex < (TStack_300.Array)->NumBits);
    }
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)local_398.Data,(uint)local_390,local_3b6[0],(TLess<void> *)local_3b6);
    pFVar32 = local_358;
    pTVar7 = (local_358->ClothCollection).SharedReferenceCount.ReferenceController;
    pFVar4 = (local_358->ClothCollection).Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pFVar9 = (pFVar4->ManagedArrayCollection).Object;
    pTVar10 = (pFVar4->ManagedArrayCollection).SharedReferenceCount.ReferenceController;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    (**(code **)(pFVar9->_padding_ + 0x28))
              (pFVar9,&ClothCollectionGroup::SimVertices3D,&local_398,0x101);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    FCollectionClothSeamConstFacade::ValidateSeam(pFVar32);
    if (local_398.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data);
    }
    if ((FName *)local_328.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_328.AllocatorInstance.Data);
    }
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_98);
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  if ((TIntVector2<int>_u_0 *)local_388.Data != (TIntVector2<int>_u_0 *)0x0) {
    FMemory::Free(local_388.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
  return;
}

// Reset @ 14db6a750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Reset(FCollectionClothSeamFacade *this)

{
  FConstClothCollection *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  FClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar4;
  TManagedArray<FName> *pTVar5;
  TManagedArray<int> *pTVar6;
  code *pcVar7;
  undefined8 uVar8;
  TIntVector3<int> *pTVar9;
  undefined8 uVar10;
  FName *pFVar11;
  FSharedReferencer<1> FVar12;
  FCollectionClothSeamFacade *pFVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar18;
  TArrayView<int,int> *pTVar19;
  TArrayView<UE::Math::TVector<float>,int> *pTVar20;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar21;
  TManagedArray<UE::Math::TVector<float>_> *pTVar22;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar23;
  TArrayView<UE::Math::TIntVector3<int>,int> *pTVar24;
  TManagedArray<float> *pTVar25;
  uint uVar26;
  longlong lVar27;
  atomic<int> *paVar28;
  ulonglong uVar29;
  uint uVar30;
  FSharedReferencer<1> FVar31;
  uint uVar32;
  ulonglong uVar33;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar34;
  longlong lVar35;
  ForAnyElementType FVar36;
  undefined1 auStackY_448 [32];
  undefined1 local_418 [8];
  FCollectionClothConstFacade local_410;
  FName *local_3f8;
  uint local_3f0;
  uint local_3ec;
  TArray<int,TSizedDefaultAllocator<32>_> *local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  int local_3d8 [4];
  longlong *local_3c8;
  undefined1 auStack_3c0 [16];
  uint uStack_3b0;
  uint uStack_3ac;
  longlong local_3a8;
  TSet<TTuple<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_3a0;
  TSet<TTuple<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_398;
  undefined2 local_390;
  FCollectionClothSimAccessoryMeshConstFacade local_388;
  FCollectionClothSeamFacade *local_368;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_360;
  TArrayView<UE::Math::TIntVector2<int>_const_,int> local_350;
  int *local_338;
  int iStack_330;
  undefined4 uStack_32c;
  TVector<float> *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  TArrayView<int_const_,int> local_318;
  TArray<FName,TSizedDefaultAllocator<32>_> local_308;
  undefined4 local_2f8;
  FName local_2f4;
  FName local_2ec;
  TArrayView<int,int> local_2e0;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_2d0;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_2c0;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_2b0;
  TArrayView<int,int> local_298;
  TArrayView<UE::Math::TVector<float>,int> local_288;
  TArrayView<UE::Math::TVector<float>,int> local_278;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_268;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_258;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_248;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_238;
  TArrayView<UE::Math::TVector<float>,int> local_228;
  TArrayView<UE::Math::TVector<float>,int> local_218;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_208;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_1f8;
  TArrayView<UE::Math::TIntVector3<int>,int> local_1e8;
  TArrayView<float,int> local_1d8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_1c8;
  TArrayView<int,int> local_1b8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_1a8;
  undefined1 local_198 [32];
  longlong local_178;
  TSet<TTuple<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_170;
  TArrayView<UE::Math::TVector<float>,int> local_168;
  TArrayView<UE::Math::TVector<float>,int> local_158;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_148;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_138;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_128;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_118;
  TArrayView<UE::Math::TVector<float>,int> local_108;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_f8;
  TArrayView<UE::Math::TIntVector3<int>,int> local_e8;
  TArrayView<UE::Math::TIntVector3<int>,int> local_d8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_c8;
  TArrayView<int,int> local_b8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_a8;
  TSet<TTuple<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_448;
  pFVar1 = *(FConstClothCollection **)&this->field_0x8;
  local_368 = this;
  iVar15 = FConstClothCollection::GetNumElements
                     (pFVar1,pFVar1->SeamStitchStart,pFVar1->SeamStitchEnd,*(int *)&this->field_0x18
                     );
  if (0 < iVar15) {
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    pFVar1 = *(FConstClothCollection **)&this->field_0x8;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_410.ClothCollection.Object = pFVar1;
    local_410.ClothCollection.SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_410._padding_ = (longlong)&___7FCollectionClothFacade_ClothAsset_Chaos_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    iVar16 = FConstClothCollection::GetElementsOffset
                       (*(TManagedArray<int> **)(*(longlong *)&this->field_0x8 + 0xa8),0,
                        *(int *)&this->field_0x18);
    GetSeamStitch3DIndex(this,&local_2e0);
    FCollectionClothFacade::GetSeamStitchLookupPrivate
              ((FCollectionClothFacade *)&local_410,&local_360);
    uVar33 = 0;
    plVar3 = *(longlong **)(*(longlong *)&this->field_0x8 + 0xb8);
    uVar32 = 0;
    if (plVar3 == (longlong *)0x0) {
      local_350.DataPtr = (TIntVector2<int> *)0x0;
      local_350.ArrayNum = 0;
    }
    else {
      local_350.ArrayNum = (**(code **)(*plVar3 + 0x60))(plVar3);
      local_350.DataPtr = (TIntVector2<int> *)plVar3[2];
      if ((local_350.ArrayNum < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FCollectionClothConstFacade::GetSimVertex2DLookup(&local_410,&local_2d0);
    iVar17 = FManagedArrayCollection::NumElements
                       (((local_410.ClothCollection.Object)->ManagedArrayCollection).Object,
                        ClothCollectionGroup::SimVertices3D);
    local_3f8 = (FName *)CONCAT44(local_3f8._4_4_,iVar17);
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    uVar29 = uVar33;
    uVar30 = uVar32;
    if (0 < iVar15) {
      do {
        uVar26 = uVar32;
        if ((int)uVar30 < local_2e0.ArrayNum) {
          uVar26 = ~uVar30 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_3f0 = local_2e0.DataPtr[uVar29];
        lVar27 = (longlong)(int)local_3f0;
        if (local_3f0 != 0xffffffff) {
          uVar26 = uVar32;
          if ((int)local_3f0 < local_360.ArrayNum) {
            uVar26 = ~local_3f0 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_3d8[0] = uVar30 + iVar16;
          iVar17 = TArray<int,TSizedDefaultAllocator<32>_>::RemoveSwap
                             (local_360.DataPtr + lVar27,local_3d8,Default);
          if ((iVar17 != 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SeamStitchLookup[VertexIndex3D].RemoveSwap(StitchIndex + GlobalSeamStitchesOffset) == 1"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                  ,0x2ac,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TMapBase<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
          ::FindOrAddImpl<int_const_&>
                    ((TMapBase<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                      *)&local_98,local_3f0,(int *)&local_3f0);
        }
        uVar29 = uVar29 + 1;
        uVar30 = uVar30 + 1;
      } while ((longlong)uVar29 < (longlong)iVar15);
    }
    TSet<TTuple<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_198,&local_98);
    local_398 = &local_98;
    local_390 = 0;
    stack0xfffffffffffffc48 = local_198._16_16_;
    local_3c8 = (longlong *)local_198._0_8_;
    auStack_3c0._0_8_ = local_198._8_8_;
    local_3a8 = local_178;
    pTStack_3a0 = pTStack_170;
    uVar29 = local_198._24_8_ >> 0x20;
    FVar31.ReferenceController = local_410.ClothCollection.SharedReferenceCount.ReferenceController;
    uVar32 = local_198._28_4_;
    if ((int)local_198._28_4_ < *(int *)(local_198._16_8_ + 0x18)) {
      do {
        plVar3 = local_3c8;
        uVar30 = *(uint *)((longlong)(int)uVar29 * 0x20 + *local_3c8);
        uVar26 = 0;
        if ((int)uVar30 < local_2d0.ArrayNum) {
          uVar26 = ~uVar30 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar34 = local_2d0.DataPtr + (int)uVar30;
        uVar26 = 0;
        if ((int)uVar30 < local_360.ArrayNum) {
          uVar26 = ~uVar30 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar27 = (longlong)(int)uVar32 * 0x20;
        ClothAsset::Private::UpdateSplittingGroup
                  ((TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>
                    *)(lVar27 + 8 + *plVar3),*(int *)(*plVar3 + lVar27),
                   local_360.DataPtr + (int)uVar30,&local_350,pTVar34);
        if ((*(int *)(*plVar3 + 0x10 + lVar27) < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("GroupIter.Value().Num() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                ,0x2ba,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar27 = (longlong)(int)uVar32 * 0x20 + *plVar3;
        if (*(int *)(lVar27 + 0x10) == 1) {
          TSet<TTuple<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_3a0,uVar32);
          local_390 = CONCAT11(local_390._1_1_,1);
        }
        else {
          if ((*(int *)(lVar27 + 0x10) < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar26 = 1;
          **(uint **)(lVar27 + 8) = uVar30;
          lVar27 = *plVar3;
          if (1 < *(int *)((longlong)(int)uVar32 * 0x20 + 0x10 + lVar27)) {
            lVar35 = 0xa8;
            iVar15 = (int)local_3f8 + (int)uVar33;
            do {
              local_3ec = (int)uVar33 + 1;
              lVar27 = (longlong)(int)uVar32 * 0x20 + lVar27;
              uVar30 = 0;
              if ((int)uVar26 < *(int *)(lVar27 + 0x10)) {
                uVar30 = ~uVar26 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar26 = uVar26 + 1;
              uVar33 = (ulonglong)local_3ec;
              *(int *)(lVar35 + *(longlong *)(lVar27 + 8)) = iVar15;
              lVar35 = lVar35 + 0xa8;
              lVar27 = *plVar3;
              iVar15 = iVar15 + 1;
            } while ((int)uVar26 < *(int *)((longlong)(int)uVar32 * 0x20 + 0x10 + lVar27));
          }
        }
        iVar15 = 1;
        uStack_3b0 = uStack_3b0 & ~auStack_3c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_3c0);
        uVar29 = (ulonglong)uStack_3ac;
        uVar32 = uStack_3ac;
      } while ((int)uStack_3ac < *(int *)(auStack_3c0._8_8_ + 0x18));
      if (((char)local_390 != '\0') && (local_390._1_1_ != '\0')) {
        uVar32 = *(int *)&(local_398->Elements).field_0x8 -
                 *(int *)&(local_398->Elements).field_0x34;
        if (3 < uVar32) {
          uVar29 = (ulonglong)((uVar32 >> 1) + 7) * 2 + 1;
          lVar27 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          local_2f8 = (undefined4)lVar27;
          iVar15 = 1 << ((byte)lVar27 & 0x1f);
        }
        if (((0 < (int)uVar32) && (local_398->HashSize < iVar15)) || (iVar15 < local_398->HashSize))
        {
          local_398->HashSize = iVar15;
          TSet<TTuple<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_398);
        }
      }
      pFVar13 = local_368;
      FVar31.ReferenceController =
           local_410.ClothCollection.SharedReferenceCount.ReferenceController;
      if (0 < (int)uVar33) {
        pTVar2 = *(TReferenceControllerBase<1> **)&local_368->field_0x10;
        this_00 = *(FClothCollection **)&local_368->field_0x8;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        FClothCollection::SetNumElements
                  (this_00,(int)local_3f8 + (int)uVar33,&ClothCollectionGroup::SimVertices3D);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        pTVar18 = FCollectionClothFacade::GetSimVertex2DLookupPrivate
                            ((FCollectionClothFacade *)&local_410,&local_c8);
        local_1c8.DataPtr = pTVar18->DataPtr;
        local_1c8.ArrayNum = pTVar18->ArrayNum;
        local_1c8._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
        pTVar19 = FCollectionClothFacade::GetSimVertex3DLookupPrivate
                            ((FCollectionClothFacade *)&local_410,&local_b8);
        local_1b8.DataPtr = pTVar19->DataPtr;
        local_1b8.ArrayNum = pTVar19->ArrayNum;
        local_1b8._12_4_ = *(undefined4 *)&pTVar19->field_0xc;
        ClothAsset::Private::UpdateVertexLookupsAfterSplitting
                  ((TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                    *)&local_98,&local_1b8,&local_1c8);
        pTVar18 = FCollectionClothFacade::GetSeamStitchLookupPrivate
                            ((FCollectionClothFacade *)&local_410,&local_a8);
        pTVar2 = *(TReferenceControllerBase<1> **)&pFVar13->field_0x10;
        pTVar34 = pTVar18->DataPtr;
        uVar8._0_4_ = pTVar18->ArrayNum;
        uVar8._4_4_ = *(undefined4 *)&pTVar18->field_0xc;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        pTVar4 = *(TReferenceControllerBase<1> **)&pFVar13->field_0x10;
        lVar27 = *(longlong *)&pFVar13->field_0x8;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        plVar3 = *(longlong **)(lVar27 + 0xc0);
        if (plVar3 == (longlong *)0x0) {
          local_338 = (int *)0x0;
          iStack_330 = 0;
        }
        else {
          iStack_330 = (**(code **)(*plVar3 + 0x60))(plVar3);
          local_338 = (int *)plVar3[2];
          if ((iStack_330 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        local_298._12_4_ = uStack_32c;
        local_298.ArrayNum = iStack_330;
        local_298.DataPtr = local_338;
        local_1a8.DataPtr = pTVar34;
        local_1a8._8_8_ = uVar8;
        ClothAsset::Private::UpdateSeamStitchLookupsAfterSplitting
                  ((TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                    *)&local_98,&local_298,&local_1a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        pTVar20 = FCollectionClothFacade::GetSimPosition3D
                            ((FCollectionClothFacade *)&local_410,&local_168);
        local_288.DataPtr = pTVar20->DataPtr;
        local_288.ArrayNum = pTVar20->ArrayNum;
        local_288._12_4_ = *(undefined4 *)&pTVar20->field_0xc;
        ClothAsset::Private::SplitCopyVertexData<UE::Math::TVector<float>_>
                  ((TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                    *)&local_98,&local_288);
        pTVar20 = FCollectionClothFacade::GetSimNormal
                            ((FCollectionClothFacade *)&local_410,&local_158);
        local_278.DataPtr = pTVar20->DataPtr;
        local_278.ArrayNum = pTVar20->ArrayNum;
        local_278._12_4_ = *(undefined4 *)&pTVar20->field_0xc;
        ClothAsset::Private::SplitCopyVertexData<UE::Math::TVector<float>_>
                  ((TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                    *)&local_98,&local_278);
        pTVar18 = FCollectionClothFacade::GetSimBoneIndices
                            ((FCollectionClothFacade *)&local_410,&local_148);
        local_268.DataPtr = pTVar18->DataPtr;
        local_268.ArrayNum = pTVar18->ArrayNum;
        local_268._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
        ClothAsset::Private::SplitCopyVertexData<TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                    *)&local_98,&local_268);
        pTVar21 = FCollectionClothFacade::GetSimBoneWeights
                            ((FCollectionClothFacade *)&local_410,&local_138);
        local_258.DataPtr = pTVar21->DataPtr;
        local_258.ArrayNum = pTVar21->ArrayNum;
        local_258._12_4_ = *(undefined4 *)&pTVar21->field_0xc;
        ClothAsset::Private::SplitCopyVertexData<TArray<float,TSizedDefaultAllocator<32>_>_>
                  ((TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                    *)&local_98,&local_258);
        pTVar21 = FCollectionClothFacade::GetTetherReferenceLength
                            ((FCollectionClothFacade *)&local_410,&local_128);
        local_248.DataPtr = pTVar21->DataPtr;
        local_248.ArrayNum = pTVar21->ArrayNum;
        local_248._12_4_ = *(undefined4 *)&pTVar21->field_0xc;
        pTVar18 = FCollectionClothFacade::GetTetherKinematicIndex
                            ((FCollectionClothFacade *)&local_410,&local_118);
        local_238.DataPtr = pTVar18->DataPtr;
        local_238.ArrayNum = pTVar18->ArrayNum;
        local_238._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
        ClothAsset::Private::SplitTethers
                  ((TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                    *)&local_98,&local_238,&local_248);
        iVar16 = 0;
        local_3f8 = (FName *)((ulonglong)local_3f8 & 0xffffffff00000000);
        iVar15 = FManagedArrayCollection::NumElements
                           (((local_410.ClothCollection.Object)->ManagedArrayCollection).Object,
                            ClothCollectionGroup::SimAccessoryMeshes);
        FVar31.ReferenceController =
             local_410.ClothCollection.SharedReferenceCount.ReferenceController;
        if (0 < iVar15) {
          do {
            if (FVar31.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
              paVar28 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar28 = &(FVar31.ReferenceController)->SharedReferenceCount;
              LOCK();
              *paVar28 = (atomic<int>)((int)*paVar28 + 1);
              UNLOCK();
              LOCK();
              *paVar28 = (atomic<int>)((int)*paVar28 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar31.ReferenceController);
            local_2c0.Object = local_410.ClothCollection.Object;
            local_2c0.SharedReferenceCount.ReferenceController = FVar31.ReferenceController;
            if (FVar31.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar28 = (atomic<int>)((int)*paVar28 + 1);
              UNLOCK();
            }
            FCollectionClothSimAccessoryMeshConstFacade::FCollectionClothSimAccessoryMeshConstFacade
                      (&local_388,&local_2c0,iVar16);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar31.ReferenceController);
            local_388._padding_ =
                 (longlong)&___7FCollectionClothSimAccessoryMeshFacade_ClothAsset_Chaos_UE__6B_;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar31.ReferenceController);
            pTVar20 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshPosition3D
                                ((FCollectionClothSimAccessoryMeshFacade *)&local_388,&local_108);
            local_228.DataPtr = pTVar20->DataPtr;
            local_228.ArrayNum = pTVar20->ArrayNum;
            local_228._12_4_ = *(undefined4 *)&pTVar20->field_0xc;
            ClothAsset::Private::SplitCopyVertexData<UE::Math::TVector<float>_>
                      ((TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                        *)&local_98,&local_228);
            FVar12.ReferenceController =
                 local_388.ClothCollection.SharedReferenceCount.ReferenceController;
            if (local_388.ClothCollection.SharedReferenceCount.ReferenceController ==
                (TReferenceControllerBase<1> *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
            }
            else {
              paVar28 = &(local_388.ClothCollection.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount;
              LOCK();
              *paVar28 = (atomic<int>)((int)*paVar28 + 1);
              UNLOCK();
              LOCK();
              *paVar28 = (atomic<int>)((int)*paVar28 + 1);
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_388.ClothCollection.SharedReferenceCount.ReferenceController);
              LOCK();
              *paVar28 = (atomic<int>)((int)*paVar28 + 1);
              UNLOCK();
              LOCK();
              *paVar28 = (atomic<int>)((int)*paVar28 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar12.ReferenceController);
            iVar15 = local_388.MeshIndex;
            pFVar1 = local_388.ClothCollection.Object;
            if ((local_388.ClothCollection.Object)->SimAccessoryMeshNormalAttribute ==
                (TManagedArray<FName> *)0x0) {
LAB_14db6b19f:
              local_2f4.ComparisonIndex.Value = 0;
              local_2f4.Number = 0;
            }
            else {
              lVar27 = (longlong)local_388.MeshIndex;
              iVar16 = FManagedArrayCollection::NumElements
                                 (((local_388.ClothCollection.Object)->ManagedArrayCollection).
                                  Object,ClothCollectionGroup::SimAccessoryMeshes);
              if (iVar16 <= iVar15) goto LAB_14db6b19f;
              pTVar5 = pFVar1->SimAccessoryMeshNormalAttribute;
              uVar32 = 0;
              if (iVar15 < *(int *)&pTVar5->field_0x18) {
                uVar32 = (uint)~iVar15 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_2f4 = *(FName *)(*(longlong *)&pTVar5->field_0x10 + lVar27 * 8);
            }
            pTVar22 = FConstClothCollection::GetSimAccessoryMeshNormal(pFVar1,&local_2f4);
            if (pTVar22 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
              local_328 = (TVector<float> *)0x0;
              iStack_320 = 0;
            }
            else {
              iStack_320 = (**(code **)(*(longlong *)pTVar22 + 0x60))(pTVar22);
              local_328 = *(TVector<float> **)&pTVar22->field_0x10;
              if ((iStack_320 < 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar12.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar12.ReferenceController);
            local_218._12_4_ = uStack_31c;
            local_218.ArrayNum = iStack_320;
            local_218.DataPtr = local_328;
            ClothAsset::Private::SplitCopyVertexData<UE::Math::TVector<float>_>
                      ((TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                        *)&local_98,&local_218);
            if (FVar12.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
            }
            else {
              paVar28 = &(FVar12.ReferenceController)->SharedReferenceCount;
              LOCK();
              *paVar28 = (atomic<int>)((int)*paVar28 + 1);
              UNLOCK();
              LOCK();
              *paVar28 = (atomic<int>)((int)*paVar28 + 1);
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar12.ReferenceController);
              LOCK();
              *paVar28 = (atomic<int>)((int)*paVar28 + 1);
              UNLOCK();
              LOCK();
              *paVar28 = (atomic<int>)((int)*paVar28 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar12.ReferenceController);
            iVar15 = local_388.MeshIndex;
            if (pFVar1->SimAccessoryMeshBoneIndicesAttribute == (TManagedArray<FName> *)0x0) {
LAB_14db6b2ff:
              local_2ec.ComparisonIndex.Value = 0;
              local_2ec.Number = 0;
            }
            else {
              lVar27 = (longlong)local_388.MeshIndex;
              iVar16 = FManagedArrayCollection::NumElements
                                 ((pFVar1->ManagedArrayCollection).Object,
                                  ClothCollectionGroup::SimAccessoryMeshes);
              if (iVar16 <= iVar15) goto LAB_14db6b2ff;
              pTVar5 = pFVar1->SimAccessoryMeshBoneIndicesAttribute;
              uVar32 = 0;
              if (iVar15 < *(int *)&pTVar5->field_0x18) {
                uVar32 = (uint)~iVar15 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_2ec = *(FName *)(*(longlong *)&pTVar5->field_0x10 + lVar27 * 8);
            }
            pTVar23 = FConstClothCollection::GetSimAccessoryMeshBoneIndices(pFVar1,&local_2ec);
            if (pTVar23 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
              local_3e8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
              iStack_3e0 = 0;
            }
            else {
              iStack_3e0 = (**(code **)(*(longlong *)pTVar23 + 0x60))(pTVar23);
              local_3e8 = *(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar23->field_0x10;
              if ((iStack_3e0 < 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar12.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar12.ReferenceController);
            local_208._12_4_ = uStack_3dc;
            local_208.ArrayNum = iStack_3e0;
            local_208.DataPtr = local_3e8;
            ClothAsset::Private::SplitCopyVertexData<TArray<int,TSizedDefaultAllocator<32>_>_>
                      ((TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                        *)&local_98,&local_208);
            pTVar21 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneWeights
                                ((FCollectionClothSimAccessoryMeshFacade *)&local_388,&local_f8);
            local_1f8.DataPtr = pTVar21->DataPtr;
            local_1f8.ArrayNum = pTVar21->ArrayNum;
            local_1f8._12_4_ = *(undefined4 *)&pTVar21->field_0xc;
            ClothAsset::Private::SplitCopyVertexData<TArray<float,TSizedDefaultAllocator<32>_>_>
                      ((TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                        *)&local_98,&local_1f8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_388.ClothCollection.SharedReferenceCount.ReferenceController);
            iVar16 = (int)local_3f8 + 1;
            local_3f8 = (FName *)CONCAT44(local_3f8._4_4_,iVar16);
            iVar15 = FManagedArrayCollection::NumElements
                               (((local_410.ClothCollection.Object)->ManagedArrayCollection).Object,
                                ClothCollectionGroup::SimAccessoryMeshes);
          } while (iVar16 < iVar15);
        }
        pTVar24 = FCollectionClothFacade::GetSimIndices3D
                            ((FCollectionClothFacade *)&local_410,&local_e8);
        pTVar9 = pTVar24->DataPtr;
        uVar10._0_4_ = pTVar24->ArrayNum;
        uVar10._4_4_ = *(undefined4 *)&pTVar24->field_0xc;
        pTVar6 = (local_410.ClothCollection.Object)->SimVertex3DLookup;
        if (pTVar6 == (TManagedArray<int> *)0x0) {
          local_318.DataPtr = (int *)0x0;
          local_318.ArrayNum = 0;
        }
        else {
          local_318.ArrayNum = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
          local_318.DataPtr = *(int **)&pTVar6->field_0x10;
          if ((local_318.ArrayNum < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pTVar24 = FCollectionClothFacade::GetSimIndices2D
                            ((FCollectionClothFacade *)&local_410,&local_d8);
        local_2b0.DataPtr = pTVar24->DataPtr;
        local_2b0.ArrayNum = pTVar24->ArrayNum;
        local_1e8.DataPtr = pTVar9;
        local_1e8._8_8_ = uVar10;
        ClothAsset::Private::UpdateSimIndicesAfterSplitting(&local_2b0,&local_318,&local_1e8);
        pFVar1 = local_410.ClothCollection.Object;
        FConstClothCollection::GetUserDefinedAttributeNames<float>
                  (local_410.ClothCollection.Object,&local_308,&ClothCollectionGroup::SimVertices3D)
        ;
        FVar31.ReferenceController =
             local_410.ClothCollection.SharedReferenceCount.ReferenceController;
        iVar15 = local_308.ArrayNum;
        local_3f8 = (FName *)(local_308.AllocatorInstance.Data + (longlong)iVar15 * 8);
        FVar36.Data = local_308.AllocatorInstance.Data;
        while( true ) {
          pFVar11 = local_3f8;
          if (local_308.ArrayNum != iVar15) {
            local_418[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_418);
          }
          if ((FName *)FVar36.Data == pFVar11) break;
          if (FVar31.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
          }
          else {
            paVar28 = &(FVar31.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar28 = (atomic<int>)((int)*paVar28 + 1);
            UNLOCK();
            LOCK();
            *paVar28 = (atomic<int>)((int)*paVar28 + 1);
            UNLOCK();
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar31.ReferenceController);
            LOCK();
            *paVar28 = (atomic<int>)((int)*paVar28 + 1);
            UNLOCK();
            LOCK();
            *paVar28 = (atomic<int>)((int)*paVar28 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar31.ReferenceController);
          pTVar25 = FClothCollection::GetUserDefinedAttribute<float>
                              ((FClothCollection *)pFVar1,(FName *)FVar36.Data,
                               &ClothCollectionGroup::SimVertices3D);
          if (pTVar25 == (TManagedArray<float> *)0x0) {
            iStack_3e0 = 0;
            local_3e8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          }
          else {
            iStack_3e0 = (**(code **)(*(longlong *)pTVar25 + 0x60))(pTVar25);
            local_3e8 = *(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar25->field_0x10;
            if ((iStack_3e0 < 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar31.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar31.ReferenceController);
          local_1d8._12_4_ = uStack_3dc;
          local_1d8.ArrayNum = iStack_3e0;
          local_1d8.DataPtr = (float *)local_3e8;
          ClothAsset::Private::SplitCopyVertexData<float>
                    ((TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                      *)&local_98,&local_1d8);
          FVar36.Data = FVar36.Data + 8;
        }
        if ((FName *)local_308.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_308.AllocatorInstance.Data);
        }
      }
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar31.ReferenceController);
    this = local_368;
  }
  SetNumSeamStitches(this,0);
  SetDefaults(this);
  return;
}

// SetDefaults @ 14db6d170

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamFacade::SetDefaults(FCollectionClothSeamFacade *this)

{
  uint uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x18;
  lVar2 = *(longlong *)&this->field_0x8;
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  lVar2 = *(longlong *)(lVar2 + 0xa8);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar1 * 4) = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar2 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  lVar2 = *(longlong *)(lVar2 + 0xb0);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar1 * 4) = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetNumSeamStitches @ 14db6e660

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamFacade::SetNumSeamStitches
          (FCollectionClothSeamFacade *this,int param_1)

{
  int iVar1;
  FClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  TManagedArray<int> *pTVar7;
  
  this_00 = *(FClothCollection **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)&this->field_0x8;
  pTVar7 = *(TManagedArray<int> **)(lVar4 + 0xb0);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FClothCollection::SetNumElements
            (this_00,param_1,&ClothCollectionGroup::SeamStitches,
             *(TManagedArray<int> **)(lVar6 + 0xa8),pTVar7,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

