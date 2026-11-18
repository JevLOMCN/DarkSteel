// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 8

// SetTriangleNormals @ 1435c39f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
UELocal::SetTriangleNormals(FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FDynamicMesh3 *pFVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  byte bVar10;
  FDynamicMeshAttributeSet *pFVar11;
  FDynamicMeshAttributeSet *pFVar12;
  ForAnyElementType FVar13;
  undefined ***pppuVar14;
  uint uVar15;
  uint *puVar16;
  ForElementType<FSetElementId> FVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ForElementType<unsigned_int> FVar21;
  ulonglong uVar22;
  uint *puVar23;
  FDynamicMeshAttributeSet *pFVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_268 [32];
  undefined1 local_238 [8];
  int local_230 [2];
  undefined1 local_228 [4];
  float local_224;
  float local_220;
  float local_21c;
  TPairInitializer<int_const_&,int_const_&> local_218;
  uint local_208 [2];
  code *local_200;
  code **local_1f8;
  int **local_1f0;
  FIndex3i_u_0 *local_1e8;
  TVector<double>_u_0 local_1e0;
  uint local_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  undefined4 local_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  FDynamicMeshAttributeSet *local_188;
  TArray<int,TSizedDefaultAllocator<32>_> *local_180;
  FDynamicMesh3 *local_170;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  FSparseArrayAllocationInfo local_118;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_108;
  FScriptContainerElement local_d0 [8];
  ForAnyElementType local_c8;
  uint local_c0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_b8;
  code *local_68 [2];
  undefined **local_58;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_180 = param_2;
  local_170 = param_1;
  if (((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh->HasAttributes()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\RevolveGenerator.cpp"
                         ,0x17,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar24 = (param_1->AttributeSet).Ptr;
  pFVar12 = (FDynamicMeshAttributeSet *)0x0;
  pFVar11 = pFVar12;
  if (pFVar24 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar11 = pFVar24;
  }
  pFVar24 = pFVar12;
  if (0 < (pFVar11->NormalLayers).Array.ArrayNum) {
    pFVar24 = *(FDynamicMeshAttributeSet **)(pFVar11->NormalLayers).Array.AllocatorInstance.Data;
  }
  pFVar25 = (param_2->AllocatorInstance).Data;
  uVar15 = param_2->ArrayNum;
  local_188 = pFVar24;
  if (((int)uVar15 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  local_108.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_108.AllocationFlags.NumBits = 0;
  local_108.AllocationFlags.MaxBits = 0x80;
  local_108.FirstFreeIndex = -1;
  local_108.NumFreeIndices = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  if (uVar15 == 0) goto LAB_1435c3d22;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_108,uVar15);
  uVar18 = 1;
  if (3 < uVar15) {
    uVar22 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar8 & 0x1f);
  }
  if ((local_c0 != 0) && ((int)uVar18 <= (int)local_c0)) goto LAB_1435c3d22;
  local_c0 = uVar18;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
  }
  if (uVar18 != 0) {
    uVar20 = uVar18;
    if (uVar18 < 2) {
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        uVar20 = 0;
        goto LAB_1435c3b81;
      }
    }
    else {
LAB_1435c3b81:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar20,4);
    }
    if (0 < (int)uVar18) {
      uVar22 = (ulonglong)uVar18;
      pFVar11 = pFVar12;
      do {
        FVar13.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_c8.Data;
        }
        uVar7 = (ulonglong)pFVar11 & (longlong)(int)uVar18 - 1U;
        pFVar11 = (FDynamicMeshAttributeSet *)((longlong)&pFVar11->_padding_ + 1);
        *(undefined4 *)(FVar13.Data + uVar7 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (local_c0 != 0) {
    pTStack_1c0 = &local_108.AllocationFlags;
    local_1c8 = 0;
    uStack_1c4 = 1;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    if (local_108.AllocationFlags.NumBits != 0) {
      FVar21 = (ForElementType<unsigned_int>)&local_108.AllocationFlags;
      if (local_108.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_108.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar18 = *(uint *)FVar21;
      pFVar11 = pFVar12;
      while (uVar18 == 0) {
        uStack_1b0 = (int)pFVar11 + 0x20;
        pFVar11 = (FDynamicMeshAttributeSet *)(ulonglong)uStack_1b0;
        iVar5 = (int)pFVar12;
        local_1c8 = iVar5 + 1;
        pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)local_1c8;
        if ((int)((local_108.AllocationFlags.NumBits - 1U) +
                 ((int)(local_108.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_1c8) goto LAB_1435c3c8a;
        uVar18 = *(uint *)((uchar *)((longlong)FVar21 + 4) + (longlong)iVar5 * 4);
      }
      uStack_1c4 = -uVar18 & uVar18;
      uVar22 = (ulonglong)uStack_1c4 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uStack_1b4 = (uStack_1b0 - 1) + (int)lVar8;
      pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)uStack_1b4;
      if (local_108.AllocationFlags.NumBits < (int)uStack_1b4) {
LAB_1435c3c8a:
        pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)(uint)local_108.AllocationFlags.NumBits;
        uStack_1b4 = local_108.AllocationFlags.NumBits;
      }
    }
    local_1b8 = 0xffffffff;
    local_168 = &local_108;
    local_160._padding_ = CONCAT44(uStack_1c4,local_1c8);
    local_160.CurrentBitIndex = uStack_1b4;
    local_160.UnvisitedBitMask = 0xffffffff;
    local_160._28_4_ = uStack_1ac;
    local_160.BaseBitIndex = uStack_1b0;
    local_160.Array = pTStack_1c0;
    if ((int)pFVar12 < local_108.AllocationFlags.NumBits) {
      do {
        pFVar19 = (local_168->Data).AllocatorInstance.Data;
        lVar8 = (longlong)(int)pFVar12;
        uVar18 = local_c0 - 1 & *(uint *)(pFVar19 + lVar8 * 0xc);
        *(uint *)(pFVar19 + lVar8 * 0xc + 8) = uVar18;
        FVar13.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_c8.Data;
        }
        uVar22 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar18;
        *(undefined4 *)(pFVar19 + lVar8 * 0xc + 4) = *(undefined4 *)(FVar13.Data + uVar22 * 4);
        *(int *)(FVar13.Data + uVar22 * 4) = (int)pFVar12;
        local_160.UnvisitedBitMask = local_160.UnvisitedBitMask & ~local_160._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
        pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)(uint)local_160.CurrentBitIndex;
      } while (local_160.CurrentBitIndex < (local_160.Array)->NumBits);
    }
  }
LAB_1435c3d22:
  pFVar19 = pFVar25 + (longlong)(int)uVar15 * 4;
  if (pFVar25 != pFVar19) {
    puVar23 = (uint *)0x0;
    do {
      if (local_108.NumFreeIndices == 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)&local_108,&local_108.Data.ArrayNum,
                           &local_108.Data.ArrayMax);
        iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_108.AllocationFlags,1)
        ;
        FVar21 = (ForElementType<unsigned_int>)&local_108.AllocationFlags;
        if (local_108.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar21 = local_108.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        bVar10 = (byte)iVar6 & 0x1f;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0x1f;
          bVar10 = bVar10 - 0x20;
        }
        puVar16 = (uint *)((longlong)FVar21 + (longlong)(iVar6 >> 5) * 4);
        *puVar16 = *puVar16 & ~(1 << (bVar10 & 0x1f));
        iVar6 = local_108.FirstFreeIndex;
      }
      else {
        iVar6 = *(int *)(local_108.Data.AllocatorInstance.Data +
                        (longlong)local_108.FirstFreeIndex * 0xc + 4);
        local_108.NumFreeIndices = local_108.NumFreeIndices + -1;
        iVar5 = local_108.FirstFreeIndex;
        if (local_108.NumFreeIndices != 0) {
          *(undefined4 *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc) =
               0xffffffff;
        }
      }
      local_108.FirstFreeIndex = iVar6;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex(&local_108,&local_118,iVar5);
      puVar16 = puVar23;
      if (local_118.Pointer != (uint *)0x0) {
        *(uint *)local_118.Pointer = *(uint *)pFVar25;
        *(uint *)((longlong)local_118.Pointer + 4) = 0xffffffff;
        puVar16 = local_118.Pointer;
      }
      uVar15 = *puVar16;
      if ((local_108.Data.ArrayNum - local_108.NumFreeIndices != 1) &&
         (local_108.Data.ArrayNum != local_108.NumFreeIndices)) {
        FVar13.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_c8.Data;
        }
        for (iVar5 = *(int *)(FVar13.Data + (ulonglong)(local_c0 - 1 & uVar15) * 4); iVar5 != -1;
            iVar5 = *(int *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar5 * 0xc + 4)) {
          if (*(uint *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar5 * 0xc) == uVar15) {
            if (iVar5 != -1) {
              *(uint *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar5 * 0xc) = uVar15;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized(&local_108,local_118.Index,1);
              goto LAB_1435c412f;
            }
            break;
          }
        }
      }
      uVar20 = local_108.Data.ArrayNum - local_108.NumFreeIndices;
      uVar18 = 1;
      if (3 < uVar20) {
        uVar22 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar18 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((int)uVar20 < 1) || ((int)uVar18 <= (int)local_c0)) {
        uVar15 = local_c0 - 1 & uVar15;
        puVar16[2] = uVar15;
        FVar13.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_c8.Data;
        }
        uVar22 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar15;
        puVar16[1] = *(uint *)(FVar13.Data + uVar22 * 4);
        *(int *)(FVar13.Data + uVar22 * 4) = local_118.Index;
      }
      else {
        local_c0 = uVar18;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
        }
        if (uVar18 != 0) {
          uVar15 = uVar18;
          if (uVar18 < 2) {
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              uVar15 = 0;
              goto LAB_1435c3f41;
            }
          }
          else {
LAB_1435c3f41:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_c8,0,uVar15,4);
          }
          if (0 < (int)uVar18) {
            uVar22 = (ulonglong)uVar18;
            puVar16 = puVar23;
            do {
              FVar13.Data = local_d0;
              if (local_c8.Data != (FScriptContainerElement *)0x0) {
                FVar13.Data = local_c8.Data;
              }
              uVar7 = (ulonglong)puVar16 & (longlong)(int)uVar18 - 1U;
              puVar16 = (uint *)((longlong)puVar16 + 1);
              *(undefined4 *)(FVar13.Data + uVar7 * 4) = 0xffffffff;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
        }
        if (local_c0 != 0) {
          pTStack_1a0 = &local_108.AllocationFlags;
          local_1a8 = 0;
          uStack_1a4 = 1;
          uStack_194 = 0;
          uStack_190 = 0;
          puVar16 = puVar23;
          if (local_108.AllocationFlags.NumBits != 0) {
            FVar21 = (ForElementType<unsigned_int>)&local_108.AllocationFlags;
            if (local_108.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar21 = local_108.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar15 = *(uint *)FVar21;
            puVar9 = puVar23;
            while (uVar15 == 0) {
              uStack_190 = (int)puVar9 + 0x20;
              puVar9 = (uint *)(ulonglong)uStack_190;
              iVar5 = (int)puVar16;
              local_1a8 = iVar5 + 1;
              puVar16 = (uint *)(ulonglong)local_1a8;
              if ((int)((local_108.AllocationFlags.NumBits - 1U) +
                       ((int)(local_108.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_1a8) goto LAB_1435c404a;
              uVar15 = *(uint *)((uchar *)((longlong)FVar21 + 4) + (longlong)iVar5 * 4);
            }
            uStack_1a4 = -uVar15 & uVar15;
            uVar22 = (ulonglong)uStack_1a4 * 2 + 1;
            lVar8 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            uStack_194 = (uStack_190 - 1) + (int)lVar8;
            puVar16 = (uint *)(ulonglong)uStack_194;
            if (local_108.AllocationFlags.NumBits < (int)uStack_194) {
LAB_1435c404a:
              puVar16 = (uint *)(ulonglong)(uint)local_108.AllocationFlags.NumBits;
              uStack_194 = local_108.AllocationFlags.NumBits;
            }
          }
          local_198 = 0xffffffff;
          local_140 = &local_108;
          local_138._padding_ = CONCAT44(uStack_1a4,local_1a8);
          local_138.CurrentBitIndex = uStack_194;
          local_138.UnvisitedBitMask = 0xffffffff;
          local_138._28_4_ = uStack_18c;
          local_138.BaseBitIndex = uStack_190;
          local_138.Array = pTStack_1a0;
          if ((int)puVar16 < local_108.AllocationFlags.NumBits) {
            do {
              pFVar1 = (local_140->Data).AllocatorInstance.Data;
              lVar8 = (longlong)(int)puVar16;
              uVar15 = local_c0 - 1 & *(uint *)(pFVar1 + lVar8 * 0xc);
              *(uint *)(pFVar1 + lVar8 * 0xc + 8) = uVar15;
              FVar13.Data = local_d0;
              if (local_c8.Data != (FScriptContainerElement *)0x0) {
                FVar13.Data = local_c8.Data;
              }
              uVar22 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar15;
              *(undefined4 *)(pFVar1 + lVar8 * 0xc + 4) = *(undefined4 *)(FVar13.Data + uVar22 * 4);
              *(int *)(FVar13.Data + uVar22 * 4) = (int)puVar16;
              local_138.UnvisitedBitMask = local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
              puVar16 = (uint *)(ulonglong)(uint)local_138.CurrentBitIndex;
            } while (local_138.CurrentBitIndex < (local_138.Array)->NumBits);
          }
        }
      }
LAB_1435c412f:
      pFVar25 = pFVar25 + 4;
      pFVar24 = local_188;
    } while (pFVar25 != pFVar19);
  }
  pFVar3 = local_170;
  puVar23 = (uint *)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UELocal::SetTriangleNormals'::`2'::<lambda_1>,1,0>::_vftable_;
  local_40 = (undefined ***)0x0;
  pFVar19 = (local_180->AllocatorInstance).Data;
  iVar5 = local_180->ArrayNum;
  local_50 = &local_108;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UELocal::SetTriangleNormals'::__l2::<lambda_1>,bool,int>::Call;
  local_b8.Elements._0_8_ = 0;
  pFVar25 = pFVar19 + (longlong)iVar5 * 4;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._48_4_ = 0xffffffff;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  while( true ) {
    if (local_180->ArrayNum != iVar5) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_228);
    }
    if (pFVar19 == pFVar25) break;
    uVar15 = *(uint *)pFVar19;
    if (-1 < *(int *)(*(longlong *)
                       (*(longlong *)&(pFVar24->SkinWeightAttributes).field_0x8 +
                       (ulonglong)(uVar15 * 3 >> 9) * 8) + (ulonglong)(uVar15 * 3 & 0x1ff) * 4)) {
      UE::Geometry::TDynamicMeshOverlay<float,3>::UnsetTriangle
                ((TDynamicMeshOverlay<float,3> *)pFVar24,uVar15,true);
    }
    lVar8 = *(longlong *)
             ((pFVar3->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8);
    local_218.Value = *(int **)(lVar8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
    local_208[0] = *(uint *)(lVar8 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
    local_238 = (undefined1  [8])0xffffffffffffffff;
    local_230[0] = -1;
    puVar16 = puVar23;
    if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
      FVar17 = (ForElementType<FSetElementId>)&local_b8.Hash;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar17 = local_b8.Hash.SecondaryData;
      }
      uVar18 = *(uint *)((longlong)FVar17 +
                        (ulonglong)(local_b8.HashSize - 1U & (uint)local_218.Value) * 4);
      while ((puVar16 = puVar23, uVar18 != 0xffffffff &&
             (puVar16 = (uint *)((longlong)(int)uVar18 * 0x10 + local_b8.Elements._0_8_),
             *puVar16 != (uint)local_218.Value))) {
        uVar18 = puVar16[2];
      }
    }
    puVar9 = puVar16 + 1;
    if (puVar16 == (uint *)0x0) {
      puVar9 = puVar23;
    }
    if (puVar9 == (uint *)0x0) {
      local_1f8 = local_68;
      local_200 = UE::Core::Private::Function::
                  TFunctionRefCaller<TUniqueFunction<bool___cdecl(int)>,bool,int>::Call;
      UE::Geometry::FMeshNormals::ComputeVertexNormal
                ((TVector<double> *)&local_1e0._s_0,pFVar3,(uint)local_218.Value,
                 (TFunctionRef<bool___cdecl(int)> *)&local_200,true,true);
      local_224 = (float)local_1e0._s_0.X;
      local_220 = (float)local_1e0._s_0.Y;
      local_21c = (float)local_1e0._s_0.Z;
      iVar6 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)pFVar24,&local_224);
      local_238._0_4_ = iVar6;
      local_1f0 = &local_218.Value;
      local_1e8 = (FIndex3i_u_0 *)local_238;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>(&local_b8,&local_218,(bool *)&local_1f0);
    }
    else {
      local_238._4_4_ = 0xffffffff;
      local_238._0_4_ = *puVar9;
    }
    puVar16 = puVar23;
    if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
      FVar17 = (ForElementType<FSetElementId>)&local_b8.Hash;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar17 = local_b8.Hash.SecondaryData;
      }
      uVar18 = *(uint *)((longlong)FVar17 +
                        (ulonglong)(local_b8.HashSize - 1U & local_218.Value._4_4_) * 4);
      while ((puVar16 = puVar23, uVar18 != 0xffffffff &&
             (puVar16 = (uint *)((longlong)(int)uVar18 * 0x10 + local_b8.Elements._0_8_),
             *puVar16 != local_218.Value._4_4_))) {
        uVar18 = puVar16[2];
      }
    }
    puVar9 = puVar16 + 1;
    if (puVar16 == (uint *)0x0) {
      puVar9 = puVar23;
    }
    if (puVar9 == (uint *)0x0) {
      local_1f8 = local_68;
      local_200 = UE::Core::Private::Function::
                  TFunctionRefCaller<TUniqueFunction<bool___cdecl(int)>,bool,int>::Call;
      UE::Geometry::FMeshNormals::ComputeVertexNormal
                ((TVector<double> *)&local_1e0._s_0,pFVar3,local_218.Value._4_4_,
                 (TFunctionRef<bool___cdecl(int)> *)&local_200,true,true);
      local_224 = (float)local_1e0._s_0.X;
      local_220 = (float)local_1e0._s_0.Y;
      local_21c = (float)local_1e0._s_0.Z;
      iVar6 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)pFVar24,&local_224);
      local_238._4_4_ = iVar6;
      local_1f0 = (int **)((longlong)&local_218.Value + 4);
      local_1e8 = (FIndex3i_u_0 *)((longlong)local_238 + 4);
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>(&local_b8,&local_218,(bool *)&local_1f0);
    }
    else {
      local_238._4_4_ = *puVar9;
    }
    puVar16 = puVar23;
    if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
      FVar17 = (ForElementType<FSetElementId>)&local_b8.Hash;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar17 = local_b8.Hash.SecondaryData;
      }
      uVar18 = *(uint *)((longlong)FVar17 + (ulonglong)(local_b8.HashSize - 1U & local_208[0]) * 4);
      while ((puVar16 = puVar23, uVar18 != 0xffffffff &&
             (puVar16 = (uint *)((longlong)(int)uVar18 * 0x10 + local_b8.Elements._0_8_),
             *puVar16 != local_208[0]))) {
        uVar18 = puVar16[2];
      }
    }
    puVar9 = puVar16 + 1;
    if (puVar16 == (uint *)0x0) {
      puVar9 = puVar23;
    }
    if (puVar9 == (uint *)0x0) {
      local_1f8 = local_68;
      local_200 = UE::Core::Private::Function::
                  TFunctionRefCaller<TUniqueFunction<bool___cdecl(int)>,bool,int>::Call;
      UE::Geometry::FMeshNormals::ComputeVertexNormal
                ((TVector<double> *)&local_1e0._s_0,pFVar3,local_208[0],
                 (TFunctionRef<bool___cdecl(int)> *)&local_200,true,true);
      local_224 = (float)local_1e0._s_0.X;
      local_220 = (float)local_1e0._s_0.Y;
      local_21c = (float)local_1e0._s_0.Z;
      local_230[0] = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                               ((TDynamicMeshOverlay<float,3> *)pFVar24,&local_224);
      local_1f0 = (int **)local_208;
      local_1e8 = (FIndex3i_u_0 *)&(((FIndex3i_u_0 *)local_238)->_s_0).C;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>(&local_b8,&local_218,(bool *)&local_1f0);
    }
    else {
      local_230[0] = *puVar9;
    }
    UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
              ((TDynamicMeshOverlay<float,3> *)pFVar24,uVar15,
               (FIndex3i *)&((FIndex3i_u_0 *)local_238)->_s_0,true);
    pFVar19 = pFVar19 + 4;
  }
  local_b8.HashSize = 0;
  if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  if (local_68[0] != (code *)0x0) {
    pppuVar14 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar14 = local_40;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  local_c0 = 0;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_108);
  return;
}

// SetTriangleUVsFromProjection @ 1435c48a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UELocal::SetTriangleUVsFromProjection
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TFrame3<double> *param_3,TVector2<float> *param_4,TVector2<float> *param_5,int param_6,
          bool param_7,bool param_8)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  FDynamicMeshAttributeSet *pFVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FDynamicMesh3 *pFVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  TDynamicMeshOverlay<float,2> *this;
  uint *puVar18;
  TVector<double> *pTVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  ForElementType<FSetElementId> FVar22;
  uint *puVar23;
  FScriptContainerElement *pFVar24;
  ForAnyElementType FVar25;
  longlong lVar26;
  longlong lVar27;
  uint *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int *piVar31;
  FScriptContainerElement *pFVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_268 [32];
  FScriptContainerElement *local_248;
  FScriptContainerElement *local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  undefined1 local_218 [8];
  ForAnyElementType local_210;
  undefined8 local_208;
  undefined1 local_200 [8];
  undefined8 local_1f8;
  FDynamicMesh3 *local_1f0;
  uint local_1e8;
  uint local_1e4;
  int *local_1e0;
  FIndex3i_u_0 local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  TPairInitializer<int_const_&,int_const_&> local_170;
  FScriptContainerElement *local_160;
  longlong local_158;
  FScriptContainerElement *local_150;
  TVector<double> local_148;
  TVector<double> local_130;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_118;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_1e0 = &param_2->ArrayNum;
  if (param_2->ArrayNum != 0) {
    pFVar8 = (param_1->AttributeSet).Ptr;
    local_1f8 = (TVector2<float>_u_0)param_4;
    local_1f0 = param_1;
    local_170.Value = (int *)param_3;
    if ((pFVar8 == (FDynamicMeshAttributeSet *)0x0) ||
       (iVar16 = (**(code **)(pFVar8->_padding_ + 0xa8))(), iVar16 <= param_6)) {
      local_1e0 = &param_2->ArrayNum;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mesh->HasAttributes() && Mesh->Attributes()->NumUVLayers() > UVLayerIndex"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\RevolveGenerator.cpp"
                          ,0x44,L"");
      if (bVar15) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    this = (TDynamicMeshOverlay<float,2> *)
           UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer((param_1->AttributeSet).Ptr,param_6);
    local_1e4 = param_2->ArrayNum;
    uVar21 = (ulonglong)(int)local_1e4;
    pFVar32 = (param_2->AllocatorInstance).Data;
    local_118.Elements._0_8_ = 0;
    local_118.Elements._8_8_ = 0;
    local_118.Elements._32_8_ = 0;
    local_118.Elements._40_4_ = 0;
    local_118.Elements._52_4_ = 0;
    local_118.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_118.HashSize = 0;
    local_210.Data = (FScriptContainerElement *)0x0;
    local_208 = 0;
    local_1c8 = 0x7f7fffff;
    uStack_1c4 = 0x7f7fffff;
    local_190 = 0x7f7fffff7f7fffff;
    local_190._4_4_ = 3.4028235e+38;
    local_190._0_4_ = 3.4028235e+38;
    local_1c0 = 0xff7fffff;
    uStack_1bc = 0xff7fffff;
    local_188 = 0xff7fffffff7fffff;
    local_188._4_4_ = -3.4028235e+38;
    local_188._0_4_ = -3.4028235e+38;
    local_118.Elements._44_4_ = 0x80;
    local_118.Elements._48_4_ = 0xffffffff;
    local_160 = pFVar32 + uVar21 * 4;
    piVar31 = &param_2->ArrayNum;
    fVar33 = local_188._4_4_;
    fVar34 = (float)local_188;
    fVar35 = local_190._4_4_;
    fVar36 = (float)local_190;
    while( true ) {
      pFVar24 = local_160;
      if (*piVar31 != (int)uVar21) {
        local_218[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_218);
      }
      if (pFVar32 == pFVar24) break;
      uVar17 = *(uint *)pFVar32;
      local_1e8 = uVar17;
      if (-1 < *(int *)(*(longlong *)
                         ((this->ElementTriangles).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar17 * 3 >> 9) * 8) + (ulonglong)(uVar17 * 3 & 0x1ff) * 4)) {
        UE::Geometry::TDynamicMeshOverlay<float,2>::UnsetTriangle(this,uVar17,true);
      }
      piVar31 = local_170.Value;
      pFVar14 = local_1f0;
      lVar26 = 3;
      lVar27 = 0;
      lVar9 = *(longlong *)
               ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8);
      local_180 = *(undefined8 *)(lVar9 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
      local_178 = *(undefined4 *)(lVar9 + 8 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
      local_1d8._0_8_ = 0xffffffffffffffff;
      local_1d8._s_0.C = -1;
      do {
        puVar28 = (uint *)0x0;
        uVar17 = *(uint *)((longlong)&local_180 + lVar27);
        puVar23 = puVar28;
        if (local_118.Elements._8_4_ != local_118.Elements._52_4_) {
          FVar22 = (ForElementType<FSetElementId>)&local_118.Hash;
          if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar22 = local_118.Hash.SecondaryData;
          }
          uVar7 = *(uint *)((longlong)FVar22 + (ulonglong)(local_118.HashSize - 1U & uVar17) * 4);
          while ((puVar23 = puVar28, uVar7 != 0xffffffff &&
                 (puVar23 = (uint *)((longlong)(int)uVar7 * 0x10 + local_118.Elements._0_8_),
                 *puVar23 != uVar17))) {
            uVar7 = puVar23[2];
          }
        }
        puVar18 = puVar23 + 1;
        if (puVar23 == (uint *)0x0) {
          puVar18 = puVar28;
        }
        if (puVar18 == (uint *)0x0) {
          lVar9 = *(longlong *)
                   ((pFVar14->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8
                   );
          pdVar1 = (double *)(lVar9 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
          local_148.field0_0x0._s_0.Z =
               *(double *)(lVar9 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
          dVar11 = *pdVar1 - (((TVector<double> *)piVar31)->field0_0x0)._s_0.X;
          dVar12 = local_148.field0_0x0._s_0.Z - (((TVector<double> *)piVar31)->field0_0x0)._s_0.Z;
          dVar13 = pdVar1[1] - (((TVector<double> *)piVar31)->field0_0x0)._s_0.Y;
          pTVar19 = UE::Geometry::TFrame3<double>::GetAxis((TFrame3<double> *)piVar31,&local_148,0);
          dVar4 = (pTVar19->field0_0x0)._s_0.Y;
          dVar5 = (pTVar19->field0_0x0)._s_0.X;
          dVar6 = (pTVar19->field0_0x0)._s_0.Z;
          pTVar19 = UE::Geometry::TFrame3<double>::GetAxis((TFrame3<double> *)piVar31,&local_130,1);
          local_1b8 = (float)(dVar13 * dVar4 + dVar11 * dVar5 + dVar12 * dVar6);
          local_1b4 = (float)(dVar13 * (pTVar19->field0_0x0)._s_0.Y +
                              dVar11 * (pTVar19->field0_0x0)._s_0.X +
                             dVar12 * (pTVar19->field0_0x0)._s_0.Z);
          if (local_1b8 < fVar36) {
            fVar36 = local_1b8;
          }
          if (fVar34 < local_1b8) {
            fVar34 = local_1b8;
          }
          if (local_1b4 < fVar35) {
            fVar35 = local_1b4;
          }
          if (fVar33 < local_1b4) {
            fVar33 = local_1b4;
          }
          pFVar24 = (FScriptContainerElement *)((longlong)&local_1d8 + lVar27);
          uVar17 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(this,&local_1b8);
          *(uint *)pFVar24 = uVar17;
          if (local_210.Data <= pFVar24) {
            if (pFVar24 < local_210.Data + (longlong)local_208._4_4_ * 4) {
              local_230 = (longlong)(int)local_208;
              local_228 = 4;
              local_240 = local_210.Data;
              local_248 = pFVar24;
              local_238 = (longlong)local_208._4_4_;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar15) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
          }
          iVar16 = (int)local_208;
          if ((int)local_208 == local_208._4_4_) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_210,(int *)((longlong)&local_208 + 4));
          }
          local_150 = pFVar24;
          local_208 = CONCAT44(local_208._4_4_,iVar16 + 1);
          *(uint *)(local_210.Data + (longlong)iVar16 * 4) = *(uint *)pFVar24;
          local_158 = (longlong)&local_180 + lVar27;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    (&local_118,&local_170,(bool *)&local_158);
        }
        else {
          *(uint *)((longlong)&local_1d8 + lVar27) = *puVar18;
        }
        lVar27 = lVar27 + 4;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                (this,local_1e8,(FIndex3i *)&local_1d8._s_0,true);
      uVar21 = (ulonglong)local_1e4;
      pFVar32 = pFVar32 + 4;
      param_1 = pFVar14;
      piVar31 = local_1e0;
    }
    if (param_8) {
      local_1b0 = fVar34 - fVar36;
      if (fVar34 - fVar36 <= 0.0) {
        local_1b0 = 0.0;
      }
      fStack_1ac = fVar33 - fVar35;
      if (fVar33 - fVar35 <= 0.0) {
        fStack_1ac = 0.0;
      }
      local_1b0 = ((TVector2<float>_u_0_s_0 *)local_1f8)->X / local_1b0;
      fStack_1ac = ((TVector2<float>_u_0_s_0 *)local_1f8)->Y / fStack_1ac;
      local_1f8._4_4_ = fStack_1ac;
      local_1f8._0_4_ = local_1b0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      local_1f8 = *local_1f8;
    }
    iVar16 = (int)local_208;
    pFVar32 = local_210.Data + (longlong)(int)local_208 * 4;
    fVar34 = (float)local_1f8._4_4_;
    fVar33 = (float)(undefined4)local_1f8;
    FVar25.Data = local_210.Data;
    while( true ) {
      if ((int)local_208 != iVar16) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_200);
      }
      if (FVar25.Data == pFVar32) break;
      uVar17 = *(uint *)FVar25.Data;
      pFVar24 = (this->Elements).Blocks.AllocatorInstance.Data;
      uVar21 = (ulonglong)((uVar17 & 0x7fffffff) >> 8);
      uVar30 = (ulonglong)(uVar17 * 2 + 1 & 0x1ff);
      uVar29 = (ulonglong)(uVar17 * 2 & 0x1ff);
      lVar9 = *(longlong *)(pFVar24 + (ulonglong)((uVar17 & 0x7fffffff) >> 8) * 8);
      fVar2 = *(float *)(lVar9 + uVar29 * 4);
      fVar3 = *(float *)(*(longlong *)(pFVar24 + uVar21 * 8) + uVar30 * 4);
      if (param_7) {
        local_1a8 = (fVar2 - fVar36) * fVar33;
        fStack_1a4 = (fVar3 - fVar35) * fVar34;
        uVar20 = CONCAT44(fStack_1a4,local_1a8);
      }
      else {
        local_1a0 = fVar2 * fVar33;
        fStack_19c = fVar3 * fVar34;
        uVar20 = CONCAT44(fStack_19c,local_1a0);
      }
      FVar25.Data = FVar25.Data + 4;
      local_198._0_4_ = (float)uVar20;
      local_198._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
      fVar2 = (param_5->field0_0x0)._s_0.Y;
      *(float *)(lVar9 + uVar29 * 4) = (float)local_198 + (param_5->field0_0x0)._s_0.X;
      *(float *)(*(longlong *)((this->Elements).Blocks.AllocatorInstance.Data + uVar21 * 8) +
                uVar30 * 4) = local_198._4_4_ + fVar2;
      local_198 = uVar20;
    }
    if (local_210.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data);
    }
    local_118.HashSize = 0;
    if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_118.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_118.Elements);
  }
  return;
}

// ConstructDenseUniformMeshPointSampling<UE::Geometry::FDynamicMesh3> @ 1435d3b80

void __cdecl
UELocal::ConstructDenseUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>
          (FDynamicMesh3 *param_1,double param_2,double param_3,int param_4,
          FNonUniformSamplingConfig *param_5,int param_6,FDenseSamplePointSet *param_7,int param_8)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  FTaskBase *this;
  FTask *pFVar5;
  FTaskBase *this_00;
  double dVar6;
  double dVar7;
  FPerTriangleDensePointSampling local_b8;
  FDenseSamplePointSet *local_a8;
  FDynamicMesh3 *pFStack_a0;
  FTriangleInfoCache local_98;
  
  this_00 = (FTaskBase *)0x0;
  local_98.TriNormals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.TriNormals.ArrayNum = 0;
  local_98.TriNormals.ArrayMax = 0;
  local_98.TriAreas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.TriAreas.ArrayNum = 0;
  local_98.TriAreas.ArrayMax = 0;
  local_98.Legacy_TriFrames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Legacy_TriFrames.ArrayNum = 0;
  local_98.Legacy_TriFrames.ArrayMax = 0;
  local_98.Legacy_UVTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Legacy_UVTriangles.ArrayNum = 0;
  local_98.Legacy_UVTriangles.ArrayMax = 0;
  FTriangleInfoCache::InitializeForTriangleSet<UE::Geometry::FDynamicMesh3>
            (&local_98,param_1,param_8);
  local_a8 = param_7;
  pFStack_a0 = param_1;
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____ConstructDenseUniformMeshPointSampling_VFDynamicMesh3_Geometry_UE___UELocal__YAXAEBVFDynamicMesh3_Geometry_UE__NNHAEBUFNonUniformSamplingConfig_2_HAEAUFDenseSamplePointSet_2_H_Z_XX_Private_Tasks_UE__6B_
    ;
    if (((*(ulonglong *)&(this->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*(longlong *)&(this->LowLevelTask).field_0x28 + 0x18))
              (&(this->LowLevelTask).field_0x28,&this->LowLevelTask);
    *(FTaskBase **)&this->LowLevelTask = this;
    *(undefined ***)&(this->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this->LowLevelTask).field_0x8 = this;
    pFVar5 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar5 != (FTask *)0x0) {
      this_00 = *(FTaskBase **)&pFVar5->field_0x30;
    }
    *(FTaskBase **)&(this->LowLevelTask).field_0x30 = this_00;
    *(undefined8 *)&(this->LowLevelTask).field_0x38 = 0xc80000542aa14c00;
    this->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this->_padding_);
    this[1]._padding_ = (longlong)local_a8;
    this[1]._padding_ = (longlong)pFStack_a0;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____ConstructDenseUniformMeshPointSampling_VFDynamicMesh3_Geometry_UE___UELocal__YAXAEBVFDynamicMesh3_Geometry_UE__NNHAEBUFNonUniformSamplingConfig_2_HAEAUFDenseSamplePointSet_2_H_Z__Private_Tasks_UE__6B_
    ;
    this_00 = this;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  dVar6 = (local_98.TotalArea / (param_2 * __real_400921fb54442d18 * param_2)) * (param_3 + param_3)
  ;
  dVar7 = dVar6;
  if ((param_6 != 0) && (dVar7 = (double)param_6, dVar6 <= (double)param_6)) {
    dVar7 = dVar6;
  }
  local_b8.TriSubArrays.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.TriSubArrays.ArrayNum = 0;
  local_b8.TriSubArrays.ArrayMax = 0;
  FPerTriangleDensePointSampling::InitializeForTriangleSet<UE::Geometry::FDynamicMesh3>
            (&local_b8,param_1,&local_98,local_98.TotalArea / dVar7,param_4,param_5,param_7,param_8)
  ;
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(this_00);
  }
  if (local_b8.TriSubArrays.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.TriSubArrays.AllocatorInstance.Data);
  }
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  if (local_98.Legacy_UVTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Legacy_UVTriangles.AllocatorInstance.Data);
  }
  if (local_98.Legacy_TriFrames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Legacy_TriFrames.AllocatorInstance.Data);
  }
  if (local_98.TriAreas.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.TriAreas.AllocatorInstance.Data);
  }
  if (local_98.TriNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.TriNormals.AllocatorInstance.Data);
  }
  return;
}

// NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3> @ 1435da690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>
          (FDynamicMesh3 *param_1,
          TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)> *param_2,double param_3,
          double param_4,int param_5,double param_6,int param_7,FNonUniformSamplingConfig *param_8,
          int param_9,int param_10,FProgressCancel *param_11)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ForElementType<double> FVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ForAnyElementType FVar26;
  ForElementType<double> FVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined8 in_XMM2_Qb;
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar40;
  undefined1 auVar39 [16];
  float fVar41;
  undefined4 uVar42;
  undefined1 auStackY_668 [32];
  ForAnyElementType local_610;
  undefined8 local_608;
  bool local_600;
  undefined1 local_5ff;
  undefined1 local_5fe [2];
  int local_5fc;
  undefined4 local_5f8;
  uint local_5f4;
  uint local_5f0;
  ForAnyElementType local_5e8;
  undefined8 local_5e0;
  ForAnyElementType local_5d8;
  undefined8 local_5d0;
  double local_5c8;
  uint local_5c0;
  double local_5b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_5b0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_5a0;
  uint local_590;
  uint local_58c;
  TArray<double,TSizedDefaultAllocator<32>_> local_588;
  FDenseSamplePointSet local_578;
  longlong local_518;
  double local_510;
  double dStack_508;
  double local_500;
  FDenseSamplePointSet *local_4f8;
  FNonUniformSamplingConfig *local_4f0;
  uint local_4e8;
  int local_4e4;
  int local_4e0;
  undefined4 local_4d8 [2];
  uint local_4d0;
  int local_4cc;
  undefined4 local_4c8 [2];
  ForElementType<double> local_4c0;
  TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)> *local_4b8;
  FProgressCancel *local_4b0;
  code *local_4a8;
  FDenseSamplePointSet **local_4a0;
  TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> local_498;
  double local_488;
  ForElementType<double> local_480;
  double local_478;
  double local_470;
  double local_468;
  double local_460;
  double local_458;
  undefined1 local_450 [16];
  double local_440;
  code *local_438;
  TArray<bool,TSizedDefaultAllocator<32>_> **local_430;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_428;
  FDenseSamplePointSet *local_420;
  double *local_418;
  double *local_410;
  TVector<double>_u_0 local_408;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  uchar local_398 [8];
  uchar auStack_390 [8];
  uchar local_388 [8];
  uchar auStack_380 [8];
  uchar local_378 [8];
  uchar auStack_370 [8];
  uchar local_368 [8];
  uchar auStack_360 [8];
  uchar local_358 [8];
  uchar auStack_350 [8];
  ForElementType<double> local_348;
  uint local_340;
  ForElementType<double> local_338;
  uint local_2e0;
  int local_2dc;
  ForElementType<double> local_2d8;
  uint local_280;
  int local_27c;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  undefined1 local_258 [16];
  FSparseDynamicPointOctree3 local_248;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_668;
  auVar39._8_4_ = (int)in_XMM2_Qb;
  auVar39._0_8_ = param_3;
  auVar39._12_4_ = (int)((ulonglong)in_XMM2_Qb >> 0x20);
  local_4f0 = param_8;
  local_4b0 = param_11;
  bVar28 = -1 < CpuChannel->Enabled;
  local_4b8 = param_2;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,double,int,double,int,UELocal::FNonUniformSamplingConfig_const&___ptr64,int,int,FProgressCancel*___ptr64)'
                ::__l2::__CpuProfilerEventSpecId446,"UniformMeshPointSampling",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Sampling\\MeshSurfacePointSampling.cpp"
               ,0x1be);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,double,int,double,int,UELocal::FNonUniformSamplingConfig_const&___ptr64,int,int,FProgressCancel*___ptr64)'
               ::__l2::__CpuProfilerEventSpecId446);
  }
  if (param_3 <= __real_3e45798ee2308c3a) {
    auVar39._0_8_ = __real_3e45798ee2308c3a;
  }
  if (param_4 <= __real_3e45798ee2308c3a) {
    param_4 = __real_3e45798ee2308c3a;
  }
  local_4e0 = 0x7fffffff;
  if (param_5 != 0) {
    local_4e0 = param_5;
  }
  local_578.Bounds.Min.field0_0x0._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_578.Bounds.Min.field0_0x0._s_0.Y = _UNK_150a9e648;
  uVar25 = 0;
  local_578.DensePoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_578.DensePoints.ArrayNum = 0;
  local_578.DensePoints.ArrayMax = 0;
  local_578.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_578.Triangles.ArrayNum = 0;
  local_578.Triangles.ArrayMax = 0;
  local_578.Weights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_578.Weights.ArrayNum = 0;
  local_578.Weights.ArrayMax = 0;
  local_578.Bounds.Min.field0_0x0._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_578.Bounds.Max.field0_0x0._s_0.X = _UNK_150a9e6d8;
  local_578.Bounds.Max.field0_0x0._s_0.Y = ___xmm_ffefffffffffffffffefffffffffffff;
  local_578.Bounds.Max.field0_0x0._s_0.Z = _UNK_1508ffb58;
  dVar32 = auVar39._0_8_;
  bVar29 = -1 < CpuChannel->Enabled;
  local_5b8 = dVar32;
  local_488 = param_4;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,double,int,double,int,UELocal::FNonUniformSamplingConfig_const&___ptr64,int,int,FProgressCancel*___ptr64)'
                ::__l3::__CpuProfilerEventSpecId459,"ComputeDenseSamples",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Sampling\\MeshSurfacePointSampling.cpp"
               ,0x1cb);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,double,int,double,int,UELocal::FNonUniformSamplingConfig_const&___ptr64,int,int,FProgressCancel*___ptr64)'
               ::__l3::__CpuProfilerEventSpecId459);
  }
  ConstructDenseUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>
            (param_1,dVar32,param_6,param_7,param_8,param_9,&local_578,param_10);
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  iVar11 = local_578.DensePoints.ArrayNum;
  uVar18 = local_578.DensePoints._8_8_ & 0xffffffff;
  local_4e4 = local_578.Weights.ArrayNum;
  if (param_11 == (FProgressCancel *)0x0) {
LAB_1435da903:
    local_610.Data = (FScriptContainerElement *)0x0;
    local_608 = 0;
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar18);
    }
    uVar15 = uVar25;
    if (0 < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,&local_610,0,(int *)((longlong)&local_608 + 4));
      uVar15 = local_608 & 0xffffffff;
    }
    uVar22 = uVar18;
    if (uVar18 == 0) {
      uVar22 = 1;
    }
    uVar16 = uVar25;
    uVar24 = uVar25;
    if (0xbf400000 < uVar18) {
      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("ModuloPrime > MaxIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IteratorUtil.h"
                          ,0x1bc,L"");
      if (bVar29) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar15 = local_608 & 0xffffffff;
    }
    while( true ) {
      iVar8 = (int)uVar15;
      if (uVar16 == uVar18) break;
      local_5f8 = (undefined4)uVar24;
      if ((local_610.Data <= (FScriptContainerElement *)&local_5f8) &&
         ((FScriptContainerElement *)&local_5f8 < local_610.Data + (longlong)local_608._4_4_ * 4)) {
        bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar29) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar8 = (int)local_608;
      }
      if (iVar8 == local_608._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_610,(int *)((longlong)&local_608 + 4));
      }
      local_608 = CONCAT44(local_608._4_4_,iVar8 + 1U);
      *(undefined4 *)(local_610.Data + (longlong)iVar8 * 4) = local_5f8;
      uVar15 = (ulonglong)(iVar8 + 1U);
      uVar16 = uVar16 + 1;
      uVar24 = (uVar24 + 0xbf400001) % uVar22;
    }
    dVar35 = local_578.Bounds.Max.field0_0x0._s_0.Y - local_578.Bounds.Min.field0_0x0._s_0.Y;
    dVar31 = local_578.Bounds.Max.field0_0x0._s_0.Z - local_578.Bounds.Min.field0_0x0._s_0.Z;
    dVar33 = local_578.Bounds.Max.field0_0x0._s_0.X - local_578.Bounds.Min.field0_0x0._s_0.X;
    if (dVar35 <= 0.0) {
      dVar35 = 0.0;
    }
    if (dVar31 <= 0.0) {
      dVar31 = 0.0;
    }
    if (dVar33 <= 0.0) {
      dVar33 = 0.0;
    }
    if (dVar35 <= dVar31) {
      dVar35 = dVar31;
    }
    if (dVar35 <= dVar33) {
      dVar35 = dVar33;
    }
    if (dVar35 * __real_3ffbb67ae8584caa < dVar32) {
      if (0 < iVar11) {
        if ((iVar8 < 1) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar23 = *(uint *)local_610.Data;
        lVar19 = (longlong)(int)uVar23;
        uVar9 = 0;
        if ((int)uVar23 < local_578.DensePoints.ArrayNum) {
          uVar9 = ~uVar23 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar4 = *(undefined8 *)(local_578.DensePoints.AllocatorInstance.Data + lVar19 * 0x18);
        uVar5 = *(undefined8 *)(local_578.DensePoints.AllocatorInstance.Data + lVar19 * 0x18 + 8);
        uVar12 = *(undefined8 *)
                  (local_578.DensePoints.AllocatorInstance.Data + lVar19 * 0x18 + 0x10);
        uVar9 = 0;
        if ((int)uVar23 < local_578.Triangles.ArrayNum) {
          uVar9 = ~uVar23 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_468 = local_5b8;
        local_4d8[0] = *(undefined4 *)(local_578.Triangles.AllocatorInstance.Data + lVar19 * 4);
        local_3d8 = uVar4;
        uStack_3d0 = uVar5;
        local_3c8 = uVar12;
        (**(code **)local_4b8)(*(undefined8 *)&local_4b8->field_0x8,&local_3d8,local_4d8,&local_468)
        ;
      }
      if (local_610.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_610.Data);
      }
      if (local_578.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_578.Weights.AllocatorInstance.Data);
      }
      if (local_578.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_578.Triangles.AllocatorInstance.Data);
      }
      if (local_578.DensePoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_578.DensePoints.AllocatorInstance.Data);
      }
    }
    else {
      UE::Geometry::FSparseDynamicPointOctree3::FSparseDynamicPointOctree3(&local_248);
      local_248.RootDimension =
           local_578.Bounds.Max.field0_0x0._s_0.Y - local_578.Bounds.Min.field0_0x0._s_0.Y;
      dVar32 = local_578.Bounds.Max.field0_0x0._s_0.Z - local_578.Bounds.Min.field0_0x0._s_0.Z;
      dVar35 = local_578.Bounds.Max.field0_0x0._s_0.X - local_578.Bounds.Min.field0_0x0._s_0.X;
      local_248.MaxTreeDepth = 2;
      if (500000 < iVar11) {
        local_248.MaxTreeDepth = 3;
      }
      if (local_248.RootDimension <= 0.0) {
        local_248.RootDimension = 0.0;
      }
      if (dVar32 <= 0.0) {
        dVar32 = 0.0;
      }
      iVar8 = 8;
      if (iVar11 < 0x7a121) {
        iVar8 = 6;
      }
      if (dVar35 <= 0.0) {
        dVar35 = 0.0;
      }
      if (local_248.RootDimension <= dVar32) {
        local_248.RootDimension = dVar32;
      }
      if (local_248.RootDimension <= dVar35) {
        local_248.RootDimension = dVar35;
      }
      if (5000000 < iVar11) {
        local_248.MaxTreeDepth = 4;
        iVar8 = 10;
      }
      if (50000000 < iVar11) {
        local_248.MaxTreeDepth = 5;
        iVar8 = 0xc;
      }
      local_248.MaxPointsPerCell = 0xfa;
      local_248.RootDimension = local_248.RootDimension / (double)iVar8;
      if (CpuChannel->Enabled < 0) {
        local_4f8 = &local_578;
        local_4a0 = &local_4f8;
        local_4a8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l15::<lambda_1>,UE::Math::TVector<double>,int>
                    ::Call;
        UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet
                  (&local_248,iVar11,
                   (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_4a8);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`void___cdecl_UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,double,int,double,int,UELocal::FNonUniformSamplingConfig_const&___ptr64,int,int,FProgressCancel*___ptr64)'
                    ::__l15::__CpuProfilerEventSpecId506,"BuildDenseOctree",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Sampling\\MeshSurfacePointSampling.cpp"
                   ,0x1fa);
        FCpuProfilerTrace::OutputBeginEvent
                  (`void___cdecl_UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,double,int,double,int,UELocal::FNonUniformSamplingConfig_const&___ptr64,int,int,FProgressCancel*___ptr64)'
                   ::__l15::__CpuProfilerEventSpecId506);
        local_4f8 = &local_578;
        local_4a0 = &local_4f8;
        local_4a8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l15::<lambda_1>,UE::Math::TVector<double>,int>
                    ::Call;
        UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet
                  (&local_248,iVar11,
                   (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_4a8);
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((param_11 == (FProgressCancel *)0x0) ||
         (bVar29 = FProgressCancel::Cancelled(param_11), !bVar29)) {
        local_5a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5a0.ArrayNum = 0;
        local_5a0.ArrayMax = 0;
        local_600 = true;
        TArray<bool,TSizedDefaultAllocator<32>_>::Init
                  (&local_5a0,&local_600,local_578.DensePoints.ArrayNum);
        dVar34 = _UNK_150aa88d8;
        dVar33 = ___xmm_3fe999999999999a3ff0000000000000;
        dVar31 = _UNK_150aa88c8;
        dVar35 = ___xmm_3fd999999999999a3fe3333333333333;
        auVar6 = ___xmm_00000000000000003fc999999999999a;
        dVar32 = __real_3ff0000000000000;
        local_498.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_498.ArrayNum = 0;
        local_498.ArrayMax = 0;
        local_5b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5b0.ArrayNum = 0;
        local_5b0.ArrayMax = 0;
        local_5e8.Data = (FScriptContainerElement *)0x0;
        local_5e0 = 0;
        local_5d8.Data = (FScriptContainerElement *)0x0;
        local_5d0 = 0;
        bVar29 = false;
        if (local_4f0->InterpretWeightMode == RadiusInterp) {
          local_460 = __real_3ff0000000000000;
          local_2e0 = 1;
          local_338.SecondaryData = (ForElementType<double>)0x0;
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                    (8,8,1,0,&local_338,1,&local_2dc);
          FVar20 = (ForElementType<double>)&local_338;
          if (local_338.SecondaryData != (ForElementType<double>)0x0) {
            FVar20 = local_338.SecondaryData;
          }
          *(double *)FVar20 = local_460;
          if (local_338.SecondaryData == (ForElementType<double>)0x0) {
            local_398[0] = local_338.InlineData[0];
            local_398[1] = local_338.InlineData[1];
            local_398[2] = local_338.InlineData[2];
            local_398[3] = local_338.InlineData[3];
            local_398[4] = local_338.InlineData[4];
            local_398[5] = local_338.InlineData[5];
            local_398[6] = local_338.InlineData[6];
            local_398[7] = local_338.InlineData[7];
            auStack_390[0] = local_338.InlineData[8];
            auStack_390[1] = local_338.InlineData[9];
            auStack_390[2] = local_338.InlineData[10];
            auStack_390[3] = local_338.InlineData[0xb];
            auStack_390[4] = local_338.InlineData[0xc];
            auStack_390[5] = local_338.InlineData[0xd];
            auStack_390[6] = local_338.InlineData[0xe];
            auStack_390[7] = local_338.InlineData[0xf];
            local_388[0] = local_338.InlineData[0x10];
            local_388[1] = local_338.InlineData[0x11];
            local_388[2] = local_338.InlineData[0x12];
            local_388[3] = local_338.InlineData[0x13];
            local_388[4] = local_338.InlineData[0x14];
            local_388[5] = local_338.InlineData[0x15];
            local_388[6] = local_338.InlineData[0x16];
            local_388[7] = local_338.InlineData[0x17];
            auStack_380[0] = local_338.InlineData[0x18];
            auStack_380[1] = local_338.InlineData[0x19];
            auStack_380[2] = local_338.InlineData[0x1a];
            auStack_380[3] = local_338.InlineData[0x1b];
            auStack_380[4] = local_338.InlineData[0x1c];
            auStack_380[5] = local_338.InlineData[0x1d];
            auStack_380[6] = local_338.InlineData[0x1e];
            auStack_380[7] = local_338.InlineData[0x1f];
            local_378[0] = local_338.InlineData[0x20];
            local_378[1] = local_338.InlineData[0x21];
            local_378[2] = local_338.InlineData[0x22];
            local_378[3] = local_338.InlineData[0x23];
            local_378[4] = local_338.InlineData[0x24];
            local_378[5] = local_338.InlineData[0x25];
            local_378[6] = local_338.InlineData[0x26];
            local_378[7] = local_338.InlineData[0x27];
            auStack_370[0] = local_338.InlineData[0x28];
            auStack_370[1] = local_338.InlineData[0x29];
            auStack_370[2] = local_338.InlineData[0x2a];
            auStack_370[3] = local_338.InlineData[0x2b];
            auStack_370[4] = local_338.InlineData[0x2c];
            auStack_370[5] = local_338.InlineData[0x2d];
            auStack_370[6] = local_338.InlineData[0x2e];
            auStack_370[7] = local_338.InlineData[0x2f];
            local_368[0] = local_338.InlineData[0x30];
            local_368[1] = local_338.InlineData[0x31];
            local_368[2] = local_338.InlineData[0x32];
            local_368[3] = local_338.InlineData[0x33];
            local_368[4] = local_338.InlineData[0x34];
            local_368[5] = local_338.InlineData[0x35];
            local_368[6] = local_338.InlineData[0x36];
            local_368[7] = local_338.InlineData[0x37];
            auStack_360[0] = local_338.InlineData[0x38];
            auStack_360[1] = local_338.InlineData[0x39];
            auStack_360[2] = local_338.InlineData[0x3a];
            auStack_360[3] = local_338.InlineData[0x3b];
            auStack_360[4] = local_338.InlineData[0x3c];
            auStack_360[5] = local_338.InlineData[0x3d];
            auStack_360[6] = local_338.InlineData[0x3e];
            auStack_360[7] = local_338.InlineData[0x3f];
            local_358[0] = local_338.InlineData[0x40];
            local_358[1] = local_338.InlineData[0x41];
            local_358[2] = local_338.InlineData[0x42];
            local_358[3] = local_338.InlineData[0x43];
            local_358[4] = local_338.InlineData[0x44];
            local_358[5] = local_338.InlineData[0x45];
            local_358[6] = local_338.InlineData[0x46];
            local_358[7] = local_338.InlineData[0x47];
            auStack_350[0] = local_338.InlineData[0x48];
            auStack_350[1] = local_338.InlineData[0x49];
            auStack_350[2] = local_338.InlineData[0x4a];
            auStack_350[3] = local_338.InlineData[0x4b];
            auStack_350[4] = local_338.InlineData[0x4c];
            auStack_350[5] = local_338.InlineData[0x4d];
            auStack_350[6] = local_338.InlineData[0x4e];
            auStack_350[7] = local_338.InlineData[0x4f];
          }
          local_348 = local_338.SecondaryData;
          local_340 = local_2e0;
          local_2dc = 10;
          local_338.SecondaryData = (ForElementType<double>)0x0;
          local_2e0 = 0;
          bVar29 = true;
        }
        else {
          local_2d8.SecondaryData = (ForElementType<double>)0x0;
          local_280 = 6;
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                    (8,8,6,0,&local_2d8,6,&local_27c);
          local_278 = dVar33;
          dStack_270 = dVar34;
          FVar20 = (ForElementType<double>)&local_2d8;
          if (local_2d8.SecondaryData != (ForElementType<double>)0x0) {
            FVar20 = local_2d8.SecondaryData;
          }
          local_268 = dVar35;
          dStack_260 = dVar31;
          local_258 = auVar6;
          *(double *)FVar20 = dVar33;
          *(double *)((longlong)FVar20 + 8) = dVar34;
          *(double *)((longlong)FVar20 + 0x10) = dVar35;
          *(double *)((longlong)FVar20 + 0x18) = dVar31;
          *(undefined1 (*) [16])((longlong)FVar20 + 0x20) = auVar6;
          if (local_2d8.SecondaryData == (ForElementType<double>)0x0) {
            local_398[0] = local_2d8.InlineData[0];
            local_398[1] = local_2d8.InlineData[1];
            local_398[2] = local_2d8.InlineData[2];
            local_398[3] = local_2d8.InlineData[3];
            local_398[4] = local_2d8.InlineData[4];
            local_398[5] = local_2d8.InlineData[5];
            local_398[6] = local_2d8.InlineData[6];
            local_398[7] = local_2d8.InlineData[7];
            auStack_390[0] = local_2d8.InlineData[8];
            auStack_390[1] = local_2d8.InlineData[9];
            auStack_390[2] = local_2d8.InlineData[10];
            auStack_390[3] = local_2d8.InlineData[0xb];
            auStack_390[4] = local_2d8.InlineData[0xc];
            auStack_390[5] = local_2d8.InlineData[0xd];
            auStack_390[6] = local_2d8.InlineData[0xe];
            auStack_390[7] = local_2d8.InlineData[0xf];
            local_388[0] = local_2d8.InlineData[0x10];
            local_388[1] = local_2d8.InlineData[0x11];
            local_388[2] = local_2d8.InlineData[0x12];
            local_388[3] = local_2d8.InlineData[0x13];
            local_388[4] = local_2d8.InlineData[0x14];
            local_388[5] = local_2d8.InlineData[0x15];
            local_388[6] = local_2d8.InlineData[0x16];
            local_388[7] = local_2d8.InlineData[0x17];
            auStack_380[0] = local_2d8.InlineData[0x18];
            auStack_380[1] = local_2d8.InlineData[0x19];
            auStack_380[2] = local_2d8.InlineData[0x1a];
            auStack_380[3] = local_2d8.InlineData[0x1b];
            auStack_380[4] = local_2d8.InlineData[0x1c];
            auStack_380[5] = local_2d8.InlineData[0x1d];
            auStack_380[6] = local_2d8.InlineData[0x1e];
            auStack_380[7] = local_2d8.InlineData[0x1f];
            local_378[0] = local_2d8.InlineData[0x20];
            local_378[1] = local_2d8.InlineData[0x21];
            local_378[2] = local_2d8.InlineData[0x22];
            local_378[3] = local_2d8.InlineData[0x23];
            local_378[4] = local_2d8.InlineData[0x24];
            local_378[5] = local_2d8.InlineData[0x25];
            local_378[6] = local_2d8.InlineData[0x26];
            local_378[7] = local_2d8.InlineData[0x27];
            auStack_370[0] = local_2d8.InlineData[0x28];
            auStack_370[1] = local_2d8.InlineData[0x29];
            auStack_370[2] = local_2d8.InlineData[0x2a];
            auStack_370[3] = local_2d8.InlineData[0x2b];
            auStack_370[4] = local_2d8.InlineData[0x2c];
            auStack_370[5] = local_2d8.InlineData[0x2d];
            auStack_370[6] = local_2d8.InlineData[0x2e];
            auStack_370[7] = local_2d8.InlineData[0x2f];
            local_368[0] = local_2d8.InlineData[0x30];
            local_368[1] = local_2d8.InlineData[0x31];
            local_368[2] = local_2d8.InlineData[0x32];
            local_368[3] = local_2d8.InlineData[0x33];
            local_368[4] = local_2d8.InlineData[0x34];
            local_368[5] = local_2d8.InlineData[0x35];
            local_368[6] = local_2d8.InlineData[0x36];
            local_368[7] = local_2d8.InlineData[0x37];
            auStack_360[0] = local_2d8.InlineData[0x38];
            auStack_360[1] = local_2d8.InlineData[0x39];
            auStack_360[2] = local_2d8.InlineData[0x3a];
            auStack_360[3] = local_2d8.InlineData[0x3b];
            auStack_360[4] = local_2d8.InlineData[0x3c];
            auStack_360[5] = local_2d8.InlineData[0x3d];
            auStack_360[6] = local_2d8.InlineData[0x3e];
            auStack_360[7] = local_2d8.InlineData[0x3f];
            local_358[0] = local_2d8.InlineData[0x40];
            local_358[1] = local_2d8.InlineData[0x41];
            local_358[2] = local_2d8.InlineData[0x42];
            local_358[3] = local_2d8.InlineData[0x43];
            local_358[4] = local_2d8.InlineData[0x44];
            local_358[5] = local_2d8.InlineData[0x45];
            local_358[6] = local_2d8.InlineData[0x46];
            local_358[7] = local_2d8.InlineData[0x47];
            auStack_350[0] = local_2d8.InlineData[0x48];
            auStack_350[1] = local_2d8.InlineData[0x49];
            auStack_350[2] = local_2d8.InlineData[0x4a];
            auStack_350[3] = local_2d8.InlineData[0x4b];
            auStack_350[4] = local_2d8.InlineData[0x4c];
            auStack_350[5] = local_2d8.InlineData[0x4d];
            auStack_350[6] = local_2d8.InlineData[0x4e];
            auStack_350[7] = local_2d8.InlineData[0x4f];
          }
          auVar39._8_8_ = 0;
          auVar39._0_8_ = local_5b8;
          local_348 = local_2d8.SecondaryData;
          local_340 = local_280;
          local_27c = 10;
          local_2d8.SecondaryData = (ForElementType<double>)0x0;
          local_280 = 0;
        }
        dVar35 = __real_7fefffffffffffff;
        uVar42 = SUB84(__real_7fefffffffffffff,0);
        uVar18 = (ulonglong)__real_7fefffffffffffff >> 0x20;
        local_458 = __real_7fefffffffffffff;
        local_588.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_588.ArrayNum = 0;
        local_588.ArrayMax = 0;
        TArray<double,TSizedDefaultAllocator<32>_>::Init(&local_588,&local_458,iVar11);
        local_5f0 = 0;
        bVar30 = -1 < CpuChannel->Enabled;
        if (bVar30) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&`void___cdecl_UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,double,int,double,int,UELocal::FNonUniformSamplingConfig_const&___ptr64,int,int,FProgressCancel*___ptr64)'
                      ::__l23::__CpuProfilerEventSpecId566,"ExtractPoints",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Sampling\\MeshSurfacePointSampling.cpp"
                     ,0x236);
          FCpuProfilerTrace::OutputBeginEvent
                    (`void___cdecl_UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,double,int,double,int,UELocal::FNonUniformSamplingConfig_const&___ptr64,int,int,FProgressCancel*___ptr64)'
                     ::__l23::__CpuProfilerEventSpecId566);
        }
        local_5c0 = 0;
        uVar15 = uVar25;
        if (0 < (int)local_608) {
          do {
            fVar41 = __real_3f800000;
            uVar22 = 0;
            uVar36 = (undefined4)__real_3fe0000000000000;
            uVar40 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
            iVar11 = (int)uVar15;
            if ((local_4e0 <= iVar11) || (999 < (int)uVar25)) break;
            if ((iVar11 == (iVar11 / 0x19) * 0x19) && (param_11 != (FProgressCancel *)0x0)) {
              if (param_11->WasCancelled != false) break;
              UE::Core::Private::Function::CheckCallable(*(void **)&param_11->CancelF);
              plVar3 = *(longlong **)&(param_11->CancelF).field_0x28;
              pcVar2 = *(code **)&param_11->CancelF;
              plVar13 = (longlong *)&(param_11->CancelF).field_0x10;
              if (plVar3 != (longlong *)0x0) {
                plVar13 = plVar3;
              }
              uVar12 = (**(code **)(*plVar13 + 8))();
              bVar7 = (bool)(*pcVar2)(uVar12);
              param_11->WasCancelled = bVar7;
              if (bVar7 != false) break;
            }
            uVar23 = 0;
            local_5c8 = auVar39._0_8_;
            local_5fc = (int)local_608;
            local_5f4 = 0;
            if (0 < (int)local_608) {
              local_518 = 0;
              uVar25 = uVar22;
              do {
                lVar19 = local_518;
                uVar17 = (uint)uVar25;
                local_590 = ~uVar17 >> 0x1f;
                uVar9 = uVar23;
                if ((int)uVar17 < (int)local_608) {
                  uVar9 = local_590;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                uVar9 = *(uint *)(local_610.Data + lVar19);
                uVar25 = (ulonglong)(int)uVar9;
                uVar21 = ~uVar9 >> 0x1f;
                uVar10 = uVar23;
                if ((int)uVar9 < local_5a0.ArrayNum) {
                  uVar10 = uVar21;
                }
                local_58c = uVar9;
                local_4e8 = uVar21;
                if ((uVar10 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (local_5a0.AllocatorInstance.Data[uVar25] == (FScriptContainerElement)0x0) {
                  uVar9 = uVar23;
                  if ((int)uVar17 < (int)local_608) {
                    uVar9 = local_590;
                  }
                  if ((uVar9 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  iVar11 = ((int)local_608 - uVar17) + -1;
                  if (1 < iVar11) {
                    iVar11 = 1;
                  }
                  if (iVar11 != 0) {
                    memmove(local_610.Data + (longlong)(int)uVar17 * 4,
                            local_610.Data + (longlong)((int)local_608 - iVar11) * 4,
                            (longlong)iVar11 << 2);
                  }
                  local_5f4 = uVar17 - 1;
                  local_608 = CONCAT44(local_608._4_4_,(int)local_608 + -1);
                  local_5fc = local_5fc + -1;
                  local_518 = local_518 + -4;
                }
                else {
                  uVar17 = uVar23;
                  if ((int)uVar9 < local_578.DensePoints.ArrayNum) {
                    uVar17 = uVar21;
                  }
                  if ((uVar17 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  local_450 = *(undefined1 (*) [16])
                               (local_578.DensePoints.AllocatorInstance.Data + uVar25 * 0x18);
                  local_440 = *(double *)
                               (local_578.DensePoints.AllocatorInstance.Data + uVar25 * 0x18 + 0x10)
                  ;
                  if (local_4e4 < 1) {
                    param_7 = param_7 * 0xbb38435 + 0x3619636b;
                    dVar31 = (double)((float)((uint)param_7 >> 9 | 0x3f800000) - fVar41);
                  }
                  else if (local_4f0->InterpretWeightMode == WeightedRandom) {
                    uVar17 = uVar23;
                    if ((int)uVar9 < local_578.Weights.ArrayNum) {
                      uVar17 = uVar21;
                    }
                    if ((uVar17 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar7)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    dVar31 = *(double *)(local_578.Weights.AllocatorInstance.Data + uVar25 * 8);
                    if (0.0 <= dVar31) {
                      if (dVar32 <= dVar31) {
                        dVar31 = dVar32;
                      }
                    }
                    else {
                      dVar31 = 0.0;
                    }
                    param_7 = param_7 * 0xbb38435 + 0x3619636b;
                    dVar31 = ((double)((float)((uint)param_7 >> 9 | 0x3f800000) - fVar41) + dVar31)
                             * (double)CONCAT44(uVar40,uVar36);
                  }
                  else {
                    uVar17 = uVar23;
                    if ((int)uVar9 < local_578.Weights.ArrayNum) {
                      uVar17 = uVar21;
                    }
                    if ((uVar17 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar7)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    dVar31 = *(double *)(local_578.Weights.AllocatorInstance.Data + uVar25 * 8);
                  }
                  local_4cc = param_7;
                  if (local_4f0->SizeDistribution == Smaller) {
                    dVar33 = local_4f0->SizeDistributionPower;
LAB_1435db4b1:
                    dVar31 = pow(dVar31,dVar33);
                  }
                  else if (local_4f0->SizeDistribution == Larger) {
                    dVar33 = dVar32 / local_4f0->SizeDistributionPower;
                    goto LAB_1435db4b1;
                  }
                  dVar33 = local_440;
                  uVar15 = (ulonglong)(int)local_340;
                  uVar4 = local_450._8_8_;
                  uVar12 = local_450._0_8_;
                  FVar20 = (ForElementType<double>)local_398;
                  if (local_348 != (ForElementType<double>)0x0) {
                    FVar20 = local_348;
                  }
                  local_4d0 = local_340;
                  FVar27 = (ForElementType<double>)((longlong)FVar20 + uVar15 * 8);
                  uVar36 = uVar42;
                  uVar40 = (int)uVar18;
                  local_480 = FVar27;
LAB_1435db518:
                  iVar11 = (int)uVar25;
                  local_4c0 = FVar20;
                  if (local_340 != (uint)uVar15) {
                    local_5ff = 0;
                    `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_5ff);
                  }
                  if (FVar20 != FVar27) {
                    dVar34 = dVar31 * *(double *)FVar20;
                    if (0.0 <= dVar34) {
                      if (dVar32 <= dVar34) {
                        dVar34 = dVar32;
                      }
                    }
                    else {
                      dVar34 = 0.0;
                    }
                    uVar9 = uVar23;
                    if (iVar11 < local_588.ArrayNum) {
                      uVar9 = uVar21;
                    }
                    dVar34 = (dVar32 - dVar34) * auVar39._0_8_ + local_488 * dVar34;
                    if ((uVar9 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar7)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    if (*(double *)(local_588.AllocatorInstance.Data + (longlong)iVar11 * 8) <=
                        dVar34 && dVar34 != *(double *)
                                             (local_588.AllocatorInstance.Data +
                                             (longlong)iVar11 * 8)) goto LAB_1435db70b;
                    uVar25 = uVar22;
                    uVar15 = uVar22;
                    uVar16 = uVar22;
                    dVar38 = dVar35;
                    if (0 < (int)local_5e0) {
                      do {
                        uVar17 = (uint)uVar25;
                        uVar9 = uVar23;
                        if ((int)uVar17 < (int)local_5e0) {
                          uVar9 = ~uVar17 >> 0x1f;
                        }
                        if ((uVar9 == 0) &&
                           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar7)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        uVar9 = uVar23;
                        if ((int)uVar17 < (int)local_5d0) {
                          uVar9 = ~uVar17 >> 0x1f;
                        }
                        dVar37 = SQRT(((double)uVar4 - *(double *)(local_5e8.Data + uVar15 + 8)) *
                                      ((double)uVar4 - *(double *)(local_5e8.Data + uVar15 + 8)) +
                                      ((double)uVar12 - *(double *)(local_5e8.Data + uVar15)) *
                                      ((double)uVar12 - *(double *)(local_5e8.Data + uVar15)) +
                                      (dVar33 - *(double *)(local_5e8.Data + uVar15 + 0x10)) *
                                      (dVar33 - *(double *)(local_5e8.Data + uVar15 + 0x10)));
                        if ((uVar9 == 0) &&
                           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar7)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        if (dVar37 - *(double *)(local_5d8.Data + uVar16 * 8) < dVar34) {
                          uVar9 = uVar23;
                          if ((int)uVar17 < (int)local_5d0) {
                            uVar9 = ~uVar17 >> 0x1f;
                          }
                          if ((uVar9 == 0) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar7)) {
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          dVar38 = dVar37 - *(double *)(local_5d8.Data + uVar16 * 8);
                          break;
                        }
                        uVar25 = (ulonglong)(uVar17 + 1);
                        uVar15 = uVar15 + 0x18;
                        uVar16 = uVar16 + 1;
                      } while ((int)(uVar17 + 1) < (int)local_5e0);
                    }
                    iVar11 = local_4cc;
                    uVar17 = local_58c;
                    uVar9 = local_5f4;
                    if (dVar38 <= dVar34) {
                      uVar25 = (ulonglong)local_58c;
                      if ((double)CONCAT44(uVar40,uVar36) <= dVar38) {
                        dVar38 = (double)CONCAT44(uVar40,uVar36);
                      }
                      uVar36 = SUB84(dVar38,0);
                      uVar40 = (undefined4)((ulonglong)dVar38 >> 0x20);
                      auVar39._8_8_ = 0;
                      auVar39._0_8_ = local_5b8;
                      FVar20 = local_4c0;
                      FVar27 = local_480;
                      uVar21 = local_4e8;
                      goto LAB_1435db70b;
                    }
                    uVar25 = (ulonglong)(int)local_58c;
                    param_7 = local_4cc;
                    local_5c8 = dVar34;
                    if (local_58c != 0xffffffff) {
                      lVar19 = (longlong)(int)local_5f4;
                      uVar21 = uVar23;
                      if ((int)local_5f4 < (int)local_608) {
                        uVar21 = ~local_5f4 >> 0x1f;
                      }
                      if (uVar21 == 0) {
                        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar7) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                      }
                      iVar8 = ((int)local_608 - uVar9) + -1;
                      if (1 < iVar8) {
                        iVar8 = 1;
                      }
                      iVar14 = (int)local_608;
                      if (iVar8 != 0) {
                        memmove(local_610.Data + lVar19 * 4,
                                local_610.Data + (longlong)((int)local_608 - iVar8) * 4,
                                (longlong)iVar8 << 2);
                        iVar14 = (int)local_608;
                      }
                      local_608 = CONCAT44(local_608._4_4_,iVar14 + -1);
                      uVar21 = ~uVar17 >> 0x1f;
                      uVar9 = uVar23;
                      if ((int)uVar17 < local_578.DensePoints.ArrayNum) {
                        uVar9 = uVar21;
                      }
                      if ((uVar9 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      dVar31 = local_5c8;
                      local_510 = *(double *)
                                   (local_578.DensePoints.AllocatorInstance.Data + uVar25 * 0x18);
                      dStack_508 = *(double *)
                                    (local_578.DensePoints.AllocatorInstance.Data + uVar25 * 0x18 +
                                    8);
                      local_500 = *(double *)
                                   (local_578.DensePoints.AllocatorInstance.Data +
                                   uVar25 * 0x18 + 0x10);
                      uVar9 = uVar23;
                      if ((int)uVar17 < local_578.Triangles.ArrayNum) {
                        uVar9 = uVar21;
                      }
                      if ((uVar9 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      local_4c8[0] = *(undefined4 *)
                                      (local_578.Triangles.AllocatorInstance.Data + uVar25 * 4);
                      local_478 = dVar31;
                      local_3b8 = local_510;
                      dStack_3b0 = dStack_508;
                      local_3a8 = local_500;
                      (**(code **)local_4b8)
                                (*(undefined8 *)&local_4b8->field_0x8,&local_3b8,local_4c8,
                                 &local_478);
                      local_5f0 = local_5f0 + 1;
                      if (uVar25 < local_248.PointIDToCellMap.CurBlock * 0x200 +
                                   local_248.PointIDToCellMap.CurBlockUsed) {
                        iVar8 = *(int *)(*(longlong *)
                                          (local_248.PointIDToCellMap.Blocks.AllocatorInstance.Data
                                          + (ulonglong)(uVar17 >> 9) * 8) +
                                        (ulonglong)(uVar17 & 0x1ff) * 4);
                        if ((iVar8 != -1) && (-1 < (int)uVar17)) {
                          *(undefined4 *)
                           (*(longlong *)
                             (local_248.PointIDToCellMap.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4) =
                               0xffffffff;
                          UE::Geometry::TSparseListSet<int>::Remove
                                    (&local_248.CellPointLists,iVar8,uVar17);
                        }
                      }
                      param_7 = iVar11;
                      if ((int)uVar17 < local_5a0.ArrayNum) {
                        uVar23 = uVar21;
                      }
                      if ((uVar23 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      local_5a0.AllocatorInstance.Data[uVar25] = (FScriptContainerElement)0x0;
                      if (((local_5e8.Data <= (FScriptContainerElement *)&local_510) &&
                          ((FScriptContainerElement *)&local_510 <
                           local_5e8.Data + (longlong)local_5e0._4_4_ * 0x18)) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar7)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      iVar11 = (int)local_5e0;
                      if ((int)local_5e0 == local_5e0._4_4_) {
                        iVar11 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x818,&local_5e8,(int *)((longlong)&local_5e0 + 4));
                      }
                      local_5e0 = CONCAT44(local_5e0._4_4_,iVar11 + 1);
                      *(double *)(local_5e8.Data + (longlong)iVar11 * 0x18) = local_510;
                      *(double *)(local_5e8.Data + (longlong)iVar11 * 0x18 + 8) = dStack_508;
                      *(double *)(local_5e8.Data + (longlong)iVar11 * 0x18 + 0x10) = local_500;
                      if (((local_5d8.Data <= (FScriptContainerElement *)&local_5c8) &&
                          ((FScriptContainerElement *)&local_5c8 <
                           local_5d8.Data + (longlong)local_5d0._4_4_ * 8)) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar7)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      iVar11 = (int)local_5d0;
                      if ((int)local_5d0 == local_5d0._4_4_) {
                        iVar11 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x808,&local_5d8,(int *)((longlong)&local_5d0 + 4));
                      }
                      uVar12 = local_5b0._8_8_;
                      dVar31 = local_5b8;
                      local_5d0 = CONCAT44(local_5d0._4_4_,iVar11 + 1);
                      *(double *)(local_5d8.Data + (longlong)iVar11 * 8) = local_5c8;
                      iVar11 = local_5b0.ArrayMax;
                      local_5b0._8_8_ = (ulonglong)(uint)local_5b0.ArrayMax << 0x20;
                      local_470 = (local_5b8 + local_5c8) * (local_5b8 + local_5c8);
                      if (((longlong)uVar12 < 0) && (iVar11 != 0)) {
                        UE::Core::Private::
                        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (4,4,0,&local_5b0.AllocatorInstance,0,&local_5b0.ArrayMax);
                      }
                      local_3e0 = local_5c8 * __real_4000000000000000;
                      local_428 = &local_5a0;
                      local_420 = &local_578;
                      local_418 = &local_510;
                      local_408._s_0.X = local_510 - local_3e0;
                      local_410 = &local_470;
                      local_408._s_0.Y = dStack_508 - local_3e0;
                      local_430 = &local_428;
                      local_3f0 = local_510 + local_3e0;
                      local_3e8 = dStack_508 + local_3e0;
                      local_408._s_0.Z = local_500 - local_3e0;
                      local_438 = UE::Core::Private::Function::
                                  TFunctionRefCaller<`UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l25::<lambda_3>,bool,int>
                                  ::Call;
                      local_3e0 = local_500 + local_3e0;
                      UE::Geometry::FSparseDynamicPointOctree3::RangeQuery
                                (&local_248,(TAxisAlignedBox3<double> *)&local_408._s_0,
                                 (TFunctionRef<bool___cdecl(int)> *)&local_438,&local_5b0,&local_498
                                );
                      iVar11 = local_5b0.ArrayNum;
                      uVar25 = (ulonglong)local_5b0.ArrayNum;
                      pFVar1 = local_5b0.AllocatorInstance.Data + uVar25 * 4;
                      FVar26.Data = local_5b0.AllocatorInstance.Data;
                      while( true ) {
                        if ((int)uVar25 != iVar11) {
                          local_5fe[0] = 0;
                          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                          operator()(local_5fe);
                        }
                        if (FVar26.Data == pFVar1) break;
                        uVar23 = *(uint *)FVar26.Data;
                        iVar8 = *(int *)(*(longlong *)
                                          (local_248.PointIDToCellMap.Blocks.AllocatorInstance.Data
                                          + (ulonglong)(uVar23 >> 9) * 8) +
                                        (ulonglong)(uVar23 & 0x1ff) * 4);
                        if (iVar8 != -1) {
                          *(undefined4 *)
                           (*(longlong *)
                             (local_248.PointIDToCellMap.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4) =
                               0xffffffff;
                          UE::Geometry::TSparseListSet<int>::Remove
                                    (&local_248.CellPointLists,iVar8,uVar23);
                        }
                        uVar9 = 0;
                        if ((int)uVar23 < local_5a0.ArrayNum) {
                          uVar9 = ~uVar23 >> 0x1f;
                        }
                        if ((uVar9 == 0) &&
                           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar7)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        FVar26.Data = FVar26.Data + 4;
                        local_5a0.AllocatorInstance.Data[(int)uVar23] = (FScriptContainerElement)0x0
                        ;
                        uVar25 = local_5b0._8_8_ & 0xffffffff;
                      }
                      goto LAB_1435db913;
                    }
                    break;
                  }
                  uVar9 = uVar23;
                  if (iVar11 < local_588.ArrayNum) {
                    uVar9 = uVar21;
                  }
                  if ((uVar9 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  dVar31 = *(double *)(local_588.AllocatorInstance.Data + (longlong)iVar11 * 8);
                  uVar9 = uVar23;
                  if (iVar11 < local_588.ArrayNum) {
                    uVar9 = uVar21;
                  }
                  if ((double)CONCAT44(uVar40,uVar36) <= dVar31) {
                    dVar31 = (double)CONCAT44(uVar40,uVar36);
                  }
                  if ((uVar9 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar9 = local_5f4;
                  *(double *)(local_588.AllocatorInstance.Data + (longlong)iVar11 * 8) = dVar31;
                  if (bVar29) {
                    lVar19 = (longlong)(int)local_5f4;
                    uVar17 = uVar23;
                    if ((int)local_5f4 < (int)local_608) {
                      uVar17 = local_590;
                    }
                    if ((uVar17 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar7)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    iVar11 = ((int)local_608 - uVar9) + -1;
                    if (1 < iVar11) {
                      iVar11 = 1;
                    }
                    if (iVar11 != 0) {
                      memmove(local_610.Data + lVar19 * 4,
                              local_610.Data + (longlong)((int)local_608 - iVar11) * 4,
                              (longlong)iVar11 << 2);
                    }
                    local_5f4 = uVar9 - 1;
                    local_608 = CONCAT44(local_608._4_4_,(int)local_608 + -1);
                    local_5fc = local_5fc + -1;
                    local_518 = local_518 + -4;
                  }
                  uVar36 = (undefined4)__real_3fe0000000000000;
                  uVar40 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
                  auVar39._8_8_ = 0;
                  auVar39._0_8_ = local_5b8;
                  fVar41 = __real_3f800000;
                }
                local_5f4 = local_5f4 + 1;
                uVar25 = (ulonglong)local_5f4;
                local_518 = local_518 + 4;
              } while ((int)local_5f4 < local_5fc);
            }
            local_5c0 = local_5c0 + 1;
            dVar31 = local_5b8;
LAB_1435db913:
            uVar25 = (ulonglong)local_5c0;
            auVar39._8_8_ = 0;
            auVar39._0_8_ = dVar31;
            if ((int)local_608 < 1) break;
            uVar15 = (ulonglong)local_5f0;
            param_11 = local_4b0;
          } while( true );
        }
        if (bVar30) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (local_588.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_588.AllocatorInstance.Data);
        }
        if (local_348 != (ForElementType<double>)0x0) {
          FMemory::Free((void *)local_348);
        }
        if (local_5d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5d8.Data);
        }
        if (local_5e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5e8.Data);
        }
        if (local_5b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5b0.AllocatorInstance.Data);
        }
        if (local_498.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.AllocatorInstance.Data);
        }
        if (local_5a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5a0.AllocatorInstance.Data);
        }
        UE::Geometry::FSparseDynamicPointOctree3::~FSparseDynamicPointOctree3(&local_248);
        if (local_610.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_610.Data);
        }
        if (local_578.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.Weights.AllocatorInstance.Data);
        }
        if (local_578.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.Triangles.AllocatorInstance.Data);
        }
        if (local_578.DensePoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.DensePoints.AllocatorInstance.Data);
        }
      }
      else {
        UE::Geometry::FSparseDynamicPointOctree3::~FSparseDynamicPointOctree3(&local_248);
        if (local_610.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_610.Data);
        }
        if (local_578.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.Weights.AllocatorInstance.Data);
        }
        if (local_578.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.Triangles.AllocatorInstance.Data);
        }
        if (local_578.DensePoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.DensePoints.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    if (param_11->WasCancelled == false) {
      UE::Core::Private::Function::CheckCallable(*(void **)&param_11->CancelF);
      pcVar2 = *(code **)&param_11->CancelF;
      plVar3 = *(longlong **)&(param_11->CancelF).field_0x28;
      plVar13 = (longlong *)&(param_11->CancelF).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar13 = plVar3;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      bVar29 = (bool)(*pcVar2)(uVar12);
      param_11->WasCancelled = bVar29;
      if (bVar29 == false) goto LAB_1435da903;
    }
    if (local_578.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Weights.AllocatorInstance.Data);
    }
    if (local_578.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Triangles.AllocatorInstance.Data);
    }
    if (local_578.DensePoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.DensePoints.AllocatorInstance.Data);
    }
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
LAB_1435db70b:
  uVar15 = (ulonglong)local_4d0;
  FVar20 = (ForElementType<double>)((longlong)FVar20 + 8);
  goto LAB_1435db518;
}

// UniformMeshPointSampling<UE::Geometry::FDynamicMesh3> @ 1435e0ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>
          (FDynamicMesh3 *param_1,
          TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)> *param_2,double param_3,
          int param_4,double param_5,int param_6,int param_7,int param_8,FProgressCancel *param_9)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  FProgressCancel *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStackY_428 [32];
  ForAnyElementType local_3d0;
  undefined8 local_3c8;
  bool local_3c0;
  undefined1 local_3bf [3];
  int local_3bc;
  uint local_3b8;
  undefined4 local_3b4;
  uint local_3b0;
  ulonglong local_3a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_3a0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_390;
  FProgressCancel *local_380;
  FDenseSamplePointSet local_378;
  undefined4 local_318 [2];
  int local_310;
  undefined4 local_308 [2];
  FDenseSamplePointSet *local_300;
  TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)> *local_2f8;
  code *local_2f0;
  FDenseSamplePointSet **local_2e8;
  TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> local_2e0;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b0;
  longlong local_2a8;
  double local_2a0;
  double local_298;
  code *local_290;
  TArray<bool,TSizedDefaultAllocator<32>_> **local_288;
  FNonUniformSamplingConfig local_280;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_258;
  FDenseSamplePointSet *local_250;
  double *local_248;
  double *local_240;
  TVector<double>_u_0 local_238;
  double local_220;
  double dStack_218;
  double local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  FSparseDynamicPointOctree3 local_1c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_380 = param_9;
  bVar25 = -1 < CpuChannel->Enabled;
  local_2f8 = param_2;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,int,double,int,int,int,FProgressCancel*___ptr64)'
                ::__l2::__CpuProfilerEventSpecId286,"UniformMeshPointSampling",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Sampling\\MeshSurfacePointSampling.cpp"
               ,0x11e);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,int,double,int,int,int,FProgressCancel*___ptr64)'
               ::__l2::__CpuProfilerEventSpecId286);
  }
  iVar9 = 0x7fffffff;
  if (param_4 != 0) {
    iVar9 = param_4;
  }
  if (param_3 <= __real_3e45798ee2308c3a) {
    param_3 = __real_3e45798ee2308c3a;
  }
  uVar17 = 0;
  local_378.Bounds.Min.field0_0x0._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_378.Bounds.Min.field0_0x0._s_0.Y = _UNK_150a9e648;
  local_378.DensePoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.DensePoints.ArrayNum = 0;
  local_378.DensePoints.ArrayMax = 0;
  local_378.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.Triangles.ArrayNum = 0;
  local_378.Triangles.ArrayMax = 0;
  local_378.Weights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.Weights.ArrayNum = 0;
  local_378.Weights.ArrayMax = 0;
  local_378.Bounds.Min.field0_0x0._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_378.Bounds.Max.field0_0x0._s_0.X = _UNK_150a9e6d8;
  local_378.Bounds.Max.field0_0x0._s_0.Y = ___xmm_ffefffffffffffffffefffffffffffff;
  local_378.Bounds.Max.field0_0x0._s_0.Z = _UNK_1508ffb58;
  bVar26 = -1 < CpuChannel->Enabled;
  local_310 = iVar9;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,int,double,int,int,int,FProgressCancel*___ptr64)'
                ::__l3::__CpuProfilerEventSpecId299,"ComputeDenseSamples",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Sampling\\MeshSurfacePointSampling.cpp"
               ,299);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,int,double,int,int,int,FProgressCancel*___ptr64)'
               ::__l3::__CpuProfilerEventSpecId299);
  }
  local_280.WeightFunction.field0_0x0._0_8_ = 0;
  local_280.WeightFunction.field0_0x0._8_8_ = 0;
  local_280.SizeDistributionPower = __real_4000000000000000;
  local_280.SizeDistribution = Uniform;
  local_280._4_4_ = 0;
  local_280.InterpretWeightMode = WeightedRandom;
  local_280._36_4_ = 0;
  ConstructDenseUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>
            (param_1,param_3,param_5,param_6,&local_280,param_7,&local_378,param_8);
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  uVar13 = local_378.DensePoints._8_8_;
  iVar2 = local_378.DensePoints.ArrayNum;
  lVar16 = (longlong)local_378.DensePoints.ArrayNum;
  if (param_9 != (FProgressCancel *)0x0) {
    if (param_9->WasCancelled == false) {
      UE::Core::Private::Function::CheckCallable(*(void **)&param_9->CancelF);
      pcVar3 = *(code **)&param_9->CancelF;
      plVar4 = *(longlong **)&(param_9->CancelF).field_0x28;
      plVar14 = (longlong *)&(param_9->CancelF).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar14 = plVar4;
      }
      uVar12 = (**(code **)(*plVar14 + 8))();
      bVar26 = (bool)(*pcVar3)(uVar12);
      param_9->WasCancelled = bVar26;
      if (bVar26 == false) goto LAB_1435e0edb;
    }
    if (local_378.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Weights.AllocatorInstance.Data);
    }
    if (local_378.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Triangles.AllocatorInstance.Data);
    }
    if (local_378.DensePoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.DensePoints.AllocatorInstance.Data);
    }
    goto joined_r0x0001435e12f6;
  }
LAB_1435e0edb:
  local_3d0.Data = (FScriptContainerElement *)0x0;
  uVar23 = 0;
  local_3c8 = 0;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar13 & 0xffffffff);
  }
  uVar21 = uVar17;
  if (0 < iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,&local_3d0,0,(int *)((longlong)&local_3c8 + 4));
    uVar21 = local_3c8 & 0xffffffff;
  }
  uVar8 = (uint)uVar21;
  if (iVar9 < 0x7fffffff) {
    uVar19 = uVar13 & 0xffffffff;
    uVar24 = iVar2;
    if (uVar19 == 0) {
      uVar24 = 1;
    }
    uVar15 = uVar17;
    uVar22 = uVar17;
    if (0xbf400000 < uVar19) {
      bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("ModuloPrime > MaxIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IteratorUtil.h"
                          ,0x1bc,L"");
      if (bVar26) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar21 = local_3c8 & 0xffffffff;
    }
    while( true ) {
      uVar8 = (uint)uVar21;
      param_9 = local_380;
      if (uVar15 == uVar19) break;
      local_3b4 = (undefined4)uVar22;
      if ((local_3d0.Data <= (FScriptContainerElement *)&local_3b4) &&
         ((FScriptContainerElement *)&local_3b4 <
          local_3d0.Data + (longlong)(int)local_3c8._4_4_ * 4)) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar26) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = (uint)local_3c8;
      }
      if (uVar8 == local_3c8._4_4_) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_3d0,(int *)((longlong)&local_3c8 + 4));
      }
      local_3c8 = CONCAT44(local_3c8._4_4_,uVar8 + 1);
      *(undefined4 *)(local_3d0.Data + (longlong)(int)uVar8 * 4) = local_3b4;
      uVar21 = (ulonglong)(uVar8 + 1);
      uVar15 = uVar15 + 1;
      uVar22 = (uVar22 + 0xbf400001) % (ulonglong)uVar24;
    }
  }
  else {
    local_3bc = 0;
    if (0 < iVar2) {
      do {
        iVar9 = (int)uVar21;
        if ((local_3d0.Data <= (FScriptContainerElement *)&local_3bc) &&
           ((FScriptContainerElement *)&local_3bc <
            local_3d0.Data + (longlong)(int)local_3c8._4_4_ * 4)) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar26) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (uint)local_3c8;
        }
        if (iVar9 == local_3c8._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_3d0,(int *)((longlong)&local_3c8 + 4));
        }
        uVar8 = iVar9 + 1;
        local_3c8 = CONCAT44(local_3c8._4_4_,uVar8);
        *(int *)(local_3d0.Data + (longlong)iVar9 * 4) = local_3bc;
        uVar21 = (ulonglong)uVar8;
        local_3bc = local_3bc + 1;
      } while (local_3bc < iVar2);
    }
  }
  dVar29 = local_378.Bounds.Max.field0_0x0._s_0.Y - local_378.Bounds.Min.field0_0x0._s_0.Y;
  dVar27 = local_378.Bounds.Max.field0_0x0._s_0.Z - local_378.Bounds.Min.field0_0x0._s_0.Z;
  dVar28 = local_378.Bounds.Max.field0_0x0._s_0.X - local_378.Bounds.Min.field0_0x0._s_0.X;
  if (dVar29 <= 0.0) {
    dVar29 = 0.0;
  }
  if (dVar27 <= 0.0) {
    dVar27 = 0.0;
  }
  if (dVar28 <= 0.0) {
    dVar28 = 0.0;
  }
  if (dVar29 <= dVar27) {
    dVar29 = dVar27;
  }
  if (dVar29 <= dVar28) {
    dVar29 = dVar28;
  }
  uVar24 = 0;
  if (dVar29 * __real_3ffbb67ae8584caa < param_3) {
    if (0 < iVar2) {
      if (((int)uVar8 < 1) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = *(uint *)local_3d0.Data;
      lVar16 = (longlong)(int)uVar8;
      if ((int)uVar8 < local_378.DensePoints.ArrayNum) {
        uVar23 = ~uVar8 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar12 = *(undefined8 *)(local_378.DensePoints.AllocatorInstance.Data + lVar16 * 0x18);
      uVar5 = *(undefined8 *)(local_378.DensePoints.AllocatorInstance.Data + lVar16 * 0x18 + 8);
      uVar13 = *(undefined8 *)(local_378.DensePoints.AllocatorInstance.Data + lVar16 * 0x18 + 0x10);
      if ((int)uVar8 < local_378.Triangles.ArrayNum) {
        uVar24 = ~uVar8 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_318[0] = *(undefined4 *)(local_378.Triangles.AllocatorInstance.Data + lVar16 * 4);
      local_2a0 = param_3;
      local_208 = uVar12;
      uStack_200 = uVar5;
      local_1f8 = uVar13;
      (**(code **)local_2f8)(*(undefined8 *)&local_2f8->field_0x8,&local_208,local_318,&local_2a0);
    }
    if (local_3d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data);
    }
    if (local_378.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Weights.AllocatorInstance.Data);
    }
    if (local_378.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Triangles.AllocatorInstance.Data);
    }
    if (local_378.DensePoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.DensePoints.AllocatorInstance.Data);
    }
    goto joined_r0x0001435e12f6;
  }
  UE::Geometry::FSparseDynamicPointOctree3::FSparseDynamicPointOctree3(&local_1c8);
  local_1c8.RootDimension =
       local_378.Bounds.Max.field0_0x0._s_0.Y - local_378.Bounds.Min.field0_0x0._s_0.Y;
  dVar29 = local_378.Bounds.Max.field0_0x0._s_0.Z - local_378.Bounds.Min.field0_0x0._s_0.Z;
  local_1c8.MaxTreeDepth = 2;
  if (500000 < iVar2) {
    local_1c8.MaxTreeDepth = 3;
  }
  dVar27 = local_378.Bounds.Max.field0_0x0._s_0.X - local_378.Bounds.Min.field0_0x0._s_0.X;
  if (local_1c8.RootDimension <= 0.0) {
    local_1c8.RootDimension = 0.0;
  }
  if (dVar29 <= 0.0) {
    dVar29 = 0.0;
  }
  iVar9 = 8;
  if (iVar2 < 0x7a121) {
    iVar9 = 6;
  }
  if (dVar27 <= 0.0) {
    dVar27 = 0.0;
  }
  if (local_1c8.RootDimension <= dVar29) {
    local_1c8.RootDimension = dVar29;
  }
  if (local_1c8.RootDimension <= dVar27) {
    local_1c8.RootDimension = dVar27;
  }
  if (5000000 < iVar2) {
    local_1c8.MaxTreeDepth = 4;
    iVar9 = 10;
  }
  if (50000000 < iVar2) {
    local_1c8.MaxTreeDepth = 5;
    iVar9 = 0xc;
  }
  local_1c8.MaxPointsPerCell = 0xfa;
  local_1c8.RootDimension = local_1c8.RootDimension / (double)iVar9;
  if (CpuChannel->Enabled < 0) {
    local_300 = &local_378;
    local_2e8 = &local_300;
    local_2f0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l21::<lambda_1>,UE::Math::TVector<double>,int>
                ::Call;
    UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet
              (&local_1c8,iVar2,(TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_2f0);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,int,double,int,int,int,FProgressCancel*___ptr64)'
                ::__l21::__CpuProfilerEventSpecId353,"BuildDenseOctree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Sampling\\MeshSurfacePointSampling.cpp"
               ,0x161);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,int,double,int,int,int,FProgressCancel*___ptr64)'
               ::__l21::__CpuProfilerEventSpecId353);
    local_300 = &local_378;
    local_2e8 = &local_300;
    local_2f0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l21::<lambda_1>,UE::Math::TVector<double>,int>
                ::Call;
    UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet
              (&local_1c8,iVar2,(TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_2f0);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (param_9 == (FProgressCancel *)0x0) {
LAB_1435e14df:
    local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_390.ArrayNum = 0;
    local_390.ArrayMax = 0;
    local_3c0 = true;
    local_2b0 = param_3 * __real_4010000000000000 * param_3;
    TArray<bool,TSizedDefaultAllocator<32>_>::Init
              (&local_390,&local_3c0,local_378.DensePoints.ArrayNum);
    local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e0.ArrayNum = 0;
    local_2e0.ArrayMax = 0;
    local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a0.ArrayNum = 0;
    local_3a0.ArrayMax = 0;
    local_3b0 = 0;
    bVar26 = -1 < CpuChannel->Enabled;
    if (bVar26) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`void___cdecl_UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,int,double,int,int,int,FProgressCancel*___ptr64)'
                  ::__l24::__CpuProfilerEventSpecId375,"ExtractPoints",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Sampling\\MeshSurfacePointSampling.cpp"
                 ,0x177);
      FCpuProfilerTrace::OutputBeginEvent
                (`void___cdecl_UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)>,double,int,double,int,int,int,FProgressCancel*___ptr64)'
                 ::__l24::__CpuProfilerEventSpecId375);
    }
    uVar21 = uVar17;
    uVar19 = uVar17;
    local_2a8 = lVar16;
    if (0 < iVar2) {
      while (pFVar6 = local_380, iVar9 = (int)uVar17, iVar9 < local_310) {
        if ((iVar9 == (iVar9 / 0x19) * 0x19) && (local_380 != (FProgressCancel *)0x0)) {
          if (local_380->WasCancelled != false) break;
          UE::Core::Private::Function::CheckCallable(*(void **)&local_380->CancelF);
          pcVar3 = *(code **)&pFVar6->CancelF;
          plVar4 = *(longlong **)&(local_380->CancelF).field_0x28;
          plVar14 = (longlong *)&(local_380->CancelF).field_0x10;
          if (plVar4 != (longlong *)0x0) {
            plVar14 = plVar4;
          }
          uVar13 = (**(code **)(*plVar14 + 8))();
          bVar7 = (bool)(*pcVar3)(uVar13);
          local_380->WasCancelled = bVar7;
          if (bVar7 != false) break;
        }
        do {
          if (lVar16 <= (longlong)uVar21) goto LAB_1435e1a58;
          uVar8 = (uint)uVar19;
          uVar10 = uVar24;
          if ((int)uVar8 < (int)(uint)local_3c8) {
            uVar10 = ~uVar8 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 + 1;
          uVar19 = (ulonglong)uVar8;
          uVar10 = *(uint *)(local_3d0.Data + uVar21 * 4);
          uVar17 = (ulonglong)(int)uVar10;
          uVar21 = uVar21 + 1;
          uVar18 = uVar23;
          if ((int)uVar10 < local_390.ArrayNum) {
            uVar18 = ~uVar10 >> 0x1f;
          }
          local_3b8 = uVar8;
          local_3a8 = uVar21;
          if ((uVar18 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        } while (local_390.AllocatorInstance.Data[uVar17] == (FScriptContainerElement)0x0);
        if (uVar10 != 0xffffffff) {
          uVar18 = ~uVar10 >> 0x1f;
          uVar8 = uVar23;
          if ((int)uVar10 < local_378.DensePoints.ArrayNum) {
            uVar8 = uVar18;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_2d0 = *(double *)(local_378.DensePoints.AllocatorInstance.Data + uVar17 * 0x18);
          dStack_2c8 = *(double *)(local_378.DensePoints.AllocatorInstance.Data + uVar17 * 0x18 + 8)
          ;
          local_2c0 = *(double *)
                       (local_378.DensePoints.AllocatorInstance.Data + uVar17 * 0x18 + 0x10);
          uVar8 = uVar24;
          if ((int)uVar10 < local_378.Triangles.ArrayNum) {
            uVar8 = uVar18;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_308[0] = *(undefined4 *)(local_378.Triangles.AllocatorInstance.Data + uVar17 * 4);
          local_1e8 = local_2d0;
          dStack_1e0 = dStack_2c8;
          local_1d8 = local_2c0;
          local_298 = param_3;
          (**(code **)local_2f8)
                    (*(undefined8 *)&local_2f8->field_0x8,&local_1e8,local_308,&local_298);
          local_3b0 = local_3b0 + 1;
          if (uVar17 < local_1c8.PointIDToCellMap.CurBlock * 0x200 +
                       local_1c8.PointIDToCellMap.CurBlockUsed) {
            iVar9 = *(int *)(*(longlong *)
                              (local_1c8.PointIDToCellMap.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4);
            if ((iVar9 != -1) && (-1 < (int)uVar10)) {
              *(undefined4 *)
               (*(longlong *)
                 (local_1c8.PointIDToCellMap.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4) = 0xffffffff;
              UE::Geometry::TSparseListSet<int>::Remove(&local_1c8.CellPointLists,iVar9,uVar10);
            }
          }
          uVar21 = local_3a8;
          uVar8 = local_3b8;
          uVar11 = uVar24;
          if ((int)uVar10 < local_390.ArrayNum) {
            uVar11 = uVar18;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar13 = local_3a0._8_8_;
          local_390.AllocatorInstance.Data[uVar17] = (FScriptContainerElement)0x0;
          iVar9 = local_3a0.ArrayMax;
          local_3a0._8_8_ = (ulonglong)(uint)local_3a0.ArrayMax << 0x20;
          if (((longlong)uVar13 < 0) && (iVar9 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_3a0.AllocatorInstance,0,&local_3a0.ArrayMax);
          }
          local_258 = &local_390;
          local_250 = &local_378;
          local_210 = param_3 + param_3;
          local_248 = &local_2d0;
          local_240 = &local_2b0;
          local_288 = &local_258;
          local_238._s_0.X = local_2d0 - local_210;
          local_238._s_0.Y = dStack_2c8 - local_210;
          local_290 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l26::<lambda_2>,bool,int>
                      ::Call;
          local_220 = local_2d0 + local_210;
          dStack_218 = dStack_2c8 + local_210;
          local_238._s_0.Z = local_2c0 - local_210;
          local_210 = local_210 + local_2c0;
          UE::Geometry::FSparseDynamicPointOctree3::RangeQuery
                    (&local_1c8,(TAxisAlignedBox3<double> *)&local_238._s_0,
                     (TFunctionRef<bool___cdecl(int)> *)&local_290,&local_3a0,&local_2e0);
          iVar9 = local_3a0.ArrayNum;
          uVar17 = (ulonglong)local_3a0.ArrayNum;
          pFVar1 = local_3a0.AllocatorInstance.Data + uVar17 * 4;
          FVar20.Data = local_3a0.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar17 != iVar9) {
              local_3bf[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_3bf);
            }
            lVar16 = local_2a8;
            if (FVar20.Data == pFVar1) break;
            uVar10 = *(uint *)FVar20.Data;
            local_3a8 = (ulonglong)(int)uVar10;
            iVar2 = *(int *)(*(longlong *)
                              (local_1c8.PointIDToCellMap.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4);
            if (iVar2 != -1) {
              *(undefined4 *)
               (*(longlong *)
                 (local_1c8.PointIDToCellMap.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4) = 0xffffffff;
              UE::Geometry::TSparseListSet<int>::Remove(&local_1c8.CellPointLists,iVar2,uVar10);
            }
            uVar18 = uVar24;
            if ((int)uVar10 < local_390.ArrayNum) {
              uVar18 = ~uVar10 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar20.Data = FVar20.Data + 4;
            local_390.AllocatorInstance.Data[local_3a8] = (FScriptContainerElement)0x0;
            uVar17 = local_3a0._8_8_ & 0xffffffff;
          }
        }
        if (lVar16 <= (longlong)uVar21) break;
        uVar19 = (ulonglong)uVar8;
        uVar17 = (ulonglong)local_3b0;
      }
    }
LAB_1435e1a58:
    if (bVar26) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.AllocatorInstance.Data);
    }
    if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.AllocatorInstance.Data);
    }
    if (local_390.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.AllocatorInstance.Data);
    }
    UE::Geometry::FSparseDynamicPointOctree3::~FSparseDynamicPointOctree3(&local_1c8);
    if (local_3d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data);
    }
    if (local_378.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Weights.AllocatorInstance.Data);
    }
    if (local_378.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Triangles.AllocatorInstance.Data);
    }
    if (local_378.DensePoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.DensePoints.AllocatorInstance.Data);
    }
  }
  else {
    if (param_9->WasCancelled == false) {
      UE::Core::Private::Function::CheckCallable(*(void **)&param_9->CancelF);
      pcVar3 = *(code **)&param_9->CancelF;
      plVar4 = *(longlong **)&(param_9->CancelF).field_0x28;
      plVar14 = (longlong *)&(param_9->CancelF).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar14 = plVar4;
      }
      uVar13 = (**(code **)(*plVar14 + 8))();
      bVar26 = (bool)(*pcVar3)(uVar13);
      param_9->WasCancelled = bVar26;
      if (bVar26 == false) goto LAB_1435e14df;
    }
    UE::Geometry::FSparseDynamicPointOctree3::~FSparseDynamicPointOctree3(&local_1c8);
    if (local_3d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data);
    }
    if (local_378.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Weights.AllocatorInstance.Data);
    }
    if (local_378.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Triangles.AllocatorInstance.Data);
    }
    if (local_378.DensePoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.DensePoints.AllocatorInstance.Data);
    }
  }
joined_r0x0001435e12f6:
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 1435e5620

void __thiscall
`UELocal::ConstructDenseUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>::
operator()(void *this)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  lVar3 = *(longlong *)this;
  uVar8 = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar3 + 0x38) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar3 + 0x40) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar3 + 0x48) = 0xffefffffffffffff;
  *(undefined8 *)(lVar3 + 0x50) = 0xffefffffffffffff;
  *(undefined8 *)(lVar3 + 0x58) = 0xffefffffffffffff;
  iVar7 = *(int *)(*(longlong *)((longlong)this + 8) + 0x20) * 0x200 +
          *(int *)(*(longlong *)((longlong)this + 8) + 0x24);
  if (0 < iVar7) {
    uVar9 = 0;
    do {
      lVar3 = *(longlong *)((longlong)this + 8);
      if ((int)uVar8 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24)) {
        uVar10 = (ulonglong)(uVar9 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar8 >> 9) * 8) +
                               uVar10 * 2) - 1U) < 0xfffe) {
          lVar4 = *(longlong *)this;
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
          pdVar1 = (double *)(lVar3 + uVar10 * 0x18);
          dVar5 = *pdVar1;
          dVar6 = pdVar1[1];
          dVar2 = *(double *)(lVar3 + 0x10 + uVar10 * 0x18);
          if (dVar5 < *(double *)(lVar4 + 0x30)) {
            *(double *)(lVar4 + 0x30) = dVar5;
          }
          if (*(double *)(lVar4 + 0x48) <= dVar5 && dVar5 != *(double *)(lVar4 + 0x48)) {
            *(double *)(lVar4 + 0x48) = dVar5;
          }
          if (dVar6 < *(double *)(lVar4 + 0x38)) {
            *(double *)(lVar4 + 0x38) = dVar6;
          }
          if (*(double *)(lVar4 + 0x50) <= dVar6 && dVar6 != *(double *)(lVar4 + 0x50)) {
            *(double *)(lVar4 + 0x50) = dVar6;
          }
          if (dVar2 < *(double *)(lVar4 + 0x40)) {
            *(double *)(lVar4 + 0x40) = dVar2;
          }
          if (*(double *)(lVar4 + 0x58) <= dVar2 && dVar2 != *(double *)(lVar4 + 0x58)) {
            *(double *)(lVar4 + 0x58) = dVar2;
          }
        }
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + 1;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

// operator() @ 1435ebe80

bool __thiscall
`UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l26::<lambda_2>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  longlong *plVar2;
  double *pdVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  plVar2 = *(longlong **)this;
  lVar9 = (longlong)param_1;
  uVar8 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (*(char *)(lVar9 + *plVar2) != '\0') {
    plVar2 = *(longlong **)((longlong)this + 8);
    pdVar3 = *(double **)((longlong)this + 0x10);
    uVar8 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    lVar4 = *plVar2;
    pdVar1 = (double *)(lVar4 + lVar9 * 0x18);
    dVar10 = pdVar3[2] - *(double *)(lVar4 + 0x10 + lVar9 * 0x18);
    dVar11 = *pdVar3 - *pdVar1;
    dVar12 = pdVar3[1] - pdVar1[1];
    if (dVar12 * dVar12 + dVar11 * dVar11 + dVar10 * dVar10 < **(double **)((longlong)this + 0x18))
    {
      return true;
    }
  }
  return false;
}

// operator() @ 1435ec200

bool __thiscall
`UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l25::<lambda_3>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  longlong *plVar2;
  double *pdVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  plVar2 = *(longlong **)this;
  lVar9 = (longlong)param_1;
  uVar8 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (*(char *)(lVar9 + *plVar2) != '\0') {
    plVar2 = *(longlong **)((longlong)this + 8);
    pdVar3 = *(double **)((longlong)this + 0x10);
    uVar8 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    lVar4 = *plVar2;
    pdVar1 = (double *)(lVar4 + lVar9 * 0x18);
    dVar10 = pdVar3[2] - *(double *)(lVar4 + 0x10 + lVar9 * 0x18);
    dVar11 = *pdVar3 - *pdVar1;
    dVar12 = pdVar3[1] - pdVar1[1];
    if (dVar12 * dVar12 + dVar11 * dVar11 + dVar10 * dVar10 < **(double **)((longlong)this + 0x18))
    {
      return true;
    }
  }
  return false;
}

