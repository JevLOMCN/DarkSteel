// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FStaticMeshComponentBulkReregisterContext @ 148778a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FStaticMeshComponentBulkReregisterContext * __thiscall
FStaticMeshComponentBulkReregisterContext::FStaticMeshComponentBulkReregisterContext
          (FStaticMeshComponentBulkReregisterContext *this,FSceneInterface *param_1,
          TArrayView<UActorComponent_*,int> *param_2,EBulkReregister param_3)

{
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *pTVar1;
  uint *puVar2;
  UPrimitiveComponent *this_00;
  FScriptContainerElement *pFVar3;
  FSceneInterface *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FStaticMeshComponentBulkReregisterContext *pFVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  UActorComponent **ppUVar12;
  byte bVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  longlong lVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  undefined1 auStackY_228 [32];
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  EBulkReregister local_1c8;
  TArrayView<UActorComponent_*,int> *local_1c0;
  UPrimitiveComponent *local_1b8;
  UPrimitiveComponent *local_1b0;
  int local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  undefined4 local_198;
  undefined8 uStack_194;
  undefined4 uStack_18c;
  int local_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_180;
  undefined4 local_178;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  longlong local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  undefined4 local_110;
  int local_10c;
  UActorComponent *local_108 [2];
  undefined4 local_f8;
  int local_f4;
  FStaticMeshComponentBulkReregisterContext *local_f0;
  FSparseArrayAllocationInfo local_e8;
  undefined8 local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar19 = param_2->ArrayNum;
  uVar20 = (ulonglong)uVar19;
  pTVar1 = &this->StaticMeshComponents;
  uVar23 = 0;
  (this->StaticMeshComponents).ArrayMax = 0;
  piVar24 = &(this->StaticMeshComponents).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshComponents).ArrayNum = 0;
  (this->SCSs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SCSs).ArrayNum = 0;
  (this->SCSs).ArrayMax = 0;
  this->Scene = param_1;
  local_1c8 = param_3;
  local_1c0 = param_2;
  local_f0 = this;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar20);
  }
  if (*piVar24 < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar19,&pTVar1->AllocatorInstance,(this->StaticMeshComponents).ArrayNum,piVar24);
  }
  local_1d0 = 0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  if (uVar19 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar19,&local_1d8,0,(int *)((longlong)&local_1d0 + 4));
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  pFVar9 = this;
  if (0 < (int)uVar19) {
    local_168 = 0;
    do {
      lVar16 = local_168;
      uVar19 = 0;
      if ((int)uVar23 < (int)uVar20) {
        uVar19 = ~uVar23 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FStaticMeshComponentBulkReregisterContext *)(*pcVar5)();
        return pFVar9;
      }
      this_00 = (UPrimitiveComponent *)param_2->DataPtr[lVar16];
      if (this_00 != (UPrimitiveComponent *)0x0) {
        pUVar10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        iVar7 = (int)pUVar10->_padding_;
        if ((((iVar7 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
              &pUVar10->_padding_)) && (this_00->SceneProxy != (FPrimitiveSceneProxy *)0x0)) &&
           ((local_1c8 == Component ||
            (((this_00->field_0x99 & 1) != 0 &&
             (bVar6 = UPrimitiveComponent::ShouldComponentAddToScene(this_00), bVar6)))))) {
          if (this_00->bBulkReregister == '\0') {
LAB_148778f53:
            if (local_98._8_4_ != local_64) goto LAB_148778f60;
          }
          else {
            if (local_98._8_4_ == local_64) {
              uVar19 = param_2->ArrayNum;
              if ((uint)(local_98._8_4_ - local_64) < uVar19) {
                if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
                }
                TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_98,uVar19);
                if (uVar19 < 4) {
                  uVar20 = 1;
                }
                else {
                  uVar20 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
                  lVar16 = 0x3f;
                  if (uVar20 != 0) {
                    for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                    }
                  }
                  local_110 = (undefined4)lVar16;
                  uVar20 = (ulonglong)(uint)(1 << ((byte)lVar16 & 0x1f));
                }
                uVar19 = (uint)uVar20;
                if ((local_50 == 0) || ((int)local_50 < (int)uVar19)) {
                  local_50 = uVar19;
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              (&local_58,0,0,4);
                  }
                  if (uVar19 != 0) {
                    uVar22 = uVar19;
                    if (uVar19 < 2) {
                      if (local_58.Data != (FScriptContainerElement *)0x0) {
                        uVar22 = 0;
                        goto LAB_148778d20;
                      }
                    }
                    else {
LAB_148778d20:
                      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                (&local_58,0,uVar22,4);
                    }
                    if (0 < (int)uVar19) {
                      uVar15 = 0;
                      do {
                        FVar14.Data = local_60;
                        if (local_58.Data != (FScriptContainerElement *)0x0) {
                          FVar14.Data = local_58.Data;
                        }
                        uVar11 = uVar15 & (longlong)(int)uVar19 - 1U;
                        uVar15 = uVar15 + 1;
                        *(undefined4 *)(FVar14.Data + uVar11 * 4) = 0xffffffff;
                        uVar20 = uVar20 - 1;
                      } while (uVar20 != 0);
                    }
                  }
                  if (local_50 != 0) {
                    pTStack_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                    uStack_1a4 = 1;
                    uVar19 = 0;
                    local_1a8 = 0;
                    uStack_194 = 0;
                    if (local_70 != 0) {
                      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                      if (local_78 != (ForElementType<unsigned_int>)0x0) {
                        FVar17 = local_78;
                      }
                      uVar22 = *(uint *)FVar17;
                      local_1a8 = 0;
                      while (uVar22 == 0) {
                        uVar19 = uVar19 + 0x20;
                        lVar16 = (longlong)local_1a8;
                        local_1a8 = local_1a8 + 1;
                        uStack_194 = (ulonglong)uVar19 << 0x20;
                        if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1a8)
                        {
                          uStack_194 = CONCAT44(uVar19,local_70);
                          goto LAB_148778e40;
                        }
                        uVar22 = ((uint *)((longlong)FVar17 + 4))[lVar16];
                      }
                      uStack_1a4 = -uVar22 & uVar22;
                      uVar20 = (ulonglong)uStack_1a4 * 2 + 1;
                      lVar16 = 0x3f;
                      if (uVar20 != 0) {
                        for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                        }
                      }
                      local_10c = (int)lVar16;
                      iVar7 = local_10c + -1 + uVar19;
                      if (local_70 < iVar7) {
                        iVar7 = local_70;
                      }
                      uStack_194._4_4_ = (int)((ulonglong)uStack_194 >> 0x20);
                      uStack_194 = CONCAT44(uStack_194._4_4_,iVar7);
                    }
LAB_148778e40:
                    local_198 = 0xffffffff;
                    local_160 = (longlong *)local_98;
                    local_158._padding_ = CONCAT44(uStack_1a4,local_1a8);
                    local_158.UnvisitedBitMask = 0xffffffff;
                    local_158.CurrentBitIndex = (int)uStack_194;
                    local_158.BaseBitIndex = uStack_194._4_4_;
                    local_158._28_4_ = uStack_18c;
                    local_158.Array = pTStack_1a0;
                    if ((int)uStack_194 < local_70) {
                      do {
                        puVar21 = (ulonglong *)
                                  ((longlong)local_158.CurrentBitIndex * 0x10 + *local_160);
                        uVar19 = ((uint)(*puVar21 >> 0x14) & 0xffff ^ (uint)(*puVar21 >> 4)) *
                                 -0x7a143595;
                        uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
                        uVar19 = (uVar19 >> 0x10 ^ uVar19) & local_50 - 1;
                        *(uint *)((longlong)puVar21 + 0xc) = uVar19;
                        FVar14.Data = local_60;
                        if (local_58.Data != (FScriptContainerElement *)0x0) {
                          FVar14.Data = local_58.Data;
                        }
                        lVar16 = (longlong)(int)(local_50 - 1 & uVar19);
                        *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(FVar14.Data + lVar16 * 4);
                        *(int *)(FVar14.Data + lVar16 * 4) = local_158.CurrentBitIndex;
                        local_158.UnvisitedBitMask =
                             local_158.UnvisitedBitMask & ~local_158._padding_._4_4_;
                        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_158)
                        ;
                      } while (local_158.CurrentBitIndex < (local_158.Array)->NumBits);
                    }
                  }
                }
              }
              iVar7 = 0;
              if (0 < (int)uVar23) {
                do {
                  ppUVar12 = TArrayView<UActorComponent_*,int>::operator[](param_2,iVar7);
                  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                  ::Emplace<UActorComponent_*_const_&>
                            ((TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                              *)local_98,local_108,(bool *)ppUVar12);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < (int)uVar23);
              }
              goto LAB_148778f53;
            }
LAB_148778f60:
            uVar19 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4))
                     * -0x7a143595;
            uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
            if (local_98._8_4_ != local_64) {
              FVar14.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_58.Data;
              }
              for (iVar7 = *(int *)(FVar14.Data +
                                   (ulonglong)(local_50 - 1 & (uVar19 >> 0x10 ^ uVar19)) * 4);
                  iVar7 != -1; iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0x10 + 8)) {
                if (*(UPrimitiveComponent **)(local_98._0_8_ + (longlong)iVar7 * 0x10) == this_00) {
                  if ((iVar7 != -1) &&
                     ((FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar7 * 0x10) !=
                      (FScriptContainerElement *)0x0)) goto LAB_1487795f1;
                  break;
                }
              }
            }
            if (local_64 == 0) {
              iVar7 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x10,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                                 (int *)(local_98 + 0xc));
              iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
              FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
              if (local_78 != (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_78;
              }
              bVar13 = (byte)iVar8 & 0x1f;
              if (iVar8 < 0) {
                iVar8 = iVar8 + 0x1f;
                bVar13 = bVar13 - 0x20;
              }
              puVar2 = (uint *)((longlong)FVar17 + (longlong)(iVar8 >> 5) * 4);
              *puVar2 = *puVar2 & ~(1 << (bVar13 & 0x1f));
              iVar8 = local_68;
            }
            else {
              local_64 = local_64 + -1;
              iVar8 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x10 + 4);
              iVar7 = local_68;
              if (local_64 != 0) {
                *(undefined4 *)(local_98._0_8_ + (longlong)iVar8 * 0x10) = 0xffffffff;
              }
            }
            local_68 = iVar8;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_98,&local_e8,iVar7);
            if (local_e8.Pointer != (ulonglong *)0x0) {
              *(UPrimitiveComponent **)local_e8.Pointer = this_00;
              *(undefined4 *)((longlong)local_e8.Pointer + 8) = 0xffffffff;
            }
            uVar20 = *(ulonglong *)local_e8.Pointer;
            uVar22 = local_98._8_4_ - local_64;
            uVar19 = ((uint)(uVar20 >> 0x14) & 0xffff ^ (uint)(uVar20 >> 4)) * -0x7a143595;
            uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
            uVar19 = uVar19 >> 0x10 ^ uVar19;
            if (uVar22 == 1) {
LAB_148779178:
              if (uVar22 < 4) goto LAB_1487791c8;
              uVar20 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
              lVar16 = 0x3f;
              if (uVar20 != 0) {
                for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              local_f8 = (undefined4)lVar16;
              uVar18 = 1 << ((byte)lVar16 & 0x1f);
            }
            else {
              if (uVar22 != 0) {
                FVar14.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar14.Data = local_58.Data;
                }
                for (iVar7 = *(int *)(FVar14.Data + (ulonglong)(local_50 - 1 & uVar19) * 4);
                    iVar7 != -1; iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0x10 + 8)) {
                  if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar7 * 0x10) == uVar20) {
                    if (iVar7 != -1) {
                      *(ulonglong *)(local_98._0_8_ + (longlong)iVar7 * 0x10) = uVar20;
                      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::RemoveAtUninitialized
                                ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  *)local_98,local_e8.Index,1);
                      param_2 = local_1c0;
                      goto LAB_14877945e;
                    }
                    break;
                  }
                }
                goto LAB_148779178;
              }
LAB_1487791c8:
              uVar18 = 1;
            }
            if (((int)uVar22 < 1) || ((int)uVar18 <= (int)local_50)) {
              uVar19 = local_50 - 1 & uVar19;
              *(uint *)((longlong)local_e8.Pointer + 0xc) = uVar19;
              FVar14.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_58.Data;
              }
              lVar16 = (longlong)(int)(local_50 - 1 & uVar19);
              *(undefined4 *)((longlong)local_e8.Pointer + 8) =
                   *(undefined4 *)(FVar14.Data + lVar16 * 4);
              *(int *)(FVar14.Data + lVar16 * 4) = local_e8.Index;
              param_2 = local_1c0;
            }
            else {
              local_50 = uVar18;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_58,0,0,4);
              }
              if (uVar18 != 0) {
                uVar19 = uVar18;
                if (uVar18 < 2) {
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    uVar19 = 0;
                    goto LAB_14877921e;
                  }
                }
                else {
LAB_14877921e:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_58,0,uVar19,4);
                }
                if (0 < (int)uVar18) {
                  uVar20 = 0;
                  uVar15 = (ulonglong)uVar18;
                  do {
                    FVar14.Data = local_60;
                    if (local_58.Data != (FScriptContainerElement *)0x0) {
                      FVar14.Data = local_58.Data;
                    }
                    uVar11 = (longlong)(int)uVar18 - 1U & uVar20;
                    uVar20 = uVar20 + 1;
                    *(undefined4 *)(FVar14.Data + uVar11 * 4) = 0xffffffff;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
              }
              param_2 = local_1c0;
              if (local_50 != 0) {
                pTStack_180 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                uStack_184 = 1;
                uVar19 = 0;
                local_188 = 0;
                uStack_174 = 0;
                if (local_70 != 0) {
                  FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                  if (local_78 != (ForElementType<unsigned_int>)0x0) {
                    FVar17 = local_78;
                  }
                  uVar22 = *(uint *)FVar17;
                  local_188 = 0;
                  while (uVar22 == 0) {
                    uVar19 = uVar19 + 0x20;
                    lVar16 = (longlong)local_188;
                    local_188 = local_188 + 1;
                    uStack_174 = (ulonglong)uVar19 << 0x20;
                    if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_188) {
                      uStack_174 = CONCAT44(uVar19,local_70);
                      goto LAB_148779340;
                    }
                    uVar22 = ((uint *)((longlong)FVar17 + 4))[lVar16];
                  }
                  uStack_184 = -uVar22 & uVar22;
                  uVar20 = (ulonglong)uStack_184 * 2 + 1;
                  lVar16 = 0x3f;
                  if (uVar20 != 0) {
                    for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                    }
                  }
                  local_f4 = (int)lVar16;
                  iVar7 = (uVar19 - 1) + local_f4;
                  if (local_70 < iVar7) {
                    iVar7 = local_70;
                  }
                  uStack_174._4_4_ = (int)((ulonglong)uStack_174 >> 0x20);
                  uStack_174 = CONCAT44(uStack_174._4_4_,iVar7);
                }
LAB_148779340:
                local_178 = 0xffffffff;
                local_138 = (longlong *)local_98;
                local_130._padding_ = CONCAT44(uStack_184,local_188);
                local_130.UnvisitedBitMask = 0xffffffff;
                local_130.CurrentBitIndex = (int)uStack_174;
                local_130.BaseBitIndex = uStack_174._4_4_;
                local_130._28_4_ = uStack_16c;
                local_130.Array = pTStack_180;
                if ((int)uStack_174 < local_70) {
                  do {
                    puVar21 = (ulonglong *)((longlong)local_130.CurrentBitIndex * 0x10 + *local_138)
                    ;
                    uVar19 = ((uint)(*puVar21 >> 0x14) & 0xffff ^ (uint)(*puVar21 >> 4)) *
                             -0x7a143595;
                    uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
                    uVar19 = (uVar19 >> 0x10 ^ uVar19) & local_50 - 1;
                    *(uint *)((longlong)puVar21 + 0xc) = uVar19;
                    FVar14.Data = local_60;
                    if (local_58.Data != (FScriptContainerElement *)0x0) {
                      FVar14.Data = local_58.Data;
                    }
                    lVar16 = (longlong)(int)(local_50 - 1 & uVar19);
                    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(FVar14.Data + lVar16 * 4);
                    *(int *)(FVar14.Data + lVar16 * 4) = local_130.CurrentBitIndex;
                    local_130.UnvisitedBitMask =
                         local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
                    param_2 = local_1c0;
                  } while (local_130.CurrentBitIndex < (local_130.Array)->NumBits);
                }
              }
            }
          }
LAB_14877945e:
          piVar24 = &(this->StaticMeshComponents).ArrayMax;
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          local_1b8 = this_00;
          if (((pFVar3 <= (FScriptContainerElement *)&local_1b8) &&
              ((FScriptContainerElement *)&local_1b8 < pFVar3 + (longlong)*piVar24 * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FStaticMeshComponentBulkReregisterContext *)(*pcVar5)();
            return pFVar9;
          }
          iVar7 = (this->StaticMeshComponents).ArrayNum;
          if (iVar7 == *piVar24) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar1->AllocatorInstance,piVar24);
          }
          (this->StaticMeshComponents).ArrayNum = iVar7 + 1;
          *(UPrimitiveComponent **)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
               local_1b8;
          if ((this_00->bBulkReregister != '\0') &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("StaticMeshComponent->bBulkReregister == false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshResources.cpp"
                                 ,0xa5,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FStaticMeshComponentBulkReregisterContext *)(*pcVar5)();
            return pFVar9;
          }
          this_00->bBulkReregister = '\x01';
          if ((this_00->field_0x98 & 2) != 0) {
            local_1b0 = this_00;
            if (((local_1d8.Data <= (FScriptContainerElement *)&local_1b0) &&
                ((FScriptContainerElement *)&local_1b0 <
                 local_1d8.Data + (longlong)local_1d0._4_4_ * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FStaticMeshComponentBulkReregisterContext *)(*pcVar5)();
              return pFVar9;
            }
            iVar7 = (int)local_1d0;
            if ((int)local_1d0 == local_1d0._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_1d8,(int *)((longlong)&local_1d0 + 4));
            }
            local_1d0 = CONCAT44(local_1d0._4_4_,iVar7 + 1);
            *(UPrimitiveComponent **)(local_1d8.Data + (longlong)iVar7 * 8) = local_1b0;
          }
        }
      }
LAB_1487795f1:
      uVar23 = uVar23 + 1;
      uVar20 = (ulonglong)(uint)param_2->ArrayNum;
      local_168 = local_168 + 1;
      pFVar9 = local_f0;
    } while ((int)uVar23 < param_2->ArrayNum);
  }
  iVar7 = (int)local_1d0;
  if ((int)local_1d0 != 0) {
    pFVar4 = pFVar9->Scene;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
    local_d8 = local_1d8.Data;
    if (((int)local_1d0 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FStaticMeshComponentBulkReregisterContext *)(*pcVar5)();
      return pFVar9;
    }
    iStack_d0 = iVar7;
    local_b8 = (undefined4)local_d8;
    uStack_b4 = local_d8._4_4_;
    iStack_b0 = iVar7;
    uStack_ac = uStack_cc;
    (*pcVar5)(pFVar4,&local_b8);
    if (local_1c8 == Component) {
      pFVar4 = pFVar9->Scene;
      iVar7 = (int)local_1d0;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x60);
      local_c8 = local_1d8.Data;
      if (((int)local_1d0 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FStaticMeshComponentBulkReregisterContext *)(*pcVar5)();
        return pFVar9;
      }
      iStack_c0 = iVar7;
      local_a8 = (undefined4)local_c8;
      uStack_a4 = local_c8._4_4_;
      iStack_a0 = iVar7;
      uStack_9c = uStack_bc;
      (*pcVar5)(pFVar4,&local_a8);
    }
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (local_1d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  return pFVar9;
}

// ~FStaticMeshComponentBulkReregisterContext @ 14877f3f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FStaticMeshComponentBulkReregisterContext::~FStaticMeshComponentBulkReregisterContext
          (FStaticMeshComponentBulkReregisterContext *this)

{
  byte *pbVar1;
  int iVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  TArrayView<UPrimitiveComponent_*,int> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  <lambda_1> local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<UPrimitiveComponent_*,int> local_58;
  TArrayView<UPrimitiveComponent_*,int> local_48;
  TArrayView<UPrimitiveComponent_*,int> local_38;
  
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_FStaticMeshComponentBulkReregisterContext::~FStaticMeshComponentBulkReregisterContext_::__l2::<lambda_1>_>
            (&this->StaticMeshComponents,local_res10,No);
  if ((this->StaticMeshComponents).ArrayNum != 0) {
    pFVar3 = this->Scene;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x38);
    pTVar8 = TArrayView<UPrimitiveComponent_*,int>::
             TArrayView<UPrimitiveComponent_*,int><TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>_&,TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>_>
                       (&local_48,&this->StaticMeshComponents);
    local_68 = *(undefined4 *)&pTVar8->DataPtr;
    uStack_64 = *(undefined4 *)((longlong)&pTVar8->DataPtr + 4);
    iStack_60 = pTVar8->ArrayNum;
    uStack_5c = *(undefined4 *)&pTVar8->field_0xc;
    (*pcVar4)(pFVar3,&local_68);
    pTVar8 = TArrayView<UPrimitiveComponent_*,int>::
             TArrayView<UPrimitiveComponent_*,int><TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>_&,TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>_>
                       (&local_38,&this->StaticMeshComponents);
    local_58.DataPtr = pTVar8->DataPtr;
    local_58.ArrayNum = pTVar8->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    UPrimitiveComponent::BatchSendRenderDebugPhysics(&local_58);
  }
  pFVar9 = (this->StaticMeshComponents).AllocatorInstance.Data;
  iVar2 = (this->StaticMeshComponents).ArrayNum;
  pFVar6 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->StaticMeshComponents).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar6) break;
    lVar5 = *(longlong *)pFVar9;
    if ((*(byte *)(lVar5 + 0x27b) & 2) == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticMeshComponent->bBulkReregister == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshResources.cpp"
                         ,0xcd,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pbVar1 = (byte *)(lVar5 + 0x27b);
    *pbVar1 = *pbVar1 & 0xfd;
    pFVar9 = pFVar9 + 8;
  }
  pFVar9 = (this->SCSs).AllocatorInstance.Data;
  iVar2 = (this->SCSs).ArrayNum;
  pFVar6 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SCSs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<USimpleConstructionScript_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar9 == pFVar6) break;
    lVar5 = *(longlong *)pFVar9;
    pFVar9 = pFVar9 + 8;
    *(undefined8 *)(lVar5 + 0xa8) = 0;
  }
  pFVar6 = (this->SCSs).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->StaticMeshComponents).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return;
}

// AddConstructedComponent @ 1487866f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FStaticMeshComponentBulkReregisterContext::AddConstructedComponent
          (FStaticMeshComponentBulkReregisterContext *this,USceneComponent *param_1)

{
  int *piVar1;
  byte *pbVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  USceneComponent *local_18 [2];
  
  if (param_1 != (USceneComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar7->_padding_)) {
      if (((param_1[1]._padding_ & 0x2000000) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StaticMeshComponent->bBulkReregister == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshResources.cpp"
                             ,0xef,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pbVar2 = (byte *)((longlong)&param_1[1]._padding_ + 3);
      *pbVar2 = *pbVar2 | 2;
      pFVar3 = (this->StaticMeshComponents).AllocatorInstance.Data;
      local_18[0] = param_1;
      if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar3 + (longlong)(this->StaticMeshComponents).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->StaticMeshComponents).ArrayNum;
      piVar1 = &(this->StaticMeshComponents).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->StaticMeshComponents).AllocatorInstance,piVar1);
      }
      (this->StaticMeshComponents).ArrayNum = iVar6 + 1;
      *(USceneComponent **)
       ((this->StaticMeshComponents).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
    }
  }
  return;
}

// AddSimpleConstructionScript @ 148787c30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FStaticMeshComponentBulkReregisterContext::AddSimpleConstructionScript
          (FStaticMeshComponentBulkReregisterContext *this,USimpleConstructionScript *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  USimpleConstructionScript *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_1 == (USimpleConstructionScript *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SCS",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshResources.cpp"
                       ,0xd9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_res10[0]->ReregisterContext != this) {
    if (local_res10[0]->ReregisterContext != (FStaticMeshComponentBulkReregisterContext *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SCS->ReregisterContext == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshResources.cpp"
                         ,0xde,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_res10[0]->ReregisterContext = this;
    pFVar2 = (this->SCSs).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->SCSs).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->SCSs).ArrayNum;
    piVar1 = &(this->SCSs).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->SCSs).AllocatorInstance,piVar1);
    }
    (this->SCSs).ArrayNum = iVar5 + 1;
    *(USimpleConstructionScript **)((this->SCSs).AllocatorInstance.Data + (longlong)iVar5 * 8) =
         local_res10[0];
  }
  return;
}

// SanitizeMeshComponents @ 1487c0790

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FStaticMeshComponentBulkReregisterContext::SanitizeMeshComponents
          (FStaticMeshComponentBulkReregisterContext *this)

{
  <lambda_1> local_res8 [32];
  
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_FStaticMeshComponentBulkReregisterContext::SanitizeMeshComponents_::__l2::<lambda_1>_>
            (&this->StaticMeshComponents,local_res8,No);
  return;
}

