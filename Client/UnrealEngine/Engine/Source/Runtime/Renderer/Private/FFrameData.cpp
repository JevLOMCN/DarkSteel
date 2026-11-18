// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// ~FFrameData @ 144ef01e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMeshDrawCommandStatsManager::FFrameData::~FFrameData(FFrameData *this)

{
  TMap<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  FFrameData *pFVar9;
  FFrameData *pFVar10;
  longlong *plVar11;
  bool bVar12;
  int iVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  uint uVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  ForElementType<unsigned_int> FVar29;
  ulonglong *puVar30;
  uint *puVar31;
  FScriptContainerElement *pFVar32;
  undefined1 auStackY_268 [32];
  undefined1 local_238;
  undefined1 local_237 [7];
  uint local_230;
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_228;
  undefined4 local_220;
  uint uStack_21c;
  uint uStack_218;
  undefined4 uStack_214;
  uint local_210;
  uint uStack_20c;
  undefined1 *puStack_208;
  undefined4 local_200;
  int iStack_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  FFrameData *local_1f0;
  undefined4 local_1e8;
  int local_1e4;
  undefined1 local_1e0 [8];
  undefined4 local_1d8;
  int local_1d4;
  int local_1d0;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  TMap<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>_>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  longlong *local_178;
  uint uStack_170;
  uint uStack_16c;
  TBitArray<FDefaultBitArrayAllocator> *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  uint local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined1 auStack_140 [16];
  uint uStack_130;
  uint uStack_12c;
  longlong local_128;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  *pTStack_120;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  *local_118;
  undefined2 local_110;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  undefined1 local_d8 [32];
  longlong local_b8;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  *pTStack_b0;
  undefined4 local_8c;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  uVar18 = (this->RDGIndirectArgsReadbackBuffers).ArrayNum;
  pFVar24 = (this->RDGIndirectArgsReadbackBuffers).AllocatorInstance.Data;
  local_1f0 = this;
  if (((int)uVar18 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar21 = 0;
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  iVar13 = 1;
  if (uVar18 == 0) goto LAB_144ef050c;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar18);
  uVar26 = 1;
  if (3 < uVar18) {
    uVar22 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_1e8 = (undefined4)lVar25;
    uVar26 = 1 << ((byte)lVar25 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar26 <= (int)local_40)) goto LAB_144ef050c;
  local_40 = uVar26;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar26 != 0) {
    uVar19 = uVar26;
    if (uVar26 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_144ef032f;
      }
    }
    else {
LAB_144ef032f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar19,4);
    }
    if (0 < (int)uVar26) {
      uVar28 = (ulonglong)uVar26;
      uVar22 = uVar21;
      do {
        FVar20.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_48.Data;
        }
        uVar14 = (longlong)(int)uVar26 - 1U & uVar22;
        uVar22 = uVar22 + 1;
        *(undefined4 *)(FVar20.Data + uVar14 * 4) = 0xffffffff;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_230 = 0;
    uStack_22c = 1;
    uStack_21c = 0;
    uStack_218 = 0;
    if (local_60 != 0) {
      FVar29 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_68;
      }
      uVar26 = *(uint *)FVar29;
      uVar22 = uVar21;
      while (uVar26 == 0) {
        uStack_218 = (int)uVar22 + 0x20;
        uVar22 = (ulonglong)uStack_218;
        iVar17 = (int)uVar21;
        local_230 = iVar17 + 1;
        uVar21 = (ulonglong)local_230;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_230)
        goto LAB_144ef043e;
        uVar26 = ((uint *)((longlong)FVar29 + 4))[iVar17];
      }
      uStack_22c = -uVar26 & uVar26;
      uVar21 = (ulonglong)uStack_22c * 2 + 1;
      lVar25 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_1e4 = (int)lVar25;
      uStack_21c = local_1e4 + -1 + (int)uVar22;
      uVar21 = (ulonglong)uStack_21c;
      if ((int)local_60 < (int)uStack_21c) {
LAB_144ef043e:
        uVar21 = (ulonglong)local_60;
        uStack_21c = local_60;
      }
    }
    local_220 = 0xffffffff;
    local_1c8 = (longlong *)local_88;
    local_1c0._padding_ = CONCAT44(uStack_22c,local_230);
    local_1c0.CurrentBitIndex = uStack_21c;
    local_1c0.UnvisitedBitMask = 0xffffffff;
    local_1c0._28_4_ = uStack_214;
    local_1c0.BaseBitIndex = uStack_218;
    local_1c0.Array = pTStack_228;
    if ((int)uVar21 < (int)local_60) {
      do {
        puVar30 = (ulonglong *)((longlong)(int)uVar21 * 0x10 + *local_1c8);
        uVar26 = ((uint)(*puVar30 >> 0x14) & 0xffff ^ (uint)(*puVar30 >> 4)) * -0x7a143595;
        uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
        uVar26 = (uVar26 >> 0x10 ^ uVar26) & local_40 - 1;
        *(uint *)((longlong)puVar30 + 0xc) = uVar26;
        FVar20.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_48.Data;
        }
        uVar22 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar26;
        *(undefined4 *)(puVar30 + 1) = *(undefined4 *)(FVar20.Data + uVar22 * 4);
        *(int *)(FVar20.Data + uVar22 * 4) = (int)uVar21;
        local_1c0.UnvisitedBitMask = local_1c0.UnvisitedBitMask & ~local_1c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
        uVar21 = (ulonglong)(uint)local_1c0.CurrentBitIndex;
      } while (local_1c0.CurrentBitIndex < (local_1c0.Array)->NumBits);
    }
  }
LAB_144ef050c:
  pFVar32 = pFVar24 + (longlong)(int)uVar18 * 8;
  pFVar9 = local_1f0;
  for (; local_1f0 = pFVar9, pFVar24 != pFVar32; pFVar24 = pFVar24 + 8) {
    TSet<FRHIGPUBufferReadback_*,DefaultKeyFuncs<FRHIGPUBufferReadback_*,0>,FDefaultSetAllocator>::
    Emplace<FRHIGPUBufferReadback_*_const_&>
              ((TSet<FRHIGPUBufferReadback_*,DefaultKeyFuncs<FRHIGPUBufferReadback_*,0>,FDefaultSetAllocator>
                *)local_88,(FRHIGPUBufferReadback **)local_1e0,(bool *)pFVar24);
    pFVar9 = local_1f0;
  }
  pFVar32 = (pFVar9->PassData).AllocatorInstance.Data;
  iVar17 = (pFVar9->PassData).ArrayNum;
  pFVar24 = pFVar32 + (longlong)iVar17 * 8;
  while( true ) {
    if ((pFVar9->PassData).ArrayNum != iVar17) {
      local_238 = 0;
      `TCheckedPointerIterator<FMeshDrawCommandPassStats_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_238);
    }
    if (pFVar32 == pFVar24) break;
    pvVar5 = *(void **)pFVar32;
    uVar21 = *(ulonglong *)((longlong)pvVar5 + 0x70);
    if (uVar21 != 0) {
      uVar18 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      if (local_88._8_4_ != local_54) {
        FVar20.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_48.Data;
        }
        for (iVar3 = *(int *)(FVar20.Data +
                             (ulonglong)(local_40 - 1 & (uVar18 >> 0x10 ^ uVar18)) * 4); iVar3 != -1
            ; iVar3 = *(int *)(local_88._0_8_ + (longlong)iVar3 * 0x10 + 8)) {
          if (*(ulonglong *)(local_88._0_8_ + (longlong)iVar3 * 0x10) == uVar21) goto LAB_144ef0624;
        }
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ReadbackBuffers.Contains(PassStats->InstanceCullingGPUBufferReadback)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommandStats.cpp"
                          ,0x47,L"");
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_144ef0624:
      *(undefined8 *)((longlong)pvVar5 + 0x70) = 0;
    }
    *(undefined4 *)((longlong)pvVar5 + 0x68) = 0;
    if (*(void **)((longlong)pvVar5 + 0x60) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar5 + 0x60));
    }
    TSparseArray<TSparseSetElement<FRHIBuffer_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FRHIBuffer_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FRHIBuffer_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)pvVar5 + 0x20));
    DestructItems<FVisibleMeshDrawCommandStatsData,int>
              (*(FVisibleMeshDrawCommandStatsData **)((longlong)pvVar5 + 0x10),
               *(int *)((longlong)pvVar5 + 0x18));
    if (*(void **)((longlong)pvVar5 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar5 + 0x10));
    }
    ::operator_delete(pvVar5,0x80);
    pFVar32 = pFVar32 + 8;
  }
  this_00 = &pFVar9->CustomIndirectArgsBufferResults;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_d8,
             (TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
              *)this_00);
  local_110 = 0;
  stack0xfffffffffffffec8 = local_d8._16_16_;
  local_148 = (longlong *)local_d8._0_8_;
  auStack_140._0_8_ = local_d8._8_8_;
  local_128 = local_b8;
  pTStack_120 = pTStack_b0;
  uVar21 = local_d8._24_8_ >> 0x20;
  local_118 = (TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
               *)this_00;
  if (local_d8._28_4_ < *(int *)(local_d8._16_8_ + 0x18)) {
    do {
      lVar25 = (longlong)(int)uVar21 * 0x20 + *local_148;
      if (*(longlong *)(lVar25 + 8) != 0) {
        TSet<FRHIGPUBufferReadback_*,DefaultKeyFuncs<FRHIGPUBufferReadback_*,0>,FDefaultSetAllocator>
        ::Emplace<FRHIGPUBufferReadback_*_const_&>
                  ((TSet<FRHIGPUBufferReadback_*,DefaultKeyFuncs<FRHIGPUBufferReadback_*,0>,FDefaultSetAllocator>
                    *)local_88,(FRHIGPUBufferReadback **)(local_1e0 + 4),(bool *)(lVar25 + 8));
        *(undefined8 *)(lVar25 + 8) = 0;
      }
      uStack_130 = uStack_130 & ~auStack_140._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_140);
      uVar21 = (ulonglong)uStack_12c;
    } while ((int)uStack_12c < *(int *)(auStack_140._8_8_ + 0x18));
    if (((char)local_110 != '\0') && (local_110._1_1_ != '\0')) {
      uVar18 = *(int *)&(local_118->Elements).field_0x8 - *(int *)&(local_118->Elements).field_0x34;
      if (3 < uVar18) {
        uVar21 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_1d8 = (undefined4)lVar25;
        iVar13 = 1 << ((byte)lVar25 & 0x1f);
      }
      if (((0 < (int)uVar18) && (local_118->HashSize < iVar13)) || (iVar13 < local_118->HashSize)) {
        local_118->HashSize = iVar13;
        TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
        ::Rehash(local_118);
      }
    }
  }
  bVar12 = 1 < *(int *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x48;
  if (!bVar12) {
    TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  uVar18 = 0;
  puVar6 = &(pFVar9->CustomIndirectArgsBufferResults).field_0xc;
  *(undefined4 *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x8 = 0;
  if (*(int *)puVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar6);
  }
  puVar6 = &(pFVar9->CustomIndirectArgsBufferResults).field_0x10;
  *(undefined4 *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x34 = 0;
  iVar13 = *(int *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x2c;
  *(undefined4 *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x28 = 0;
  if ((iVar13 < 0) || (0x80 < iVar13)) {
    *(undefined4 *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)puVar6,0);
  }
  uVar26 = 0;
  if (bVar12) {
    puVar1 = &(pFVar9->CustomIndirectArgsBufferResults).field_0x38;
    *(undefined4 *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x48 = 1;
    if ((*(longlong *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x40 != 0) &&
       (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x40,0,0,4)
       , *(longlong *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x40 != 0)) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x40,0,0,4);
    }
    puVar15 = *(undefined4 **)&(pFVar9->CustomIndirectArgsBufferResults).field_0x40;
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)puVar1;
    }
    *puVar15 = 0xffffffff;
    if (*(int *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x48 != 0) {
      iVar13 = *(int *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x28;
      local_210 = 0;
      uStack_20c = 1;
      iStack_1fc = 0;
      uStack_1f8 = 0;
      if (iVar13 != 0) {
        puVar31 = *(uint **)&(pFVar9->CustomIndirectArgsBufferResults).field_0x20;
        if (puVar31 == (uint *)0x0) {
          puVar31 = (uint *)puVar6;
        }
        uVar19 = *puVar31;
        uStack_1f8 = uVar18;
        local_210 = uVar18;
        while (uVar19 == 0) {
          uStack_1f8 = uStack_1f8 + 0x20;
          lVar25 = (longlong)(int)local_210;
          local_210 = local_210 + 1;
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_210)
          goto LAB_144ef08fe;
          uVar19 = puVar31[lVar25 + 1];
        }
        uStack_20c = -uVar19 & uVar19;
        uVar21 = (ulonglong)uStack_20c * 2 + 1;
        lVar25 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_1d4 = (int)lVar25;
        iStack_1fc = (uStack_1f8 - 1) + local_1d4;
        if (iVar13 < iStack_1fc) {
LAB_144ef08fe:
          iStack_1fc = iVar13;
        }
      }
      local_200 = 0xffffffff;
      local_198._padding_ = CONCAT44(uStack_20c,local_210);
      local_198.CurrentBitIndex = iStack_1fc;
      local_198.UnvisitedBitMask = 0xffffffff;
      local_198._28_4_ = uStack_1f4;
      local_198.BaseBitIndex = uStack_1f8;
      iVar17 = iStack_1fc;
      puStack_208 = puVar6;
      local_1a0 = this_00;
      local_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar6;
      if (iStack_1fc < iVar13) {
        do {
          puVar30 = (ulonglong *)((longlong)iVar17 * 0x20 + *(longlong *)&local_1a0->field_0x0);
          uVar19 = ((uint)(*puVar30 >> 0x14) & 0xffff ^ (uint)(*puVar30 >> 4)) * -0x7a143595;
          uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
          uVar19 = (uVar19 >> 0x10 ^ uVar19) &
                   *(int *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x48 - 1U;
          *(uint *)((longlong)puVar30 + 0x1c) = uVar19;
          puVar6 = *(undefined1 **)&(pFVar9->CustomIndirectArgsBufferResults).field_0x40;
          puVar23 = puVar1;
          if (puVar6 != (undefined1 *)0x0) {
            puVar23 = puVar6;
          }
          uVar21 = (longlong)*(int *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x48 - 1U &
                   (longlong)(int)uVar19;
          *(undefined4 *)(puVar30 + 3) = *(undefined4 *)(puVar23 + uVar21 * 4);
          *(int *)(puVar23 + uVar21 * 4) = iVar17;
          local_198.UnvisitedBitMask = local_198.UnvisitedBitMask & ~local_198._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
          iVar17 = local_198.CurrentBitIndex;
        } while (local_198.CurrentBitIndex < (local_198.Array)->NumBits);
      }
    }
  }
  uVar19 = local_60;
  uStack_15c = uVar26;
  local_158 = uVar26;
  uStack_16c = 1;
  if (local_60 != 0) {
    FVar29 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
    if (local_68 != (ForElementType<unsigned_int>)0x0) {
      FVar29 = local_68;
    }
    uVar4 = *(uint *)FVar29;
    local_158 = uVar18;
    uVar26 = uVar18;
    while (uVar4 == 0) {
      lVar25 = (longlong)(int)uVar26;
      local_158 = local_158 + 0x20;
      uVar26 = uVar26 + 1;
      uStack_15c = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
      goto LAB_144ef0a41;
      uVar4 = ((uint *)((longlong)FVar29 + 4))[lVar25];
    }
    uStack_16c = -uVar4 & uVar4;
    uVar21 = (ulonglong)uStack_16c * 2 + 1;
    lVar25 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_1d0 = (int)lVar25;
    uStack_15c = (local_158 - 1) + local_1d0;
    if ((int)local_60 < (int)uStack_15c) {
      uStack_15c = local_60;
    }
  }
LAB_144ef0a41:
  local_178 = (longlong *)local_88;
  uStack_154 = local_8c;
  local_168 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar18 = local_60 & 0xffffffe0;
  iStack_150 = local_88._8_4_ - local_54;
  uStack_160 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_15c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_16c,uVar26);
  iVar13 = (int)local_60 >> 5;
  TStack_100._28_4_ = local_8c;
  TStack_100.BaseBitIndex = local_158;
  uStack_e0 = CONCAT44(uStack_14c,iStack_150);
  bVar16 = (byte)local_60;
  uStack_170 = uVar26;
  local_108 = local_178;
  TStack_100.Array = local_168;
  if (((int)local_60 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (uVar19 != local_60) {
    FVar29 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
    if (local_68 != (ForElementType<unsigned_int>)0x0) {
      FVar29 = local_68;
    }
    uVar26 = -1 << (bVar16 & 0x1f) & *(uint *)((longlong)FVar29 + (longlong)iVar13 * 4);
    while (uVar26 == 0) {
      lVar25 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar19 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_144ef0b70;
      uVar26 = ((uint *)((longlong)FVar29 + 4))[lVar25];
    }
    uVar21 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar19 = (uVar18 - 1) + (int)lVar25;
    if ((int)local_60 < (int)uVar19) {
      uVar19 = local_60;
    }
  }
LAB_144ef0b70:
  while( true ) {
    plVar11 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      `TSparseArray<TSparseSetElement<FRHIGPUBufferReadback_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_237);
    }
    if (((TStack_100.CurrentBitIndex == uVar19) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar11 == (longlong *)local_88)) break;
    puVar7 = *(undefined8 **)(*plVar11 + (longlong)TStack_100.CurrentBitIndex * 0x10);
    if (puVar7 != (undefined8 *)0x0) {
      puVar27 = puVar7 + 0xb;
      lVar25 = 8;
      do {
        puVar2 = puVar27 + -1;
        puVar27 = puVar27 + -1;
        lVar25 = lVar25 + -1;
        if ((FRHIResource *)*puVar2 != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)*puVar2);
        }
      } while (lVar25 != 0);
      *puVar7 = &___7FRHIGPUMemoryReadback__6B_;
      if ((FRHIResource *)puVar7[1] != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)puVar7[1]);
      }
      ::operator_delete(puVar7,0x58);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<FRHIGPUBufferReadback_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FRHIGPUBufferReadback_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FRHIGPUBufferReadback_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  pFVar10 = local_1f0;
  pFVar24 = (local_1f0->RDGIndirectArgsReadbackBuffers).AllocatorInstance.Data;
  if (pFVar24 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar24);
  }
  *(undefined4 *)&(pFVar9->CustomIndirectArgsBufferResults).field_0x48 = 0;
  pvVar5 = *(void **)&(pFVar9->CustomIndirectArgsBufferResults).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  pFVar24 = (pFVar10->PassData).AllocatorInstance.Data;
  if (pFVar24 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar24);
  }
  return;
}

// IsCompleted @ 144f1c990

bool __thiscall FMeshDrawCommandStatsManager::FFrameData::IsCompleted(FFrameData *this)

{
  TMap<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  pTVar1 = &this->CustomIndirectArgsBufferResults;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar7 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lVar3 = *(longlong *)((longlong)(int)uVar7 * 0x20 + 8 + *local_58);
      lVar4 = *(longlong *)(lVar3 + 8);
      if ((lVar4 != 0) &&
         ((*(int *)(lVar4 + 0x18) != 0 ||
          (cVar5 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x20))(), cVar5 == '\0')))) {
        if ((char)local_20 == '\0') {
          return false;
        }
        if (local_20._1_1_ == '\0') {
          return false;
        }
        uVar9 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (uVar9 < 4) {
          iVar6 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar3 & 0x1f);
        }
        if ((((int)uVar9 < 1) || (iVar6 <= local_28->HashSize)) && (local_28->HashSize <= iVar6)) {
          return false;
        }
        local_28->HashSize = iVar6;
        TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
        return false;
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar7 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar9 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar6 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_28->HashSize < iVar6)) || (iVar6 < local_28->HashSize)) {
        local_28->HashSize = iVar6;
        TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  pFVar8 = (this->PassData).AllocatorInstance.Data;
  iVar6 = (this->PassData).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar6 * 8;
  while( true ) {
    if ((this->PassData).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FMeshDrawCommandPassStats_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    lVar3 = *(longlong *)(*(longlong *)pFVar8 + 0x70);
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
       ((*(int *)(*(longlong *)(lVar3 + 8) + 0x18) != 0 ||
        (cVar5 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x20))(), cVar5 == '\0')))) {
      return false;
    }
    pFVar8 = pFVar8 + 8;
  }
  return true;
}

// Validate @ 144f34d30

void __thiscall FMeshDrawCommandStatsManager::FFrameData::Validate(FFrameData *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  
  pFVar13 = (this->PassData).AllocatorInstance.Data;
  local_res20 = (this->PassData).ArrayNum;
  uVar10 = (ulonglong)(int)local_res20;
  bVar6 = false;
  pFVar1 = pFVar13 + uVar10 * 8;
  do {
    if ((this->PassData).ArrayNum != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMeshDrawCommandPassStats_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar1) {
      if (((bVar6) && (this->bIndirectArgReadbackRequested == false)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bHasIndirectArgs || bIndirectArgReadbackRequested",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommandStats.cpp"
                             ,0x7d,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      return;
    }
    lVar4 = *(longlong *)pFVar13;
    if (*(char *)(lVar4 + 8) != '\0') {
      iVar3 = *(int *)(lVar4 + 0x18);
      lVar12 = *(longlong *)(lVar4 + 0x10);
      bVar7 = false;
      lVar2 = lVar12 + (longlong)iVar3 * 0x48;
      while( true ) {
        if (*(int *)(lVar4 + 0x18) != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FVisibleMeshDrawCommandStatsData_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (lVar12 == lVar2) break;
        if ((*(uint *)(lVar12 + 0x18) & 0x80000000) != 0) {
          bVar7 = true;
          bVar6 = true;
        }
        uVar10 = *(ulonglong *)(lVar12 + 0x20);
        if (uVar10 != 0) {
          uVar9 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          if (*(int *)(lVar4 + 0x28) != *(int *)(lVar4 + 0x54)) {
            lVar11 = lVar4 + 0x58;
            if (*(longlong *)(lVar4 + 0x60) != 0) {
              lVar11 = *(longlong *)(lVar4 + 0x60);
            }
            iVar8 = *(int *)(lVar11 + (ulonglong)
                                      (*(int *)(lVar4 + 0x68) - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
            if (iVar8 != -1) {
              do {
                if (*(ulonglong *)(*(longlong *)(lVar4 + 0x20) + (longlong)iVar8 * 0x10) == uVar10)
                goto LAB_144f34e8b;
                iVar8 = *(int *)(*(longlong *)(lVar4 + 0x20) + 8 + (longlong)iVar8 * 0x10);
              } while (iVar8 != -1);
            }
          }
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4628829169935974286>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommandStats.cpp"
                             ,0x72,
                             "PassStats->CustomIndirectArgsBuffers.Contains(DrawData.CustomIndirectArgsBuffer)"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
LAB_144f34e8b:
          bVar6 = true;
        }
        lVar12 = lVar12 + 0x48;
      }
      if (((bVar7) && (*(longlong *)(lVar4 + 0x70) == 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bUsesInstantCullingIndirectBuffer || PassStats->InstanceCullingGPUBufferReadback != nullptr"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommandStats.cpp"
                             ,0x78,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar10 = (ulonglong)local_res20;
    pFVar13 = pFVar13 + 8;
  } while( true );
}

