// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 13

// AccumulatePixelData @ 14dd724d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FImageTileAccumulator::AccumulatePixelData
          (FImageTileAccumulator *this,FImagePixelData *param_1,int param_2,int param_3,
          TVector2<double> *param_4)

{
  float *pfVar1;
  ulonglong *puVar2;
  void *_Dst;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  uchar uVar9;
  byte bVar10;
  code *pcVar11;
  double dVar12;
  ushort uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  FImageTileAccumulator *pFVar17;
  bool bVar18;
  ulonglong uVar19;
  uint uVar20;
  float *pfVar21;
  int iVar22;
  TIntPoint<int>_u_0_s_0 TVar23;
  ulonglong *puVar24;
  int iVar25;
  long64 *plVar26;
  ulonglong uVar27;
  byte *pbVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  longlong lVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  ulong64 uVar39;
  longlong lVar40;
  ushort *puVar41;
  undefined4 extraout_XMM0_Da;
  float fVar42;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  double dVar48;
  undefined1 auStackY_1e8 [32];
  ushort local_1a4 [2];
  uint local_1a0;
  ushort *local_198;
  ulonglong local_190;
  TIntPoint<int>_u_0_s_0 local_188;
  ulonglong local_180;
  ulonglong local_178;
  longlong local_170;
  int local_168;
  int local_164;
  FImageTileAccumulator *local_160;
  ushort *local_158;
  longlong local_150;
  TIntPoint<int>_u_0_s_0 local_148;
  ulonglong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  TVector2<double>_u_0 local_108;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8 [2];
  undefined1 local_d8 [24];
  longlong lStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  longlong lStack_90;
  undefined1 local_88 [16];
  ulonglong local_78 [8];
  
  local_78[0] = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  TVar23 = (param_1->Size).field0_0x0._s_0;
  local_190 = CONCAT44(local_190._4_4_,param_1->Type);
  lVar32 = 0;
  local_1a0 = (uint)param_1->NumChannels;
  uVar9 = param_1->BitDepth;
  local_158 = (ushort *)0x0;
  local_150 = 0;
  local_188 = TVar23;
  local_168 = param_2;
  local_164 = param_3;
  local_160 = this;
  local_148 = TVar23;
  (**(code **)(param_1->_padding_ + 8))(param_1,&local_158,&local_150);
  local_198 = local_158;
  if ((local_158 == (ushort *)0x0) ||
     (local_150 !=
      (ulonglong)(param_1->BitDepth >> 3) * (longlong)(param_1->Size).field0_0x0._s_0.Y *
      (longlong)(param_1->Size).field0_0x0._s_0.X * (ulonglong)param_1->NumChannels)) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsFetchOk",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderTileImage.cpp"
                        ,0x11e,L"");
    if (!bVar18) {
      return;
    }
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  auVar43 = ZEXT816(0);
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  stack0xffffffffffffff38 = auVar43;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = auVar43;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = auVar43;
  if ((this->NumChannels < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumChannels >= 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderTileImage.cpp"
                          ,0x125,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((4 < this->NumChannels) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumChannels <= 4",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderTileImage.cpp"
                          ,0x126,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  plVar26 = (long64 *)(local_d8 + 8);
  iVar22 = TVar23.X;
  iVar36 = local_188.Y * iVar22;
  uVar39 = (ulong64)iVar36;
  do {
    lVar35 = *plVar26;
    if (lVar35 < (longlong)uVar39) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (4,4,uVar39 - lVar35,(ForAnyElementType *)(plVar26 + -1),plVar26,plVar26 + 1);
    }
    else {
      if ((longlong)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar39);
      }
      if ((longlong)uVar39 < lVar35) {
        lVar35 = lVar35 - uVar39;
        if (((((uint)(iVar36 >> 0x1f) >> 0x1f ^ 1) & ((uint)((ulonglong)lVar35 >> 0x3f) ^ 1)) == 0)
           && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (lVar35 != 0) {
          _Dst = (void *)(plVar26[-1] + uVar39 * 4);
          lVar29 = (*plVar26 - lVar35) - uVar39;
          if (lVar29 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + lVar35 * 4),lVar29 * 4);
          }
          *plVar26 = *plVar26 - lVar35;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)(plVar26 + -1),*plVar26,plVar26 + 1);
        }
      }
    }
    lVar32 = lVar32 + 1;
    plVar26 = plVar26 + 3;
  } while (lVar32 < 4);
  QueryPerformanceCounter(&local_f8);
  fVar16 = _UNK_1508be4cc;
  fVar15 = _UNK_1508be4c8;
  fVar42 = _UNK_1508be4c4;
  fVar14 = ___xmm_3b8080813b8080813b8080813b808081;
  fVar47 = __real_3b808081;
  uVar38 = 0;
  uVar34 = local_188.Y;
  if ((int)local_190 == 0) {
    if ((local_1a0 != 4) || (uVar9 != '\b')) goto LAB_14dd731e9;
    if (bIsReferenceUnpack == false) {
      if (local_188.Y < 1) goto LAB_14dd73214;
      local_118 = (longlong)iVar22;
      local_178 = 0;
      local_120 = (longlong)(iVar22 * 4);
      local_180 = (ulonglong)(uint)local_188.Y;
      do {
        uVar19 = local_178;
        lVar32 = 0;
        uVar38 = (uint)(local_178 >> 0x3f) ^ 1;
        uVar34 = 0;
        if ((longlong)local_178 < (longlong)local_d8._8_8_) {
          uVar34 = uVar38;
        }
        if ((uVar34 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar35 = local_d8._0_8_ + uVar19 * 4;
        uVar34 = 0;
        if ((longlong)uVar19 < local_b8) {
          uVar34 = uVar38;
        }
        local_130 = lVar35;
        if ((uVar34 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar29 = lStack_c0 + uVar19 * 4;
        uVar20 = 0;
        uVar34 = uVar20;
        if ((longlong)uVar19 < (longlong)local_a8._8_8_) {
          uVar34 = uVar38;
        }
        local_138 = lVar29;
        if ((uVar34 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar3 = local_a8._0_8_ + uVar19 * 4;
        uVar34 = uVar20;
        if ((longlong)uVar19 < (longlong)local_88._0_8_) {
          uVar34 = uVar38;
        }
        if ((uVar34 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar4 = lStack_90 + uVar19 * 4;
        if (3 < TVar23.X) {
          lVar30 = lVar35 - lVar29;
          lVar31 = lVar3 - lVar29;
          uVar27 = (ulonglong)(local_1a0 * 2);
          lVar40 = lVar4 - lVar29;
          local_140 = (ulonglong)(local_1a0 * 4);
          pbVar28 = (byte *)((longlong)local_198 + uVar27);
          local_170 = (longlong)(int)local_1a0 - uVar27;
          local_190 = local_1a0 * 3 - uVar27;
          uVar34 = (TVar23.X - 4U >> 2) + 1;
          uVar33 = (ulonglong)uVar34;
          uVar20 = uVar34 * 4;
          lVar32 = (ulonglong)uVar34 * 4;
          pfVar21 = (float *)(lVar29 + 4);
          do {
            auVar43 = pmovzxbd(auVar43,*(undefined4 *)(pbVar28 + -uVar27));
            fVar47 = (float)auVar43._4_4_ * fVar42;
            auVar46._4_4_ = fVar47;
            auVar46._0_4_ = fVar47;
            auVar46._8_4_ = fVar47;
            auVar46._12_4_ = fVar47;
            *(float *)((longlong)pfVar21 + lVar30 + -4) = (float)auVar43._8_4_ * fVar15;
            pfVar21[-1] = fVar47;
            *(float *)((longlong)pfVar21 + lVar31 + -4) = (float)auVar43._0_4_ * fVar14;
            *(float *)((longlong)pfVar21 + lVar40 + -4) = (float)auVar43._12_4_ * fVar16;
            auVar43 = pmovzxbd(auVar46,*(undefined4 *)(pbVar28 + local_170));
            fVar47 = (float)auVar43._4_4_ * fVar42;
            auVar44._4_4_ = fVar47;
            auVar44._0_4_ = fVar47;
            auVar44._8_4_ = fVar47;
            auVar44._12_4_ = fVar47;
            *(float *)((longlong)pfVar21 + lVar30) = (float)auVar43._8_4_ * fVar15;
            *pfVar21 = fVar47;
            *(float *)((longlong)pfVar21 + lVar31) = (float)auVar43._0_4_ * fVar14;
            *(float *)((longlong)pfVar21 + lVar40) = (float)auVar43._12_4_ * fVar16;
            auVar43 = pmovzxbd(auVar44,*(undefined4 *)pbVar28);
            fVar47 = (float)auVar43._4_4_ * fVar42;
            auVar45._4_4_ = fVar47;
            auVar45._0_4_ = fVar47;
            auVar45._8_4_ = fVar47;
            auVar45._12_4_ = fVar47;
            *(float *)((longlong)pfVar21 + lVar30 + 4) = (float)auVar43._8_4_ * fVar15;
            pfVar21[1] = fVar47;
            *(float *)((longlong)pfVar21 + lVar31 + 4) = (float)auVar43._0_4_ * fVar14;
            *(float *)((longlong)pfVar21 + lVar40 + 4) = (float)auVar43._12_4_ * fVar16;
            auVar46 = pmovzxbd(auVar45,*(undefined4 *)(pbVar28 + local_190));
            pbVar28 = pbVar28 + local_140;
            fVar47 = (float)auVar46._4_4_ * fVar42;
            *(float *)((longlong)pfVar21 + lVar30 + 8) = (float)auVar46._8_4_ * fVar15;
            auVar43._4_4_ = fVar47;
            auVar43._0_4_ = fVar47;
            auVar43._8_4_ = fVar47;
            auVar43._12_4_ = fVar47;
            pfVar21[2] = fVar47;
            *(float *)((longlong)pfVar21 + lVar31 + 8) = (float)auVar46._0_4_ * fVar14;
            *(float *)((longlong)pfVar21 + lVar40 + 8) = (float)auVar46._12_4_ * fVar16;
            uVar33 = uVar33 - 1;
            pfVar21 = pfVar21 + 4;
            TVar23 = local_148;
            uVar19 = local_178;
            lVar35 = local_130;
            lVar29 = local_138;
            local_128 = lVar32;
          } while (uVar33 != 0);
        }
        if ((int)uVar20 < TVar23.X) {
          pbVar28 = (byte *)((longlong)(int)(uVar20 * local_1a0) + (longlong)local_198);
          uVar27 = (ulonglong)(TVar23.X - uVar20);
          pfVar21 = (float *)(lVar29 + lVar32 * 4);
          do {
            auVar46 = pmovzxbd(auVar43,*(undefined4 *)pbVar28);
            pbVar28 = pbVar28 + (int)local_1a0;
            pfVar1 = pfVar21 + 1;
            fVar47 = (float)auVar46._4_4_ * fVar42;
            *(float *)((longlong)pfVar21 + (lVar35 - lVar29)) = (float)auVar46._8_4_ * fVar15;
            auVar43._4_4_ = fVar47;
            auVar43._0_4_ = fVar47;
            auVar43._8_4_ = fVar47;
            auVar43._12_4_ = fVar47;
            *pfVar21 = fVar47;
            *(float *)((lVar3 - lVar29) + -4 + (longlong)pfVar1) = (float)auVar46._0_4_ * fVar14;
            *(float *)((lVar4 - lVar29) + -4 + (longlong)pfVar1) = (float)auVar46._12_4_ * fVar16;
            uVar27 = uVar27 - 1;
            pfVar21 = pfVar1;
          } while (uVar27 != 0);
        }
        local_178 = uVar19 + local_118;
        local_198 = (ushort *)((longlong)local_198 + local_120);
        local_180 = local_180 - 1;
      } while (local_180 != 0);
      local_180 = 0;
    }
    else {
      if (local_188.Y < 1) goto LAB_14dd73214;
      uVar19 = (ulonglong)iVar22;
      local_180 = 0;
      lVar32 = (longlong)(iVar22 * 4);
      local_198 = local_198 + 1;
      local_178 = (ulonglong)(uint)local_188.Y;
      uVar34 = local_1a0;
      local_190 = uVar19;
      local_170 = lVar32;
      do {
        if (0 < iVar22) {
          lVar35 = (longlong)(int)uVar34;
          uVar33 = (ulonglong)TVar23 & 0xffffffff;
          uVar27 = local_180;
          puVar41 = local_198;
          do {
            uVar13 = puVar41[-1];
            uVar37 = (uint)(uVar27 >> 0x3f) ^ 1;
            uVar20 = 0;
            uVar34 = uVar20;
            if ((longlong)uVar27 < (longlong)local_a8._8_8_) {
              uVar34 = uVar37;
            }
            if ((uVar34 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(float *)(local_a8._0_8_ + uVar27 * 4) = (float)(byte)uVar13 * fVar47;
            bVar10 = *(byte *)((longlong)puVar41 + -1);
            uVar34 = uVar20;
            if ((longlong)uVar27 < local_b8) {
              uVar34 = uVar37;
            }
            if ((uVar34 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(float *)(lStack_c0 + uVar27 * 4) = (float)bVar10 * fVar47;
            uVar13 = *puVar41;
            if ((longlong)uVar27 < (longlong)local_d8._8_8_) {
              uVar20 = uVar37;
            }
            if ((uVar20 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(float *)(local_d8._0_8_ + uVar27 * 4) = (float)(byte)uVar13 * fVar47;
            bVar10 = *(byte *)((longlong)puVar41 + 1);
            uVar34 = uVar38;
            if ((longlong)uVar27 < (longlong)local_88._0_8_) {
              uVar34 = uVar37;
            }
            if ((uVar34 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            puVar41 = (ushort *)((longlong)puVar41 + lVar35);
            *(float *)(lStack_90 + uVar27 * 4) = (float)bVar10 * fVar47;
            uVar27 = uVar27 + 1;
            uVar33 = uVar33 - 1;
            uVar19 = local_190;
            lVar32 = local_170;
            uVar34 = local_1a0;
          } while (uVar33 != 0);
        }
        local_180 = local_180 + uVar19;
        local_198 = (ushort *)((longlong)local_198 + lVar32);
        local_178 = local_178 - 1;
      } while (local_178 != 0);
      local_178 = 0;
    }
  }
  else if ((int)local_190 == 1) {
    if (((char)local_1a0 == '\x04') && (uVar9 == '\x10')) {
      if (local_188.Y < 1) goto LAB_14dd73214;
      uVar27 = (ulonglong)iVar22;
      local_170 = 0;
      uVar19 = (longlong)(int)(iVar22 * local_1a0) * 2;
      local_198 = local_198 + 2;
      local_190 = (ulonglong)(uint)local_188.Y;
      uVar34 = local_1a0;
      local_180 = uVar27;
      local_178 = uVar19;
      do {
        if (0 < iVar22) {
          lVar35 = (longlong)(int)uVar34;
          uVar33 = (ulonglong)TVar23 & 0xffffffff;
          lVar32 = local_170;
          puVar41 = local_198;
          do {
            local_1a4[0] = puVar41[-2];
            fVar47 = FGenericPlatformMath::LoadHalf(local_1a4);
            uVar20 = (uint)((ulonglong)lVar32 >> 0x3f) ^ 1;
            uVar34 = uVar38;
            if (lVar32 < (longlong)local_d8._8_8_) {
              uVar34 = uVar20;
            }
            if ((uVar34 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(float *)(local_d8._0_8_ + lVar32 * 4) = fVar47;
            local_1a4[0] = puVar41[-1];
            fVar47 = FGenericPlatformMath::LoadHalf(local_1a4);
            uVar34 = uVar38;
            if (lVar32 < local_b8) {
              uVar34 = uVar20;
            }
            if ((uVar34 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(float *)(lStack_c0 + lVar32 * 4) = fVar47;
            local_1a4[0] = *puVar41;
            fVar47 = FGenericPlatformMath::LoadHalf(local_1a4);
            uVar34 = uVar38;
            if (lVar32 < (longlong)local_a8._8_8_) {
              uVar34 = uVar20;
            }
            if ((uVar34 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(float *)(local_a8._0_8_ + lVar32 * 4) = fVar47;
            local_1a4[0] = puVar41[1];
            fVar47 = FGenericPlatformMath::LoadHalf(local_1a4);
            uVar34 = uVar38;
            if (lVar32 < (longlong)local_88._0_8_) {
              uVar34 = uVar20;
            }
            if ((uVar34 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            puVar41 = puVar41 + lVar35;
            *(float *)(lStack_90 + lVar32 * 4) = fVar47;
            lVar32 = lVar32 + 1;
            uVar33 = uVar33 - 1;
            uVar19 = local_178;
            uVar27 = local_180;
            uVar34 = local_1a0;
          } while (uVar33 != 0);
        }
        local_170 = local_170 + uVar27;
        local_198 = (ushort *)((longlong)local_198 + uVar19);
        local_190 = local_190 - 1;
      } while (local_190 != 0);
      local_190 = 0;
    }
    else {
LAB_14dd731e9:
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderTileImage.cpp"
                          ,0x18c,L"");
      if (bVar18) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  else {
    if ((((int)local_190 != 2) || ((char)local_1a0 != '\x04')) || (uVar9 != ' '))
    goto LAB_14dd731e9;
    if (local_188.Y < 1) goto LAB_14dd73214;
    uVar27 = (ulonglong)iVar22;
    local_170 = 0;
    uVar19 = (longlong)(int)(iVar22 * local_1a0) << 2;
    local_198 = local_198 + 4;
    local_190 = (ulonglong)(uint)local_188.Y;
    uVar34 = local_1a0;
    local_180 = uVar27;
    local_178 = uVar19;
    do {
      if (0 < iVar22) {
        lVar35 = (longlong)(int)uVar34;
        uVar33 = (ulonglong)TVar23 & 0xffffffff;
        lVar32 = local_170;
        puVar41 = local_198;
        do {
          uVar6 = *(undefined4 *)(puVar41 + -4);
          uVar20 = (uint)((ulonglong)lVar32 >> 0x3f) ^ 1;
          uVar34 = uVar38;
          if (lVar32 < (longlong)local_d8._8_8_) {
            uVar34 = uVar20;
          }
          if ((uVar34 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(undefined4 *)(local_d8._0_8_ + lVar32 * 4) = uVar6;
          uVar6 = *(undefined4 *)(puVar41 + -2);
          uVar34 = uVar38;
          if (lVar32 < local_b8) {
            uVar34 = uVar20;
          }
          if ((uVar34 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(undefined4 *)(lStack_c0 + lVar32 * 4) = uVar6;
          uVar6 = *(undefined4 *)puVar41;
          uVar34 = uVar38;
          if (lVar32 < (longlong)local_a8._8_8_) {
            uVar34 = uVar20;
          }
          if ((uVar34 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(undefined4 *)(local_a8._0_8_ + lVar32 * 4) = uVar6;
          uVar6 = *(undefined4 *)(puVar41 + 2);
          uVar34 = uVar38;
          if (lVar32 < (longlong)local_88._0_8_) {
            uVar34 = uVar20;
          }
          if ((uVar34 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          puVar41 = puVar41 + lVar35 * 2;
          *(undefined4 *)(lStack_90 + lVar32 * 4) = uVar6;
          lVar32 = lVar32 + 1;
          uVar33 = uVar33 - 1;
          uVar19 = local_178;
          uVar27 = local_180;
          uVar34 = local_1a0;
        } while (uVar33 != 0);
      }
      local_170 = local_170 + uVar27;
      local_198 = (ushort *)((longlong)local_198 + uVar19);
      local_190 = local_190 - 1;
    } while (local_190 != 0);
    local_190 = 0;
  }
  uVar34 = local_188.Y;
LAB_14dd73214:
  uVar19 = 0;
  iVar22 = TVar23.X;
  QueryPerformanceCounter(&local_f0);
  pFVar17 = local_160;
  fVar14 = __real_3f800000;
  fVar47 = local_160->AccumulationGamma;
  if ((fVar47 != __real_3f800000) && (local_1a0 = 0, 0 < local_160->NumChannels)) {
    local_198 = (ushort *)local_d8;
    uVar34 = uVar34 * iVar22;
    uVar27 = uVar19;
    do {
      lVar32 = *(longlong *)local_198;
      uVar33 = uVar19;
      uVar38 = (uint)uVar27;
      if ((0 < (int)uVar34) && (3 < uVar34)) {
        uVar20 = uVar34 & 0x80000003;
        if ((int)uVar20 < 0) {
          uVar20 = (uVar20 - 1 | 0xfffffffc) + 1;
        }
        do {
          __vdecl_powf4();
          puVar5 = (undefined4 *)(lVar32 + uVar33 * 4);
          *puVar5 = extraout_XMM0_Da;
          puVar5[1] = extraout_XMM0_Db;
          puVar5[2] = extraout_XMM0_Dc;
          puVar5[3] = extraout_XMM0_Dd;
          uVar33 = uVar33 + 4;
          uVar38 = local_1a0;
        } while ((longlong)uVar33 < (longlong)(int)(uVar34 - uVar20));
      }
      for (; (longlong)uVar33 < (longlong)(int)uVar34; uVar33 = uVar33 + 1) {
        fVar42 = powf(*(float *)(lVar32 + uVar33 * 4),fVar47);
        *(float *)(lVar32 + uVar33 * 4) = fVar42;
      }
      local_1a0 = uVar38 + 1;
      uVar27 = (ulonglong)local_1a0;
      local_198 = local_198 + 0xc;
    } while ((int)local_1a0 < pFVar17->NumChannels);
    iVar22 = local_148.X;
  }
  pFVar17 = local_160;
  QueryPerformanceCounter(local_e8);
  if (0 < pFVar17->NumChannels) {
    iVar36 = local_188.Y;
    dVar48 = (double)local_168;
    dVar7 = (param_4->field0_0x0)._s_0.X;
    dVar12 = (double)local_164;
    dVar8 = (param_4->field0_0x0)._s_0.Y;
    do {
      iVar25 = (int)uVar19;
      local_108._s_0.X = (double)(fVar14 / (float)pFVar17->NumTilesX) * (dVar48 + dVar7);
      local_108._s_0.Y = (double)(fVar14 / (float)pFVar17->NumTilesY) * (dVar12 + dVar8);
      AccumulateTile(pFVar17,(TArray<float,TSizedDefaultAllocator<64>_> *)
                             (local_d8 + (longlong)iVar25 * 0x18),iVar22,iVar36,iVar25,
                     (TVector2<double> *)&local_108._s_0);
      uVar19 = (ulonglong)(iVar25 + 1U);
    } while ((int)(iVar25 + 1U) < pFVar17->NumChannels);
  }
  puVar24 = local_78;
  lVar32 = 4;
  do {
    puVar2 = puVar24 + -3;
    puVar24 = puVar24 + -3;
    lVar32 = lVar32 + -1;
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
  } while (lVar32 != 0);
  return;
}

// AccumulateTile @ 14dd74ec0

void __thiscall
FImageTileAccumulator::AccumulateTile
          (FImageTileAccumulator *this,TArray<float,TSizedDefaultAllocator<64>_> *param_1,
          int param_2,int param_3,int param_4,TVector2<double> *param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  float fVar18;
  int local_res8;
  
  fVar7 = __real_3f000000;
  fVar6 = __real_3f800000;
  iVar10 = this->NumTilesY;
  iVar3 = this->NumTilesX;
  iVar14 = 1;
  local_res8 = -1;
  dVar1 = (param_5->field0_0x0)._s_0.X;
  dVar5 = (double)iVar10;
  dVar2 = (param_5->field0_0x0)._s_0.Y;
  do {
    iVar13 = 1;
    param_5._0_4_ = -1;
    do {
      iVar12 = 0;
      if (0 < iVar10) {
        do {
          iVar10 = this->NumTilesX;
          iVar11 = 0;
          if (0 < iVar10) {
            do {
              dVar17 = (double)((float)(local_res8 * this->NumTilesY) + (float)iVar12 + fVar7) -
                       dVar5 * dVar2;
              dVar15 = (double)((float)(iVar10 * (int)param_5) + (float)iVar11 + fVar7) -
                       (double)iVar3 * dVar1;
              auVar16._0_8_ = dVar15 * dVar15 + dVar17 * dVar17;
              auVar16._8_8_ = 0;
              auVar16 = sqrtpd(auVar16,auVar16);
              fVar18 = fVar6 - (float)auVar16._0_8_ / this->KernelRadius;
              if (fVar6 <= fVar18) {
                fVar18 = fVar6;
              }
              if (fVar18 <= 0.0) {
                fVar18 = 0.0;
              }
              if (0.0 < fVar18) {
                iVar10 = (iVar10 * iVar12 + iVar11) * this->NumChannels + param_4;
                uVar9 = 0;
                if ((longlong)iVar10 < (this->ImagePlanes).ArrayNum) {
                  uVar9 = (uint)(iVar10 >> 0x1f) >> 0x1f ^ 1;
                }
                if (uVar9 == 0) {
                  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar8) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                FImageTilePlane::AccumulateSinglePlane
                          ((FImageTilePlane *)
                           ((this->ImagePlanes).AllocatorInstance.Data + (longlong)iVar10 * 0x28),
                           param_1,param_2,param_3,fVar18,iVar13,iVar14);
              }
              iVar10 = this->NumTilesX;
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar10);
          }
          iVar10 = this->NumTilesY;
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar10);
      }
      param_5._0_4_ = (int)param_5 + 1;
      iVar13 = iVar13 + -1;
    } while (-2 < iVar13);
    local_res8 = local_res8 + 1;
    iVar14 = iVar14 + -1;
  } while (-2 < iVar14);
  return;
}

// AtPlaneData @ 14dd77860

FImageTilePlane * __thiscall
FImageTileAccumulator::AtPlaneData(FImageTileAccumulator *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FImageTilePlane *pFVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (param_2 * this->NumTilesX + param_1) * this->NumChannels + param_3;
  lVar5 = (longlong)iVar7;
  uVar6 = (uint)(iVar7 >> 0x1f) >> 0x1f ^ 1;
  uVar3 = 0;
  if (lVar5 < (this->ImagePlanes).ArrayNum) {
    uVar3 = uVar6;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FImageTilePlane *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (lVar5 < (this->ImagePlanes).ArrayNum) {
    uVar3 = uVar6;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FImageTilePlane *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FImageTilePlane *)((this->ImagePlanes).AllocatorInstance.Data + lVar5 * 0x28);
}

// AtPlaneData @ 14dd77940

FImageTilePlane * __thiscall
FImageTileAccumulator::AtPlaneData(FImageTileAccumulator *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FImageTilePlane *pFVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (param_2 * this->NumTilesX + param_1) * this->NumChannels + param_3;
  lVar5 = (longlong)iVar7;
  uVar6 = (uint)(iVar7 >> 0x1f) >> 0x1f ^ 1;
  uVar3 = 0;
  if (lVar5 < (this->ImagePlanes).ArrayNum) {
    uVar3 = uVar6;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FImageTilePlane *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (lVar5 < (this->ImagePlanes).ArrayNum) {
    uVar3 = uVar6;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FImageTilePlane *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FImageTilePlane *)((this->ImagePlanes).AllocatorInstance.Data + lVar5 * 0x28);
}

// CalcSampleWeight @ 14dd79ba0

float __thiscall FImageTileAccumulator::CalcSampleWeight(FImageTileAccumulator *this,float param_1)

{
  float fVar1;
  
  fVar1 = __real_3f800000 - param_1 / this->KernelRadius;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// FetchFinalPixelDataByte @ 14dd81110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FImageTileAccumulator::FetchFinalPixelDataByte
          (FImageTileAccumulator *this,TArray<FColor,TSizedDefaultAllocator<64>_> *param_1)

{
  code *pcVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FImageTileAccumulator *this_00;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStackY_c8 [32];
  longlong local_98;
  TArray<float,TSizedDefaultAllocator<32>_> local_88;
  FImageTileAccumulator *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  iVar8 = this->NumTilesY * this->TileSizeY;
  iVar12 = this->NumTilesX * this->TileSizeX;
  local_78 = this;
  TArray<FColor,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (param_1,(longlong)(iVar8 * iVar12),Default);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  FetchFinalPlaneScale(this,&local_88);
  uVar4 = _UNK_150689648;
  uVar3 = ___xmm_3f800000000000000000000000000000;
  fVar2 = __real_437f0000;
  iVar11 = 0;
  lVar7 = (longlong)iVar8;
  if (0 < iVar8) {
    local_98 = 0;
    do {
      this_00 = local_78;
      iVar8 = 0;
      if (0 < iVar12) {
        lVar10 = (longlong)iVar11 * (longlong)iVar12;
        lVar9 = local_98;
        do {
          local_70 = uVar3;
          uStack_68 = uVar4;
          FetchFullImageValue(this_00,(float *)&local_70,&local_88,iVar8,iVar11);
          fVar13 = uStack_68._4_4_ * fVar2;
          fVar14 = (float)local_70 * fVar2;
          fVar15 = local_70._4_4_ * fVar2;
          fVar16 = (float)uStack_68 * fVar2;
          uVar6 = 0;
          if (lVar10 < param_1->ArrayNum) {
            uVar6 = (uint)((ulonglong)lVar10 >> 0x3f) ^ 1;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar8 = iVar8 + 1;
          lVar10 = lVar10 + 1;
          *(uint *)((param_1->AllocatorInstance).Data + lVar9 * 4) =
               ((((int)fVar13 & 0xffU) << 8 | (int)fVar14 & 0xffU) << 8 | (int)fVar15 & 0xffU) << 8
               | (int)fVar16 & 0xffU;
          lVar9 = lVar9 + 1;
        } while (iVar8 < iVar12);
      }
      local_98 = local_98 + iVar12;
      iVar11 = iVar11 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// FetchFinalPixelDataLinearColor @ 14dd81af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FImageTileAccumulator::FetchFinalPixelDataLinearColor
          (FImageTileAccumulator *this,TArray<FLinearColor,TSizedDefaultAllocator<64>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FImageTileAccumulator *this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStackY_d8 [32];
  longlong local_a8;
  TArray<float,TSizedDefaultAllocator<32>_> local_98;
  FImageTileAccumulator *local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  iVar11 = this->NumTilesY * this->TileSizeY;
  iVar14 = this->NumTilesX * this->TileSizeX;
  local_88 = this;
  TArray<FLinearColor,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (param_1,(longlong)(iVar11 * iVar14),Default);
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  FetchFinalPlaneScale(this,&local_98);
  uVar4 = _UNK_150689648;
  uVar3 = ___xmm_3f800000000000000000000000000000;
  iVar18 = 0;
  lVar9 = (longlong)iVar11;
  local_80 = (longlong)iVar14;
  if (0 < iVar11) {
    lVar17 = 0;
    lVar10 = local_80 << 4;
    local_a8 = 0;
    lVar13 = local_80;
    local_78 = lVar10;
    do {
      this_00 = local_88;
      iVar11 = 0;
      lVar12 = lVar17;
      lVar15 = local_a8;
      lVar16 = lVar13;
      if (0 < lVar13) {
        do {
          local_70 = uVar3;
          uStack_68 = uVar4;
          FetchFullImageValue(this_00,(float *)&local_70,&local_98,iVar11,iVar18);
          uVar6 = uStack_68;
          uVar5 = local_70;
          uVar8 = 0;
          if (lVar12 < param_1->ArrayNum) {
            uVar8 = (uint)((ulonglong)lVar12 >> 0x3f) ^ 1;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar11 = iVar11 + 1;
          pFVar1 = (param_1->AllocatorInstance).Data + lVar15;
          *(undefined8 *)pFVar1 = uVar5;
          *(undefined8 *)(pFVar1 + 8) = uVar6;
          lVar13 = lVar13 + -1;
          lVar10 = local_78;
          lVar12 = lVar12 + 1;
          lVar15 = lVar15 + 0x10;
          lVar16 = local_80;
        } while (lVar13 != 0);
      }
      local_a8 = local_a8 + lVar10;
      iVar18 = iVar18 + 1;
      lVar17 = lVar17 + lVar16;
      lVar9 = lVar9 + -1;
      lVar13 = lVar16;
    } while (lVar9 != 0);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

// FetchFinalPlaneScale @ 14dd81dc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FImageTileAccumulator::FetchFinalPlaneScale
          (FImageTileAccumulator *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (param_1,(int)(this->ImagePlanes).ArrayNum,Default);
  fVar2 = __real_3f800000;
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      uVar4 = 0;
      if (lVar5 < (this->ImagePlanes).ArrayNum) {
        uVar4 = (uint)((ulonglong)lVar5 >> 0x3f) ^ 1;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar8 = *(float *)((this->ImagePlanes).AllocatorInstance.Data + lVar6 + 0x20);
      if (fVar8 == 0.0) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = fVar2 / fVar8;
      }
      uVar4 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x28;
      *(float *)((param_1->AllocatorInstance).Data + lVar5 * 4) = fVar8;
      lVar5 = lVar5 + 1;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return;
}

// FetchFullImageValue @ 14dd82140

void __thiscall
FImageTileAccumulator::FetchFullImageValue
          (FImageTileAccumulator *this,float *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  
  iVar2 = this->NumTilesX;
  lVar11 = 0;
  iVar3 = this->NumTilesY;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  uVar9 = (ulonglong)(uint)this->NumChannels;
  if (0 < this->NumChannels) {
    do {
      uVar10 = ((param_4 % iVar3) * this->NumTilesX + param_3 % iVar2) * (int)uVar9 + (int)lVar11;
      uVar7 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar12 = (longlong)(int)uVar10;
      fVar1 = *(float *)((param_2->AllocatorInstance).Data + lVar12 * 4);
      uVar7 = 0;
      if (lVar12 < (this->ImagePlanes).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->ImagePlanes).AllocatorInstance.Data;
      iVar8 = (param_4 / iVar3) * this->TileSizeX + param_3 / iVar2;
      uVar7 = 0;
      if ((longlong)iVar8 < *(longlong *)(pFVar4 + lVar12 * 0x28 + 8)) {
        uVar7 = (uint)(iVar8 >> 0x1f) >> 0x1f ^ 1;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      param_1[lVar11] =
           fVar1 * *(float *)(*(longlong *)(pFVar4 + lVar12 * 0x28) + (longlong)iVar8 * 4);
      lVar11 = lVar11 + 1;
      uVar9 = (ulonglong)this->NumChannels;
    } while (lVar11 < (longlong)uVar9);
  }
  if (this->AccumulationGamma != __real_3f800000) {
    __vdecl_powf4();
    *param_1 = extraout_XMM0_Da;
    param_1[1] = extraout_XMM0_Db;
    param_1[2] = extraout_XMM0_Dc;
    param_1[3] = extraout_XMM0_Dd;
  }
  return;
}

// GetPlaneIndex @ 14dd8b9e0

int __thiscall
FImageTileAccumulator::GetPlaneIndex
          (FImageTileAccumulator *this,int param_1,int param_2,int param_3)

{
  return (param_1 + param_2 * this->NumTilesX) * this->NumChannels + param_3;
}

// InitMemory @ 14dd8f260

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FImageTileAccumulator::InitMemory
          (FImageTileAccumulator *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  long64 *plVar1;
  TArray<float,TSizedDefaultAllocator<64>_> *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long64 lVar7;
  ulong64 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  plVar1 = &(this->ImagePlanes).ArrayNum;
  this->NumTilesX = param_3;
  this->TileSizeX = param_1;
  this->TileSizeY = param_2;
  this->NumTilesY = param_4;
  this->NumChannels = param_5;
  lVar11 = *plVar1;
  iVar12 = param_3 * param_4 * param_5;
  uVar8 = (ulong64)iVar12;
  if (lVar11 < (longlong)uVar8) {
    lVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (0x28,8,uVar8 - lVar11,&(this->ImagePlanes).AllocatorInstance,plVar1,
                       &(this->ImagePlanes).ArrayMax);
    DefaultConstructItems<FImageTilePlane,__int64>
              ((this->ImagePlanes).AllocatorInstance.Data + lVar7 * 0x28,uVar8 - lVar11);
  }
  else {
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar8);
    }
    if ((longlong)uVar8 < lVar11) {
      lVar11 = lVar11 - uVar8;
      if (((((uint)(iVar12 >> 0x1f) >> 0x1f ^ 1) & ((uint)((ulonglong)lVar11 >> 0x3f) ^ 1)) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (lVar11 != 0) {
        TArray<FImageTilePlane,TSizedDefaultAllocator<64>_>::RemoveAtImpl
                  (&this->ImagePlanes,uVar8,lVar11);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (0x28,8,&(this->ImagePlanes).AllocatorInstance,*plVar1,
                   &(this->ImagePlanes).ArrayMax);
      }
    }
  }
  iVar12 = 0;
  if (0 < this->NumTilesY) {
    do {
      iVar9 = 0;
      if (0 < this->NumTilesX) {
        do {
          iVar5 = this->NumChannels;
          iVar10 = 0;
          if (0 < iVar5) {
            do {
              iVar5 = (iVar12 * this->NumTilesX + iVar9) * iVar5 + iVar10;
              uVar6 = 0;
              if ((longlong)iVar5 < *plVar1) {
                uVar6 = (uint)(iVar5 >> 0x1f) >> 0x1f ^ 1;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar2 = this->TileSizeX;
              this_00 = (TArray<float,TSizedDefaultAllocator<64>_> *)
                        ((this->ImagePlanes).AllocatorInstance.Data + (longlong)iVar5 * 0x28);
              iVar5 = this->TileSizeY;
              *(int *)&this_00[1].AllocatorInstance.Data = iVar2;
              *(int *)((longlong)&this_00[1].AllocatorInstance.Data + 4) = iVar5;
              *(undefined4 *)&this_00[1].ArrayNum = 0;
              TArray<float,TSizedDefaultAllocator<64>_>::SetNumUninitialized
                        (this_00,(longlong)(iVar2 * iVar5),Default);
              iVar5 = this->NumChannels;
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar5);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < this->NumTilesX);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < this->NumTilesY);
  }
  return;
}

// Reset @ 14dd9b740

void __thiscall FImageTileAccumulator::Reset(FImageTileAccumulator *this)

{
  long64 *plVar1;
  
  this->KernelRadius = 1.0;
  this->TileSizeX = 0;
  this->TileSizeY = 0;
  this->NumTilesX = 0;
  this->NumTilesY = 0;
  this->NumChannels = 0;
  DestructItems<FImageTilePlane,__int64>
            ((FImageTilePlane *)(this->ImagePlanes).AllocatorInstance.Data,
             (this->ImagePlanes).ArrayNum);
  plVar1 = &(this->ImagePlanes).ArrayMax;
  (this->ImagePlanes).ArrayNum = 0;
  if (*plVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->ImagePlanes).AllocatorInstance,0,plVar1);
  }
  return;
}

// ZeroPlanes @ 14ddaa1d0

void __thiscall FImageTileAccumulator::ZeroPlanes(FImageTileAccumulator *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_res8;
  
  if (((this->ImagePlanes).ArrayNum !=
       (longlong)(this->NumTilesX * this->NumTilesY * this->NumChannels)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImagePlanes.Num() == NumTilesX * NumTilesY * NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderTileImage.cpp"
                         ,0xba,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res8 = 0;
  if (0 < this->NumTilesY) {
    do {
      iVar10 = 0;
      if (0 < this->NumTilesX) {
        do {
          iVar5 = this->NumChannels;
          iVar11 = 0;
          if (0 < iVar5) {
            do {
              iVar5 = (local_res8 * this->NumTilesX + iVar10) * iVar5 + iVar11;
              lVar7 = (longlong)iVar5;
              uVar6 = 0;
              if (lVar7 < (this->ImagePlanes).ArrayNum) {
                uVar6 = (uint)(iVar5 >> 0x1f) >> 0x1f ^ 1;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar2 = (this->ImagePlanes).AllocatorInstance.Data;
              iVar9 = 0;
              lVar8 = 0;
              iVar5 = *(int *)(pFVar2 + lVar7 * 0x28 + 0x1c);
              iVar1 = *(int *)(pFVar2 + lVar7 * 0x28 + 0x18);
              *(undefined4 *)(pFVar2 + lVar7 * 0x28 + 0x20) = 0;
              if (0 < iVar5 * iVar1) {
                do {
                  uVar6 = 0;
                  if ((longlong)iVar9 < *(longlong *)(pFVar2 + lVar7 * 0x28 + 8)) {
                    uVar6 = (uint)(iVar9 >> 0x1f) >> 0x1f ^ 1;
                  }
                  if ((uVar6 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  iVar9 = iVar9 + 1;
                  *(undefined4 *)(*(longlong *)(pFVar2 + lVar7 * 0x28) + lVar8 * 4) = 0;
                  lVar8 = lVar8 + 1;
                } while (lVar8 < iVar5 * iVar1);
              }
              iVar5 = this->NumChannels;
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar5);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < this->NumTilesX);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < this->NumTilesY);
  }
  return;
}

