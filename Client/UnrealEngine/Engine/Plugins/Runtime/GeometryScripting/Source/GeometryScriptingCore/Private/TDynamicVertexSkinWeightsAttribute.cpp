// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// GetBoundBoneIndices @ 14cdd64a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::GetBoundBoneIndices
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ushort *puVar17;
  uint *puVar18;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [4];
  uint local_114;
  uint local_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_108;
  undefined4 local_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  ushort *local_f0;
  ushort *local_e0;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  FSparseArrayAllocationInfo local_a0;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  iVar8 = (this->VertexBoneWeights).CurBlock * 0x200 + (this->VertexBoneWeights).CurBlockUsed;
  if (iVar8 == 0) {
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = 0;
    (__return_storage_ptr__->Hash).InlineData[0] = '\0';
    (__return_storage_ptr__->Hash).InlineData[1] = '\0';
    (__return_storage_ptr__->Hash).InlineData[2] = '\0';
    (__return_storage_ptr__->Hash).InlineData[3] = '\0';
    (__return_storage_ptr__->Hash)._padding_ = 0;
    *(undefined8 *)&__return_storage_ptr__->HashSize = 0;
    *(undefined8 *)&__return_storage_ptr__->Elements = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
    (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  }
  else {
    puVar18 = (uint *)0x0;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (ForElementType<unsigned_int>)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = -1;
    local_54 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    local_114 = 0;
    puVar12 = puVar18;
    puVar14 = puVar18;
    local_d8 = this;
    local_d0 = __return_storage_ptr__;
    if (iVar8 != 0) {
      do {
        puVar17 = (ushort *)
                  (*(longlong *)
                    ((local_d8->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                    ((ulonglong)puVar14 >> 9) * 8) + (ulonglong)((uint)puVar12 & 0x1ff) * 0x40);
        iVar8 = *(int *)(puVar17 + 0x1c);
        local_f0 = puVar17 + 0x1c;
        if (*(ushort **)(puVar17 + 0x18) != (ushort *)0x0) {
          puVar17 = *(ushort **)(puVar17 + 0x18);
        }
        local_e0 = puVar17 + (longlong)iVar8 * 2;
        while( true ) {
          puVar3 = local_e0;
          if (*(int *)local_f0 != iVar8) {
            `TCheckedPointerIterator<UE::AnimationCore::FBoneWeight_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_118);
          }
          if (puVar17 == puVar3) break;
          uVar1 = *puVar17;
          if (local_54 == 0) {
            iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xc,4,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                               (int *)(local_88 + 0xc));
            iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
            FVar11 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
            if (local_68 != (ForElementType<unsigned_int>)0x0) {
              FVar11 = local_68;
            }
            bVar7 = (byte)iVar5 & 0x1f;
            if (iVar5 < 0) {
              iVar5 = iVar5 + 0x1f;
              bVar7 = bVar7 - 0x20;
            }
            puVar12 = (uint *)((longlong)FVar11 + (longlong)(iVar5 >> 5) * 4);
            *puVar12 = *puVar12 & ~(1 << (bVar7 & 0x1f));
            iVar5 = local_58;
          }
          else {
            iVar5 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0xc + 4);
            local_54 = local_54 + -1;
            iVar4 = local_58;
            if (local_54 != 0) {
              *(undefined4 *)(local_88._0_8_ + (longlong)iVar5 * 0xc) = 0xffffffff;
            }
          }
          local_58 = iVar5;
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_88,&local_a0,iVar4);
          puVar12 = puVar18;
          if (local_a0.Pointer != (uint *)0x0) {
            *(uint *)local_a0.Pointer = (uint)uVar1;
            *(uint *)((longlong)local_a0.Pointer + 4) = 0xffffffff;
            puVar12 = local_a0.Pointer;
          }
          uVar15 = *puVar12;
          if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
            FVar9.Data = local_50;
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              FVar9.Data = local_48.Data;
            }
            for (iVar4 = *(int *)(FVar9.Data + (ulonglong)(local_40 - 1 & uVar15) * 4); iVar4 != -1;
                iVar4 = *(int *)(local_88._0_8_ + (longlong)iVar4 * 0xc + 4)) {
              if (*(uint *)(local_88._0_8_ + (longlong)iVar4 * 0xc) == uVar15) {
                if (iVar4 != -1) {
                  *(uint *)(local_88._0_8_ + (longlong)iVar4 * 0xc) = uVar15;
                  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_88,local_a0.Index,1);
                  goto LAB_14cdd697d;
                }
                break;
              }
            }
          }
          uVar10 = local_88._8_4_ - local_54;
          uVar13 = 1;
          if (3 < uVar10) {
            uVar16 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
            lVar2 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            uVar13 = 1 << ((byte)lVar2 & 0x1f);
          }
          if (((int)uVar10 < 1) || ((int)uVar13 <= (int)local_40)) {
            uVar15 = local_40 - 1 & uVar15;
            puVar12[2] = uVar15;
            FVar9.Data = local_50;
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              FVar9.Data = local_48.Data;
            }
            uVar16 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar15;
            puVar12[1] = *(uint *)(FVar9.Data + uVar16 * 4);
            *(int *)(FVar9.Data + uVar16 * 4) = local_a0.Index;
          }
          else {
            local_40 = uVar13;
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
            }
            if (uVar13 != 0) {
              uVar15 = uVar13;
              if (uVar13 < 2) {
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  uVar15 = 0;
                  goto LAB_14cdd67aa;
                }
              }
              else {
LAB_14cdd67aa:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_48,0,uVar15,4);
              }
              if (0 < (int)uVar13) {
                uVar16 = (ulonglong)uVar13;
                puVar12 = puVar18;
                do {
                  FVar9.Data = local_50;
                  if (local_48.Data != (FScriptContainerElement *)0x0) {
                    FVar9.Data = local_48.Data;
                  }
                  uVar6 = (ulonglong)puVar12 & (longlong)(int)uVar13 - 1U;
                  puVar12 = (uint *)((longlong)puVar12 + 1);
                  *(undefined4 *)(FVar9.Data + uVar6 * 4) = 0xffffffff;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
            }
            if (local_40 != 0) {
              pTStack_108 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
              local_110 = 0;
              uStack_10c = 1;
              uStack_fc = 0;
              uStack_f8 = 0;
              puVar12 = puVar18;
              if (local_60 != 0) {
                FVar11 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
                if (local_68 != (ForElementType<unsigned_int>)0x0) {
                  FVar11 = local_68;
                }
                uVar15 = *(uint *)FVar11;
                puVar14 = puVar18;
                while (uVar15 == 0) {
                  uStack_f8 = (int)puVar14 + 0x20;
                  puVar14 = (uint *)(ulonglong)uStack_f8;
                  iVar4 = (int)puVar12;
                  local_110 = iVar4 + 1;
                  puVar12 = (uint *)(ulonglong)local_110;
                  if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 <
                      (int)local_110) goto LAB_14cdd68ae;
                  uVar15 = ((uint *)((longlong)FVar11 + 4))[iVar4];
                }
                uStack_10c = -uVar15 & uVar15;
                uVar16 = (ulonglong)uStack_10c * 2 + 1;
                lVar2 = 0x3f;
                if (uVar16 != 0) {
                  for (; uVar16 >> lVar2 == 0; lVar2 = lVar2 + -1) {
                  }
                }
                uStack_fc = (int)lVar2 + -1 + (int)puVar14;
                puVar12 = (uint *)(ulonglong)uStack_fc;
                if ((int)local_60 < (int)uStack_fc) {
LAB_14cdd68ae:
                  puVar12 = (uint *)(ulonglong)local_60;
                  uStack_fc = local_60;
                }
              }
              local_100 = 0xffffffff;
              local_c8 = (longlong *)local_88;
              local_c0._padding_ = CONCAT44(uStack_10c,local_110);
              local_c0.CurrentBitIndex = uStack_fc;
              local_c0.UnvisitedBitMask = 0xffffffff;
              local_c0._28_4_ = uStack_f4;
              local_c0.BaseBitIndex = uStack_f8;
              local_c0.Array = pTStack_108;
              if ((int)puVar12 < (int)local_60) {
                do {
                  iVar4 = (int)puVar12;
                  uVar15 = local_40 - 1 & *(uint *)(*local_c8 + (longlong)iVar4 * 0xc);
                  lVar2 = *local_c8 + (longlong)iVar4 * 0xc;
                  *(uint *)(lVar2 + 8) = uVar15;
                  FVar9.Data = local_50;
                  if (local_48.Data != (FScriptContainerElement *)0x0) {
                    FVar9.Data = local_48.Data;
                  }
                  uVar16 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar15;
                  *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(FVar9.Data + uVar16 * 4);
                  *(int *)(FVar9.Data + uVar16 * 4) = iVar4;
                  local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
                  puVar12 = (uint *)(ulonglong)(uint)local_c0.CurrentBitIndex;
                } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
              }
            }
          }
LAB_14cdd697d:
          puVar17 = puVar17 + 2;
        }
        local_114 = local_114 + 1;
        puVar12 = (uint *)(longlong)(int)local_114;
        puVar14 = (uint *)(ulonglong)local_114;
      } while ((uint *)(longlong)(int)local_114 <
               (uint *)(ulonglong)
                       ((local_d8->VertexBoneWeights).CurBlock * 0x200 +
                       (local_d8->VertexBoneWeights).CurBlockUsed));
    }
    __return_storage_ptr__ = local_d0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>
              (local_d0,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88);
    local_40 = 0;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    iVar8 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar8 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = -1;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
  return __return_storage_ptr__;
}

