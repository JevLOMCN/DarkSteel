// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 10

// CalculateReferenceBoneIndex @ 14dc3eb50

int __cdecl
UE::Chaos::ClothAsset::FClothEngineTools::CalculateReferenceBoneIndex
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,FReferenceSkeleton *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  longlong lVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 local_res8 [8];
  int local_res18;
  int local_58 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  uVar16 = param_1->ArrayNum;
  local_40._0_4_ = 0;
  local_res18 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (0 < (int)uVar16) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar16,&local_48,0,(int *)((longlong)&local_40 + 4));
  }
  uVar18 = 0;
  uVar6 = (uint)local_40;
  if (0 < (int)uVar16) {
    lVar13 = 0;
    do {
      if (uVar6 == local_40._4_4_) {
        uVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48,(int *)((longlong)&local_40 + 4));
      }
      iVar7 = uVar6 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar7);
      *(undefined8 *)&local_48.Data[(longlong)(int)uVar6 * 0x10].field_0x0 = 0;
      *(undefined8 *)(local_48.Data + (longlong)(int)uVar6 * 0x10 + 8) = 0;
      uVar9 = 0;
      if ((int)uVar6 < iVar7) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        iVar7 = (uint)local_40;
      }
      FVar12.Data = local_48.Data;
      uVar6 = 0;
      if ((int)uVar18 < param_1->ArrayNum) {
        uVar6 = ~uVar18 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      local_58[0] = *(int *)((param_1->AllocatorInstance).Data + lVar13 * 4);
      if (((*(int **)&FVar12.Data[(longlong)iVar7 * 0x10 + -0x10].field_0x0 <= local_58) &&
          (local_58 <
           *(int **)&FVar12.Data[(longlong)iVar7 * 0x10 + -0x10].field_0x0 +
           *(int *)(FVar12.Data + (longlong)iVar7 * 0x10 + -4))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      iVar8 = *(int *)(FVar12.Data + (longlong)iVar7 * 0x10 + -8);
      if (iVar8 == *(int *)(FVar12.Data + (longlong)iVar7 * 0x10 + -4)) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(FVar12.Data + (longlong)iVar7 * 0x10 + -0x10)
                           ,(int *)(FVar12.Data + (longlong)iVar7 * 0x10 + -4));
      }
      lVar17 = *(longlong *)&FVar12.Data[(longlong)iVar7 * 0x10 + -0x10].field_0x0;
      *(int *)(FVar12.Data + (longlong)iVar7 * 0x10 + -8) = iVar8 + 1;
      *(int *)(lVar17 + (longlong)iVar8 * 4) = local_58[0];
      while ((local_58[0] != 0 && (local_58[0] != -1))) {
        local_58[0] = FReferenceSkeleton::GetParentIndexInternal
                                (param_2,local_58[0],&param_2->FinalRefBoneInfo);
        if ((*(int **)&FVar12.Data[(longlong)iVar7 * 0x10 + -0x10].field_0x0 <= local_58) &&
           ((local_58 <
             *(int **)&FVar12.Data[(longlong)iVar7 * 0x10 + -0x10].field_0x0 +
             *(int *)(FVar12.Data + (longlong)iVar7 * 0x10 + -4) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        iVar8 = *(int *)(FVar12.Data + (longlong)iVar7 * 0x10 + -8);
        if (iVar8 == *(int *)(FVar12.Data + (longlong)iVar7 * 0x10 + -4)) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)
                                   (FVar12.Data + (longlong)iVar7 * 0x10 + -0x10),
                             (int *)(FVar12.Data + (longlong)iVar7 * 0x10 + -4));
        }
        lVar17 = *(longlong *)&FVar12.Data[(longlong)iVar7 * 0x10 + -0x10].field_0x0;
        *(int *)(FVar12.Data + (longlong)iVar7 * 0x10 + -8) = iVar8 + 1;
        *(int *)(lVar17 + (longlong)iVar8 * 4) = local_58[0];
      }
      uVar18 = uVar18 + 1;
      lVar13 = lVar13 + 1;
      uVar6 = (uint)local_40;
    } while (lVar13 < (int)uVar16);
  }
  pTVar15 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_48.Data + (longlong)(int)uVar6 * 0x10)
  ;
  FVar12.Data = local_48.Data;
  uVar16 = uVar6;
  while( true ) {
    if (uVar16 != uVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
      uVar16 = (uint)local_40;
    }
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data == pTVar15) break;
    lVar13 = 0;
    pFVar3 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data)->AllocatorInstance).Data;
    iVar7 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data)->ArrayNum / 2;
    if (0 < iVar7) {
      pFVar11 = pFVar3 + (longlong)
                         (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data)->ArrayNum + -1) *
                         4;
      do {
        uVar2 = *(undefined4 *)(pFVar3 + lVar13 * 4);
        *(undefined4 *)(pFVar3 + lVar13 * 4) = *(undefined4 *)pFVar11;
        lVar13 = lVar13 + 1;
        *(undefined4 *)pFVar11 = uVar2;
        pFVar11 = pFVar11 + -4;
      } while (lVar13 < iVar7);
      uVar16 = (uint)local_40;
    }
    FVar12.Data = FVar12.Data + 0x10;
  }
  if ((int)uVar16 < 1) {
    local_res18 = 0;
  }
  else {
    uVar6 = 0;
    local_50 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_48.Data;
    lVar13 = (longlong)(int)uVar16;
    iVar7 = *(int *)(local_48.Data + 8);
    if ((longlong)iVar7 < 1) {
      local_res18 = 0;
    }
    else {
      lVar17 = 0;
      do {
        pTVar15 = local_50;
        uVar18 = 0;
        if ((int)uVar6 < local_50->ArrayNum) {
          uVar18 = ~uVar6 >> 0x1f;
        }
        if (uVar18 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          uVar16 = (uint)local_40;
        }
        uVar18 = 1;
        lVar14 = 1;
        iVar8 = *(int *)((pTVar15->AllocatorInstance).Data + lVar17 * 4);
        if (1 < lVar13) {
          lVar19 = 0x10;
          do {
            uVar9 = 0;
            if ((int)uVar18 < (int)uVar16) {
              uVar9 = ~uVar18 >> 0x1f;
            }
            if (uVar9 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              uVar16 = (uint)local_40;
            }
            piVar10 = *(int **)(local_48.Data + lVar19);
            piVar1 = piVar10 + *(int *)(local_48.Data + lVar19 + 8);
            while( true ) {
              if (piVar10 == piVar1) goto LAB_14dc3efb3;
              if (*piVar10 == iVar8) break;
              piVar10 = piVar10 + 1;
            }
            uVar18 = uVar18 + 1;
            lVar14 = lVar14 + 1;
            lVar19 = lVar19 + 0x10;
          } while (lVar14 < lVar13);
        }
        uVar6 = uVar6 + 1;
        lVar17 = lVar17 + 1;
        local_res18 = iVar8;
      } while (lVar17 < iVar7);
    }
  }
LAB_14dc3efb3:
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.Data,uVar16);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return local_res18;
}

// CalculateReferenceBoneIndex @ 14dc3f040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
UE::Chaos::ClothAsset::FClothEngineTools::CalculateReferenceBoneIndex
          (TSharedRef<FManagedArrayCollection_const_,1> *param_1,FReferenceSkeleton *param_2)

{
  code *pcVar1;
  float fVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_158;
  longlong local_148;
  uint local_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_138;
  undefined4 local_130;
  uint uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_120;
  undefined4 local_110;
  int local_10c;
  int local_108 [2];
  FReferenceSkeleton *local_100;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  FCollectionClothConstFacade local_d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_b8;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_100 = param_2;
  FCollectionClothConstFacade::FCollectionClothConstFacade(&local_d0,param_1);
  FCollectionClothConstFacade::GetSimBoneIndices(&local_d0,&local_158);
  FCollectionClothConstFacade::GetSimBoneWeights(&local_d0,&local_120);
  uVar11 = (param_2->RawRefBoneInfo).ArrayNum;
  uVar12 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if (uVar11 == 0) goto LAB_14dc3f2e6;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar11);
  if (uVar11 < 4) {
    uVar11 = 1;
  }
  else {
    uVar13 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_110 = (undefined4)lVar18;
    uVar11 = 1 << ((byte)lVar18 & 0x1f);
  }
  if ((local_60 != 0) && ((int)uVar11 <= (int)local_60)) goto LAB_14dc3f2e6;
  local_60 = uVar11;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar11 != 0) {
    uVar16 = uVar11;
    if (uVar11 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar16 = 0;
        goto LAB_14dc3f145;
      }
    }
    else {
LAB_14dc3f145:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar16,4);
    }
    if (0 < (int)uVar11) {
      uVar14 = (ulonglong)uVar11;
      uVar13 = uVar12;
      do {
        FVar10.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_68.Data;
        }
        uVar7 = uVar13 & (longlong)(int)uVar11 - 1U;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(FVar10.Data + uVar7 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (local_60 != 0) {
    pTStack_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    local_140 = 0;
    uStack_13c = 1;
    uStack_12c = 0;
    uStack_128 = 0;
    uVar13 = uVar12;
    if (local_80 != 0) {
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_88;
      }
      uVar11 = *(uint *)FVar15;
      uVar14 = uVar12;
      while (uVar11 == 0) {
        uStack_128 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_128;
        iVar5 = (int)uVar13;
        local_140 = iVar5 + 1;
        uVar13 = (ulonglong)local_140;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_140)
        goto LAB_14dc3f253;
        uVar11 = ((uint *)((longlong)FVar15 + 4))[iVar5];
      }
      uStack_13c = -uVar11 & uVar11;
      uVar13 = (ulonglong)uStack_13c * 2 + 1;
      lVar18 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_10c = (int)lVar18;
      uStack_12c = local_10c + -1 + uStack_128;
      uVar13 = (ulonglong)uStack_12c;
      if ((int)local_80 < (int)uStack_12c) {
LAB_14dc3f253:
        uVar13 = (ulonglong)local_80;
        uStack_12c = local_80;
      }
    }
    local_130 = 0xffffffff;
    local_f8 = (longlong *)local_a8;
    local_f0._padding_ = CONCAT44(uStack_13c,local_140);
    local_f0.CurrentBitIndex = uStack_12c;
    local_f0.UnvisitedBitMask = 0xffffffff;
    local_f0._28_4_ = uStack_124;
    local_f0.BaseBitIndex = uStack_128;
    local_f0.Array = pTStack_138;
    if ((int)uVar13 < (int)local_80) {
      do {
        lVar18 = *local_f8;
        lVar8 = (longlong)(int)uVar13;
        uVar11 = local_60 - 1 & *(uint *)(lVar18 + lVar8 * 0xc);
        *(uint *)(lVar18 + 8 + lVar8 * 0xc) = uVar11;
        FVar10.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_68.Data;
        }
        uVar14 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar18 + 4 + lVar8 * 0xc) = *(undefined4 *)(FVar10.Data + uVar14 * 4);
        *(int *)(FVar10.Data + uVar14 * 4) = (int)uVar13;
        local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
        uVar13 = (ulonglong)(uint)local_f0.CurrentBitIndex;
      } while (local_f0.CurrentBitIndex < (local_f0.Array)->NumBits);
    }
  }
LAB_14dc3f2e6:
  fVar2 = __real_322bcc77;
  if (0 < local_158.ArrayNum) {
    lVar18 = 0;
    local_148 = 0;
    do {
      lVar8 = local_148;
      uVar19 = (uint)uVar12;
      uVar16 = ~uVar19 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar19 < local_158.ArrayNum) {
        uVar11 = uVar16;
      }
      if (uVar11 == 0) {
        local_168 = (longlong)(int)uVar19;
        local_160 = (longlong)local_158.ArrayNum;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      pTVar9 = local_158.DataPtr;
      uVar11 = 0;
      if ((int)uVar19 < local_120.ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (local_168 = lVar8, local_160 = (longlong)local_120.ArrayNum,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      if ((*(int *)((longlong)&pTVar9->ArrayNum + lVar18) !=
           *(int *)((longlong)&(local_120.DataPtr)->ArrayNum + lVar18)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SimBoneIndices[VertexIndex].Num() == SimBoneWeights[VertexIndex].Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothEngineTools.cpp"
                             ,0x119,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      uVar11 = 0;
      lVar17 = 0;
      while( true ) {
        uVar6 = 0;
        if ((int)uVar19 < local_158.ArrayNum) {
          uVar6 = uVar16;
        }
        if ((uVar6 == 0) &&
           (local_168 = lVar8, local_160 = (longlong)local_158.ArrayNum,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar4)) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        if (*(int *)((longlong)&(local_158.DataPtr)->ArrayNum + lVar18) <= (int)uVar11) break;
        uVar6 = 0;
        if ((int)uVar19 < local_120.ArrayNum) {
          uVar6 = uVar16;
        }
        if ((uVar6 == 0) &&
           (local_168 = lVar8, local_160 = (longlong)local_120.ArrayNum,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar4)) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        pTVar3 = local_120.DataPtr;
        iVar5 = *(int *)((longlong)&(local_120.DataPtr)->ArrayNum + lVar18);
        uVar6 = 0;
        if ((int)uVar11 < iVar5) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_168 = (longlong)(int)uVar11;
          local_160 = (longlong)iVar5;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            iVar5 = (*pcVar1)();
            return iVar5;
          }
        }
        if (fVar2 < *(float *)(*(longlong *)((longlong)&(pTVar3->AllocatorInstance).Data + lVar18) +
                              lVar17)) {
          uVar6 = 0;
          if ((int)uVar19 < local_158.ArrayNum) {
            uVar6 = uVar16;
          }
          if (uVar6 == 0) {
            local_168 = local_148;
            local_160 = (longlong)local_158.ArrayNum;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar4) {
              pcVar1 = (code *)swi(3);
              iVar5 = (*pcVar1)();
              return iVar5;
            }
          }
          pTVar9 = local_158.DataPtr;
          iVar5 = *(int *)((longlong)&(local_158.DataPtr)->ArrayNum + lVar18);
          uVar6 = 0;
          if ((int)uVar11 < iVar5) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_168 = (longlong)(int)uVar11;
            local_160 = (longlong)iVar5;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar1 = (code *)swi(3);
              iVar5 = (*pcVar1)();
              return iVar5;
            }
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a8,local_108,
                     (bool *)(*(longlong *)((longlong)&(pTVar9->AllocatorInstance).Data + lVar18) +
                             (longlong)(int)uVar11 * 4));
        }
        uVar11 = uVar11 + 1;
        lVar17 = lVar17 + 4;
        lVar8 = local_148;
      }
      local_148 = lVar8 + 1;
      uVar12 = (ulonglong)(uVar19 + 1);
      lVar18 = lVar18 + 0x10;
      param_2 = local_100;
    } while ((int)(uVar19 + 1) < local_158.ArrayNum);
  }
  pTVar9 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                     ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a8,&local_b8);
  iVar5 = CalculateReferenceBoneIndex(pTVar9,param_2);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.ClothCollection.SharedReferenceCount.ReferenceController);
  return iVar5;
}

// CalculateRemappedBoneIndicesIfCompatible @ 14dc3f890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
UE::Chaos::ClothAsset::FClothEngineTools::CalculateRemappedBoneIndicesIfCompatible
          (FCollectionClothConstFacade *param_1,FCollectionClothConstFacade *param_2,
          FSoftObjectPath *param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5,FText *param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  ITextData *pIVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  bool bVar24;
  undefined1 uVar25;
  bool bVar26;
  uint uVar27;
  int iVar28;
  FSoftObjectPath *this;
  FSoftObjectPath *this_00;
  UObject *pUVar29;
  UClass *pUVar30;
  UObject *pUVar31;
  longlong lVar32;
  uint *puVar33;
  FString *pFVar34;
  FText *pFVar35;
  FText *pFVar36;
  FText *pFVar37;
  FTextFormat *pFVar38;
  FText *pFVar39;
  FText *pFVar40;
  uint uVar41;
  uint uVar42;
  longlong lVar43;
  uint uVar44;
  UObject *pUVar45;
  uint uVar46;
  longlong lVar47;
  longlong lVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  TArray<int,TSizedDefaultAllocator<32>_> local_2c8;
  uint local_2b8;
  FSoftObjectPath *local_2b0;
  longlong local_2a8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_2a0;
  longlong local_290;
  FSoftObjectPath *local_288;
  undefined8 local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  undefined8 local_260;
  longlong local_258;
  longlong local_250;
  FSoftObjectPath *local_248;
  FTextFormat local_240;
  FText local_230;
  FFormatArgumentValue local_220;
  double local_200;
  double local_1f8;
  FText local_1f0;
  FText local_1e0;
  FString local_1d0;
  FString local_1c0;
  FText local_1b0;
  FText local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FText local_160;
  FText local_150;
  FText local_140;
  FString local_130;
  FText local_120;
  FString local_110;
  double local_100;
  FText local_f8;
  FText local_e8;
  FTextFormat local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FTextFormat local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58 [3];
  
  pUVar45 = (UObject *)0x0;
  local_2b8 = 0;
  this = FCollectionClothConstFacade::GetSkeletalMeshSoftObjectPathName(param_1);
  local_288 = this;
  this_00 = FCollectionClothConstFacade::GetSkeletalMeshSoftObjectPathName(param_2);
  bVar24 = true;
  local_2b0 = this_00;
  if ((this->AssetPath).PackageName == (FName)0x0) {
LAB_14dc40403:
    if (bVar24) {
      this = this_00;
    }
    FSoftObjectPath::operator=(param_3,this);
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
    return true;
  }
  if (((this_00->AssetPath).PackageName == (FName)0x0) ||
     (bVar24 = FSoftObjectPath::operator==(this,this_00), bVar24)) {
    bVar24 = (this->AssetPath).PackageName == (FName)0x0;
    goto LAB_14dc40403;
  }
  pUVar29 = FSoftObjectPath::TryLoad(this,(FUObjectSerializeContext *)0x0);
  if (pUVar29 == (UObject *)0x0) {
LAB_14dc3f948:
    pUVar29 = pUVar45;
  }
  else {
    pUVar30 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar28 = (int)pUVar30->_padding_;
    if ((*(int *)(*(longlong *)&pUVar29->field_0x10 + 0x38) < iVar28) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar29->field_0x10 + 0x30) + (longlong)iVar28 * 8) !=
        &pUVar30->_padding_)) goto LAB_14dc3f948;
  }
  pUVar31 = FSoftObjectPath::TryLoad(this_00,(FUObjectSerializeContext *)0x0);
  if (pUVar31 == (UObject *)0x0) {
LAB_14dc3f980:
    pUVar31 = pUVar45;
  }
  else {
    pUVar30 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar28 = (int)pUVar30->_padding_;
    if ((*(int *)(*(longlong *)&pUVar31->field_0x10 + 0x38) < iVar28) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar31->field_0x10 + 0x30) + (longlong)iVar28 * 8) !=
        &pUVar30->_padding_)) goto LAB_14dc3f980;
  }
  if ((pUVar29 == (UObject *)0x0) || (pUVar31 == (UObject *)0x0)) {
    if (param_6 != (FText *)0x0) {
      bVar24 = pUVar29 != (UObject *)0x0;
      if (bVar24) {
        pFVar40 = &local_140;
        pFVar34 = &local_130;
        this = local_2b0;
      }
      else {
        pFVar40 = &local_120;
        pFVar34 = &local_110;
      }
      pFVar34 = FSoftObjectPath::ToString(this,pFVar34);
      pFVar40 = FText::FromString(pFVar40,pFVar34);
      pFVar40 = FText::FText(&local_78,pFVar40);
      pFVar35 = FText::AsLocalizable_Advanced_LocText
                          (&local_150,L"ChaosClothAssetEngineTools",
                           L"IncompatibleSkeletalMeshesLoadFailureDetails",
                           L"Cloth collections failed to merge due to failing to load SkeletalMesh \"{0}\" to check compatibility."
                          );
      pFVar38 = FTextFormat::FTextFormat(&local_68,pFVar35,Default);
      local_220.Type = Text;
      FText::FText((FText *)&local_220.TextValue,pFVar40);
      if ((local_220.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar26)) {
        pcVar8 = (code *)swi(3);
        uVar25 = (*pcVar8)();
        return (bool)uVar25;
      }
      local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a0.ArrayNum = 1;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_2a0.AllocatorInstance,1,&local_2a0.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_2a0.AllocatorInstance.Data,&local_220,1);
      local_240.TextFormatData.Object = (pFVar38->TextFormatData).Object;
      local_240.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar38->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_240.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_240.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_240.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_230,&local_240,&local_2a0);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_2a0.AllocatorInstance.Data,local_2a0.ArrayNum);
      if ((FFormatArgumentValue *)local_2a0.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_2a0.AllocatorInstance.Data);
      }
      if (local_220.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_220.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar38->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar7 = (pFVar40->TextData).Reference;
      if (pIVar7 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar7 + 0x10))();
      }
      FText::operator=(param_6,&local_230);
      if (local_230.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_230.TextData.Reference + 0x10))();
      }
      if (local_150.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
      }
      if ((bVar24) && (local_140.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
      }
      if ((bVar24) && (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if ((!bVar24) && (local_120.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
      }
      if ((!bVar24) && (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  lVar32 = (**(code **)(*(longlong *)pUVar29 + 0x318))(pUVar29);
  local_258 = lVar32;
  local_250 = (**(code **)(*(longlong *)pUVar31 + 0x318))(pUVar31);
  local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290 = local_250;
  if (*(int *)(local_250 + 0x28) <= *(int *)(lVar32 + 0x28)) {
    local_290 = lVar32;
  }
  local_2c8.ArrayNum = 0;
  local_2c8.ArrayMax = 0;
  local_248 = local_2b0;
  if (*(int *)(local_250 + 0x28) <= *(int *)(lVar32 + 0x28)) {
    local_248 = this;
    lVar32 = local_250;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_2c8,*(int *)(lVar32 + 0x28),Default);
  dVar23 = __real_3f1a36e2e0000000;
  uVar22 = _UNK_15061cc8c;
  uVar21 = _UNK_15061cc88;
  uVar20 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_2b8 = local_2b8 & 0xffffff00;
  if (*(int *)(lVar32 + 0x28) < 1) {
LAB_14dc40100:
    local_260 = 0;
    (param_3->AssetPath).AssetName.ComparisonIndex = 0;
    (param_3->AssetPath).AssetName.Number = 0;
    (param_3->AssetPath).PackageName.ComparisonIndex = 0;
    (param_3->AssetPath).PackageName.Number = 0;
    FUtf8String::Reset(&param_3->SubPathString,0);
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
  }
  else {
    local_268 = 0;
    local_2a8 = 0;
    local_270 = 0;
    do {
      lVar48 = local_270;
      uVar44 = (uint)pUVar45;
      uVar46 = ~uVar44 >> 0x1f;
      uVar27 = 0;
      if ((int)uVar44 < *(int *)(lVar32 + 0x28)) {
        uVar27 = uVar46;
      }
      if ((uVar27 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar8 = (code *)swi(3);
        uVar25 = (*pcVar8)();
        return (bool)uVar25;
      }
      local_280 = 0;
      FVar5 = *(FName *)(lVar48 + *(longlong *)(lVar32 + 0x20));
      uVar27 = 0;
      if ((FVar5 == (FName)0x0) ||
         (puVar33 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                            ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                    *)(local_290 + 0x90),FVar5), puVar33 == (uint *)0x0)) {
LAB_14dc3ff82:
        if (param_6 != (FText *)0x0) {
          pFVar34 = FSoftObjectPath::ToString(local_248,&local_170);
          pFVar40 = FText::FromString(&local_c8,pFVar34);
          if ((int)uVar44 < *(int *)(lVar32 + 0x28)) {
            uVar27 = uVar46;
          }
          if ((uVar27 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar8 = (code *)swi(3);
            uVar25 = (*pcVar8)();
            return (bool)uVar25;
          }
          pFVar35 = FText::FromName(&local_b8,
                                    (FName *)(*(longlong *)(lVar32 + 0x20) +
                                             (longlong)(int)uVar44 * 0xc));
          pFVar34 = FSoftObjectPath::ToString(local_2b0,&local_180);
          pFVar36 = FText::FromString(local_58,pFVar34);
          pFVar34 = FSoftObjectPath::ToString(local_288,&local_190);
          pFVar37 = FText::FromString(&local_98,pFVar34);
          pFVar39 = FText::AsLocalizable_Advanced_LocText
                              (&local_1a0,L"ChaosClothAssetEngineTools",
                               L"IncompatibleSkeletalMeshesRefBoneInfoDetails",
                               L"Cloth collections failed to merge due to incompatible Skeletal Meshes, \"{0}\" and \"{1}\". Could not find bone \"{2}\" in \"{3}\"."
                              );
          pFVar38 = FTextFormat::FTextFormat(&local_88,pFVar39,Default);
          pFVar40 = FText::Format<FText,FText,FText,FText>
                              (&local_1b0,pFVar38,pFVar37,pFVar36,pFVar35,pFVar40);
          FText::operator=(param_6,pFVar40);
          if (local_1b0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
          }
          if (local_1a0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
          }
          if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data.AllocatorInstance.Data);
          }
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
LAB_14dc400ef:
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
        }
LAB_14dc400f9:
        bVar24 = false;
        goto LAB_14dc401b0;
      }
      uVar4 = *puVar33;
      if (uVar4 == 0xffffffff) goto LAB_14dc3ff82;
      uVar42 = uVar27;
      if ((int)uVar44 < *(int *)(lVar32 + 0x38)) {
        uVar42 = uVar46;
      }
      if ((uVar42 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar8 = (code *)swi(3);
        uVar25 = (*pcVar8)();
        return (bool)uVar25;
      }
      local_278 = *(longlong *)(lVar32 + 0x30);
      uVar41 = ~uVar4 >> 0x1f;
      uVar42 = uVar27;
      if ((int)uVar4 < *(int *)(local_290 + 0x38)) {
        uVar42 = uVar41;
      }
      if (uVar42 == 0) {
        uVar41 = 0x506106c8;
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar24) {
          pcVar8 = (code *)swi(3);
          uVar25 = (*pcVar8)();
          return (bool)uVar25;
        }
      }
      lVar43 = (longlong)(int)uVar4 * 0x60;
      lVar48 = *(longlong *)(local_290 + 0x30);
      pdVar1 = (double *)(local_2a8 + 0x20 + local_278);
      pdVar2 = (double *)(local_2a8 + 0x30 + local_278);
      local_100 = dVar23;
      pdVar3 = (double *)(lVar43 + 0x20 + lVar48);
      dVar14 = *pdVar1 - *pdVar3;
      dVar15 = pdVar1[1] - pdVar3[1];
      pdVar1 = (double *)(lVar43 + 0x30 + lVar48);
      dVar49 = *pdVar2 - *pdVar1;
      dVar50 = pdVar2[1] - pdVar1[1];
      lVar47 = -(ulonglong)
                (dVar23 < (double)CONCAT44(uVar22 & (uint)((ulonglong)dVar15 >> 0x20),
                                           uVar21 & SUB84(dVar15,0)));
      auVar12._8_4_ = (int)lVar47;
      auVar12._0_8_ =
           -(ulonglong)
            (dVar23 < (double)CONCAT44(uVar20 & (uint)((ulonglong)dVar14 >> 0x20),
                                       uVar19 & SUB84(dVar14,0)));
      auVar12._12_4_ = (int)((ulonglong)lVar47 >> 0x20);
      iVar28 = movmskpd((int)local_290,auVar12);
      lVar47 = -(ulonglong)
                (dVar23 < (double)CONCAT44(uVar22 & (uint)((ulonglong)dVar50 >> 0x20),
                                           uVar21 & SUB84(dVar50,0)));
      auVar16._8_4_ = (int)lVar47;
      auVar16._0_8_ =
           -(ulonglong)
            (dVar23 < (double)CONCAT44(uVar20 & (uint)((ulonglong)dVar49 >> 0x20),
                                       uVar19 & SUB84(dVar49,0)));
      auVar16._12_4_ = (int)((ulonglong)lVar47 >> 0x20);
      uVar42 = movmskpd(uVar41,auVar16);
      if ((uVar42 & 0x3fffffff) != 0 || iVar28 != 0) {
LAB_14dc3fe4e:
        if (param_6 != (FText *)0x0) {
          if ((int)uVar44 < *(int *)(lVar32 + 0x28)) {
            uVar27 = uVar46;
          }
          if ((uVar27 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar8 = (code *)swi(3);
            uVar25 = (*pcVar8)();
            return (bool)uVar25;
          }
          pFVar40 = FText::FromName(&local_f8,
                                    (FName *)(*(longlong *)(lVar32 + 0x20) +
                                             (longlong)(int)uVar44 * 0xc));
          pFVar34 = FSoftObjectPath::ToString(local_2b0,&local_1c0);
          pFVar35 = FText::FromString(&local_a8,pFVar34);
          pFVar34 = FSoftObjectPath::ToString(local_288,&local_1d0);
          pFVar36 = FText::FromString(&local_e8,pFVar34);
          pFVar37 = FText::AsLocalizable_Advanced_LocText
                              (&local_1e0,L"ChaosClothAssetEngineTools",
                               L"IncompatibleSkeletalMeshesRefBonePoseDetails",
                               L"Cloth collections failed to merge due to incompatible Skeletal Meshes, \"{0}\" and \"{1}\". RefBonePoses are mismatched for bone \"{2}\"."
                              );
          pFVar38 = FTextFormat::FTextFormat(&local_d8,pFVar37,Default);
          pFVar40 = FText::Format<FText,FText,FText>(&local_1f0,pFVar38,pFVar36,pFVar35,pFVar40);
          FText::operator=(param_6,pFVar40);
          if (local_1f0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
          }
          if (local_1e0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1e0.TextData.Reference + 0x10))();
          }
          local_170.Data.AllocatorInstance.Data = local_1c0.Data.AllocatorInstance.Data;
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
            local_170.Data.AllocatorInstance.Data = local_1c0.Data.AllocatorInstance.Data;
          }
          goto LAB_14dc400ef;
        }
        goto LAB_14dc400f9;
      }
      pdVar1 = (double *)(local_2a8 + 0x10 + local_278);
      dVar14 = *(double *)(local_2a8 + local_278) - *(double *)(lVar43 + lVar48);
      dVar15 = ((double *)(local_2a8 + local_278))[1] - ((double *)(lVar43 + lVar48))[1];
      pdVar2 = (double *)(lVar43 + 0x10 + lVar48);
      dVar49 = *pdVar1 - *pdVar2;
      dVar50 = pdVar1[1] - pdVar2[1];
      pdVar1 = (double *)(local_2a8 + 0x10 + local_278);
      dVar51 = *(double *)(local_2a8 + local_278) + *(double *)(lVar43 + lVar48);
      dVar52 = ((double *)(local_2a8 + local_278))[1] + ((double *)(lVar43 + lVar48))[1];
      pdVar2 = (double *)(lVar43 + 0x10 + lVar48);
      dVar53 = *pdVar1 + *pdVar2;
      dVar54 = pdVar1[1] + pdVar2[1];
      local_200 = dVar23;
      lVar47 = -(ulonglong)
                (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar22,
                                           SUB84(dVar15,0) & uVar21));
      auVar13._8_4_ = (int)lVar47;
      auVar13._0_8_ =
           -(ulonglong)
            (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar20,
                                       SUB84(dVar14,0) & uVar19));
      auVar13._12_4_ = (int)((ulonglong)lVar47 >> 0x20);
      uVar42 = movmskpd(iVar28,auVar13);
      lVar47 = -(ulonglong)
                (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar22,
                                           SUB84(dVar50,0) & uVar21));
      auVar9._8_4_ = (int)lVar47;
      auVar9._0_8_ = -(ulonglong)
                      (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) & uVar20,
                                                 SUB84(dVar49,0) & uVar19));
      auVar9._12_4_ = (int)((ulonglong)lVar47 >> 0x20);
      iVar28 = movmskpd(0,auVar9);
      uVar41 = iVar28 << 2 | uVar42;
      if (uVar41 != 0) {
        lVar47 = -(ulonglong)
                  (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar54 >> 0x20) & uVar22,
                                             SUB84(dVar54,0) & uVar21));
        auVar17._8_4_ = (int)lVar47;
        auVar17._0_8_ =
             -(ulonglong)
              (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar53 >> 0x20) & uVar20,
                                         SUB84(dVar53,0) & uVar19));
        auVar17._12_4_ = (int)((ulonglong)lVar47 >> 0x20);
        uVar41 = movmskpd(uVar41,auVar17);
        lVar47 = -(ulonglong)
                  (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar22,
                                             SUB84(dVar52,0) & uVar21));
        auVar10._8_4_ = (int)lVar47;
        auVar10._0_8_ =
             -(ulonglong)
              (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) & uVar20,
                                         SUB84(dVar51,0) & uVar19));
        auVar10._12_4_ = (int)((ulonglong)lVar47 >> 0x20);
        uVar42 = movmskpd(uVar42,auVar10);
        if ((uVar41 & 0x3fffffff) != 0 || uVar42 != 0) goto LAB_14dc3fe4e;
      }
      pdVar1 = (double *)(local_2a8 + 0x50 + local_278);
      pdVar2 = (double *)(lVar43 + 0x50 + lVar48);
      dVar49 = *pdVar1 - *pdVar2;
      dVar50 = pdVar1[1] - pdVar2[1];
      pdVar1 = (double *)(local_2a8 + 0x40 + local_278);
      pdVar2 = (double *)(lVar43 + 0x40 + lVar48);
      dVar14 = *pdVar1 - *pdVar2;
      dVar15 = pdVar1[1] - pdVar2[1];
      local_1f8 = dVar23;
      lVar48 = -(ulonglong)
                (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar22,
                                           SUB84(dVar50,0) & uVar21));
      auVar18._8_4_ = (int)lVar48;
      auVar18._0_8_ =
           -(ulonglong)
            (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) & uVar20,
                                       SUB84(dVar49,0) & uVar19));
      auVar18._12_4_ = (int)((ulonglong)lVar48 >> 0x20);
      uVar41 = movmskpd(0,auVar18);
      lVar48 = -(ulonglong)
                (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar22,
                                           SUB84(dVar15,0) & uVar21));
      auVar11._8_4_ = (int)lVar48;
      auVar11._0_8_ =
           -(ulonglong)
            (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar20,
                                       SUB84(dVar14,0) & uVar19));
      auVar11._12_4_ = (int)((ulonglong)lVar48 >> 0x20);
      iVar28 = movmskpd(uVar42,auVar11);
      if ((uVar41 & 0x3fffffff) != 0 || iVar28 != 0) goto LAB_14dc3fe4e;
      if ((int)uVar44 < local_2c8.ArrayNum) {
        uVar27 = uVar46;
      }
      if ((uVar27 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar8 = (code *)swi(3);
        uVar25 = (*pcVar8)();
        return (bool)uVar25;
      }
      *(uint *)(local_2c8.AllocatorInstance.Data + local_268) = uVar4;
      local_2b8 = local_2b8 & 0xff;
      if (uVar44 != uVar4) {
        local_2b8 = 1;
      }
      local_270 = local_270 + 0xc;
      local_2a8 = local_2a8 + 0x60;
      local_268 = local_268 + 4;
      pUVar45 = (UObject *)(ulonglong)(uVar44 + 1);
    } while ((int)(uVar44 + 1) < *(int *)(lVar32 + 0x28));
    if ((char)local_2b8 == '\0') goto LAB_14dc40100;
    if (lVar32 != local_258) {
      if ((lVar32 != local_250) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("&RemapRefSkeleton == &RefSkeleton2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothEngineTools.cpp"
                              ,0x182,L""), bVar24)) {
        pcVar8 = (code *)swi(3);
        uVar25 = (*pcVar8)();
        return (bool)uVar25;
      }
      FSoftObjectPath::operator=(param_3,local_2b0);
      param_4->ArrayNum = 0;
      if (param_4->ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
      }
      if (param_5 != &local_2c8) {
        pFVar6 = (param_5->AllocatorInstance).Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (param_5->AllocatorInstance).Data = local_2c8.AllocatorInstance.Data;
        param_5->ArrayNum = local_2c8.ArrayNum;
        param_5->ArrayMax = local_2c8.ArrayMax;
        local_2c8.ArrayNum = 0;
        local_2c8.ArrayMax = 0;
        local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      goto LAB_14dc40179;
    }
    FSoftObjectPath::operator=(param_3,local_288);
    if (param_4 != &local_2c8) {
      pFVar6 = (param_4->AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (param_4->AllocatorInstance).Data = local_2c8.AllocatorInstance.Data;
      param_4->ArrayNum = local_2c8.ArrayNum;
      param_4->ArrayMax = local_2c8.ArrayMax;
      local_2c8.ArrayNum = 0;
      local_2c8.ArrayMax = 0;
      local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
  }
LAB_14dc40179:
  if (param_6 != (FText *)0x0) {
    pFVar40 = FText::FText(&local_160);
    FText::operator=(param_6,pFVar40);
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
  }
  bVar24 = true;
LAB_14dc401b0:
  if (local_2c8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return bVar24;
  }
  FMemory::Free(local_2c8.AllocatorInstance.Data);
  return bVar24;
}

// CopySimMeshToSimAccessoryMesh @ 14dc41650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
UE::Chaos::ClothAsset::FClothEngineTools::CopySimMeshToSimAccessoryMesh
          (FName *param_1,FCollectionClothFacade *param_2,FCollectionClothConstFacade *param_3,
          bool param_4,FText *param_5)

{
  FName *pFVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  TArrayView<UE::Math::TVector<float>,int> *pTVar13;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar14;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar15;
  TArrayView<int,int> *pTVar16;
  ulonglong uVar17;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar18;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar19;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar20;
  ForAnyElementType FVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  TVector<float> *pTVar27;
  uint uVar28;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar29;
  TVector<float> *pTVar30;
  FScriptContainerElement *pFVar31;
  ulonglong uVar32;
  uint *puVar33;
  ForElementType<unsigned_int> FVar34;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar35;
  FScriptContainerElement *pFVar36;
  int *piVar37;
  uint uVar38;
  FCollectionClothConstFacade *pFVar39;
  undefined1 auStackY_5a8 [32];
  undefined1 local_558 [4];
  uint local_554;
  int local_550;
  uint local_54c;
  uint local_548;
  ForAnyElementType local_540;
  undefined8 local_538;
  ForAnyElementType local_530;
  undefined8 local_528;
  ForAnyElementType local_520;
  int local_518;
  int local_514;
  TVector<float> *local_510;
  ForAnyElementType local_508;
  undefined8 local_500;
  uint local_4f8;
  ulonglong local_4f0;
  FCollectionClothConstFacade *local_4e8;
  ForAnyElementType local_4e0;
  int local_4d8;
  int local_4d4;
  TArray<int,TSizedDefaultAllocator<32>_> *local_4d0;
  ForAnyElementType local_4c8;
  int local_4c0;
  int local_4bc;
  ForAnyElementType local_4b8;
  int local_4b0;
  int local_4ac;
  ForAnyElementType local_4a8;
  int local_4a0;
  int local_49c;
  FCollectionClothConstFacade *local_498;
  int local_490 [2];
  FName *local_488;
  uint local_480;
  uint uStack_47c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_478;
  undefined4 local_470;
  uint uStack_46c;
  uint uStack_468;
  undefined4 uStack_464;
  TArray<int,TSizedDefaultAllocator<32>_> local_460;
  TArray<int,TSizedDefaultAllocator<32>_> local_450;
  FName local_440;
  FName local_438;
  FName local_430;
  FName local_428;
  FName local_420;
  FName local_418;
  TArrayView<int_const_,int> local_410;
  FSoftObjectPath local_400;
  undefined4 local_3e0;
  int *local_3d8;
  TVector<float> *local_3d0;
  FScriptContainerElement *local_3c8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_3c0;
  int local_3b0;
  longlong *local_3a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3a0;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_380;
  TArray<int,TSizedDefaultAllocator<32>_> *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_358;
  TArrayView<FName,int> local_348;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_338;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_328;
  TArrayView<UE::Math::TVector<float>_const_,int> local_318;
  TArrayView<UE::Math::TVector<float>_const_,int> local_308;
  TArrayView<FName,int> local_2f8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_2e8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_2d8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_2c8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_2b8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_2a8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_298;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_288;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_278;
  TArrayView<FName,int> local_268;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_258;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_248;
  TArrayView<UE::Math::TVector<float>_const_,int> local_238;
  TArrayView<UE::Math::TVector<float>_const_,int> local_228;
  TArrayView<int_const_,int> local_218;
  TArrayView<int_const_,int> local_208;
  TArrayView<UE::Math::TVector<float>_const_,int> local_1f8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_1e8;
  undefined1 local_1d8 [24];
  int local_1c0;
  undefined1 local_1b8 [24];
  int local_1a0;
  undefined1 local_198 [24];
  int local_180;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_178;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_168;
  TArrayView<int,int> local_158;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_148;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_138;
  TArrayView<UE::Math::TVector<float>_const_,int> local_128;
  TArrayView<UE::Math::TVector<float>_const_,int> local_118;
  TArrayView<UE::Math::TVector<float>,int> local_108;
  TArrayView<UE::Math::TVector<float>,int> local_f8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_e8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_d8;
  TArrayView<UE::Math::TVector<float>,int> local_c8;
  TArrayView<UE::Math::TVector<float>,int> local_b8;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  pFVar31 = (FScriptContainerElement *)0x0;
  local_400.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_400.AssetPath.PackageName.Number = 0;
  local_400.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_400.AssetPath.AssetName.Number = 0;
  local_400.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_400.SubPathString.Data.ArrayNum = 0;
  local_400.SubPathString.Data.ArrayMax = 0;
  local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_450.ArrayNum = 0;
  local_450.ArrayMax = 0;
  local_460.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_460.ArrayNum = 0;
  local_460.ArrayMax = 0;
  local_4e8 = param_3;
  local_498 = (FCollectionClothConstFacade *)param_2;
  local_488 = param_1;
  bVar7 = CalculateRemappedBoneIndicesIfCompatible
                    ((FCollectionClothConstFacade *)param_2,param_3,&local_400,&local_450,&local_460
                     ,param_5);
  if (!bVar7) {
LAB_14dc416f6:
    iVar8 = -1;
    goto LAB_14dc43215;
  }
  if (local_450.ArrayNum != 0) {
    FCollectionClothFacade::SetSkeletalMeshSoftObjectPathName(param_2,&local_400);
    RemapBoneIndices(param_2,&local_450,0,0);
  }
  uVar12 = 0;
  if (param_4) {
    bVar7 = FCollectionClothConstFacade::IsValid((FCollectionClothConstFacade *)param_2,Import);
    if ((!bVar7) || (bVar7 = FCollectionClothConstFacade::IsValid(param_3,Import), !bVar7))
    goto LAB_14dc416f6;
    pTVar13 = FCollectionClothFacade::GetSimPosition3D(param_2,&local_c8);
    local_4b8.Data = (FScriptContainerElement *)0x0;
    local_4b0 = pTVar13->ArrayNum;
    lVar26 = (longlong)local_4b0;
    pTVar30 = pTVar13->DataPtr;
    if (local_4b0 == 0) {
      local_4ac = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_4b0,0,&local_4b8,local_4b0,&local_4ac);
      memcpy(local_4b8.Data,pTVar30,lVar26 * 0xc);
    }
    pTVar13 = FCollectionClothFacade::GetSimNormal(param_2,&local_b8);
    local_4a8.Data = (FScriptContainerElement *)0x0;
    local_4a0 = pTVar13->ArrayNum;
    lVar26 = (longlong)local_4a0;
    pTVar30 = pTVar13->DataPtr;
    if (local_4a0 == 0) {
      local_49c = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_4a0,0,&local_4a8,local_4a0,&local_49c);
      memcpy(local_4a8.Data,pTVar30,lVar26 * 0xc);
    }
    pTVar14 = FCollectionClothFacade::GetSimBoneIndices(param_2,&local_178);
    local_4e0.Data = (FScriptContainerElement *)0x0;
    iVar8 = pTVar14->ArrayNum;
    pTVar35 = pTVar14->DataPtr;
    local_4d8 = iVar8;
    if (iVar8 == 0) {
      local_4d4 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,0,&local_4e0,iVar8,&local_4d4);
      ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
                (local_4e0.Data,pTVar35,iVar8);
    }
    pTVar15 = FCollectionClothFacade::GetSimBoneWeights(param_2,&local_168);
    local_4c8.Data = (FScriptContainerElement *)0x0;
    iVar8 = pTVar15->ArrayNum;
    pTVar29 = pTVar15->DataPtr;
    local_4c0 = iVar8;
    if (iVar8 == 0) {
      local_4bc = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,0,&local_4c8,iVar8,&local_4bc);
      ConstructItems<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,int>
                (local_4c8.Data,pTVar29,iVar8);
    }
    pTVar16 = FCollectionClothFacade::GetSimImportVertexID(param_2,&local_158);
    piVar37 = pTVar16->DataPtr;
    uVar10 = pTVar16->ArrayNum;
    FCollectionClothConstFacade::GetSimImportVertexID(param_3,&local_410);
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    uVar25 = 0xffffffff;
    local_78 = -1;
    local_a8._8_8_ = 0;
    local_88 = (ForElementType<unsigned_int>)0x0;
    local_80 = 0;
    local_7c = 0x80;
    local_74 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    if (uVar10 != 0) {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
      }
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_a8,uVar10);
      uVar24 = 1;
      if (3 < uVar10) {
        uVar32 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        local_3e0 = (undefined4)lVar26;
        uVar24 = 1 << ((byte)lVar26 & 0x1f);
      }
      if ((local_60 == 0) || ((int)local_60 < (int)uVar24)) {
        local_60 = uVar24;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
        }
        if (uVar24 != 0) {
          uVar9 = uVar24;
          if (uVar24 < 2) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar9 = 0;
              goto LAB_14dc419d5;
            }
          }
          else {
LAB_14dc419d5:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar9,4);
          }
          if (0 < (int)uVar24) {
            uVar32 = (ulonglong)uVar24;
            pFVar22 = pFVar31;
            do {
              FVar21.Data = local_70;
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                FVar21.Data = local_68.Data;
              }
              uVar17 = (longlong)(int)uVar24 - 1U & (ulonglong)pFVar22;
              pFVar22 = pFVar22 + 1;
              *(undefined4 *)(FVar21.Data + uVar17 * 4) = 0xffffffff;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
        }
        if (local_60 != 0) {
          pTStack_478 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
          local_480 = 0;
          uStack_47c = 1;
          uStack_46c = 0;
          uStack_468 = 0;
          pFVar22 = pFVar31;
          if (local_80 != 0) {
            FVar34 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
            if (local_88 != (ForElementType<unsigned_int>)0x0) {
              FVar34 = local_88;
            }
            uVar24 = *(uint *)FVar34;
            pFVar36 = pFVar31;
            while (uVar24 == 0) {
              uStack_468 = (int)pFVar36 + 0x20;
              pFVar36 = (FScriptContainerElement *)(ulonglong)uStack_468;
              iVar8 = (int)pFVar22;
              local_480 = iVar8 + 1;
              pFVar22 = (FScriptContainerElement *)(ulonglong)local_480;
              if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_480) goto LAB_14dc41af0;
              uVar24 = ((uint *)((longlong)FVar34 + 4))[iVar8];
            }
            uStack_47c = -uVar24 & uVar24;
            uVar32 = (ulonglong)uStack_47c * 2 + 1;
            lVar26 = 0x3f;
            if (uVar32 != 0) {
              for (; uVar32 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            local_3b0 = (int)lVar26;
            uStack_46c = (uStack_468 - 1) + local_3b0;
            pFVar22 = (FScriptContainerElement *)(ulonglong)uStack_46c;
            if ((int)local_80 < (int)uStack_46c) {
LAB_14dc41af0:
              pFVar22 = (FScriptContainerElement *)(ulonglong)local_80;
              uStack_46c = local_80;
            }
          }
          local_470 = 0xffffffff;
          local_3a8 = (longlong *)local_a8;
          local_3a0._padding_ = CONCAT44(uStack_47c,local_480);
          local_3a0.CurrentBitIndex = uStack_46c;
          local_3a0.UnvisitedBitMask = 0xffffffff;
          local_3a0._28_4_ = uStack_464;
          local_3a0.BaseBitIndex = uStack_468;
          local_3a0.Array = pTStack_478;
          if ((int)pFVar22 < (int)local_80) {
            do {
              puVar33 = (uint *)((longlong)(int)pFVar22 * 0x20 + *local_3a8);
              uVar24 = local_60 - 1 & *puVar33;
              puVar33[7] = uVar24;
              FVar21.Data = local_70;
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                FVar21.Data = local_68.Data;
              }
              uVar32 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar24;
              puVar33[6] = *(uint *)(FVar21.Data + uVar32 * 4);
              *(int *)(FVar21.Data + uVar32 * 4) = (int)pFVar22;
              local_3a0.UnvisitedBitMask = local_3a0.UnvisitedBitMask & ~local_3a0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3a0);
              pFVar22 = (FScriptContainerElement *)(ulonglong)(uint)local_3a0.CurrentBitIndex;
            } while (local_3a0.CurrentBitIndex < (local_3a0.Array)->NumBits);
          }
        }
      }
    }
    local_554 = 0;
    uVar24 = 0;
    pFVar22 = pFVar31;
    if (0 < (int)uVar10) {
      do {
        uVar28 = (uint)pFVar22;
        uVar9 = uVar24;
        if ((int)uVar28 < (int)uVar10) {
          uVar9 = ~uVar28 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          iVar8 = (*pcVar6)();
          return iVar8;
        }
        uVar9 = piVar37[(int)uVar28];
        if (local_a8._8_4_ != local_74) {
          FVar21.Data = local_70;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FVar21.Data = local_68.Data;
          }
          uVar38 = *(uint *)(FVar21.Data + (ulonglong)(local_60 - 1 & uVar9) * 4);
          while (uVar38 != 0xffffffff) {
            pFVar22 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)uVar38 * 0x20);
            if (*(uint *)pFVar22 == uVar9) {
              if (pFVar22 != (FScriptContainerElement *)0x0) goto LAB_14dc41ca4;
              break;
            }
            uVar38 = *(uint *)(pFVar22 + 0x18);
          }
        }
        local_3d8 = piVar37 + (int)uVar28;
        TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                  ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)local_a8,(uint)local_490,(TKeyInitializer<int_const_&> *)(ulonglong)uVar9,
                   (bool *)&local_3d8);
        pFVar22 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)local_490[0] * 0x20);
LAB_14dc41ca4:
        if (((*(uint **)(pFVar22 + 8) <= &local_554) &&
            (&local_554 < *(uint **)(pFVar22 + 8) + (int)*(uint *)(pFVar22 + 0x14))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          iVar8 = (*pcVar6)();
          return iVar8;
        }
        uVar9 = *(uint *)(pFVar22 + 0x10);
        if (uVar9 == *(uint *)(pFVar22 + 0x14)) {
          uVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)(pFVar22 + 8),(int *)(pFVar22 + 0x14));
        }
        *(uint *)(pFVar22 + 0x10) = uVar9 + 1;
                    /* WARNING: Load size is inaccurate */
        *(uint *)(pFVar22[8] + (longlong)(int)uVar9 * 4) = local_554;
        local_554 = local_554 + 1;
        pFVar22 = (FScriptContainerElement *)(ulonglong)local_554;
      } while ((int)local_554 < (int)uVar10);
    }
    FCollectionClothConstFacade::GetSimVertex3DLookup(local_498,&local_208);
    FCollectionClothConstFacade::GetSimVertex3DLookup(param_3,&local_218);
    FCollectionClothConstFacade::GetSimPosition3D(param_3,&local_3c0);
    FCollectionClothConstFacade::GetSimNormal(param_3,&local_1f8);
    FCollectionClothConstFacade::GetSimBoneIndices(param_3,&local_380);
    FCollectionClothConstFacade::GetSimBoneWeights(param_3,&local_358);
    local_548 = 0;
    if (0 < local_410.ArrayNum) {
      local_4d0 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      pFVar22 = pFVar31;
      do {
        pTVar35 = local_4d0;
        uVar9 = (uint)pFVar22;
        uVar10 = uVar24;
        if ((int)uVar9 < local_218.ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          iVar8 = (*pcVar6)();
          return iVar8;
        }
        local_550 = *(int *)((longlong)local_218.DataPtr + (longlong)pTVar35);
        uVar32 = (ulonglong)local_550;
        if ((-1 < local_550) && (local_550 < local_3c0.ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar9 < local_410.ArrayNum) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            iVar8 = (*pcVar6)();
            return iVar8;
          }
          uVar10 = *(uint *)((longlong)&(pTVar35->AllocatorInstance).Data +
                            (longlong)local_410.DataPtr);
          if (local_a8._8_4_ != local_74) {
            FVar21.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar21.Data = local_68.Data;
            }
            uVar28 = *(uint *)(FVar21.Data + (ulonglong)(local_60 - 1 & uVar10) * 4);
            while (uVar28 != 0xffffffff) {
              pFVar22 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)uVar28 * 0x20);
              if (*(uint *)pFVar22 == uVar10) {
                local_3c8 = pFVar22 + 8;
                if (pFVar22 == (FScriptContainerElement *)0x0) {
                  local_3c8 = pFVar31;
                }
                if (local_3c8 != (FScriptContainerElement *)0x0) {
                  local_4f8 = *(uint *)(local_3c8 + 8);
                  uVar23 = (ulonglong)(int)local_4f8;
                  pTVar27 = *(TVector<float> **)local_3c8;
                  pTVar30 = (TVector<float> *)((pTVar27->field0_0x0).XYZ + uVar23);
                  uVar17 = uVar32;
                  local_4f0 = uVar32;
                  local_3d0 = pTVar30;
                  while( true ) {
                    local_510 = pTVar27;
                    if (*(uint *)(local_3c8 + 8) != (uint)uVar23) {
                      local_558[0] = 0;
                      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(local_558);
                    }
                    pTVar35 = local_4d0;
                    uVar9 = local_548;
                    if (pTVar27 == pTVar30) break;
                    uVar10 = *(uint *)&pTVar27->field0_0x0;
                    uVar9 = uVar24;
                    if ((int)uVar10 < local_208.ArrayNum) {
                      uVar9 = ~uVar10 >> 0x1f;
                    }
                    if ((uVar9 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                           ,0x14f,
                                           L"Array index out of bounds: %lld from an array of size %lld"
                                          ), bVar7)) {
                      pcVar6 = (code *)swi(3);
                      iVar8 = (*pcVar6)();
                      return iVar8;
                    }
                    uVar10 = local_208.DataPtr[(int)uVar10];
                    if ((-1 < (int)uVar10) && ((int)uVar10 < local_4b0)) {
                      uVar28 = ~(uint)uVar17 >> 0x1f;
                      uVar9 = uVar24;
                      if ((int)(uint)uVar17 < local_3c0.ArrayNum) {
                        uVar9 = uVar28;
                      }
                      if ((uVar9 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                             ,0x14f,
                                             L"Array index out of bounds: %lld from an array of size %lld"
                                            ), bVar7)) {
                        pcVar6 = (code *)swi(3);
                        iVar8 = (*pcVar6)();
                        return iVar8;
                      }
                      local_4e8 = (FCollectionClothConstFacade *)(uVar32 * 0xc);
                      uVar38 = ~uVar10 >> 0x1f;
                      uVar2 = *(undefined8 *)&local_3c0.DataPtr[uVar32].field0_0x0;
                      fVar3 = local_3c0.DataPtr[uVar32].field0_0x0._s_0.Z;
                      uVar9 = uVar24;
                      if ((int)uVar10 < local_4b0) {
                        uVar9 = uVar38;
                      }
                      local_54c = uVar38;
                      if ((uVar9 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar6 = (code *)swi(3);
                        iVar8 = (*pcVar6)();
                        return iVar8;
                      }
                      lVar26 = (longlong)(int)uVar10 * 0xc;
                      *(undefined8 *)(local_4b8.Data + lVar26) = uVar2;
                      *(float *)(local_4b8.Data + lVar26 + 8) = fVar3;
                      uVar9 = uVar24;
                      if (local_550 < local_1f8.ArrayNum) {
                        uVar9 = uVar28;
                      }
                      if ((uVar9 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                             ,0x14f,
                                             L"Array index out of bounds: %lld from an array of size %lld"
                                            ), bVar7)) {
                        pcVar6 = (code *)swi(3);
                        iVar8 = (*pcVar6)();
                        return iVar8;
                      }
                      uVar2 = *(undefined8 *)
                               ((longlong)&(local_1f8.DataPtr)->field0_0x0 +
                               (longlong)&local_4e8->_padding_);
                      uVar4 = *(undefined4 *)
                               ((longlong)&(local_1f8.DataPtr)->field0_0x0 +
                               (longlong)&(local_4e8->ClothCollection).Object);
                      uVar9 = uVar24;
                      if ((int)uVar10 < local_4a0) {
                        uVar9 = uVar38;
                      }
                      if ((uVar9 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar6 = (code *)swi(3);
                        iVar8 = (*pcVar6)();
                        return iVar8;
                      }
                      *(undefined8 *)(local_4a8.Data + lVar26) = uVar2;
                      *(undefined4 *)(local_4a8.Data + lVar26 + 8) = uVar4;
                      uVar9 = uVar24;
                      if (local_550 < local_380.ArrayNum) {
                        uVar9 = uVar28;
                      }
                      if ((uVar9 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                             ,0x14f,
                                             L"Array index out of bounds: %lld from an array of size %lld"
                                            ), bVar7)) {
                        pcVar6 = (code *)swi(3);
                        iVar8 = (*pcVar6)();
                        return iVar8;
                      }
                      uVar32 = local_4f0;
                      pTVar35 = local_380.DataPtr + local_4f0;
                      uVar9 = uVar24;
                      if ((int)uVar10 < local_4d8) {
                        uVar9 = local_54c;
                      }
                      if ((uVar9 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar6 = (code *)swi(3);
                        iVar8 = (*pcVar6)();
                        return iVar8;
                      }
                      lVar26 = (longlong)(int)uVar10 * 0x10;
                      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                                 (local_4e0.Data + lVar26),pTVar35);
                      uVar9 = local_54c;
                      if (local_460.ArrayNum != 0) {
                        uVar38 = uVar12;
                        if ((int)uVar10 < local_4d8) {
                          uVar38 = local_54c;
                        }
                        if ((uVar38 == 0) &&
                           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar7)) {
                          pcVar6 = (code *)swi(3);
                          iVar8 = (*pcVar6)();
                          return iVar8;
                        }
                        local_368 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                                    (local_4e0.Data + lVar26);
                        uStack_360 = 1;
                        local_1e8._12_4_ = uStack_35c;
                        local_1e8.ArrayNum = 1;
                        local_1e8.DataPtr = local_368;
                        ClothAsset::Private::RemapBoneIndices(&local_1e8,&local_460);
                      }
                      uVar38 = uVar12;
                      if (local_550 < local_358.ArrayNum) {
                        uVar38 = uVar28;
                      }
                      if ((uVar38 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                             ,0x14f,
                                             L"Array index out of bounds: %lld from an array of size %lld"
                                            ), bVar7)) {
                        pcVar6 = (code *)swi(3);
                        iVar8 = (*pcVar6)();
                        return iVar8;
                      }
                      pTVar29 = local_358.DataPtr + uVar32;
                      uVar28 = uVar12;
                      if ((int)uVar10 < local_4c0) {
                        uVar28 = uVar9;
                      }
                      if ((uVar28 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar6 = (code *)swi(3);
                        iVar8 = (*pcVar6)();
                        return iVar8;
                      }
                      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                                ((TArray<float,TSizedDefaultAllocator<32>_> *)
                                 (local_4c8.Data + lVar26),pTVar29);
                      uVar17 = local_4f0 & 0xffffffff;
                      pTVar30 = local_3d0;
                      uVar32 = local_4f0;
                    }
                    pTVar27 = (TVector<float> *)((longlong)&local_510->field0_0x0 + 4);
                    uVar23 = (ulonglong)local_4f8;
                  }
                }
                break;
              }
              uVar28 = *(uint *)(pFVar22 + 0x18);
            }
          }
        }
        local_548 = uVar9 + 1;
        pFVar22 = (FScriptContainerElement *)(ulonglong)local_548;
        local_4d0 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                    ((longlong)&(pTVar35->AllocatorInstance).Data + 4);
        param_1 = local_488;
      } while ((int)local_548 < local_410.ArrayNum);
    }
    pFVar39 = local_498;
    iVar8 = FCollectionClothFacade::AddSimAccessoryMesh((FCollectionClothFacade *)local_498);
    FCollectionClothFacade::GetSimAccessoryMesh
              ((FCollectionClothFacade *)pFVar39,(FCollectionClothSimAccessoryMeshFacade *)local_1d8
               ,iVar8);
    local_338.ArrayNum = local_4c0;
    local_338.DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)local_4c8.Data;
    if ((local_4c0 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
    iVar8 = local_4d8;
    local_328.DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)local_4e0.Data;
    if ((local_4d8 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
    iVar11 = local_4a0;
    local_328.ArrayNum = iVar8;
    local_318.DataPtr = (TVector<float> *)local_4a8.Data;
    if ((local_4a0 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
    iVar8 = local_4b0;
    local_318.ArrayNum = iVar11;
    local_308.DataPtr = (TVector<float> *)local_4b8.Data;
    if ((local_4b0 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
    local_308.ArrayNum = iVar8;
    bVar7 = false;
    FCollectionClothFacade::GetSimAccessoryMeshName((FCollectionClothFacade *)pFVar39,&local_348);
    pFVar1 = local_348.DataPtr + local_348.ArrayNum;
    if (local_348.DataPtr == pFVar1) {
LAB_14dc424fe:
      local_420 = *param_1;
    }
    else {
      do {
        uVar12 = uVar25;
        if ((((local_348.DataPtr)->ComparisonIndex).Value == (param_1->ComparisonIndex).Value) &&
           (uVar12 = (local_348.DataPtr)->Number, (int)(local_348.DataPtr)->Number < (int)uVar25)) {
          uVar12 = uVar25;
        }
        uVar25 = uVar12;
        if ((bVar7) || (*local_348.DataPtr == *param_1)) {
          bVar7 = true;
        }
        local_348.DataPtr = local_348.DataPtr + 1;
      } while (local_348.DataPtr != pFVar1);
      if (!bVar7) goto LAB_14dc424fe;
      local_428.ComparisonIndex = (*param_1).ComparisonIndex;
      local_428.Number = uVar25 + 1;
      local_420 = local_428;
    }
    FCollectionClothSimAccessoryMeshFacade::Initialize
              ((FCollectionClothSimAccessoryMeshFacade *)local_1d8,&local_420,&local_308,&local_318,
               &local_328,&local_338);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1d8._16_8_);
    local_60 = 0;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
              ((TArray<float,TSizedDefaultAllocator<32>_> *)local_4c8.Data,local_4c0);
    if ((TArray<float,TSizedDefaultAllocator<32>_> *)local_4c8.Data !=
        (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_4c8.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4e0.Data,local_4d8);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4e0.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_4e0.Data);
    }
    FVar21.Data = local_4b8.Data;
    if (local_4a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.Data);
      FVar21.Data = local_4b8.Data;
    }
  }
  else {
    iVar8 = FCollectionClothConstFacade::GetNumSimVertices3D(param_3);
    iVar11 = FCollectionClothConstFacade::GetNumSimVertices3D
                       ((FCollectionClothConstFacade *)param_2);
    uVar10 = 0;
    if (iVar11 <= iVar8) {
      uVar24 = FCollectionClothConstFacade::GetNumSimVertices3D
                         ((FCollectionClothConstFacade *)param_2);
      iVar8 = FCollectionClothFacade::AddSimAccessoryMesh(param_2);
      FCollectionClothFacade::GetSimAccessoryMesh
                (param_2,(FCollectionClothSimAccessoryMeshFacade *)local_1b8,iVar8);
      pTVar18 = FCollectionClothConstFacade::GetSimBoneWeights(param_3,&local_148);
      local_2e8.DataPtr = pTVar18->DataPtr;
      uVar25 = pTVar18->ArrayNum;
      if ((int)uVar24 < pTVar18->ArrayNum) {
        uVar25 = uVar24;
      }
      local_2e8.ArrayNum = uVar12;
      if (0 < (int)uVar25) {
        local_2e8.ArrayNum = uVar25;
      }
      if ((local_2e8.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
      pTVar19 = FCollectionClothConstFacade::GetSimBoneIndices(param_3,&local_138);
      local_2d8.DataPtr = pTVar19->DataPtr;
      uVar25 = pTVar19->ArrayNum;
      if ((int)uVar24 < pTVar19->ArrayNum) {
        uVar25 = uVar24;
      }
      local_2d8.ArrayNum = uVar10;
      if (0 < (int)uVar25) {
        local_2d8.ArrayNum = uVar25;
      }
      if ((local_2d8.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
      pTVar20 = FCollectionClothConstFacade::GetSimNormal(param_3,&local_128);
      local_2c8.DataPtr = pTVar20->DataPtr;
      uVar25 = pTVar20->ArrayNum;
      if ((int)uVar24 < pTVar20->ArrayNum) {
        uVar25 = uVar24;
      }
      local_2c8.ArrayNum = uVar10;
      if (0 < (int)uVar25) {
        local_2c8.ArrayNum = uVar25;
      }
      if ((local_2c8.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
      pTVar20 = FCollectionClothConstFacade::GetSimPosition3D(param_3,&local_118);
      local_2b8.DataPtr = pTVar20->DataPtr;
      uVar10 = pTVar20->ArrayNum;
      if ((int)uVar24 < pTVar20->ArrayNum) {
        uVar10 = uVar24;
      }
      local_2b8.ArrayNum = uVar12;
      if (0 < (int)uVar10) {
        local_2b8.ArrayNum = uVar10;
      }
      if ((local_2b8.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
      uVar12 = 0xffffffff;
      bVar7 = false;
      FCollectionClothFacade::GetSimAccessoryMeshName(param_2,&local_2f8);
      pFVar1 = local_2f8.DataPtr + local_2f8.ArrayNum;
      if (local_2f8.DataPtr == pFVar1) {
LAB_14dc427d8:
        local_440 = *param_1;
      }
      else {
        do {
          uVar10 = uVar12;
          if ((((local_2f8.DataPtr)->ComparisonIndex).Value == (param_1->ComparisonIndex).Value) &&
             (uVar10 = (local_2f8.DataPtr)->Number, (int)(local_2f8.DataPtr)->Number < (int)uVar12))
          {
            uVar10 = uVar12;
          }
          uVar12 = uVar10;
          if ((bVar7) || (*local_2f8.DataPtr == *param_1)) {
            bVar7 = true;
          }
          local_2f8.DataPtr = local_2f8.DataPtr + 1;
        } while (local_2f8.DataPtr != pFVar1);
        if (!bVar7) goto LAB_14dc427d8;
        local_418.ComparisonIndex = (*param_1).ComparisonIndex;
        local_418.Number = uVar12 + 1;
        local_440 = local_418;
      }
      FCollectionClothSimAccessoryMeshFacade::Initialize
                ((FCollectionClothSimAccessoryMeshFacade *)local_1b8,&local_440,&local_2b8,
                 &local_2c8,&local_2d8,&local_2e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1b8._16_8_);
      iVar8 = local_1a0;
      goto LAB_14dc43215;
    }
    uVar12 = FCollectionClothConstFacade::GetNumSimVertices3D
                       ((FCollectionClothConstFacade *)param_2);
    local_518 = 0;
    local_514 = 0;
    local_508.Data = (FScriptContainerElement *)0x0;
    local_500 = 0;
    local_520.Data = (FScriptContainerElement *)0x0;
    local_540.Data = (FScriptContainerElement *)0x0;
    local_538 = 0;
    local_530.Data = (FScriptContainerElement *)0x0;
    local_528 = 0;
    local_548 = uVar12;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if (0 < (int)uVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar12,&local_508,0,(int *)((longlong)&local_500 + 4));
    }
    if (local_514 < (int)uVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar12,&local_520,local_518,&local_514);
    }
    if (local_538._4_4_ < (int)uVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar12,&local_540,(int)local_538,(int *)((longlong)&local_538 + 4));
    }
    if (local_528._4_4_ < (int)uVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar12,&local_530,(int)local_528,(int *)((longlong)&local_528 + 4));
    }
    FCollectionClothConstFacade::GetSimPosition3D(param_3,&local_2a8);
    FCollectionClothConstFacade::GetSimNormal(param_3,&local_298);
    FCollectionClothConstFacade::GetSimBoneIndices(param_3,&local_288);
    FCollectionClothConstFacade::GetSimBoneWeights(param_3,&local_278);
    iVar8 = FCollectionClothConstFacade::GetNumSimVertices3D(param_3);
    if (0 < iVar8) {
      local_510 = (TVector<float> *)0x0;
      pFVar22 = pFVar31;
      pFVar36 = pFVar31;
      do {
        uVar25 = (uint)pFVar31;
        uVar12 = uVar10;
        if ((int)uVar25 < local_2a8.ArrayNum) {
          uVar12 = ~uVar25 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          iVar8 = (*pcVar6)();
          return iVar8;
        }
        pTVar30 = local_2a8.DataPtr;
        iVar8 = (int)local_500;
        if ((int)local_500 == local_500._4_4_) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&local_508,(int *)((longlong)&local_500 + 4));
        }
        local_500 = CONCAT44(local_500._4_4_,iVar8 + 1);
        *(undefined8 *)(local_508.Data + (longlong)iVar8 * 0xc) =
             *(undefined8 *)(pFVar36 + (longlong)&pTVar30->field0_0x0);
        *(undefined4 *)(local_508.Data + (longlong)iVar8 * 0xc + 8) =
             *(undefined4 *)((undefined1 *)((longlong)&pTVar30->field0_0x0 + 8) + (longlong)pFVar36)
        ;
        uVar12 = uVar10;
        if ((int)uVar25 < local_298.ArrayNum) {
          uVar12 = ~uVar25 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          iVar8 = (*pcVar6)();
          return iVar8;
        }
        pTVar30 = local_298.DataPtr;
        if (local_518 == local_514) {
          local_518 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,&local_520,&local_514);
        }
        iVar8 = local_518 + 1;
        *(undefined8 *)(local_520.Data + (longlong)local_518 * 0xc) =
             *(undefined8 *)(pFVar36 + (longlong)&pTVar30->field0_0x0);
        *(undefined4 *)(local_520.Data + (longlong)local_518 * 0xc + 8) =
             *(undefined4 *)((undefined1 *)((longlong)&pTVar30->field0_0x0 + 8) + (longlong)pFVar36)
        ;
        uVar12 = uVar10;
        if ((int)uVar25 < local_288.ArrayNum) {
          uVar12 = ~uVar25 >> 0x1f;
        }
        local_518 = iVar8;
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          iVar8 = (*pcVar6)();
          return iVar8;
        }
        pTVar35 = local_288.DataPtr;
        iVar8 = (int)local_538;
        if ((int)local_538 == local_538._4_4_) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_540,(int *)((longlong)&local_538 + 4));
        }
        local_538 = CONCAT44(local_538._4_4_,iVar8 + 1);
        pFVar31 = local_540.Data + (longlong)iVar8 * 0x10;
        *(FScriptContainerElement **)&pFVar31->field_0x0 = (FScriptContainerElement *)0x0;
        iVar8 = *(int *)((longlong)&pTVar35->ArrayNum + (longlong)pFVar22);
        pvVar5 = *(void **)(pFVar22 + (longlong)&pTVar35->AllocatorInstance);
        *(int *)(pFVar31 + 8) = iVar8;
        if (iVar8 == 0) {
          *(int *)(pFVar31 + 0xc) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar8,0,(ForAnyElementType *)pFVar31,iVar8,(int *)(pFVar31 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar31->field_0x0,pvVar5,(longlong)iVar8 << 2);
        }
        uVar12 = uVar10;
        if ((int)uVar25 < local_278.ArrayNum) {
          uVar12 = ~uVar25 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          iVar8 = (*pcVar6)();
          return iVar8;
        }
        pTVar29 = local_278.DataPtr;
        iVar8 = (int)local_528;
        if ((int)local_528 == local_528._4_4_) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_530,(int *)((longlong)&local_528 + 4));
        }
        local_528 = CONCAT44(local_528._4_4_,iVar8 + 1);
        pFVar31 = local_530.Data + (longlong)iVar8 * 0x10;
        *(FScriptContainerElement **)&pFVar31->field_0x0 = (FScriptContainerElement *)0x0;
        iVar8 = *(int *)((longlong)&pTVar29->ArrayNum + (longlong)pFVar22);
        pvVar5 = *(void **)(pFVar22 + (longlong)&pTVar29->AllocatorInstance);
        *(int *)(pFVar31 + 8) = iVar8;
        if (iVar8 == 0) {
          *(int *)(pFVar31 + 0xc) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar8,0,(ForAnyElementType *)pFVar31,iVar8,(int *)(pFVar31 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar31->field_0x0,pvVar5,(longlong)iVar8 << 2);
        }
        pFVar31 = (FScriptContainerElement *)(ulonglong)(uVar25 + 1);
        local_510 = (TVector<float> *)((longlong)&local_510->field0_0x0 + 1);
        pFVar36 = pFVar36 + 0xc;
        pFVar22 = pFVar22 + 0x10;
        iVar8 = FCollectionClothConstFacade::GetNumSimVertices3D(local_4e8);
        param_2 = (FCollectionClothFacade *)local_498;
      } while ((int)(uVar25 + 1) < iVar8);
    }
    pTVar13 = FCollectionClothFacade::GetSimPosition3D(param_2,&local_108);
    local_510 = pTVar13->DataPtr;
    local_4f8 = pTVar13->ArrayNum;
    pTVar13 = FCollectionClothFacade::GetSimNormal(param_2,&local_f8);
    local_54c = pTVar13->ArrayNum;
    pTVar30 = pTVar13->DataPtr;
    pTVar14 = FCollectionClothFacade::GetSimBoneIndices(param_2,&local_e8);
    local_4d0 = pTVar14->DataPtr;
    local_550 = pTVar14->ArrayNum;
    pTVar15 = FCollectionClothFacade::GetSimBoneWeights(param_2,&local_d8);
    pTVar29 = pTVar15->DataPtr;
    local_4f0 = CONCAT44(local_4f0._4_4_,pTVar15->ArrayNum);
    iVar8 = FCollectionClothConstFacade::GetNumSimVertices3D(local_4e8);
    uVar32 = (ulonglong)iVar8;
    if ((longlong)uVar32 < (longlong)(int)local_548) {
      local_4d0 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  ((longlong)local_4d0 - (longlong)pTVar29);
      pFVar39 = (FCollectionClothConstFacade *)(pTVar30 + uVar32);
      piVar37 = &pTVar29[uVar32].ArrayNum;
      local_510 = (TVector<float> *)((longlong)local_510 - (longlong)pTVar30);
      uVar17 = uVar32;
      do {
        pTVar30 = local_510;
        uVar25 = (uint)uVar32;
        uVar12 = uVar10;
        if ((int)uVar25 < (int)local_4f8) {
          uVar12 = ~uVar25 >> 0x1f;
        }
        local_4e8 = pFVar39;
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          iVar8 = (*pcVar6)();
          return iVar8;
        }
        iVar8 = (int)local_500;
        if ((int)local_500 == local_500._4_4_) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&local_508,(int *)((longlong)&local_500 + 4));
        }
        local_500 = CONCAT44(local_500._4_4_,iVar8 + 1);
        *(undefined8 *)(local_508.Data + (longlong)iVar8 * 0xc) =
             *(undefined8 *)((longlong)&pFVar39->_padding_ + (longlong)&pTVar30->field0_0x0);
        *(undefined4 *)(local_508.Data + (longlong)iVar8 * 0xc + 8) =
             *(undefined4 *)((undefined1 *)((longlong)&pTVar30->field0_0x0 + 8) + (longlong)pFVar39)
        ;
        uVar12 = uVar10;
        if ((int)uVar25 < (int)local_54c) {
          uVar12 = ~uVar25 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          iVar8 = (*pcVar6)();
          return iVar8;
        }
        if (local_518 == local_514) {
          local_518 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,&local_520,&local_514);
        }
        iVar8 = local_518 + 1;
        *(undefined8 *)(local_520.Data + (longlong)local_518 * 0xc) =
             *(undefined8 *)&pFVar39->_padding_;
        *(undefined4 *)(local_520.Data + (longlong)local_518 * 0xc + 8) =
             *(undefined4 *)&(pFVar39->ClothCollection).Object;
        uVar12 = uVar10;
        if ((int)uVar25 < local_550) {
          uVar12 = ~uVar25 >> 0x1f;
        }
        local_518 = iVar8;
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          iVar8 = (*pcVar6)();
          return iVar8;
        }
        iVar8 = (int)local_538;
        if ((int)local_538 == local_538._4_4_) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_540,(int *)((longlong)&local_538 + 4));
        }
        local_538 = CONCAT44(local_538._4_4_,iVar8 + 1);
        pFVar31 = local_540.Data + (longlong)iVar8 * 0x10;
        *(FScriptContainerElement **)&pFVar31->field_0x0 = (FScriptContainerElement *)0x0;
        iVar8 = *(int *)((longlong)&(local_4d0->AllocatorInstance).Data + (longlong)piVar37);
        pvVar5 = *(void **)((longlong)&local_4d0[-1].ArrayNum + (longlong)piVar37);
        *(int *)(pFVar31 + 8) = iVar8;
        if (iVar8 == 0) {
          *(int *)(pFVar31 + 0xc) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar8,0,(ForAnyElementType *)pFVar31,iVar8,(int *)(pFVar31 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar31->field_0x0,pvVar5,(longlong)iVar8 << 2);
        }
        uVar12 = uVar10;
        if ((int)uVar25 < (int)local_4f0) {
          uVar12 = ~uVar25 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          iVar8 = (*pcVar6)();
          return iVar8;
        }
        iVar8 = (int)local_528;
        if ((int)local_528 == local_528._4_4_) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_530,(int *)((longlong)&local_528 + 4));
        }
        local_528 = CONCAT44(local_528._4_4_,iVar8 + 1);
        pFVar22 = local_530.Data + (longlong)iVar8 * 0x10;
        *(FScriptContainerElement **)&pFVar22->field_0x0 = (FScriptContainerElement *)0x0;
        iVar8 = *piVar37;
        pFVar31 = (((TArray<float,TSizedDefaultAllocator<32>_> *)(piVar37 + -2))->AllocatorInstance)
                  .Data;
        *(int *)(pFVar22 + 8) = iVar8;
        if (iVar8 == 0) {
          *(int *)(pFVar22 + 0xc) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar8,0,(ForAnyElementType *)pFVar22,iVar8,(int *)(pFVar22 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar22->field_0x0,pFVar31,(longlong)iVar8 << 2);
        }
        uVar32 = (ulonglong)(uVar25 + 1);
        pFVar39 = (FCollectionClothConstFacade *)
                  ((longlong)&(local_4e8->ClothCollection).Object + 4);
        uVar17 = uVar17 + 1;
        piVar37 = piVar37 + 4;
        param_2 = (FCollectionClothFacade *)local_498;
        local_4e8 = pFVar39;
      } while ((longlong)uVar17 < (longlong)(int)local_548);
    }
    iVar8 = FCollectionClothFacade::AddSimAccessoryMesh(param_2);
    FCollectionClothFacade::GetSimAccessoryMesh
              (param_2,(FCollectionClothSimAccessoryMeshFacade *)local_198,iVar8);
    local_258.ArrayNum = (int)local_528;
    local_258.DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)local_530.Data;
    if (((int)local_528 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
    iVar8 = (int)local_538;
    local_248.DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)local_540.Data;
    if (((int)local_538 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
    iVar11 = local_518;
    local_248.ArrayNum = iVar8;
    local_238.DataPtr = (TVector<float> *)local_520.Data;
    if ((local_518 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
    local_238.ArrayNum = iVar11;
    iVar8 = (int)local_500;
    local_228.DataPtr = (TVector<float> *)local_508.Data;
    if (((int)local_500 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
    local_228.ArrayNum = iVar8;
    bVar7 = false;
    uVar12 = 0xffffffff;
    FCollectionClothFacade::GetSimAccessoryMeshName(param_2,&local_268);
    pFVar1 = local_268.DataPtr + local_268.ArrayNum;
    if (local_268.DataPtr == pFVar1) {
LAB_14dc43171:
      local_430 = *local_488;
    }
    else {
      do {
        uVar10 = uVar12;
        if ((((local_268.DataPtr)->ComparisonIndex).Value == (local_488->ComparisonIndex).Value) &&
           (uVar10 = (local_268.DataPtr)->Number, (int)(local_268.DataPtr)->Number < (int)uVar12)) {
          uVar10 = uVar12;
        }
        uVar12 = uVar10;
        if ((bVar7) || (*local_268.DataPtr == *local_488)) {
          bVar7 = true;
        }
        local_268.DataPtr = local_268.DataPtr + 1;
      } while (local_268.DataPtr != pFVar1);
      if (!bVar7) goto LAB_14dc43171;
      local_438.ComparisonIndex = (*local_488).ComparisonIndex;
      local_438.Number = uVar12 + 1;
      local_430 = local_438;
    }
    FCollectionClothSimAccessoryMeshFacade::Initialize
              ((FCollectionClothSimAccessoryMeshFacade *)local_198,&local_430,&local_228,&local_238,
               &local_248,&local_258);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_198._16_8_);
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
              ((TArray<float,TSizedDefaultAllocator<32>_> *)local_530.Data,(int)local_528);
    if ((TArray<float,TSizedDefaultAllocator<32>_> *)local_530.Data !=
        (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_530.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_540.Data,(int)local_538);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_540.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_540.Data);
    }
    FVar21.Data = local_508.Data;
    local_1c0 = local_180;
    if (local_520.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.Data);
      FVar21.Data = local_508.Data;
    }
  }
  iVar8 = local_1c0;
  if (FVar21.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar21.Data);
  }
LAB_14dc43215:
  if (local_460.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.AllocatorInstance.Data);
  }
  if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_450.AllocatorInstance.Data);
  }
  if (local_400.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.SubPathString.Data.AllocatorInstance.Data);
  }
  return iVar8;
}

// GenerateTethers @ 14dc48130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::FClothEngineTools::GenerateTethers
          (TSharedRef<FManagedArrayCollection,1> *param_1,FName *param_2,bool param_3,
          TVector2<float> *param_4)

{
  TIntVector3<int> *pTVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TArrayView<float,int> *pTVar8;
  TArrayView<UE::Math::TVector<float>,int> *pTVar9;
  int *piVar10;
  undefined1 auStackY_1d8 [32];
  ForAnyElementType local_188;
  undefined8 local_180;
  int local_178;
  int local_174;
  int local_170 [2];
  FClothTetherData local_168;
  FName local_158;
  FCollectionClothConstFacade local_150;
  TArrayView<UE::Math::TIntVector3<int>,int> local_138;
  TArrayView<float_const_,int> local_128;
  TArrayView<unsigned_int_const_,int> local_118;
  TArrayView<UE::Math::TVector<float>_const_,int> local_108;
  TArrayView<unsigned_int_const_,int> local_f8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_e8;
  TArrayView<float,int> local_d8;
  TArrayView<UE::Math::TVector<float>,int> local_c8;
  TArrayView<UE::Math::TVector<float>,int> local_b8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)&local_150,param_1);
  FClothGeometryTools::DeleteTethers(param_1);
  bVar6 = FCollectionClothConstFacade::HasWeightMap(&local_150,param_2);
  if (bVar6) {
    local_168.Tethers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Tethers.ArrayNum = 0;
    local_168.Tethers.ArrayMax = 0;
    local_188.Data = (FScriptContainerElement *)0x0;
    local_180 = 0;
    iVar7 = FCollectionClothConstFacade::GetNumSimFaces(&local_150);
    uVar5 = iVar7 * 3;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if (local_180._4_4_ < (int)uVar5) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&local_188,(int)local_180,(int *)((longlong)&local_180 + 4));
    }
    FCollectionClothFacade::GetSimIndices3D((FCollectionClothFacade *)&local_150,&local_138);
    if (local_138.DataPtr != local_138.DataPtr + local_138.ArrayNum) {
      piVar10 = &((local_138.DataPtr)->field0_0x0)._s_0.Z;
      do {
        iVar7 = ((TIntVector3<int>_u_0_s_0 *)(piVar10 + -2))->X;
        if (((((iVar7 != -1) && (iVar2 = piVar10[-1], iVar2 != -1)) &&
             (iVar3 = *piVar10, iVar3 != -1)) && ((iVar7 != iVar2 && (iVar7 != iVar3)))) &&
           (iVar2 != iVar3)) {
          local_178 = iVar7;
          if (((local_188.Data <= (FScriptContainerElement *)&local_178) &&
              ((FScriptContainerElement *)&local_178 <
               local_188.Data + (longlong)local_180._4_4_ * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_180;
          if ((int)local_180 == local_180._4_4_) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_188,(int *)((longlong)&local_180 + 4));
          }
          iVar2 = iVar7 + 1;
          *(int *)(local_188.Data + (longlong)iVar7 * 4) = local_178;
          local_174 = piVar10[-1];
          local_180._0_4_ = iVar2;
          if (((local_188.Data <= (FScriptContainerElement *)&local_174) &&
              ((FScriptContainerElement *)&local_174 <
               local_188.Data + (longlong)local_180._4_4_ * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((int)local_180 == local_180._4_4_) {
            local_180._0_4_ =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_188,(int *)((longlong)&local_180 + 4));
          }
          iVar7 = (int)local_180 + 1;
          *(int *)(local_188.Data + (longlong)(int)local_180 * 4) = local_174;
          local_170[0] = *piVar10;
          local_180._0_4_ = iVar7;
          if (((local_188.Data <= (FScriptContainerElement *)local_170) &&
              ((FScriptContainerElement *)local_170 < local_188.Data + (longlong)local_180._4_4_ * 4
              )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_180;
          if ((int)local_180 == local_180._4_4_) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_188,(int *)((longlong)&local_180 + 4));
          }
          local_180 = CONCAT44(local_180._4_4_,iVar7 + 1);
          *(int *)(local_188.Data + (longlong)iVar7 * 4) = local_170[0];
        }
        pTVar1 = (TIntVector3<int> *)(piVar10 + 1);
        piVar10 = piVar10 + 3;
      } while (pTVar1 != local_138.DataPtr + local_138.ArrayNum);
    }
    if ((__real_38d1b717 <
         (float)((uint)(param_4->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_38d1b717 <
        (float)((uint)((param_4->field0_0x0)._s_0.Y - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      local_158.ComparisonIndex.Value = 0;
      local_158.Number = 0;
      FClothGeometryTools::GenerateKinematicVertices3D
                (&local_a8,param_1,param_2,param_4,&local_158,__real_3dcccccd);
      local_f8.ArrayNum = (int)local_180;
      local_f8.DataPtr = (uint *)local_188.Data;
      if (((int)local_180 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar9 = FCollectionClothFacade::GetSimPosition3D
                         ((FCollectionClothFacade *)&local_150,&local_b8);
      local_e8.DataPtr = pTVar9->DataPtr;
      local_e8.ArrayNum = pTVar9->ArrayNum;
      FClothTetherData::GenerateTethers(&local_168,&local_e8,&local_f8,&local_a8,param_3);
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
    }
    else {
      pTVar8 = FCollectionClothFacade::GetWeightMap
                         ((FCollectionClothFacade *)&local_150,&local_d8,param_2);
      local_118.ArrayNum = (int)local_180;
      local_128.DataPtr = pTVar8->DataPtr;
      local_128.ArrayNum = pTVar8->ArrayNum;
      local_118.DataPtr = (uint *)local_188.Data;
      if (((int)local_180 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar9 = FCollectionClothFacade::GetSimPosition3D
                         ((FCollectionClothFacade *)&local_150,&local_c8);
      local_108.DataPtr = pTVar9->DataPtr;
      local_108.ArrayNum = pTVar9->ArrayNum;
      FClothTetherData::GenerateTethers(&local_168,&local_108,&local_118,&local_128,param_3);
    }
    ClothAsset::Private::AppendTetherData((FCollectionClothFacade *)&local_150,&local_168);
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data);
    }
    DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
               local_168.Tethers.AllocatorInstance.Data,local_168.Tethers.ArrayNum);
    if ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
        local_168.Tethers.AllocatorInstance.Data !=
        (TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_168.Tethers.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_150.ClothCollection.SharedReferenceCount.ReferenceController);
  return;
}

// GenerateTethersFromCustomSelectionSets @ 14dc48680

void __cdecl
UE::Chaos::ClothAsset::FClothEngineTools::GenerateTethersFromCustomSelectionSets
          (TSharedRef<FManagedArrayCollection,1> *param_1,FName *param_2,
          TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  TIntVector3<int> *pTVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  TArrayView<UE::Math::TVector<float>,int> *pTVar11;
  int *piVar12;
  FName *pFVar13;
  FName *pFVar14;
  FName *pFVar15;
  undefined1 local_res8 [8];
  ForAnyElementType local_108;
  undefined8 local_100;
  int local_f8;
  int local_f4;
  int local_f0 [2];
  FClothTetherData local_e8;
  FCollectionClothSelectionConstFacade local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c0;
  TSharedRef<FManagedArrayCollection_const_,1> local_b8;
  FCollectionClothConstFacade local_a8;
  TArrayView<UE::Math::TIntVector3<int>,int> local_90;
  TArrayView<unsigned_int_const_,int> local_80;
  TArrayView<UE::Math::TVector<float>_const_,int> local_70;
  FName local_60;
  FName local_58;
  FName local_50;
  TArrayView<UE::Math::TVector<float>,int> local_48;
  
  FClothGeometryTools::DeleteTethers(param_1);
  local_b8.Object = param_1->Object;
  local_b8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FCollectionClothSelectionConstFacade::FCollectionClothSelectionConstFacade(&local_d8,&local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  bVar6 = FCollectionClothSelectionConstFacade::HasSelection(&local_d8,param_2);
  if ((bVar6) &&
     (FVar8 = FCollectionClothSelectionConstFacade::GetSelectionGroup(&local_d8,&local_60),
     *(FName *)FVar8 == ClothCollectionGroup::SimVertices3D)) {
    FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)&local_a8,param_1);
    local_108.Data = (FScriptContainerElement *)0x0;
    local_100 = 0;
    iVar7 = FCollectionClothConstFacade::GetNumSimFaces(&local_a8);
    uVar5 = iVar7 * 3;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if (local_100._4_4_ < (int)uVar5) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&local_108,(int)local_100,(int *)((longlong)&local_100 + 4));
    }
    FCollectionClothFacade::GetSimIndices3D((FCollectionClothFacade *)&local_a8,&local_90);
    if (local_90.DataPtr != local_90.DataPtr + local_90.ArrayNum) {
      piVar12 = &((local_90.DataPtr)->field0_0x0)._s_0.Z;
      do {
        iVar7 = ((TIntVector3<int>_u_0_s_0 *)(piVar12 + -2))->X;
        if (((((iVar7 != -1) && (iVar2 = piVar12[-1], iVar2 != -1)) &&
             (iVar3 = *piVar12, iVar3 != -1)) && ((iVar7 != iVar2 && (iVar7 != iVar3)))) &&
           (iVar2 != iVar3)) {
          local_f8 = iVar7;
          if (((local_108.Data <= (FScriptContainerElement *)&local_f8) &&
              ((FScriptContainerElement *)&local_f8 < local_108.Data + (longlong)local_100._4_4_ * 4
              )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_100;
          if ((int)local_100 == local_100._4_4_) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_108,(int *)((longlong)&local_100 + 4));
          }
          iVar2 = iVar7 + 1;
          *(int *)(local_108.Data + (longlong)iVar7 * 4) = local_f8;
          local_f4 = piVar12[-1];
          local_100._0_4_ = iVar2;
          if (((local_108.Data <= (FScriptContainerElement *)&local_f4) &&
              ((FScriptContainerElement *)&local_f4 < local_108.Data + (longlong)local_100._4_4_ * 4
              )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((int)local_100 == local_100._4_4_) {
            local_100._0_4_ =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_108,(int *)((longlong)&local_100 + 4));
          }
          iVar7 = (int)local_100 + 1;
          *(int *)(local_108.Data + (longlong)(int)local_100 * 4) = local_f4;
          local_f0[0] = *piVar12;
          local_100._0_4_ = iVar7;
          if (((local_108.Data <= (FScriptContainerElement *)local_f0) &&
              ((FScriptContainerElement *)local_f0 < local_108.Data + (longlong)local_100._4_4_ * 4)
              ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_100;
          if ((int)local_100 == local_100._4_4_) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_108,(int *)((longlong)&local_100 + 4));
          }
          local_100 = CONCAT44(local_100._4_4_,iVar7 + 1);
          *(int *)(local_108.Data + (longlong)iVar7 * 4) = local_f0[0];
        }
        pTVar1 = (TIntVector3<int> *)(piVar12 + 1);
        piVar12 = piVar12 + 3;
      } while (pTVar1 != local_90.DataPtr + local_90.ArrayNum);
    }
    local_c0 = FCollectionClothSelectionConstFacade::GetSelectionSet(&local_d8,param_2);
    pFVar13 = (FName *)(param_3->AllocatorInstance).Data;
    iVar7 = param_3->ArrayNum;
    pFVar15 = pFVar13 + (longlong)iVar7 * 2;
    pFVar14 = pFVar13 + 1;
    while( true ) {
      if (param_3->ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,FName>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar13 == pFVar15) break;
      bVar6 = FCollectionClothSelectionConstFacade::HasSelection(&local_d8,pFVar14);
      if (((bVar6) &&
          (FVar8 = FCollectionClothSelectionConstFacade::GetSelectionGroup(&local_d8,&local_58),
          *(FName *)FVar8 == ClothCollectionGroup::SimVertices3D)) &&
         ((bVar6 = FCollectionClothSelectionConstFacade::HasSelection(&local_d8,pFVar13), bVar6 &&
          (FVar8 = FCollectionClothSelectionConstFacade::GetSelectionGroup(&local_d8,&local_50),
          *(FName *)FVar8 == ClothCollectionGroup::SimVertices3D)))) {
        local_e8.Tethers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Tethers.ArrayNum = 0;
        local_e8.Tethers.ArrayMax = 0;
        pTVar9 = FCollectionClothSelectionConstFacade::GetSelectionSet(&local_d8,pFVar14);
        pTVar10 = FCollectionClothSelectionConstFacade::GetSelectionSet(&local_d8,pFVar13);
        iVar2 = (int)local_100;
        local_80.DataPtr = (uint *)local_108.Data;
        if (((int)local_100 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_80.ArrayNum = iVar2;
        pTVar11 = FCollectionClothFacade::GetSimPosition3D
                            ((FCollectionClothFacade *)&local_a8,&local_48);
        local_70.DataPtr = pTVar11->DataPtr;
        local_70.ArrayNum = pTVar11->ArrayNum;
        FClothTetherData::GenerateTethers
                  (&local_e8,&local_70,&local_80,local_c0,pTVar10,pTVar9,param_4);
        ClothAsset::Private::AppendTetherData((FCollectionClothFacade *)&local_a8,&local_e8);
        DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
                   local_e8.Tethers.AllocatorInstance.Data,local_e8.Tethers.ArrayNum);
        if ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
            local_e8.Tethers.AllocatorInstance.Data !=
            (TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_e8.Tethers.AllocatorInstance.Data);
        }
      }
      pFVar13 = pFVar13 + 2;
      pFVar14 = pFVar14 + 2;
    }
    if (local_108.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.ClothCollection.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.ManagedArrayCollection.SharedReferenceCount.ReferenceController);
  return;
}

// GenerateTethersFromSelectionSet @ 14dc48c00

void __cdecl
UE::Chaos::ClothAsset::FClothEngineTools::GenerateTethersFromSelectionSet
          (TSharedRef<FManagedArrayCollection,1> *param_1,FName *param_2,bool param_3)

{
  TIntVector3<int> *pTVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  TArrayView<UE::Math::TVector<float>,int> *pTVar10;
  int *piVar11;
  FName local_res8;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  int local_b8;
  int local_b4;
  int local_b0 [2];
  FClothTetherData local_a8;
  TSharedRef<FManagedArrayCollection_const_,1> local_98;
  FCollectionClothConstFacade local_88;
  FCollectionClothSelectionConstFacade local_70;
  TArrayView<UE::Math::TIntVector3<int>,int> local_58;
  TArrayView<unsigned_int_const_,int> local_48;
  TArrayView<UE::Math::TVector<float>_const_,int> local_38;
  TArrayView<UE::Math::TVector<float>,int> local_28;
  
  FClothGeometryTools::DeleteTethers(param_1);
  local_98.Object = param_1->Object;
  local_98.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FCollectionClothSelectionConstFacade::FCollectionClothSelectionConstFacade(&local_70,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  bVar6 = FCollectionClothSelectionConstFacade::HasSelection(&local_70,param_2);
  if ((bVar6) &&
     (FVar8 = FCollectionClothSelectionConstFacade::GetSelectionGroup(&local_70,&local_res8),
     *(FName *)FVar8 == ClothCollectionGroup::SimVertices3D)) {
    FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)&local_88,param_1);
    local_a8.Tethers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Tethers.ArrayNum = 0;
    local_a8.Tethers.ArrayMax = 0;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = 0;
    iVar7 = FCollectionClothConstFacade::GetNumSimFaces(&local_88);
    uVar5 = iVar7 * 3;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if (local_c0._4_4_ < (int)uVar5) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&local_c8,(int)local_c0,(int *)((longlong)&local_c0 + 4));
    }
    FCollectionClothFacade::GetSimIndices3D((FCollectionClothFacade *)&local_88,&local_58);
    if (local_58.DataPtr != local_58.DataPtr + local_58.ArrayNum) {
      piVar11 = &((local_58.DataPtr)->field0_0x0)._s_0.Z;
      do {
        iVar7 = ((TIntVector3<int>_u_0_s_0 *)(piVar11 + -2))->X;
        if (((((iVar7 != -1) && (iVar2 = piVar11[-1], iVar2 != -1)) &&
             (iVar3 = *piVar11, iVar3 != -1)) && ((iVar7 != iVar2 && (iVar7 != iVar3)))) &&
           (iVar2 != iVar3)) {
          local_b8 = iVar7;
          if (((local_c8.Data <= (FScriptContainerElement *)&local_b8) &&
              ((FScriptContainerElement *)&local_b8 < local_c8.Data + (longlong)local_c0._4_4_ * 4))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_c0;
          if ((int)local_c0 == local_c0._4_4_) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
          }
          iVar2 = iVar7 + 1;
          *(int *)(local_c8.Data + (longlong)iVar7 * 4) = local_b8;
          local_b4 = piVar11[-1];
          local_c0._0_4_ = iVar2;
          if (((local_c8.Data <= (FScriptContainerElement *)&local_b4) &&
              ((FScriptContainerElement *)&local_b4 < local_c8.Data + (longlong)local_c0._4_4_ * 4))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((int)local_c0 == local_c0._4_4_) {
            local_c0._0_4_ =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
          }
          iVar7 = (int)local_c0 + 1;
          *(int *)(local_c8.Data + (longlong)(int)local_c0 * 4) = local_b4;
          local_b0[0] = *piVar11;
          local_c0._0_4_ = iVar7;
          if (((local_c8.Data <= (FScriptContainerElement *)local_b0) &&
              ((FScriptContainerElement *)local_b0 < local_c8.Data + (longlong)local_c0._4_4_ * 4))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_c0;
          if ((int)local_c0 == local_c0._4_4_) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
          }
          local_c0 = CONCAT44(local_c0._4_4_,iVar7 + 1);
          *(int *)(local_c8.Data + (longlong)iVar7 * 4) = local_b0[0];
        }
        pTVar1 = (TIntVector3<int> *)(piVar11 + 1);
        piVar11 = piVar11 + 3;
      } while (pTVar1 != local_58.DataPtr + local_58.ArrayNum);
    }
    pTVar9 = FCollectionClothSelectionConstFacade::GetSelectionSet(&local_70,param_2);
    local_48.ArrayNum = (int)local_c0;
    local_48.DataPtr = (uint *)local_c8.Data;
    if (((int)local_c0 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar10 = FCollectionClothFacade::GetSimPosition3D
                        ((FCollectionClothFacade *)&local_88,&local_28);
    local_38.DataPtr = pTVar10->DataPtr;
    local_38.ArrayNum = pTVar10->ArrayNum;
    FClothTetherData::GenerateTethers(&local_a8,&local_38,&local_48,pTVar9,param_3);
    ClothAsset::Private::AppendTetherData((FCollectionClothFacade *)&local_88,&local_a8);
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
    DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
               local_a8.Tethers.AllocatorInstance.Data,local_a8.Tethers.ArrayNum);
    if ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
        local_a8.Tethers.AllocatorInstance.Data !=
        (TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_a8.Tethers.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.ClothCollection.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ManagedArrayCollection.SharedReferenceCount.ReferenceController);
  return;
}

// GetMaxDistanceWeightMap @ 14dc4ce10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPointWeightMap * __cdecl
UE::Chaos::ClothAsset::FClothEngineTools::GetMaxDistanceWeightMap
          (FPointWeightMap *__return_storage_ptr__,
          TSharedRef<FManagedArrayCollection_const_,1> *param_1,int param_2)

{
  undefined1 auStack_198 [32];
  TSharedPtr<FManagedArrayCollection_const_,1> local_178;
  FCollectionClothConstFacade local_168;
  FCollectionPropertyConstFacade local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  FCollectionClothConstFacade::FCollectionClothConstFacade(&local_168,param_1);
  local_178.Object = param_1->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::Chaos::Softs::FCollectionPropertyConstFacade::FCollectionPropertyConstFacade
            (&local_148,&local_178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  GetMaxDistanceWeightMap(__return_storage_ptr__,&local_168,&local_148,param_2);
  ::Chaos::Softs::FCollectionPropertyConstFacade::~FCollectionPropertyConstFacade(&local_148);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.ClothCollection.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetMaxDistanceWeightMap @ 14dc4cec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPointWeightMap * __cdecl
UE::Chaos::ClothAsset::FClothEngineTools::GetMaxDistanceWeightMap
          (FPointWeightMap *__return_storage_ptr__,FCollectionClothConstFacade *param_1,
          FCollectionPropertyConstFacade *param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FPointWeightMap *pFVar8;
  FString *pFVar9;
  FName *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  ForAnyElementType _Src;
  ForAnyElementType FVar15;
  float fVar16;
  float fVar17;
  FCollectionPropertyConstFacade *local_res18;
  int local_res20 [2];
  float local_e8 [2];
  ForAnyElementType local_e0;
  int local_d8;
  int local_d4;
  TArray<float,TSizedDefaultAllocator<32>_> local_d0;
  FString local_c0;
  FName local_b0;
  TArrayView<float_const_,int> local_a8;
  FName local_98;
  FString local_90;
  FString local_80 [4];
  
  uVar12 = 0;
  local_res20[0] = 0;
  uVar14 = (ulonglong)(uint)param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&MaxDistanceName,L"MaxDistance",FNAME_Find);
    _Init_thread_footer(&::_TSS0);
  }
  if ((MaxDistanceName == (FName)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxDistanceName != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothEngineTools.cpp"
                         ,0xb9,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FPointWeightMap *)(*pcVar3)();
    return pFVar8;
  }
  pFVar9 = ::FName::ToString(&MaxDistanceName,&local_90);
  pFVar9 = ::FString::FString(local_80,pFVar9);
  local_res18 = param_2;
  ::Chaos::Softs::FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_2,&local_c0,&MaxDistanceName,(<lambda_1> *)&local_res18,pFVar9,local_res20);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  iVar13 = local_res20[0];
  if (local_res20[0] == -1) {
    fVar17 = 0.0;
    fVar16 = __real_7f7fffff;
  }
  else {
    fVar16 = ::Chaos::Softs::FCollectionPropertyConstFacade::
             GetValue<float,UE::Math::TVector<float>_>
                       (param_2,local_res20[0],&param_2->LowValueArray);
    fVar17 = ::Chaos::Softs::FCollectionPropertyConstFacade::
             GetValue<float,UE::Math::TVector<float>_>(param_2,iVar13,&param_2->HighValueArray);
    fVar17 = fVar17 - fVar16;
  }
  FVar15.Data = local_c0.Data.AllocatorInstance.Data;
  bVar4 = true;
  bVar5 = false;
  iVar13 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  pFVar10 = ::FName::FName(&local_98,iVar13,(wchar_t *)local_c0.Data.AllocatorInstance.Data,
                           FNAME_Add);
  local_b0 = *pFVar10;
  FCollectionClothConstFacade::GetWeightMap(param_1,&local_a8,&local_b0);
  iVar13 = local_a8.ArrayNum;
  if (iVar13 == param_3) {
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_d0,iVar13,Default);
    uVar14 = uVar12;
    if (0 < iVar13) {
      do {
        uVar11 = (uint)uVar12;
        uVar7 = 0;
        if ((int)uVar11 < local_a8.ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FPointWeightMap *)(*pcVar3)();
          return pFVar8;
        }
        fVar2 = local_a8.DataPtr[uVar14];
        uVar7 = 0;
        if ((int)uVar11 < local_d0.ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FPointWeightMap *)(*pcVar3)();
          return pFVar8;
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        *(float *)(local_d0.AllocatorInstance.Data + uVar14 * 4) = fVar17 * fVar2 + fVar16;
        uVar14 = uVar14 + 1;
        FVar15.Data = local_c0.Data.AllocatorInstance.Data;
      } while ((longlong)uVar14 < (longlong)iVar13);
    }
    _Src.Data = local_d0.AllocatorInstance.Data;
    iVar13 = local_d0.ArrayNum;
  }
  else {
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d4 = 0;
    local_e8[0] = fVar16;
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar14);
    }
    local_d8 = 0;
    if ((param_3 != 0) &&
       (Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,param_3,&local_e0,0,&local_d4), 0 < param_3)) {
      do {
        if ((local_e0.Data <= (FScriptContainerElement *)local_e8) &&
           (((FScriptContainerElement *)local_e8 < local_e0.Data + (longlong)local_d4 * 4 &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FPointWeightMap *)(*pcVar3)();
          return pFVar8;
        }
        if (local_d8 == local_d4) {
          local_d8 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_e0,&local_d4);
        }
        iVar13 = local_d8 + 1;
        *(float *)(local_e0.Data + (longlong)local_d8 * 4) = local_e8[0];
        uVar14 = uVar14 - 1;
        FVar15.Data = local_c0.Data.AllocatorInstance.Data;
        local_d8 = iVar13;
      } while (uVar14 != 0);
    }
    bVar4 = false;
    bVar5 = true;
    _Src.Data = local_e0.Data;
    iVar13 = local_d8;
  }
  (__return_storage_ptr__->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Values).ArrayMax;
  (__return_storage_ptr__->Values).ArrayNum = iVar13;
  if (iVar13 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar13,0,(ForAnyElementType *)__return_storage_ptr__,iVar13,piVar1);
    memcpy((__return_storage_ptr__->Values).AllocatorInstance.Data,_Src.Data,(longlong)iVar13 << 2);
  }
  if ((bVar5) && (local_e0.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e0.Data);
  }
  if ((bVar4) && (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  return __return_storage_ptr__;
}

// RemapBoneIndices @ 14dc54c80

void __cdecl
UE::Chaos::ClothAsset::FClothEngineTools::RemapBoneIndices
          (FCollectionClothFacade *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          int param_3,int param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_9c;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_98;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_88;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_78;
  undefined1 local_68 [32];
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_48;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_38;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_28;
  
  pTVar5 = FCollectionClothFacade::GetSimBoneIndices(param_1,&local_48);
  iVar4 = pTVar5->ArrayNum;
  iVar7 = iVar4;
  if (iVar4 - param_3 < iVar4) {
    iVar7 = iVar4 - param_3;
  }
  iVar6 = 0;
  if (0 < iVar7) {
    iVar6 = iVar7;
  }
  pTVar1 = pTVar5->DataPtr;
  if (iVar6 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_98._12_4_ = uStack_9c;
  local_98.ArrayNum = iVar6;
  local_98.DataPtr = pTVar1 + ((longlong)iVar4 - (longlong)iVar6);
  ClothAsset::Private::RemapBoneIndices(&local_98,param_2);
  pTVar5 = FCollectionClothFacade::GetRenderBoneIndices(param_1,&local_38);
  iVar4 = pTVar5->ArrayNum;
  iVar7 = iVar4;
  if (iVar4 - param_4 < iVar4) {
    iVar7 = iVar4 - param_4;
  }
  iVar6 = 0;
  if (0 < iVar7) {
    iVar6 = iVar7;
  }
  pTVar1 = pTVar5->DataPtr;
  if (iVar6 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_88._12_4_ = uStack_9c;
  local_88.ArrayNum = iVar6;
  local_88.DataPtr = pTVar1 + ((longlong)iVar4 - (longlong)iVar6);
  ClothAsset::Private::RemapBoneIndices(&local_88,param_2);
  iVar7 = 0;
  iVar4 = FCollectionClothConstFacade::GetNumSimAccessoryMeshes
                    ((FCollectionClothConstFacade *)param_1);
  if (0 < iVar4) {
    do {
      FCollectionClothFacade::GetSimAccessoryMesh
                (param_1,(FCollectionClothSimAccessoryMeshFacade *)local_68,iVar7);
      pTVar5 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneIndices
                         ((FCollectionClothSimAccessoryMeshFacade *)local_68,&local_28);
      iVar4 = pTVar5->ArrayNum;
      iVar6 = iVar4;
      if (iVar4 - param_3 < iVar4) {
        iVar6 = iVar4 - param_3;
      }
      iVar8 = 0;
      if (0 < iVar6) {
        iVar8 = iVar6;
      }
      pTVar1 = pTVar5->DataPtr;
      if (iVar8 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_78._12_4_ = uStack_9c;
      local_78.ArrayNum = iVar8;
      local_78.DataPtr = pTVar1 + ((longlong)iVar4 - (longlong)iVar8);
      ClothAsset::Private::RemapBoneIndices(&local_78,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_68._16_8_);
      iVar7 = iVar7 + 1;
      iVar4 = FCollectionClothConstFacade::GetNumSimAccessoryMeshes
                        ((FCollectionClothConstFacade *)param_1);
    } while (iVar7 < iVar4);
  }
  return;
}

