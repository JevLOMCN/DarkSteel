// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 3

// CombineLodBonesToReferenceSkeleton @ 143486160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Geometry::FMeshBones::CombineLodBonesToReferenceSkeleton
          (TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4,bool *param_5)

{
  bool *pbVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  bool *pbVar19;
  longlong lVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ForElementType<unsigned_int> FVar26;
  longlong lVar27;
  int iVar28;
  longlong lVar29;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [4];
  uint local_144;
  uint local_140;
  longlong local_138;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_130;
  int local_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_120;
  undefined4 local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_100;
  undefined4 local_f8;
  int local_f4;
  FName local_f0;
  longlong local_e8;
  bool *local_e0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_d8;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  *param_5 = false;
  iVar9 = param_1->ArrayNum;
  local_e0 = param_5;
  if (iVar9 == 0) {
    return true;
  }
  pFVar18 = (param_1->AllocatorInstance).Data;
  pFVar22 = pFVar18 + (longlong)iVar9 * 0x230;
  local_130 = param_2;
  local_100 = param_4;
  local_d8 = param_3;
  while( true ) {
    if (param_1->ArrayNum != iVar9) {
      local_148[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FDynamicMesh3_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_148);
    }
    if (pFVar18 == pFVar22) break;
    if ((*(longlong *)(pFVar18 + 0x208) == 0) ||
       (*(longlong *)(*(longlong *)(pFVar18 + 0x208) + 0x110) == 0)) {
      return false;
    }
    pFVar18 = pFVar18 + 0x230;
  }
  iVar9 = param_1->ArrayNum;
  uVar16 = 1;
  if (1 < iVar9) {
    lVar29 = 0x230;
    do {
      if ((iVar9 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      lVar27 = *(longlong *)((param_1->AllocatorInstance).Data + 0x208);
      lVar15 = 0;
      if (lVar27 != 0) {
        lVar15 = lVar27;
      }
      uVar21 = 0;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar21 = ~uVar16 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      plVar2 = *(longlong **)(lVar15 + 0x110);
      lVar27 = *(longlong *)((param_1->AllocatorInstance).Data + lVar29 + 0x208);
      lVar13 = 0;
      if (lVar27 != 0) {
        lVar13 = lVar27;
      }
      if (((plVar2 != (longlong *)0x0) != (*(longlong *)(lVar13 + 0x110) != 0)) ||
         ((plVar2 != (longlong *)0x0 &&
          ((cVar8 = (**(code **)(*plVar2 + 0xd8))(plVar2), cVar8 == '\0' ||
           (cVar8 = (**(code **)(**(longlong **)(lVar15 + 0x118) + 0xd8))
                              (*(longlong **)(lVar15 + 0x118),*(undefined8 *)(lVar13 + 0x118)),
           cVar8 == '\0')))))) {
        *param_5 = true;
        param_2 = local_130;
        break;
      }
      iVar9 = param_1->ArrayNum;
      uVar16 = uVar16 + 1;
      lVar29 = lVar29 + 0x230;
      param_2 = local_130;
    } while ((int)uVar16 < iVar9);
  }
  iVar9 = param_1->ArrayNum;
  if (*param_5 == false) {
    if ((iVar9 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    bVar6 = GetBonesInIncreasingOrder
                      ((FDynamicMesh3 *)(param_1->AllocatorInstance).Data,param_2,param_3,local_100,
                       param_5);
    return bVar6;
  }
  uVar24 = 0;
  uVar10 = 0xffffffff;
  uVar21 = 0xffffffff;
  local_144 = 0xffffffff;
  uVar25 = uVar24;
  uVar12 = uVar24;
  uVar16 = local_144;
  if (0 < iVar9) {
    do {
      uVar17 = (uint)uVar25;
      uVar16 = 0;
      if ((int)uVar17 < iVar9) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar25 = *(ulonglong *)((param_1->AllocatorInstance).Data + uVar12 + 0x208);
      uVar11 = uVar24;
      if (uVar25 != 0) {
        uVar11 = uVar25;
      }
      uVar16 = 0;
      if (*(longlong *)(uVar11 + 0x110) != 0) {
        uVar16 = *(uint *)(*(longlong *)(uVar11 + 0x110) + 0x20);
      }
      iVar9 = param_1->ArrayNum;
      uVar5 = uVar17;
      if ((int)uVar16 <= (int)uVar10) {
        uVar5 = uVar21;
      }
      uVar21 = uVar5;
      if ((int)uVar16 <= (int)uVar10) {
        uVar16 = uVar10;
      }
      uVar10 = uVar16;
      uVar25 = (ulonglong)(uVar17 + 1);
      uVar12 = uVar12 + 0x230;
      uVar16 = uVar21;
    } while ((int)(uVar17 + 1) < iVar9);
  }
  local_144 = uVar16;
  uVar16 = local_144;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_140 = ~local_144 >> 0x1f;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  uVar21 = 0;
  if ((int)local_144 < iVar9) {
    uVar21 = local_140;
  }
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if ((uVar21 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  lVar29 = (longlong)(int)uVar16;
  lVar27 = lVar29 * 0x230;
  uVar25 = *(ulonglong *)((param_1->AllocatorInstance).Data + lVar27 + 0x208);
  if (uVar25 != 0) {
    uVar24 = uVar25;
  }
  iVar9 = *(int *)(*(longlong *)(uVar24 + 0x110) + 0x20);
  pbVar19 = *(bool **)(*(longlong *)(uVar24 + 0x110) + 0x18);
  local_138 = lVar29;
  local_e8 = lVar27;
  if ((iVar9 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar16 = iVar9 + (local_a8._8_4_ - local_74);
  if (uVar16 <= (uint)(local_a8._8_4_ - local_74)) goto LAB_143486799;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar16);
  if (uVar16 < 4) {
    uVar16 = 1;
  }
  else {
    uVar24 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_f8 = (undefined4)lVar15;
    uVar16 = 1 << ((byte)lVar15 & 0x1f);
  }
  if ((local_60 != 0) && ((int)uVar16 <= (int)local_60)) goto LAB_143486799;
  local_60 = uVar16;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar16 != 0) {
    uVar21 = uVar16;
    if (uVar16 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar21 = 0;
        goto LAB_1434865e0;
      }
    }
    else {
LAB_1434865e0:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar21,4);
    }
    if (0 < (int)uVar16) {
      uVar25 = (ulonglong)uVar16;
      uVar24 = 0;
      do {
        FVar14.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_68.Data;
        }
        uVar12 = uVar24 & (longlong)(int)uVar16 - 1U;
        uVar24 = uVar24 + 1;
        *(undefined4 *)(FVar14.Data + uVar12 * 4) = 0xffffffff;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  if (local_60 != 0) {
    pTStack_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    uStack_124 = 1;
    local_128 = 0;
    iStack_114 = 0;
    iStack_110 = 0;
    if (local_80 != 0) {
      FVar26 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar26 = local_88;
      }
      uVar16 = *(uint *)FVar26;
      iStack_110 = 0;
      local_128 = 0;
      while (uVar16 == 0) {
        iStack_110 = iStack_110 + 0x20;
        lVar15 = (longlong)local_128;
        local_128 = local_128 + 1;
        if ((int)(local_80 + -1 + (local_80 + -1 >> 0x1f & 0x1fU)) >> 5 < local_128)
        goto LAB_1434866f2;
        uVar16 = ((uint *)((longlong)FVar26 + 4))[lVar15];
      }
      uStack_124 = -uVar16 & uVar16;
      uVar24 = (ulonglong)uStack_124 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_f4 = (int)lVar15;
      iStack_114 = local_f4 + -1 + iStack_110;
      if (local_80 < iStack_114) {
LAB_1434866f2:
        iStack_114 = local_80;
      }
    }
    local_118 = 0xffffffff;
    local_d0 = (longlong *)local_a8;
    local_c8._padding_ = CONCAT44(uStack_124,local_128);
    local_c8.CurrentBitIndex = iStack_114;
    local_c8.UnvisitedBitMask = 0xffffffff;
    local_c8._28_4_ = uStack_10c;
    local_c8.BaseBitIndex = iStack_110;
    iVar28 = iStack_114;
    local_c8.Array = pTStack_120;
    if (iStack_114 < local_80) {
      do {
        puVar23 = (undefined8 *)((longlong)iVar28 * 0x10 + *local_d0);
        uVar3 = *puVar23;
        uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar16 = local_60 - 1 & uVar16 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar23 + 0xc) = uVar16;
        FVar14.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_68.Data;
        }
        uVar24 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(FVar14.Data + uVar24 * 4);
        *(int *)(FVar14.Data + uVar24 * 4) = iVar28;
        local_c8.UnvisitedBitMask = local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
        lVar29 = local_138;
        iVar28 = local_c8.CurrentBitIndex;
      } while (local_c8.CurrentBitIndex < (local_c8.Array)->NumBits);
    }
  }
LAB_143486799:
  pbVar1 = pbVar19 + (longlong)iVar9 * 8;
  for (; pbVar19 != pbVar1; pbVar19 = pbVar19 + 8) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_a8,&local_f0,
               pbVar19);
  }
  iVar9 = param_1->ArrayNum;
  uVar16 = 0;
  if (0 < iVar9) {
    lVar15 = 0;
    local_108 = 0;
    do {
      lVar27 = local_108;
      if (lVar15 != lVar29) {
        uVar21 = 0;
        if ((int)uVar16 < iVar9) {
          uVar21 = ~uVar16 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        lVar29 = *(longlong *)((param_1->AllocatorInstance).Data + lVar27 + 0x208);
        lVar13 = 0;
        if (lVar29 != 0) {
          lVar13 = lVar29;
        }
        uVar21 = 0;
        lVar13 = *(longlong *)(lVar13 + 0x110);
        iVar9 = *(int *)(lVar13 + 0x20);
        lVar29 = local_138;
        if (0 < iVar9) {
          lVar20 = 0;
          do {
            uVar10 = 0;
            if ((int)uVar21 < iVar9) {
              uVar10 = ~uVar21 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            lVar29 = *(longlong *)(lVar20 + *(longlong *)(lVar13 + 0x18));
            uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar29);
            if (local_a8._8_4_ == local_74) {
LAB_143486905:
              bVar6 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<6413767898266861816>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\MeshBones.cpp"
                                 ,0xf8,"HashSet.Contains(NamesAttrib[BoneIdx])");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              bVar6 = false;
              goto LAB_1434869e1;
            }
            FVar14.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar14.Data = local_68.Data;
            }
            iVar9 = *(int *)(FVar14.Data +
                            (ulonglong)(local_60 - 1 & (int)((ulonglong)lVar29 >> 0x20) + uVar10) *
                            4);
            while( true ) {
              if (iVar9 == -1) goto LAB_143486905;
              if (*(longlong *)(local_a8._0_8_ + (longlong)iVar9 * 0x10) == lVar29) break;
              iVar9 = *(int *)(local_a8._0_8_ + (longlong)iVar9 * 0x10 + 8);
            }
            iVar9 = *(int *)(lVar13 + 0x20);
            uVar21 = uVar21 + 1;
            lVar20 = lVar20 + 8;
            lVar27 = local_108;
            lVar29 = local_138;
          } while ((int)uVar21 < iVar9);
        }
      }
      iVar9 = param_1->ArrayNum;
      local_108 = lVar27 + 0x230;
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 1;
      lVar27 = local_e8;
    } while ((int)uVar16 < iVar9);
  }
  uVar16 = 0;
  if ((int)local_144 < iVar9) {
    uVar16 = local_140;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  bVar6 = GetBonesInIncreasingOrder
                    ((FDynamicMesh3 *)((param_1->AllocatorInstance).Data + lVar27),local_130,
                     local_d8,local_100,local_e0);
LAB_1434869e1:
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  return bVar6;
}

// GetBoneChildren @ 1434bd460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Geometry::FMeshBones::GetBoneChildren
          (FDynamicMesh3 *param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  uint *puVar1;
  int *piVar2;
  FDynamicMeshAttributeSet *pFVar3;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar4;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  uint *puVar19;
  uint *puVar20;
  undefined1 auStackY_148 [32];
  uint local_f8;
  char local_f4;
  undefined1 local_f3;
  undefined1 local_f2 [2];
  uint local_f0;
  uint local_ec;
  uint local_e8 [4];
  int *local_d8;
  TPairInitializer<int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_&&> local_c8;
  undefined4 local_b8;
  int local_b4 [3];
  uint *local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> **local_a0;
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pFVar3 = (param_1->AttributeSet).Ptr;
  if ((pFVar3 == (FDynamicMeshAttributeSet *)0x0) ||
     (pTVar4 = (pFVar3->BoneNameAttrib).Ptr,
     pTVar4 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) {
    bVar8 = false;
  }
  else {
    pTVar5 = (pFVar3->BoneParentIndexAttrib).Ptr;
    iVar12 = (pTVar4->AttribValues).ArrayNum;
    piVar2 = &(pTVar5->AttribValues).ArrayNum;
    local_f0 = 0;
    local_f4 = param_4;
    local_d8 = piVar2;
    if (0 < iVar12) {
      do {
        uVar11 = local_f0;
        uVar16 = 0;
        if ((int)local_f0 < *piVar2) {
          uVar16 = ~local_f0 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        if (*(int *)((pTVar5->AttribValues).AllocatorInstance.Data + (longlong)(int)uVar11 * 4) ==
            param_2) {
          pFVar6 = (param_3->AllocatorInstance).Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_f0) &&
              ((FScriptContainerElement *)&local_f0 < pFVar6 + (longlong)param_3->ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          iVar10 = param_3->ArrayNum;
          if (iVar10 == param_3->ArrayMax) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar10 + 1;
          *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_f0;
        }
        local_f0 = local_f0 + 1;
      } while ((int)local_f0 < iVar12);
    }
    piVar2 = local_d8;
    if (local_f4 != '\0') {
      puVar20 = (uint *)0x0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      local_f8 = 0;
      puVar13 = puVar20;
      if (0 < iVar12) {
LAB_1434bd650:
        uVar16 = (uint)puVar13;
        uVar11 = 0;
        if ((int)uVar16 < *piVar2) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        lVar17 = (longlong)(int)local_f8;
        local_e8[0] = *(uint *)((pTVar5->AttribValues).AllocatorInstance.Data +
                               (longlong)(int)uVar16 * 4);
        uVar11 = 0;
        if ((int)local_f8 < *piVar2) {
          uVar11 = ~local_f8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        uVar16 = local_f8;
        uVar11 = *(uint *)((pTVar5->AttribValues).AllocatorInstance.Data + lVar17 * 4);
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar15 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar15 = local_98.Hash.SecondaryData;
          }
          for (iVar10 = *(int *)((longlong)FVar15 + (ulonglong)(local_98.HashSize - 1U & uVar11) * 4
                                ); iVar10 != -1;
              iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + local_98.Elements._0_8_)) {
            if (*(uint *)((longlong)iVar10 * 0x20 + local_98.Elements._0_8_) == uVar11) {
              FVar15 = (ForElementType<FSetElementId>)&local_98.Hash;
              if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar15 = local_98.Hash.SecondaryData;
              }
              uVar11 = *(uint *)((longlong)FVar15 +
                                (ulonglong)(local_98.HashSize - 1U & local_e8[0]) * 4);
              goto joined_r0x0001434bd81c;
            }
          }
        }
        local_c8.Value = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
        local_b8 = 1;
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,0,(ForAnyElementType *)&local_c8.Value,1,local_b4);
        *(uint *)&((local_c8.Value)->AllocatorInstance).Data = uVar16;
        local_a8 = local_e8;
        local_a0 = &local_c8.Value;
        TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
                  (&local_98,&local_c8,(bool *)&local_a8);
        if (local_c8.Value != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_c8.Value);
        }
        goto LAB_1434bd7c5;
      }
LAB_1434bd7d8:
      puVar13 = ::operator_new(0x10);
      if (puVar13 != (uint *)0x0) {
        puVar13[0] = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar13[0] = 0;
        puVar13[1] = 0;
        puVar20 = puVar13;
      }
      pFVar18 = (param_3->AllocatorInstance).Data;
      iVar12 = param_3->ArrayNum;
      pFVar6 = pFVar18 + (longlong)iVar12 * 4;
      local_d8 = (int *)puVar20;
      while( true ) {
        if (param_3->ArrayNum != iVar12) {
          local_f3 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_f3);
        }
        if (pFVar18 == pFVar6) break;
        uVar11 = *(uint *)pFVar18;
        puVar13 = ::operator_new(0x10);
        if (puVar13 != (uint *)0x0) {
          puVar13[0] = 0;
          puVar13[1] = 0;
          puVar13[2] = uVar11;
          *(uint **)local_d8 = puVar13;
          local_d8 = (int *)puVar13;
        }
        pFVar18 = pFVar18 + 4;
      }
      if (*(longlong *)puVar20 != 0) {
LAB_1434bd980:
        puVar13 = *(uint **)puVar20;
        uVar11 = (uint)local_c8.Key;
        if (puVar13 != (uint *)0x0) {
          uVar11 = puVar13[2];
          puVar13[2] = 0;
          ::operator_delete(puVar20,0x10);
          puVar20 = puVar13;
        }
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar15 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar15 = local_98.Hash.SecondaryData;
          }
          for (iVar12 = *(int *)((longlong)FVar15 + (ulonglong)(local_98.HashSize - 1U & uVar11) * 4
                                ); iVar12 != -1;
              iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + local_98.Elements._0_8_)) {
            if (*(uint *)((longlong)iVar12 * 0x20 + local_98.Elements._0_8_) == uVar11) {
              FVar15 = (ForElementType<FSetElementId>)&local_98.Hash;
              if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar15 = local_98.Hash.SecondaryData;
              }
              uVar16 = *(uint *)((longlong)FVar15 + (ulonglong)(local_98.HashSize - 1U & uVar11) * 4
                                );
              if (uVar16 == 0xffffffff) goto LAB_1434bdaab;
              goto LAB_1434bda90;
            }
          }
        }
        goto LAB_1434bd9fa;
      }
joined_r0x0001434bda0a:
      while (puVar20 != (uint *)0x0) {
        puVar13 = *(uint **)puVar20;
        ::operator_delete(puVar20,0x10);
        puVar20 = puVar13;
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
    }
    bVar8 = true;
  }
  return bVar8;
joined_r0x0001434bd81c:
  puVar13 = puVar20;
  if (uVar11 == 0xffffffff) goto LAB_1434bd83f;
  puVar13 = (uint *)((longlong)(int)uVar11 * 0x20 + local_98.Elements._0_8_);
  if (*puVar13 == local_e8[0]) {
    if (puVar13 != (uint *)0x0) goto LAB_1434bd865;
    goto LAB_1434bd83f;
  }
  uVar11 = puVar13[6];
  goto joined_r0x0001434bd81c;
LAB_1434bd83f:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
LAB_1434bd865:
  if (((*(uint **)(puVar13 + 2) <= &local_f8) &&
      (&local_f8 < *(uint **)(puVar13 + 2) + (int)puVar13[5])) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  uVar11 = puVar13[4];
  if (uVar11 == puVar13[5]) {
    uVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)(puVar13 + 2),(int *)(puVar13 + 5));
  }
  puVar13[4] = uVar11 + 1;
  *(uint *)(*(longlong *)(puVar13 + 2) + (longlong)(int)uVar11 * 4) = local_f8;
LAB_1434bd7c5:
  local_f8 = local_f8 + 1;
  puVar13 = (uint *)(ulonglong)local_f8;
  if (iVar12 <= (int)local_f8) goto LAB_1434bd7d8;
  goto LAB_1434bd650;
  while (uVar16 = puVar13[6], uVar16 != 0xffffffff) {
LAB_1434bda90:
    puVar13 = (uint *)((longlong)(int)uVar16 * 0x20 + local_98.Elements._0_8_);
    if (*puVar13 == uVar11) {
      if (puVar13 != (uint *)0x0) goto LAB_1434bdad3;
      goto LAB_1434bdaad;
    }
  }
LAB_1434bdaab:
  puVar13 = (uint *)0x0;
LAB_1434bdaad:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
LAB_1434bdad3:
  puVar19 = *(uint **)(puVar13 + 2);
  uVar16 = puVar13[4];
  puVar1 = puVar19 + (int)uVar16;
  while( true ) {
    if (puVar13[4] != uVar16) {
      local_f2[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f2);
    }
    if (puVar19 == puVar1) break;
    local_ec = *puVar19;
    puVar14 = ::operator_new(0x10);
    if (puVar14 != (uint *)0x0) {
      puVar14[0] = 0;
      puVar14[1] = 0;
      puVar14[2] = local_ec;
      *(uint **)local_d8 = puVar14;
      local_d8 = (int *)puVar14;
    }
    pFVar6 = (param_3->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_ec) &&
        ((FScriptContainerElement *)&local_ec < pFVar6 + (longlong)param_3->ArrayMax * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    iVar12 = param_3->ArrayNum;
    if (iVar12 == param_3->ArrayMax) {
      iVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    puVar19 = puVar19 + 1;
    param_3->ArrayNum = iVar12 + 1;
    *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_ec;
  }
LAB_1434bd9fa:
  local_c8.Key._0_4_ = uVar11;
  if (*(longlong *)puVar20 == 0) goto joined_r0x0001434bda0a;
  goto LAB_1434bd980;
}

// GetBonesInIncreasingOrder @ 1434bdc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
UE::Geometry::FMeshBones::GetBonesInIncreasingOrder
          (FDynamicMesh3 *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4,bool *param_5)

{
  int *piVar1;
  FDynamicMeshAttributeSet *pFVar2;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  TTuple<FName,int> *pTVar18;
  ulonglong uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ForElementType<unsigned_int> FVar28;
  undefined1 auStackY_1b8 [32];
  byte local_168;
  undefined1 local_167;
  undefined1 local_166 [2];
  undefined4 local_164;
  undefined4 local_160 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_148;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_140;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_138;
  TArray<int,TSizedDefaultAllocator<32>_> *local_130;
  int local_128;
  int local_124;
  uint local_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_118;
  undefined4 local_110;
  uint uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  FScriptContainerElement *local_100;
  undefined4 local_f8;
  int local_f4;
  FScriptContainerElement *local_f0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_e8;
  bool *local_e0;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
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
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_e0 = param_5;
  pFVar2 = (param_1->AttributeSet).Ptr;
  if ((pFVar2 == (FDynamicMeshAttributeSet *)0x0) ||
     (pTVar3 = (pFVar2->BoneNameAttrib).Ptr,
     pTVar3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) {
    return false;
  }
  local_140 = &pTVar3->AttribValues;
  local_130 = &((pFVar2->BoneParentIndexAttrib).Ptr)->AttribValues;
  local_138 = &((pFVar2->BonePoseAttrib).Ptr)->AttribValues;
  bVar12 = true;
  uVar14 = (pTVar3->AttribValues).ArrayNum;
  if (uVar14 == 0) {
    return true;
  }
  uVar20 = 0;
  local_168 = 1;
  local_148 = param_2;
  local_e8 = param_3;
  if (0 < (int)uVar14) {
    lVar24 = 0;
    do {
      uVar23 = 0;
      if ((int)uVar20 < local_130->ArrayNum) {
        uVar23 = ~uVar20 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      iVar15 = *(int *)((local_130->AllocatorInstance).Data + lVar24 * 4);
      if ((iVar15 == -1) && (uVar20 != 0)) {
        local_168 = 0;
        goto LAB_1434bdd3b;
      }
      if ((int)uVar20 <= iVar15) {
        bVar12 = false;
        local_168 = 0;
        goto LAB_1434bdd33;
      }
      uVar20 = uVar20 + 1;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uVar14);
    bVar12 = true;
  }
LAB_1434bdd33:
  pTVar9 = local_138;
  if (bVar12) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(local_148,local_140);
    if (param_3 != local_130) {
      iVar15 = local_130->ArrayNum;
      piVar1 = &param_3->ArrayMax;
      pFVar4 = (local_130->AllocatorInstance).Data;
      param_3->ArrayNum = iVar15;
      if ((iVar15 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar15,*piVar1,&param_3->AllocatorInstance,iVar15,piVar1);
        if (iVar15 != 0) {
          memcpy((param_3->AllocatorInstance).Data,pFVar4,(longlong)iVar15 << 2);
        }
      }
    }
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=(param_4,pTVar9);
LAB_1434be900:
    *local_e0 = (bool)(local_168 ^ 1);
    return true;
  }
LAB_1434bdd3b:
  pFVar4 = (local_130->AllocatorInstance).Data;
  pFVar21 = pFVar4;
joined_r0x0001434bdd50:
  if (pFVar21 == pFVar4 + (longlong)local_130->ArrayNum * 4) {
LAB_1434bdd60:
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6413767898266861697>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\MeshBones.cpp"
                        ,0x81,"RootBoneIdx != INDEX_NONE");
    if (!bVar12) {
      return false;
    }
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  if (*(int *)pFVar21 != -1) {
    pFVar21 = pFVar21 + 4;
    goto joined_r0x0001434bdd50;
  }
  uVar20 = (uint)((longlong)pFVar21 - (longlong)pFVar4 >> 2);
  if (uVar20 == 0xffffffff) goto LAB_1434bdd60;
  uVar19 = 0;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (0 < (int)uVar14) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&local_158.AllocatorInstance,0,&local_158.ArrayMax);
  }
  GetBoneChildren(param_1,uVar20,&local_158,true);
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar14);
  uVar23 = 1;
  if (3 < uVar14) {
    uVar26 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_f8 = (undefined4)lVar24;
    uVar23 = 1 << ((byte)lVar24 & 0x1f);
  }
  if ((local_60 == 0) || ((int)local_60 < (int)uVar23)) {
    local_60 = uVar23;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
    }
    if (uVar23 != 0) {
      uVar25 = uVar23;
      if (uVar23 < 2) {
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          uVar25 = 0;
          goto LAB_1434bdebe;
        }
      }
      else {
LAB_1434bdebe:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar25,4);
      }
      if (0 < (int)uVar23) {
        uVar27 = (ulonglong)uVar23;
        uVar26 = uVar19;
        do {
          FVar22.Data = local_70;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FVar22.Data = local_68.Data;
          }
          uVar17 = uVar26 & (longlong)(int)uVar23 - 1U;
          uVar26 = uVar26 + 1;
          *(undefined4 *)(FVar22.Data + uVar17 * 4) = 0xffffffff;
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
    }
    if (local_60 != 0) {
      pTStack_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
      local_120 = 0;
      uStack_11c = 1;
      uStack_10c = 0;
      uStack_108 = 0;
      if (local_80 != 0) {
        FVar28 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
        if (local_88 != (ForElementType<unsigned_int>)0x0) {
          FVar28 = local_88;
        }
        uVar23 = *(uint *)FVar28;
        uVar26 = uVar19;
        while (uVar23 == 0) {
          uStack_108 = (int)uVar26 + 0x20;
          uVar26 = (ulonglong)uStack_108;
          iVar15 = (int)uVar19;
          local_120 = iVar15 + 1;
          uVar19 = (ulonglong)local_120;
          if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_120)
          goto LAB_1434bdfbb;
          uVar23 = ((uint *)((longlong)FVar28 + 4))[iVar15];
        }
        uStack_11c = -uVar23 & uVar23;
        uVar19 = (ulonglong)uStack_11c * 2 + 1;
        lVar24 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        local_f4 = (int)lVar24;
        uStack_10c = (uStack_108 - 1) + local_f4;
        uVar19 = (ulonglong)uStack_10c;
        if ((int)uStack_10c <= (int)local_80) goto LAB_1434bdfc2;
LAB_1434bdfbb:
        uVar19 = (ulonglong)local_80;
        uStack_10c = local_80;
      }
LAB_1434bdfc2:
      local_110 = 0xffffffff;
      local_d8 = (longlong *)local_a8;
      local_d0._padding_ = CONCAT44(uStack_11c,local_120);
      local_d0.CurrentBitIndex = uStack_10c;
      local_d0.UnvisitedBitMask = 0xffffffff;
      local_d0._28_4_ = uStack_104;
      local_d0.BaseBitIndex = uStack_108;
      local_d0.Array = pTStack_118;
      if ((int)uVar19 < (int)local_80) {
        do {
          iVar15 = (int)uVar19;
          uVar5 = *(undefined8 *)(*local_d8 + (longlong)iVar15 * 0x14);
          lVar24 = *local_d8 + (longlong)iVar15 * 0x14;
          uVar23 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
          uVar23 = local_60 - 1 & uVar23 + (int)((ulonglong)uVar5 >> 0x20);
          *(uint *)(lVar24 + 0x10) = uVar23;
          FVar22.Data = local_70;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FVar22.Data = local_68.Data;
          }
          uVar19 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar23;
          *(undefined4 *)(lVar24 + 0xc) = *(undefined4 *)(FVar22.Data + uVar19 * 4);
          *(int *)(FVar22.Data + uVar19 * 4) = iVar15;
          local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
          uVar19 = (ulonglong)(uint)local_d0.CurrentBitIndex;
        } while (local_d0.CurrentBitIndex < (local_d0.Array)->NumBits);
      }
    }
  }
  if (local_148->ArrayMax < (int)uVar14) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar14,&local_148->AllocatorInstance,local_148->ArrayNum,&local_148->ArrayMax);
  }
  if (param_3->ArrayMax < (int)uVar14) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
  }
  if (param_4->ArrayMax < (int)uVar14) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar14,&param_4->AllocatorInstance,param_4->ArrayNum,&param_4->ArrayMax);
  }
  pTVar8 = local_140;
  local_128 = 0;
  uVar23 = ~uVar20 >> 0x1f;
  uVar14 = 0;
  if ((int)uVar20 < local_140->ArrayNum) {
    uVar14 = uVar23;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  lVar24 = (longlong)(int)uVar20;
  TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
  Emplace<FName_const_&,int>
            ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *)
             local_a8,(FName *)((pTVar8->AllocatorInstance).Data + lVar24 * 8),&local_128);
  uVar14 = 0;
  if ((int)uVar20 < pTVar8->ArrayNum) {
    uVar14 = uVar23;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  pTVar7 = local_148;
  pFVar4 = (pTVar8->AllocatorInstance).Data + lVar24 * 8;
  pFVar21 = (local_148->AllocatorInstance).Data;
  if (((pFVar21 <= pFVar4) && (pFVar4 < pFVar21 + (longlong)local_148->ArrayMax * 8)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  iVar15 = pTVar7->ArrayNum;
  if (iVar15 == pTVar7->ArrayMax) {
    iVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
  }
  pTVar7->ArrayNum = iVar15 + 1;
  local_164 = 0xffffffff;
  *(undefined8 *)((pTVar7->AllocatorInstance).Data + (longlong)iVar15 * 8) = *(undefined8 *)pFVar4;
  pFVar4 = (param_3->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_164) &&
      ((FScriptContainerElement *)&local_164 < pFVar4 + (longlong)param_3->ArrayMax * 4)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  iVar15 = param_3->ArrayNum;
  if (iVar15 == param_3->ArrayMax) {
    iVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  pTVar9 = local_138;
  param_3->ArrayNum = iVar15 + 1;
  *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_164;
  uVar14 = 0;
  if ((int)uVar20 < local_138->ArrayNum) {
    uVar14 = uVar23;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  pFVar4 = (param_4->AllocatorInstance).Data;
  pFVar21 = (pTVar9->AllocatorInstance).Data + lVar24 * 0x60;
  if (((pFVar4 <= pFVar21) && (pFVar21 < pFVar4 + (longlong)param_4->ArrayMax * 0x60)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  iVar15 = param_4->ArrayNum;
  if (iVar15 == param_4->ArrayMax) {
    iVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1060,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar15 + 1;
  uVar5 = *(undefined8 *)(pFVar21 + 8);
  pFVar4 = (param_4->AllocatorInstance).Data;
  lVar24 = (longlong)iVar15 * 0x60;
  *(undefined8 *)(pFVar4 + lVar24) = *(undefined8 *)pFVar21;
  *(undefined8 *)(pFVar4 + lVar24 + 8) = uVar5;
  uVar5 = *(undefined8 *)(pFVar21 + 0x18);
  *(undefined8 *)(pFVar4 + lVar24 + 0x10) = *(undefined8 *)(pFVar21 + 0x10);
  *(undefined8 *)(pFVar4 + lVar24 + 0x10 + 8) = uVar5;
  uVar5 = *(undefined8 *)(pFVar21 + 0x28);
  *(undefined8 *)(pFVar4 + lVar24 + 0x20) = *(undefined8 *)(pFVar21 + 0x20);
  *(undefined8 *)(pFVar4 + lVar24 + 0x20 + 8) = uVar5;
  uVar5 = *(undefined8 *)(pFVar21 + 0x38);
  *(undefined8 *)(pFVar4 + lVar24 + 0x30) = *(undefined8 *)(pFVar21 + 0x30);
  *(undefined8 *)(pFVar4 + lVar24 + 0x30 + 8) = uVar5;
  uVar5 = *(undefined8 *)(pFVar21 + 0x48);
  *(undefined8 *)(pFVar4 + lVar24 + 0x40) = *(undefined8 *)(pFVar21 + 0x40);
  *(undefined8 *)(pFVar4 + lVar24 + 0x40 + 8) = uVar5;
  uVar5 = *(undefined8 *)(pFVar21 + 0x58);
  *(undefined8 *)(pFVar4 + lVar24 + 0x50) = *(undefined8 *)(pFVar21 + 0x50);
  *(undefined8 *)(pFVar4 + lVar24 + 0x50 + 8) = uVar5;
  iVar15 = local_158.ArrayNum;
  local_f0 = local_158.AllocatorInstance.Data + (longlong)local_158.ArrayNum * 4;
  FVar22.Data = local_158.AllocatorInstance.Data;
  while( true ) {
    pFVar4 = local_f0;
    local_100 = FVar22.Data;
    if (local_158.ArrayNum != iVar15) {
      local_167 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_167);
    }
    pTVar11 = local_e8;
    pTVar10 = local_130;
    pTVar8 = local_140;
    if (FVar22.Data == pFVar4) break;
    uVar14 = *(uint *)FVar22.Data;
    lVar24 = (longlong)(int)uVar14;
    local_124 = local_a8._8_4_ - local_74;
    uVar23 = ~uVar14 >> 0x1f;
    uVar20 = 0;
    if ((int)uVar14 < local_140->ArrayNum) {
      uVar20 = uVar23;
    }
    if ((uVar20 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
    Emplace<FName_const_&,int>
              ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *
               )local_a8,(FName *)((pTVar8->AllocatorInstance).Data + lVar24 * 8),&local_124);
    uVar20 = 0;
    if ((int)uVar14 < pTVar8->ArrayNum) {
      uVar20 = uVar23;
    }
    if ((uVar20 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    pFVar21 = (pTVar7->AllocatorInstance).Data;
    pFVar4 = (pTVar8->AllocatorInstance).Data + lVar24 * 8;
    if (((pFVar21 <= pFVar4) && (pFVar4 < pFVar21 + (longlong)pTVar7->ArrayMax * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    iVar16 = pTVar7->ArrayNum;
    if (iVar16 == pTVar7->ArrayMax) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
    }
    pTVar9 = local_138;
    pTVar7->ArrayNum = iVar16 + 1;
    *(undefined8 *)((pTVar7->AllocatorInstance).Data + (longlong)iVar16 * 8) = *(undefined8 *)pFVar4
    ;
    uVar20 = 0;
    if ((int)uVar14 < local_138->ArrayNum) {
      uVar20 = uVar23;
    }
    if ((uVar20 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    pFVar4 = (param_4->AllocatorInstance).Data;
    pFVar21 = (pTVar9->AllocatorInstance).Data + lVar24 * 0x60;
    if (((pFVar4 <= pFVar21) && (pFVar21 < pFVar4 + (longlong)param_4->ArrayMax * 0x60)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    iVar16 = param_4->ArrayNum;
    if (iVar16 == param_4->ArrayMax) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar16 + 1;
    uVar5 = *(undefined8 *)(pFVar21 + 8);
    pFVar4 = (param_4->AllocatorInstance).Data;
    lVar24 = (longlong)iVar16 * 0x60;
    *(undefined8 *)(pFVar4 + lVar24) = *(undefined8 *)pFVar21;
    *(undefined8 *)(pFVar4 + lVar24 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pFVar21 + 0x18);
    *(undefined8 *)(pFVar4 + lVar24 + 0x10) = *(undefined8 *)(pFVar21 + 0x10);
    *(undefined8 *)(pFVar4 + lVar24 + 0x10 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pFVar21 + 0x28);
    *(undefined8 *)(pFVar4 + lVar24 + 0x20) = *(undefined8 *)(pFVar21 + 0x20);
    *(undefined8 *)(pFVar4 + lVar24 + 0x20 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pFVar21 + 0x38);
    *(undefined8 *)(pFVar4 + lVar24 + 0x30) = *(undefined8 *)(pFVar21 + 0x30);
    *(undefined8 *)(pFVar4 + lVar24 + 0x30 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pFVar21 + 0x48);
    *(undefined8 *)(pFVar4 + lVar24 + 0x40) = *(undefined8 *)(pFVar21 + 0x40);
    *(undefined8 *)(pFVar4 + lVar24 + 0x40 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pFVar21 + 0x58);
    FVar22.Data = local_100 + 4;
    *(undefined8 *)(pFVar4 + lVar24 + 0x50) = *(undefined8 *)(pFVar21 + 0x50);
    *(undefined8 *)(pFVar4 + lVar24 + 0x50 + 8) = uVar5;
  }
  iVar15 = local_158.ArrayNum;
  pFVar4 = local_158.AllocatorInstance.Data + (longlong)local_158.ArrayNum * 4;
  FVar22.Data = local_158.AllocatorInstance.Data;
  while( true ) {
    if (local_158.ArrayNum != iVar15) {
      local_166[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_166);
    }
    if (FVar22.Data == pFVar4) break;
    uVar14 = *(uint *)FVar22.Data;
    uVar20 = 0;
    if ((int)uVar14 < pTVar10->ArrayNum) {
      uVar20 = ~uVar14 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    uVar14 = *(uint *)((pTVar10->AllocatorInstance).Data + (longlong)(int)uVar14 * 4);
    uVar20 = 0;
    if ((int)uVar14 < pTVar8->ArrayNum) {
      uVar20 = ~uVar14 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    pTVar18 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)local_a8,
                     *(FName *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar14 * 8));
    if ((pTVar18 == (TTuple<FName,int> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    local_160[0] = *(undefined4 *)&pTVar18->field_0x8;
    pFVar21 = (pTVar11->AllocatorInstance).Data;
    if (((pFVar21 <= (FScriptContainerElement *)local_160) &&
        ((FScriptContainerElement *)local_160 < pFVar21 + (longlong)pTVar11->ArrayMax * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    iVar16 = pTVar11->ArrayNum;
    if (iVar16 == pTVar11->ArrayMax) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
    }
    FVar22.Data = FVar22.Data + 4;
    pTVar11->ArrayNum = iVar16 + 1;
    *(undefined4 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_160[0];
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
    *local_e0 = (bool)(local_168 ^ 1);
    return true;
  }
  goto LAB_1434be900;
}

