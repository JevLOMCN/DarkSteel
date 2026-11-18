// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// operator() @ 1431c0bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
* __thiscall
`FBuildMergeManifests::MergeManifests'::__l2::<lambda_3>::operator()
          (void *this,
          TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
  *pTVar10;
  FString *pFVar11;
  ulonglong uVar12;
  byte bVar13;
  ForElementType<FSetElementId> FVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  ulonglong uVar19;
  wchar_t *pwVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType *_Src;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auStackY_238 [32];
  uint local_1f8;
  FString local_1f0;
  FString local_1e0;
  void *local_1d0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1c8;
  uint local_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b0;
  undefined4 local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  FString local_198;
  undefined4 local_184;
  int local_180;
  undefined1 local_17c [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  FString local_148;
  FSparseArrayAllocationInfo local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  undefined1 local_e8 [24];
  uchar auStack_d0 [8];
  ForElementType<unsigned_int> local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_b0;
  ulonglong local_a0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  LOCK();
  **(undefined4 **)((longlong)this + 8) = 1;
  UNLOCK();
  local_b0.InlineData[0] = '\0';
  local_b0.InlineData[1] = '\0';
  local_b0.InlineData[2] = '\0';
  local_b0.InlineData[3] = '\0';
  local_b0._padding_ = 0;
  local_a0 = 0;
  local_98.Hash.InlineData[0] = '\0';
  local_98.Hash.InlineData[1] = '\0';
  local_98.Hash.InlineData[2] = '\0';
  local_98.Hash.InlineData[3] = '\0';
  local_98.Hash._padding_ = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_e8[0x10] = '\0';
  local_e8[0x11] = '\0';
  local_e8[0x12] = '\0';
  local_e8[0x13] = '\0';
  local_e8[0x14] = '\0';
  local_e8[0x15] = '\0';
  local_e8[0x16] = '\0';
  local_e8[0x17] = '\0';
  auStack_d0[0] = '\0';
  auStack_d0[1] = '\0';
  auStack_d0[2] = '\0';
  auStack_d0[3] = '\0';
  auStack_d0[4] = '\0';
  auStack_d0[5] = '\0';
  auStack_d0[6] = '\0';
  auStack_d0[7] = '\0';
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_b0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.Elements._16_8_ = 0;
  local_98.Elements._24_8_ = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_8_ = 0x8000000000;
  local_98.Elements._48_8_ = 0xffffffff;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98._72_8_ = 0;
  local_1d0 = this;
  local_17c._4_8_ = __return_storage_ptr__;
  if (1 < *(int *)(*(undefined8 **)this + 1)) {
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Data.ArrayNum = 0;
    local_198.Data.ArrayMax = 0;
    bVar5 = FFileHelper::LoadFileToString(&local_198,(wchar_t *)**(undefined8 **)this,None,0);
    LOCK();
    **(uint **)((longlong)this + 8) = (uint)bVar5;
    UNLOCK();
    if (**(int **)((longlong)this + 8) == 0) {
      if (1 < (byte)LogMergeManifests._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMergeManifests);
      }
    }
    else {
      local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.ArrayNum = 0;
      local_1c8.ArrayMax = 0;
      ::FString::ParseIntoArrayLines(&local_198,&local_1c8,true);
      local_1f8 = 0;
      if (0 < local_1c8.ArrayNum) {
        do {
          local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e0.Data.ArrayNum = 0;
          local_1e0.Data.ArrayMax = 0;
          uVar17 = 0;
          local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1f0.Data.ArrayNum = 0;
          local_1f0.Data.ArrayMax = 0;
          uVar8 = uVar17;
          if ((int)local_1f8 < local_1c8.ArrayNum) {
            uVar8 = ~local_1f8 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                       *)(*pcVar4)();
            return pTVar10;
          }
          pFVar21 = local_1c8.AllocatorInstance.Data + (longlong)(int)local_1f8 * 0x10;
          ::FString::FString(&local_148,L"\t");
          ::FString::Split((FString *)pFVar21,&local_148,&local_1e0,&local_1f0,CaseSensitive,
                           FromStart);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          pFVar11 = ::FString::TrimStartAndEnd(&local_1e0,&local_118);
          pFVar11 = ::FString::TrimQuotes(pFVar11,&local_128,(bool *)0x0);
          if (&local_1e0 != pFVar11) {
            if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
            }
            local_1e0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1e0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            local_1e0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
          }
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          FPaths::NormalizeDirectoryName(&local_1e0);
          pFVar11 = ::FString::TrimStartAndEnd(&local_1f0,&local_f8);
          pFVar11 = ::FString::TrimQuotes(pFVar11,&local_108,(bool *)0x0);
          if (&local_1f0 != pFVar11) {
            if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
            }
            local_1f0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1f0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            local_1f0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
          }
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_1f0.Data.ArrayNum != 0) {
            FVar16.Data = local_1f0.Data.AllocatorInstance.Data;
          }
          iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"A");
          if (iVar6 == 0) {
            if (local_b4 == 0) {
              iVar6 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x18,8,1,(ForAnyElementType *)local_e8,(int *)(local_e8 + 8),
                                 (int *)(local_e8 + 0xc));
              iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),1);
              FVar18 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
              if (local_c8 != (ForElementType<unsigned_int>)0x0) {
                FVar18 = local_c8;
              }
              bVar13 = (byte)iVar7 & 0x1f;
              if (iVar7 < 0) {
                iVar7 = iVar7 + 0x1f;
                bVar13 = bVar13 - 0x20;
              }
              puVar2 = (uint *)((longlong)FVar18 + (longlong)(iVar7 >> 5) * 4);
              *puVar2 = *puVar2 & ~(1 << (bVar13 & 0x1f));
              iVar7 = local_b8;
            }
            else {
              local_b4 = local_b4 + -1;
              iVar7 = *(int *)(local_e8._0_8_ + (longlong)local_b8 * 0x18 + 4);
              iVar6 = local_b8;
              if (local_b4 != 0) {
                *(undefined4 *)(local_e8._0_8_ + (longlong)iVar7 * 0x18) = 0xffffffff;
              }
            }
            local_b8 = iVar7;
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_e8,&local_138,iVar6);
            _Src = local_138.Pointer;
            FVar16.Data = local_1e0.Data.AllocatorInstance.Data;
            if (local_138.Pointer == (ForAnyElementType *)0x0) {
              _Src = (ForAnyElementType *)0x0;
            }
            else {
              *(FScriptContainerElement **)local_138.Pointer = (FScriptContainerElement *)0x0;
              piVar1 = (int *)((longlong)
                               &((ForAnyElementType *)((longlong)local_138.Pointer + 8))->Data + 4);
              lVar23 = (longlong)local_1e0.Data.ArrayNum;
              *(int *)&((ForAnyElementType *)((longlong)local_138.Pointer + 8))->Data =
                   local_1e0.Data.ArrayNum;
              if (local_1e0.Data.ArrayNum == 0) {
                *piVar1 = 0;
                *(undefined4 *)&((ForAnyElementType *)((longlong)local_138.Pointer + 0x10))->Data =
                     0xffffffff;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_1e0.Data.ArrayNum,0,local_138.Pointer,local_1e0.Data.ArrayNum,
                           piVar1);
                memcpy(*&_Src->Data,FVar16.Data,lVar23 * 2);
                *(undefined4 *)&((void *)_Src)[2].Data = 0xffffffff;
              }
            }
            iVar6 = local_138.Index;
            if (*(int *)&_Src[1].Data == 0) {
              pwVar20 = L"";
            }
            else {
              pwVar20 = (wchar_t *)_Src->Data;
              uVar17 = *(int *)&_Src[1].Data - 1;
            }
            uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar17,pwVar20);
            if ((local_e8._8_4_ - local_b4 != 1) && (local_e8._8_4_ != local_b4)) {
              FVar14 = (ForElementType<FSetElementId>)&local_b0;
              if (local_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar14 = local_b0.SecondaryData;
              }
              iVar7 = *(int *)((longlong)FVar14 + (ulonglong)((int)local_a0 - 1U & uVar8) * 4);
              pFVar21 = (FScriptContainerElement *)local_e8._0_8_;
              while (iVar7 != -1) {
                lVar23 = (longlong)iVar7 * 0x18;
                iVar9 = *(int *)(pFVar21 + lVar23 + 8);
                if (iVar9 == *(int *)&_Src[1].Data) {
                  if (1 < iVar9) {
                    iVar9 = FGenericPlatformStricmp::Stricmp
                                      (*(wchar_t **)(pFVar21 + lVar23),(wchar_t *)_Src->Data);
                    bVar5 = iVar9 == 0;
                    pFVar21 = (FScriptContainerElement *)local_e8._0_8_;
                    goto LAB_1431c111b;
                  }
LAB_1431c112d:
                  if (iVar7 != -1) {
                    if (*(void **)(pFVar21 + (longlong)iVar7 * 0x18) != (void *)0x0) {
                      FMemory::Free(*(void **)(pFVar21 + (longlong)iVar7 * 0x18));
                    }
                    memmove(pFVar21 + (longlong)iVar7 * 0x18,_Src,0x10);
                    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_e8,iVar6,1);
                    iVar6 = iVar7;
                  }
                  this = local_1d0;
                  if (iVar7 != -1) goto LAB_1431c141a;
                  break;
                }
                bVar5 = iVar9 + *(int *)&_Src[1].Data == 1;
LAB_1431c111b:
                if (bVar5) goto LAB_1431c112d;
                iVar7 = *(int *)(pFVar21 + lVar23 + 0x10);
              }
            }
            uVar15 = 0;
            uVar22 = 1;
            uVar17 = local_e8._8_4_ - local_b4;
            if (3 < uVar17) {
              uVar19 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
              lVar23 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              local_184 = (undefined4)lVar23;
              uVar22 = 1 << ((byte)lVar23 & 0x1f);
            }
            if (((int)uVar17 < 1) || ((int)uVar22 <= (int)local_a0)) {
              uVar8 = (int)local_a0 - 1U & uVar8;
              *(uint *)((longlong)&_Src[2].Data + 4) = uVar8;
              FVar14 = (ForElementType<FSetElementId>)&local_b0;
              if (local_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar14 = local_b0.SecondaryData;
              }
              uVar15 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar8;
              *(undefined4 *)&_Src[2].Data = *(undefined4 *)((longlong)FVar14 + uVar15 * 4);
              *(int *)((longlong)FVar14 + uVar15 * 4) = iVar6;
              this = local_1d0;
            }
            else {
              local_a0 = CONCAT44(local_a0._4_4_,uVar22);
              if (local_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_b0.SecondaryData,0,0,4);
              }
              if (uVar22 != 0) {
                uVar8 = uVar22;
                if (uVar22 < 2) {
                  if (local_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    uVar8 = 0;
                    goto LAB_1431c1202;
                  }
                }
                else {
LAB_1431c1202:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)&local_b0.SecondaryData,0,uVar8,4);
                }
                if (0 < (int)uVar22) {
                  uVar24 = (ulonglong)uVar22;
                  uVar19 = uVar15;
                  do {
                    FVar14 = (ForElementType<FSetElementId>)&local_b0;
                    if (local_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar14 = local_b0.SecondaryData;
                    }
                    uVar12 = uVar19 & (longlong)(int)uVar22 - 1U;
                    uVar19 = uVar19 + 1;
                    *(undefined4 *)((longlong)FVar14 + uVar12 * 4) = 0xffffffff;
                    uVar24 = uVar24 - 1;
                  } while (uVar24 != 0);
                }
              }
              this = local_1d0;
              if ((int)local_a0 != 0) {
                pTStack_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
                local_1b8 = 0;
                uStack_1b4 = 1;
                uStack_1a4 = 0;
                uStack_1a0 = 0;
                if (local_c0 != 0) {
                  FVar18 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
                  if (local_c8 != (ForElementType<unsigned_int>)0x0) {
                    FVar18 = local_c8;
                  }
                  uVar8 = *(uint *)FVar18;
                  uVar19 = uVar15;
                  while (uVar8 == 0) {
                    uStack_1a0 = (int)uVar19 + 0x20;
                    uVar19 = (ulonglong)uStack_1a0;
                    iVar6 = (int)uVar15;
                    local_1b8 = iVar6 + 1;
                    uVar15 = (ulonglong)local_1b8;
                    if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                        (int)local_1b8) goto LAB_1431c130b;
                    uVar8 = ((uint *)((longlong)FVar18 + 4))[iVar6];
                  }
                  uStack_1b4 = -uVar8 & uVar8;
                  uVar15 = (ulonglong)uStack_1b4 * 2 + 1;
                  lVar23 = 0x3f;
                  if (uVar15 != 0) {
                    for (; uVar15 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                    }
                  }
                  local_180 = (int)lVar23;
                  uStack_1a4 = (uStack_1a0 - 1) + local_180;
                  uVar15 = (ulonglong)uStack_1a4;
                  if ((int)local_c0 < (int)uStack_1a4) {
LAB_1431c130b:
                    uVar15 = (ulonglong)local_c0;
                    uStack_1a4 = local_c0;
                  }
                }
                local_1a8 = 0xffffffff;
                local_17c._12_8_ = local_e8;
                local_168._padding_ = CONCAT44(uStack_1b4,local_1b8);
                local_168.CurrentBitIndex = uStack_1a4;
                local_168.UnvisitedBitMask = 0xffffffff;
                local_168._28_4_ = uStack_19c;
                local_168.BaseBitIndex = uStack_1a0;
                local_168.Array = pTStack_1b0;
                if ((int)uVar15 < (int)local_c0) {
                  do {
                    iVar9 = (int)uVar15;
                    puVar3 = (undefined8 *)(*(longlong *)local_17c._12_8_ + (longlong)iVar9 * 0x18);
                    iVar7 = *(int *)(*(longlong *)local_17c._12_8_ + 8 + (longlong)iVar9 * 0x18);
                    iVar6 = iVar7 + -1;
                    if (iVar7 == 0) {
                      pwVar20 = L"";
                      iVar6 = 0;
                    }
                    else {
                      pwVar20 = (wchar_t *)*puVar3;
                    }
                    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar20);
                    uVar8 = (int)local_a0 - 1U & uVar8;
                    *(uint *)((longlong)puVar3 + 0x14) = uVar8;
                    FVar14 = (ForElementType<FSetElementId>)&local_b0;
                    if (local_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar14 = local_b0.SecondaryData;
                    }
                    uVar15 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar8;
                    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)((longlong)FVar14 + uVar15 * 4);
                    *(int *)((longlong)FVar14 + uVar15 * 4) = iVar9;
                    local_168.UnvisitedBitMask =
                         local_168.UnvisitedBitMask & ~local_168._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_168);
                    uVar15 = (ulonglong)(uint)local_168.CurrentBitIndex;
                    this = local_1d0;
                  } while (local_168.CurrentBitIndex < (local_168.Array)->NumBits);
                }
              }
            }
          }
          else {
            FVar16.Data = (FScriptContainerElement *)L"";
            if (local_1f0.Data.ArrayNum != 0) {
              FVar16.Data = local_1f0.Data.AllocatorInstance.Data;
            }
            iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"B");
            if (iVar6 == 0) {
              TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              Emplace<FString_const_&>(&local_98,(FString *)local_17c,(bool *)&local_1e0);
            }
            else {
              if (1 < (byte)LogMergeManifests._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogMergeManifests);
              }
              LOCK();
              **(undefined4 **)((longlong)this + 8) = 0;
              UNLOCK();
            }
          }
LAB_1431c141a:
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          local_1f8 = local_1f8 + 1;
          __return_storage_ptr__ =
               (TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                *)local_17c._4_8_;
        } while ((int)local_1f8 < local_1c8.ArrayNum);
      }
      DestructItems<FString,int>((FString *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
      if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.AllocatorInstance.Data);
      }
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)__return_storage_ptr__
             ,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8);
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x78 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x7c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x80 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x84 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x90 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x98 = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x50,&local_98);
  local_98._72_8_ = local_98._72_8_ & 0xffffffff00000000;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  local_a0 = local_a0 & 0xffffffff00000000;
  if (local_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b0.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  return __return_storage_ptr__;
}

// MergeDeltaManifest @ 1431ea720

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<FBuildPatchAppManifest,1> * __cdecl
FBuildMergeManifests::MergeDeltaManifest
          (TSharedPtr<FBuildPatchAppManifest,1> *__return_storage_ptr__,
          TSharedRef<FBuildPatchAppManifest,1> *param_1,
          TSharedRef<FBuildPatchAppManifest,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  FChunkDataList *pFVar2;
  FFileManifestList *pFVar3;
  int iVar4;
  int iVar5;
  FBuildPatchAppManifest *pFVar6;
  FScriptContainerElement *_Src;
  FBuildPatchAppManifest *this;
  FBuildPatchAppManifest *pFVar7;
  bool bVar8;
  longlong *plVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res20 [8];
  TSharedPtr<FBuildPatchAppManifest,1> local_78;
  TSharedPtr<FBuildPatchAppManifest,1> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  plVar9 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x120))(param_1->Object,local_58);
  local_68.Object = (FBuildPatchAppManifest *)plVar9[1];
  pFVar6 = (FBuildPatchAppManifest *)*plVar9;
  if (local_68.Object != (FBuildPatchAppManifest *)0x0) {
    LOCK();
    ((local_68.Object)->ManifestMeta).FeatureLevel =
         ((local_68.Object)->ManifestMeta).FeatureLevel + CustomFields;
    UNLOCK();
  }
  local_78.Object = pFVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  iVar4 = (pFVar6->FileManifestList).FileList.ArrayNum;
  pFVar12 = (pFVar6->FileManifestList).FileList.AllocatorInstance.Data;
  pFVar11 = pFVar12 + 0x54;
  pFVar13 = pFVar12 + (longlong)iVar4 * 0x60;
  do {
    while( true ) {
      if ((pFVar6->FileManifestList).FileList.ArrayNum != iVar4) {
        `TCheckedPointerIterator<BuildPatchServices::FFileManifest,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      pFVar7 = local_68.Object;
      this = local_78.Object;
      if (pFVar12 == pFVar13) {
        pFVar6 = param_1->Object;
        pFVar2 = &(local_78.Object)->ChunkDataList;
        local_78.SharedReferenceCount.ReferenceController =
             (param_1->SharedReferenceCount).ReferenceController;
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = param_2->Object;
        local_68.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar3 = &(local_78.Object)->FileManifestList;
        local_78.Object = pFVar6;
        bVar8 = MergeHelpers::ReinitialiseChunkInfoList
                          (&pFVar3->FileList,&local_68,&local_78,&pFVar2->ChunkList);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        if (bVar8) {
          FBuildPatchAppManifest::InitLookups(this);
          __return_storage_ptr__->Object = this;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)pFVar7;
          if (pFVar7 != (FBuildPatchAppManifest *)0x0) {
            LOCK();
            (pFVar7->ManifestMeta).FeatureLevel = (pFVar7->ManifestMeta).FeatureLevel + CustomFields
            ;
            UNLOCK();
          }
        }
        else {
          __return_storage_ptr__->Object = (FBuildPatchAppManifest *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar7);
        return __return_storage_ptr__;
      }
      lVar10 = (**(code **)(param_2->Object->_padding_ + 0x1f8))(param_2->Object,pFVar12);
      if (lVar10 != 0) break;
LAB_1431ea846:
      pFVar12 = pFVar12 + 0x60;
      pFVar11 = pFVar11 + 0x60;
    }
    pFVar1 = pFVar11 + -0xc;
    if (pFVar1 == (FScriptContainerElement *)(lVar10 + 0x48)) goto LAB_1431ea846;
    iVar5 = *(int *)(lVar10 + 0x50);
    _Src = *(FScriptContainerElement **)&((FScriptContainerElement *)(lVar10 + 0x48))->field_0x0;
    *(int *)(pFVar11 + -4) = iVar5;
    if ((iVar5 != 0) || (*(int *)pFVar11 != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar5,*(int *)pFVar11,(ForAnyElementType *)pFVar1,iVar5,(int *)pFVar11);
      if (iVar5 != 0) {
        memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,_Src,(longlong)iVar5 * 0x18);
      }
      goto LAB_1431ea846;
    }
    pFVar12 = pFVar12 + 0x60;
    *(int *)pFVar11 = 0;
    pFVar11 = pFVar11 + 0x60;
  } while( true );
}

// MergeManifests @ 1431ea930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __cdecl
FBuildMergeManifests::MergeManifests
          (FString *param_1,FString *param_2,FString *param_3,FString *param_4,FString *param_5)

{
  FBuildPatchAppManifest *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  FOutputDeviceRedirector *this;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar9;
  IFileSystem *pIVar10;
  undefined ***pppuVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  undefined1 auStackY_6b8 [32];
  int local_688 [2];
  TSharedPtr<FBuildPatchAppManifest,1> local_680;
  TSharedPtr<FBuildPatchAppManifest,1> local_670;
  FString local_660;
  undefined1 local_650 [16];
  undefined1 local_640 [16];
  undefined1 local_630 [16];
  FString *local_620;
  int local_618;
  FString *local_610;
  int local_608;
  TUniqueFunction<void___cdecl(void)> local_5f8;
  TUniqueFunction<void___cdecl(void)> local_5c8;
  TUniqueFunction<void___cdecl(void)> local_598;
  undefined1 local_568 [32];
  void *local_548;
  undefined4 local_540;
  uint local_53c;
  undefined4 local_538;
  int local_534;
  ForElementType<FSetElementId> local_528;
  int local_520;
  undefined1 local_518 [32];
  void *local_4f8;
  undefined4 local_4f0;
  uint local_4ec;
  undefined4 local_4e8;
  int local_4e4;
  ForElementType<FSetElementId> local_4d8;
  int local_4d0;
  undefined1 local_4c8 [32];
  void *local_4a8;
  undefined4 local_4a0;
  uint local_49c;
  undefined4 local_498;
  undefined4 local_494;
  ForElementType<FSetElementId> local_488;
  int local_480;
  code *local_478 [2];
  undefined **local_468;
  FString *local_460;
  int *local_458;
  undefined ***local_450;
  code *local_448 [2];
  undefined **local_438;
  _RTL_CRITICAL_SECTION *local_430;
  FString *local_428;
  undefined ***local_420;
  code *local_418 [2];
  undefined **local_408;
  _RTL_CRITICAL_SECTION *local_400;
  FString *local_3f8;
  undefined ***local_3f0;
  _RTL_CRITICAL_SECTION local_3e8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_3b8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_368;
  FBuildPatchAppManifest local_318;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  InitializeCriticalSectionAndSpinCount(&local_3e8,4000);
  local_3f0 = (undefined ***)0x0;
  local_408 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::`2'::<lambda_1>,0,0>::
               _vftable_;
  local_400 = &local_3e8;
  local_420 = (undefined ***)0x0;
  local_418[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FBuildMergeManifests::MergeManifests'::__l2::<lambda_1>,TSharedPtr<FBuildPatchAppManifest,1>_>
                 ::Call;
  local_450 = (undefined ***)0x0;
  local_438 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::`2'::<lambda_2>,0,0>::
               _vftable_;
  local_430 = &local_3e8;
  local_5f8._0_8_ = 0;
  local_448[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FBuildMergeManifests::MergeManifests'::__l2::<lambda_2>,TSharedPtr<FBuildPatchAppManifest,1>_>
                 ::Call;
  local_468 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::`2'::<lambda_3>,0,0>::
               _vftable_;
  local_460 = param_5;
  local_458 = local_688;
  local_478[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FBuildMergeManifests::MergeManifests'::__l2::<lambda_3>,TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                 ::Call;
  local_688[0] = 0;
  local_5f8._40_8_ = 0;
  local_428 = param_2;
  local_3f8 = param_1;
  Async<TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_>
            ((TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)local_630,ThreadPool,
             (TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)> *)local_418,&local_5f8);
  local_5c8._0_8_ = 0;
  local_5c8._40_8_ = 0;
  Async<TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_>
            ((TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)local_640,ThreadPool,
             (TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)> *)local_448,&local_5c8);
  local_598._0_8_ = 0;
  local_598._40_8_ = 0;
  Async<TFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_>
            ((TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
              *)local_650,ThreadPool,
             (TFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>
              *)local_478,&local_598);
  if (local_630._0_8_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  while (*(char *)(local_630._0_8_ + 0x68) == '\0') {
    (**(code **)(**(longlong **)(local_630._0_8_ + 0x60) + 0x20))
              (*(longlong **)(local_630._0_8_ + 0x60),0xffffffff);
  }
  local_670.Object = *(FBuildPatchAppManifest **)(local_630._0_8_ + 0x70);
  local_670.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(local_630._0_8_ + 0x78);
  if (local_670.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_670.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_670.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_640._0_8_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  while (*(char *)(local_640._0_8_ + 0x68) == '\0') {
    (**(code **)(**(longlong **)(local_640._0_8_ + 0x60) + 0x20))
              (*(longlong **)(local_640._0_8_ + 0x60),0xffffffff);
  }
  local_680.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(local_640._0_8_ + 0x78);
  pFVar1 = *(FBuildPatchAppManifest **)(local_640._0_8_ + 0x70);
  if (local_680.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_680.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_680.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_680.Object = pFVar1;
  if (local_650._0_8_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  while (*(char *)(local_650._0_8_ + 0x68) == '\0') {
    (**(code **)(**(longlong **)(local_650._0_8_ + 0x60) + 0x20))
              (*(longlong **)(local_650._0_8_ + 0x60),0xffffffff,0);
  }
  local_53c = 0x80;
  local_568._0_8_ = (FScriptContainerElement *)0x0;
  local_568._8_8_ = 0;
  local_548 = (void *)0x0;
  local_540 = 0;
  local_534 = 0;
  local_528 = (ForElementType<FSetElementId>)0x0;
  local_520 = 0;
  local_538 = 0xffffffff;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_568,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             (local_650._0_8_ + 0x70));
  local_4ec = 0x80;
  local_518._0_8_ = (FScriptContainerElement *)0x0;
  local_518._8_8_ = 0;
  local_4f8 = (void *)0x0;
  local_4f0 = 0;
  local_4e4 = 0;
  local_4d8 = (ForElementType<FSetElementId>)0x0;
  local_4d0 = 0;
  local_4e8 = 0xffffffff;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_518,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             (local_650._0_8_ + 0xc0));
  this = GetGlobalLogSingleton();
  FOutputDeviceRedirector::FlushThreadedLogs(this,None);
  if (local_670.Object == (FBuildPatchAppManifest *)0x0) {
    if (1 < (byte)LogMergeManifests._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMergeManifests);
      bVar4 = false;
      goto LAB_1431eb300;
    }
  }
  else if (pFVar1 == (FBuildPatchAppManifest *)0x0) {
    if (1 < (byte)LogMergeManifests._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMergeManifests);
      bVar4 = false;
      goto LAB_1431eb300;
    }
  }
  else if (local_688[0] != 0) {
    if ((local_568._8_4_ == local_534) && (local_518._8_4_ == local_4e4)) {
      if ((local_670.Object == (FBuildPatchAppManifest *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
               (**(code **)((local_670.Object)->_padding_ + 0x88))(local_670.Object,&local_620);
      local_49c = 0x80;
      local_4c8._0_8_ = (FScriptContainerElement *)0x0;
      local_4c8._8_8_ = 0;
      local_4a8 = (void *)0x0;
      local_4a0 = 0;
      local_498 = 0xffffffff;
      local_494 = 0;
      local_488 = (ForElementType<FSetElementId>)0x0;
      local_480 = 0;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
      Append<TSizedDefaultAllocator<32>_>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_4c8,pTVar8);
      DestructItems<FString,int>(local_620,local_618);
      if (local_620 != (FString *)0x0) {
        FMemory::Free(local_620);
      }
      if ((pFVar1 == (FBuildPatchAppManifest *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
               (**(code **)(pFVar1->_padding_ + 0x88))(pFVar1,&local_610);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
      Append<TSizedDefaultAllocator<32>_>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_518,pTVar8);
      DestructItems<FString,int>(local_610,local_608);
      if (local_610 != (FString *)0x0) {
        FMemory::Free(local_610);
      }
      pTVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Difference
                         ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_4c8
                          ,&local_3b8,
                          (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_518
                         );
      if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_568 != pTVar9) {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
        Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_568,pTVar9
                  );
      }
      local_3b8.HashSize = 0;
      if (local_3b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_3b8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_3b8.Elements);
      local_480 = 0;
      if (local_488 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_488);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_4c8,0,local_4c8._8_4_);
      iVar3 = SUB84(local_4c8._8_8_,4);
      local_4c8._8_8_ = local_4c8._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_4c8,0,(int *)(local_4c8 + 0xc));
      }
      local_498 = 0xffffffff;
      local_494 = 0;
      local_4a0 = 0;
      if (0x80 < local_49c) {
        local_49c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_4c8 + 0x10),0);
      }
      if (local_4a8 != (void *)0x0) {
        FMemory::Free(local_4a8);
      }
      if ((FScriptContainerElement *)local_4c8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4c8._0_8_);
      }
    }
    else {
      pTVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Difference
                         ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_568
                          ,&local_368,
                          (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_518
                         );
      if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_568 != pTVar9) {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
        Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_568,pTVar9
                  );
      }
      local_368.HashSize = 0;
      if (local_368.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_368.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_368.Elements);
    }
    FBuildPatchAppManifest::FBuildPatchAppManifest(&local_318);
    local_318.ManifestMeta.BuildId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_318.ManifestMeta.BuildId.Data.ArrayNum = 0;
    local_318.ManifestMeta.BuildId.Data.ArrayMax = 0;
    if ((pFVar1 == (FBuildPatchAppManifest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_318.ManifestMeta.FeatureLevel = (pFVar1->ManifestMeta).FeatureLevel;
    local_318.ManifestMeta.bIsFileData = (pFVar1->ManifestMeta).bIsFileData;
    local_318.ManifestMeta.AppID = (pFVar1->ManifestMeta).AppID;
    ::FString::operator=(&local_318.ManifestMeta.AppName,&(pFVar1->ManifestMeta).AppName);
    ::FString::operator=(&local_318.ManifestMeta.BuildVersion,&(pFVar1->ManifestMeta).BuildVersion);
    ::FString::operator=(&local_318.ManifestMeta.LaunchExe,&(pFVar1->ManifestMeta).LaunchExe);
    ::FString::operator=
              (&local_318.ManifestMeta.LaunchCommand,&(pFVar1->ManifestMeta).LaunchCommand);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              (&local_318.ManifestMeta.PrereqIds,&(pFVar1->ManifestMeta).PrereqIds);
    ::FString::operator=(&local_318.ManifestMeta.PrereqName,&(pFVar1->ManifestMeta).PrereqName);
    ::FString::operator=(&local_318.ManifestMeta.PrereqPath,&(pFVar1->ManifestMeta).PrereqPath);
    ::FString::operator=(&local_318.ManifestMeta.PrereqArgs,&(pFVar1->ManifestMeta).PrereqArgs);
    ::FString::operator=(&local_318.ManifestMeta.BuildId,&(pFVar1->ManifestMeta).BuildId);
    if ((pFVar1 == (FBuildPatchAppManifest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&local_318.CustomFields,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&pFVar1->CustomFields);
    if (local_318.ManifestMeta.BuildId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_318.ManifestMeta.BuildId.Data.AllocatorInstance.Data);
    }
    ::FString::operator=(&local_318.ManifestMeta.BuildVersion,param_4);
    bVar4 = MergeHelpers::CopyFileDataFromManifestToArray
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_568,
                       &local_670,&local_318.FileManifestList.FileList);
    bVar6 = MergeHelpers::CopyFileDataFromManifestToArray
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_518,
                       &local_680,&local_318.FileManifestList.FileList);
    if ((bVar6) && (bVar4)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    BuildPatchServices::FFileManifestList::OnPostLoad(&local_318.FileManifestList);
    bVar6 = MergeHelpers::ReinitialiseChunkInfoList
                      (&local_318.FileManifestList.FileList,&local_670,&local_680,
                       &local_318.ChunkDataList.ChunkList);
    if ((bVar6) && (bVar4)) {
      bVar4 = true;
      pIVar10 = BuildPatchServices::FFileSystemFactory::Create();
      FBuildPatchAppManifest::InitLookups(&local_318);
      ::FString::ConcatFC(&local_660,param_3,L"tmp");
      bVar6 = FBuildPatchAppManifest::SaveToFile
                        (&local_318,&local_660,local_318.ManifestMeta.FeatureLevel);
      if (bVar6) {
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_660.Data.ArrayNum != 0) {
          FVar13.Data = local_660.Data.AllocatorInstance.Data;
        }
        if ((param_3->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
        }
        cVar7 = (**(code **)((longlong)*pIVar10 + 0x70))(pIVar10,pwVar12,FVar13.Data);
        if (cVar7 == '\0') goto LAB_1431eb284;
      }
      else {
LAB_1431eb284:
        if (1 < (byte)LogMergeManifests._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMergeManifests);
        }
        bVar4 = false;
      }
      if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_660.Data.AllocatorInstance.Data);
      }
      if (pIVar10 != (IFileSystem *)0x0) {
        (**(code **)*pIVar10)(pIVar10);
      }
    }
    else {
      bVar4 = false;
      if (1 < (byte)LogMergeManifests._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMergeManifests);
      }
    }
    FBuildPatchAppManifest::~FBuildPatchAppManifest(&local_318);
    goto LAB_1431eb300;
  }
  bVar4 = false;
LAB_1431eb300:
  local_4d0 = 0;
  if (local_4d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4d8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_518,0,local_518._8_4_);
  iVar3 = SUB84(local_518._8_8_,4);
  local_518._8_8_ = local_518._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_518,0,(int *)(local_518 + 0xc));
  }
  local_4e8 = 0xffffffff;
  local_4e4 = 0;
  local_4f0 = 0;
  if (0x80 < local_4ec) {
    local_4ec = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_518 + 0x10),0);
  }
  if (local_4f8 != (void *)0x0) {
    FMemory::Free(local_4f8);
  }
  if ((FScriptContainerElement *)local_518._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_518._0_8_);
  }
  local_520 = 0;
  if (local_528 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_528);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_568,0,local_568._8_4_);
  iVar3 = SUB84(local_568._8_8_,4);
  local_568._8_8_ = local_568._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_568,0,(int *)(local_568 + 0xc));
  }
  local_538 = 0xffffffff;
  local_534 = 0;
  local_540 = 0;
  if (0x80 < local_53c) {
    local_53c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_568 + 0x10),0);
  }
  if (local_548 != (void *)0x0) {
    FMemory::Free(local_548);
  }
  if ((FScriptContainerElement *)local_568._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_568._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_680.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_670.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_650._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_640._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_630._8_8_);
  if (local_478[0] != (code *)0x0) {
    pppuVar11 = &local_468;
    if (local_450 != (undefined ***)0x0) {
      pppuVar11 = local_450;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (local_448[0] != (code *)0x0) {
    pppuVar11 = &local_438;
    if (local_420 != (undefined ***)0x0) {
      pppuVar11 = local_420;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (local_418[0] != (code *)0x0) {
    pppuVar11 = &local_408;
    if (local_3f0 != (undefined ***)0x0) {
      pppuVar11 = local_3f0;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  DeleteCriticalSection(&local_3e8);
  return bVar4;
}

