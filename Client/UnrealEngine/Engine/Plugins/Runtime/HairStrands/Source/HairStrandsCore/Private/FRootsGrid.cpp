// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// FindBestClosestRoots @ 14e00d310

FClosestGuides __thiscall
HairInterpolationBuilder::FRootsGrid::FindBestClosestRoots
          (FRootsGrid *this,uint param_1,
          TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> *param_2,
          TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> *param_3,
          FHairStrandsDatas *param_4,FHairStrandsDatas *param_5,
          TStaticArray<UE::Math::TVector<float>,16,4294967295> *param_6,bool param_7,bool param_8,
          TIntVector3<int> *param_9)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint *puVar7;
  FHairStrandsDatas *pFVar8;
  int aiVar9 [2];
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  FClosestGuides FVar14;
  ulonglong uVar15;
  int iVar16;
  int in_register_00000014;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  FMetrics *pFVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined7 in_stack_00000041;
  TIntVector3<int> *in_stack_00000058;
  FMetrics local_120;
  uint local_110;
  uint local_10c;
  int local_108;
  uint local_104;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa [2];
  uint local_f8;
  uint *local_f0;
  uint local_e8;
  uint local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  FHairStrandsDatas *local_d0;
  uint *local_c8;
  int local_c0;
  uint local_b8;
  TStaticArray<UE::Math::TVector<float>,16,4294967295> *local_b0;
  FHairStrandsDatas *local_a8;
  FHairStrandsDatas *local_a0;
  FRootsGrid *local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  FMetrics local_78;
  TIntVector3<int> *local_68;
  int local_60 [2];
  
  local_60[1] = in_register_00000014;
  local_60[0] = param_1;
  local_a0 = param_5;
  local_a8 = (FHairStrandsDatas *)param_6;
  local_b0 = (TStaticArray<UE::Math::TVector<float>,16,4294967295> *)
             CONCAT71(in_stack_00000041,param_7);
  local_f8 = (uint)param_2;
  lVar19 = (longlong)(int)local_f8;
  local_68 = in_stack_00000058;
  uVar17 = 0;
  if ((int)local_f8 < param_3->ArrayNum) {
    uVar17 = ~local_f8 >> 0x1f;
  }
  local_d0 = param_4;
  local_98 = this;
  if ((uVar17 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    FVar14.Indices = (int  [2])(*pcVar5)();
    return (FClosestGuides)FVar14.Indices;
  }
  pFVar2 = (param_3->AllocatorInstance).Data;
  iVar16 = (this->GridResolution).field0_0x0._s_0.X;
  fVar30 = *(float *)(pFVar2 + lVar19 * 0x24) - (this->MinBound).field0_0x0._s_0.X;
  fVar31 = *(float *)(pFVar2 + lVar19 * 0x24 + 4) - (this->MinBound).field0_0x0._s_0.Y;
  iVar11 = (this->GridResolution).field0_0x0._s_0.Y;
  fVar32 = *(float *)(pFVar2 + lVar19 * 0x24 + 8) - (this->MinBound).field0_0x0._s_0.Z;
  iVar12 = (this->GridResolution).field0_0x0._s_0.Z;
  local_78.KMinMetrics[0] = 3.4028235e+38;
  local_78.KClosestGuideIndices[0] = -1;
  local_120.KMinMetrics[0] = 3.4028235e+38;
  iVar22 = iVar12 + -1;
  local_120.KClosestGuideIndices[0] = 0xffffffff;
  local_78.KMinMetrics[1] = 3.4028235e+38;
  local_78.KClosestGuideIndices[1] = -1;
  local_120.KMinMetrics[1] = 3.4028235e+38;
  local_120.KClosestGuideIndices[1] = 0xffffffff;
  local_108 = 1;
  iVar28 = (int)ROUND(((fVar30 + fVar30) /
                      ((this->MaxBound).field0_0x0._s_0.X - (this->MinBound).field0_0x0._s_0.X)) *
                      (float)iVar16 - __real_3f000000) >> 1;
  iVar29 = iVar11 + -1;
  iVar25 = (int)ROUND(((fVar31 + fVar31) /
                      ((this->MaxBound).field0_0x0._s_0.Y - (this->MinBound).field0_0x0._s_0.Y)) *
                      (float)iVar11 - __real_3f000000) >> 1;
  iVar11 = (int)ROUND(((fVar32 + fVar32) /
                      ((this->MaxBound).field0_0x0._s_0.Z - (this->MinBound).field0_0x0._s_0.Z)) *
                      (float)iVar12 - __real_3f000000) >> 1;
  if (iVar11 < iVar22) {
    iVar22 = iVar11;
  }
  iVar16 = iVar16 + -1;
  if (iVar25 < iVar29) {
    iVar29 = iVar25;
  }
  if (iVar28 < iVar16) {
    iVar16 = iVar28;
  }
  local_d8 = 0;
  if (0 < iVar16) {
    local_d8 = iVar16;
  }
  local_c0 = 0;
  if (0 < iVar29) {
    local_c0 = iVar29;
  }
  local_dc = 0;
  if (0 < iVar22) {
    local_dc = iVar22;
  }
  if (0 < (int)this->MaxLookupDistance) {
    do {
      if (((((local_d8 < 0) || ((this->GridResolution).field0_0x0._s_0.X <= local_d8)) ||
           (local_c0 < 0)) ||
          (((this->GridResolution).field0_0x0._s_0.Y <= local_c0 || (local_dc < 0)))) ||
         ((this->GridResolution).field0_0x0._s_0.Z <= local_dc)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      iVar22 = (this->GridResolution).field0_0x0._s_0.Y;
      iVar16 = (this->GridResolution).field0_0x0._s_0.Z + -1;
      iVar29 = (this->GridResolution).field0_0x0._s_0.X;
      if (local_dc < iVar16) {
        iVar16 = local_dc;
      }
      iVar11 = iVar22 + -1;
      iVar12 = iVar29 + -1;
      if (local_c0 < iVar11) {
        iVar11 = local_c0;
      }
      if (local_d8 < iVar12) {
        iVar12 = local_d8;
      }
      iVar25 = 0;
      if (0 < iVar12) {
        iVar25 = iVar12;
      }
      iVar12 = 0;
      if (0 < iVar11) {
        iVar12 = iVar11;
      }
      iVar11 = 0;
      if (0 < iVar16) {
        iVar11 = iVar16;
      }
      if (bVar10) {
        uVar17 = iVar29 * (iVar11 * iVar22 + iVar12) + iVar25;
        if (((uint)(this->GridIndirection).ArrayNum <= uVar17) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CellIndex < uint32(GridIndirection.Num())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                ,0x483,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          FVar14.Indices = (int  [2])(*pcVar5)();
          return (FClosestGuides)FVar14.Indices;
        }
        uVar23 = 0;
        if ((int)uVar17 < (this->GridIndirection).ArrayNum) {
          uVar23 = ~uVar17 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          FVar14.Indices = (int  [2])(*pcVar5)();
          return (FClosestGuides)FVar14.Indices;
        }
        if (*(int *)((this->GridIndirection).AllocatorInstance.Data + (longlong)(int)uVar17 * 4) !=
            0) {
          uVar23 = 0;
          if ((int)uVar17 < (this->GridIndirection).ArrayNum) {
            uVar23 = ~uVar17 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            FVar14.Indices = (int  [2])(*pcVar5)();
            return (FClosestGuides)FVar14.Indices;
          }
          uVar17 = *(uint *)((this->GridIndirection).AllocatorInstance.Data +
                            (longlong)(int)uVar17 * 4);
          lVar20 = (longlong)(int)uVar17;
          uVar23 = 0;
          if ((int)uVar17 < (this->RootIndices).ArrayNum) {
            uVar23 = ~uVar17 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            FVar14.Indices = (int  [2])(*pcVar5)();
            return (FClosestGuides)FVar14.Indices;
          }
          pFVar3 = (this->RootIndices).AllocatorInstance.Data;
          local_104 = *(uint *)(pFVar3 + lVar20 * 0x10 + 8);
          uVar15 = (ulonglong)(int)local_104;
          puVar24 = *(uint **)(pFVar3 + lVar20 * 0x10);
          local_f0 = puVar24 + uVar15;
          while( true ) {
            puVar7 = local_f0;
            if (*(int *)(pFVar3 + lVar20 * 0x10 + 8) != (int)uVar15) {
              local_100 = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_100);
            }
            this = local_98;
            if (puVar24 == puVar7) break;
            uVar17 = *puVar24;
            lVar21 = (longlong)(int)uVar17;
            uVar23 = 0;
            if ((int)uVar17 < (int)param_4->_padding_) {
              uVar23 = ~uVar17 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              FVar14.Indices = (int  [2])(*pcVar5)();
              return (FClosestGuides)FVar14.Indices;
            }
            lVar4 = param_4->_padding_;
            fVar31 = *(float *)(pFVar2 + lVar19 * 0x24) - *(float *)(lVar4 + lVar21 * 0x24);
            fVar32 = *(float *)(pFVar2 + lVar19 * 0x24 + 4) - *(float *)(lVar4 + 4 + lVar21 * 0x24);
            fVar30 = *(float *)(pFVar2 + lVar19 * 0x24 + 8) - *(float *)(lVar4 + 8 + lVar21 * 0x24);
            fVar31 = SQRT(fVar32 * fVar32 + fVar31 * fVar31 + fVar30 * fVar30);
            fVar30 = local_120.KMinMetrics[0];
            uVar23 = local_120.KClosestGuideIndices[0];
            if ((fVar31 < local_120.KMinMetrics[1]) &&
               (local_120.KMinMetrics[1] = fVar31, local_120.KClosestGuideIndices[1] = uVar17,
               fVar31 < local_120.KMinMetrics[0])) {
              fVar30 = fVar31;
              local_120.KMinMetrics[1] = local_120.KMinMetrics[0];
              uVar23 = uVar17;
              local_120.KClosestGuideIndices[1] = local_120.KClosestGuideIndices[0];
            }
            local_120.KClosestGuideIndices[0] = uVar23;
            local_120.KMinMetrics[0] = fVar30;
            ComputeAdvandedMetric(&local_78,local_a0,local_a8,local_f8,uVar17,local_b0);
            uVar15 = (ulonglong)local_104;
            puVar24 = puVar24 + 1;
          }
        }
      }
      local_d4 = -local_108;
      if (local_108 < local_d4) {
        iVar22 = local_108 + -1;
        uVar17 = -iVar22;
        iVar29 = local_108;
        local_e4 = uVar17;
        local_e0 = iVar22;
      }
      else {
        local_90 = (ulonglong)(local_108 * 2 + 1);
        iVar22 = local_d8 + local_d4;
        local_88 = local_90;
        do {
          local_b8 = local_dc + local_108;
          local_110 = local_dc + local_d4;
          local_10c = local_c0 + local_d4;
          local_80 = local_90;
          do {
            if ((((iVar22 < 0) || ((this->GridResolution).field0_0x0._s_0.X <= iVar22)) ||
                ((int)local_10c < 0)) ||
               ((((this->GridResolution).field0_0x0._s_0.Y <= (int)local_10c || ((int)local_b8 < 0))
                || ((this->GridResolution).field0_0x0._s_0.Z <= (int)local_b8)))) {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            iVar29 = (this->GridResolution).field0_0x0._s_0.Z;
            iVar16 = (this->GridResolution).field0_0x0._s_0.Y;
            iVar11 = (this->GridResolution).field0_0x0._s_0.X;
            uVar17 = iVar29 - 1;
            uVar23 = uVar17;
            if ((int)local_b8 < (int)uVar17) {
              uVar23 = local_b8;
            }
            uVar13 = iVar16 - 1U;
            if ((int)local_10c < (int)(iVar16 - 1U)) {
              uVar13 = local_10c;
            }
            iVar12 = iVar11 + -1;
            if (iVar22 < iVar11 + -1) {
              iVar12 = iVar22;
            }
            local_e0 = 0;
            if (0 < iVar12) {
              local_e0 = iVar12;
            }
            local_e4 = 0;
            if (0 < (int)uVar13) {
              local_e4 = uVar13;
            }
            uVar13 = 0;
            if (0 < (int)uVar23) {
              uVar13 = uVar23;
            }
            if (((iVar22 < 0) || (iVar11 <= iVar22)) ||
               (((int)local_10c < 0 ||
                (((iVar16 <= (int)local_10c || ((int)local_110 < 0)) || (iVar29 <= (int)local_110)))
                ))) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if ((int)local_110 < (int)uVar17) {
              uVar17 = local_110;
            }
            uVar23 = 0;
            if (0 < (int)uVar17) {
              uVar23 = uVar17;
            }
            local_e8 = uVar23;
            if (bVar10) {
              uVar17 = (local_e4 + iVar16 * uVar13) * iVar11 + local_e0;
              if (((uint)(this->GridIndirection).ArrayNum <= uVar17) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CellIndex < uint32(GridIndirection.Num())",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                      ,0x483,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                FVar14.Indices = (int  [2])(*pcVar5)();
                return (FClosestGuides)FVar14.Indices;
              }
              uVar13 = 0;
              if ((int)uVar17 < (this->GridIndirection).ArrayNum) {
                uVar13 = ~uVar17 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                FVar14.Indices = (int  [2])(*pcVar5)();
                return (FClosestGuides)FVar14.Indices;
              }
              if (*(int *)((this->GridIndirection).AllocatorInstance.Data +
                          (longlong)(int)uVar17 * 4) != 0) {
                uVar23 = 0;
                if ((int)uVar17 < (this->GridIndirection).ArrayNum) {
                  uVar23 = ~uVar17 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  FVar14.Indices = (int  [2])(*pcVar5)();
                  return (FClosestGuides)FVar14.Indices;
                }
                uVar17 = *(uint *)((this->GridIndirection).AllocatorInstance.Data +
                                  (longlong)(int)uVar17 * 4);
                lVar20 = (longlong)(int)uVar17;
                uVar23 = 0;
                if ((int)uVar17 < (this->RootIndices).ArrayNum) {
                  uVar23 = ~uVar17 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  FVar14.Indices = (int  [2])(*pcVar5)();
                  return (FClosestGuides)FVar14.Indices;
                }
                pFVar8 = local_d0;
                pFVar3 = (this->RootIndices).AllocatorInstance.Data;
                local_104 = *(uint *)(pFVar3 + lVar20 * 0x10 + 8);
                uVar15 = (ulonglong)(int)local_104;
                puVar24 = *(uint **)(pFVar3 + lVar20 * 0x10);
                local_f0 = puVar24 + uVar15;
                while( true ) {
                  puVar7 = local_f0;
                  if (*(int *)(pFVar3 + lVar20 * 0x10 + 8) != (int)uVar15) {
                    local_ff = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_ff);
                  }
                  this = local_98;
                  uVar23 = local_e8;
                  if (puVar24 == puVar7) break;
                  uVar17 = *puVar24;
                  lVar21 = (longlong)(int)uVar17;
                  uVar23 = 0;
                  if ((int)uVar17 < (int)pFVar8->_padding_) {
                    uVar23 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    FVar14.Indices = (int  [2])(*pcVar5)();
                    return (FClosestGuides)FVar14.Indices;
                  }
                  lVar4 = pFVar8->_padding_;
                  fVar31 = *(float *)(pFVar2 + lVar19 * 0x24) - *(float *)(lVar4 + lVar21 * 0x24);
                  fVar32 = *(float *)(pFVar2 + lVar19 * 0x24 + 4) -
                           *(float *)(lVar4 + 4 + lVar21 * 0x24);
                  fVar30 = *(float *)(pFVar2 + lVar19 * 0x24 + 8) -
                           *(float *)(lVar4 + 8 + lVar21 * 0x24);
                  fVar31 = SQRT(fVar32 * fVar32 + fVar31 * fVar31 + fVar30 * fVar30);
                  fVar30 = local_120.KMinMetrics[0];
                  uVar23 = local_120.KClosestGuideIndices[0];
                  if ((fVar31 < local_120.KMinMetrics[1]) &&
                     (local_120.KMinMetrics[1] = fVar31, local_120.KClosestGuideIndices[1] = uVar17,
                     fVar31 < local_120.KMinMetrics[0])) {
                    fVar30 = fVar31;
                    local_120.KMinMetrics[1] = local_120.KMinMetrics[0];
                    uVar23 = uVar17;
                    local_120.KClosestGuideIndices[1] = local_120.KClosestGuideIndices[0];
                  }
                  local_120.KClosestGuideIndices[0] = uVar23;
                  local_120.KMinMetrics[0] = fVar30;
                  ComputeAdvandedMetric(&local_78,local_a0,local_a8,local_f8,uVar17,local_b0);
                  uVar15 = (ulonglong)local_104;
                  puVar24 = puVar24 + 1;
                }
              }
            }
            if (bVar6) {
              uVar17 = (local_e4 + uVar23 * (this->GridResolution).field0_0x0._s_0.Y) *
                       (this->GridResolution).field0_0x0._s_0.X + local_e0;
              if (((uint)(this->GridIndirection).ArrayNum <= uVar17) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CellIndex < uint32(GridIndirection.Num())",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                      ,0x483,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                FVar14.Indices = (int  [2])(*pcVar5)();
                return (FClosestGuides)FVar14.Indices;
              }
              uVar23 = 0;
              if ((int)uVar17 < (this->GridIndirection).ArrayNum) {
                uVar23 = ~uVar17 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                FVar14.Indices = (int  [2])(*pcVar5)();
                return (FClosestGuides)FVar14.Indices;
              }
              if (*(int *)((this->GridIndirection).AllocatorInstance.Data +
                          (longlong)(int)uVar17 * 4) != 0) {
                uVar23 = 0;
                if ((int)uVar17 < (this->GridIndirection).ArrayNum) {
                  uVar23 = ~uVar17 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  FVar14.Indices = (int  [2])(*pcVar5)();
                  return (FClosestGuides)FVar14.Indices;
                }
                uVar17 = *(uint *)((this->GridIndirection).AllocatorInstance.Data +
                                  (longlong)(int)uVar17 * 4);
                lVar20 = (longlong)(int)uVar17;
                uVar23 = 0;
                if ((int)uVar17 < (this->RootIndices).ArrayNum) {
                  uVar23 = ~uVar17 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  FVar14.Indices = (int  [2])(*pcVar5)();
                  return (FClosestGuides)FVar14.Indices;
                }
                pFVar3 = (this->RootIndices).AllocatorInstance.Data;
                puVar24 = *(uint **)(pFVar3 + lVar20 * 0x10);
                iVar29 = *(int *)(pFVar3 + lVar20 * 0x10 + 8);
                local_f0 = puVar24 + iVar29;
                while( true ) {
                  puVar7 = local_f0;
                  if (*(int *)(pFVar3 + lVar20 * 0x10 + 8) != iVar29) {
                    local_fe = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_fe);
                  }
                  this = local_98;
                  if (puVar24 == puVar7) break;
                  uVar17 = *puVar24;
                  lVar21 = (longlong)(int)uVar17;
                  uVar23 = 0;
                  if ((int)uVar17 < (int)local_d0->_padding_) {
                    uVar23 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    FVar14.Indices = (int  [2])(*pcVar5)();
                    return (FClosestGuides)FVar14.Indices;
                  }
                  lVar4 = local_d0->_padding_;
                  fVar31 = *(float *)(pFVar2 + lVar19 * 0x24) - *(float *)(lVar4 + lVar21 * 0x24);
                  fVar32 = *(float *)(pFVar2 + lVar19 * 0x24 + 4) -
                           *(float *)(lVar4 + 4 + lVar21 * 0x24);
                  fVar30 = *(float *)(pFVar2 + lVar19 * 0x24 + 8) -
                           *(float *)(lVar4 + 8 + lVar21 * 0x24);
                  fVar31 = SQRT(fVar32 * fVar32 + fVar31 * fVar31 + fVar30 * fVar30);
                  fVar30 = local_120.KMinMetrics[0];
                  uVar23 = local_120.KClosestGuideIndices[0];
                  if ((fVar31 < local_120.KMinMetrics[1]) &&
                     (local_120.KMinMetrics[1] = fVar31, local_120.KClosestGuideIndices[1] = uVar17,
                     fVar31 < local_120.KMinMetrics[0])) {
                    fVar30 = fVar31;
                    local_120.KMinMetrics[1] = local_120.KMinMetrics[0];
                    uVar23 = uVar17;
                    local_120.KClosestGuideIndices[1] = local_120.KClosestGuideIndices[0];
                  }
                  local_120.KClosestGuideIndices[0] = uVar23;
                  local_120.KMinMetrics[0] = fVar30;
                  ComputeAdvandedMetric(&local_78,local_a0,local_a8,local_f8,uVar17,local_b0);
                  puVar24 = puVar24 + 1;
                }
              }
            }
            local_10c = local_10c + 1;
            local_80 = local_80 - 1;
          } while (local_80 != 0);
          iVar22 = iVar22 + 1;
          local_88 = local_88 - 1;
        } while (local_88 != 0);
        iVar22 = local_108 + -1;
        uVar23 = local_d8 + local_d4;
        uVar17 = -iVar22;
        local_f0 = (uint *)(ulonglong)((local_108 - local_d4) + 1);
        local_80 = 0;
        local_88 = 0;
        iVar29 = local_108;
        iVar16 = local_d4;
        local_e4 = uVar17;
        local_e0 = iVar22;
        do {
          if ((int)uVar17 <= iVar22) {
            local_110 = local_dc + uVar17;
            local_10c = local_c0 + iVar16;
            local_90 = (ulonglong)((iVar22 - uVar17) + 1);
            local_80 = CONCAT44(local_80._4_4_,local_c0 + iVar29);
            uVar17 = local_c0 + iVar29;
            do {
              if ((((((int)uVar23 < 0) || ((this->GridResolution).field0_0x0._s_0.X <= (int)uVar23))
                   || ((int)uVar17 < 0)) ||
                  (((this->GridResolution).field0_0x0._s_0.Y <= (int)uVar17 || ((int)local_110 < 0))
                  )) || ((this->GridResolution).field0_0x0._s_0.Z <= (int)local_110)) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
              iVar22 = (this->GridResolution).field0_0x0._s_0.Z;
              iVar29 = (this->GridResolution).field0_0x0._s_0.Y;
              uVar13 = iVar22 - 1;
              uVar1 = iVar29 - 1;
              if ((int)local_110 < (int)uVar13) {
                uVar13 = local_110;
              }
              uVar26 = uVar1;
              if ((int)uVar17 < (int)uVar1) {
                uVar26 = uVar17;
              }
              iVar16 = (this->GridResolution).field0_0x0._s_0.X;
              uVar17 = iVar16 - 1U;
              if ((int)uVar23 < (int)(iVar16 - 1U)) {
                uVar17 = uVar23;
              }
              local_104 = 0;
              if (0 < (int)uVar17) {
                local_104 = uVar17;
              }
              uVar17 = 0;
              if (0 < (int)uVar26) {
                uVar17 = uVar26;
              }
              uVar26 = 0;
              if (0 < (int)uVar13) {
                uVar26 = uVar13;
              }
              local_88 = CONCAT44(local_88._4_4_,uVar26);
              if ((((int)uVar23 < 0) || (iVar16 <= (int)uVar23)) ||
                 (((int)local_10c < 0 ||
                  (((iVar29 <= (int)local_10c || ((int)local_110 < 0)) || (iVar22 <= (int)local_110)
                   ))))) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if ((int)local_10c < (int)uVar1) {
                uVar1 = local_10c;
              }
              local_e8 = 0;
              if (0 < (int)uVar1) {
                local_e8 = uVar1;
              }
              if (bVar10) {
                uVar17 = (uVar17 + iVar29 * uVar26) * iVar16 + local_104;
                if (((uint)(this->GridIndirection).ArrayNum <= uVar17) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CellIndex < uint32(GridIndirection.Num())",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                        ,0x483,L""), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  FVar14.Indices = (int  [2])(*pcVar5)();
                  return (FClosestGuides)FVar14.Indices;
                }
                uVar13 = 0;
                if ((int)uVar17 < (this->GridIndirection).ArrayNum) {
                  uVar13 = ~uVar17 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  FVar14.Indices = (int  [2])(*pcVar5)();
                  return (FClosestGuides)FVar14.Indices;
                }
                if (*(int *)((this->GridIndirection).AllocatorInstance.Data +
                            (longlong)(int)uVar17 * 4) != 0) {
                  uVar13 = 0;
                  if ((int)uVar17 < (this->GridIndirection).ArrayNum) {
                    uVar13 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    FVar14.Indices = (int  [2])(*pcVar5)();
                    return (FClosestGuides)FVar14.Indices;
                  }
                  uVar17 = *(uint *)((this->GridIndirection).AllocatorInstance.Data +
                                    (longlong)(int)uVar17 * 4);
                  lVar20 = (longlong)(int)uVar17;
                  uVar13 = 0;
                  if ((int)uVar17 < (this->RootIndices).ArrayNum) {
                    uVar13 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    FVar14.Indices = (int  [2])(*pcVar5)();
                    return (FClosestGuides)FVar14.Indices;
                  }
                  pFVar8 = local_d0;
                  pFVar3 = (this->RootIndices).AllocatorInstance.Data;
                  local_b8 = *(uint *)(pFVar3 + lVar20 * 0x10 + 8);
                  uVar15 = (ulonglong)(int)local_b8;
                  puVar24 = *(uint **)(pFVar3 + lVar20 * 0x10);
                  local_c8 = puVar24 + uVar15;
                  while( true ) {
                    puVar7 = local_c8;
                    if (*(int *)(pFVar3 + lVar20 * 0x10 + 8) != (int)uVar15) {
                      local_fd = 0;
                      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(&local_fd);
                    }
                    if (puVar24 == puVar7) break;
                    uVar17 = *puVar24;
                    lVar21 = (longlong)(int)uVar17;
                    uVar13 = 0;
                    if ((int)uVar17 < (int)pFVar8->_padding_) {
                      uVar13 = ~uVar17 >> 0x1f;
                    }
                    if ((uVar13 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar5 = (code *)swi(3);
                      FVar14.Indices = (int  [2])(*pcVar5)();
                      return (FClosestGuides)FVar14.Indices;
                    }
                    lVar4 = pFVar8->_padding_;
                    fVar31 = *(float *)(pFVar2 + lVar19 * 0x24) - *(float *)(lVar4 + lVar21 * 0x24);
                    fVar32 = *(float *)(pFVar2 + lVar19 * 0x24 + 4) -
                             *(float *)(lVar4 + 4 + lVar21 * 0x24);
                    fVar30 = *(float *)(pFVar2 + lVar19 * 0x24 + 8) -
                             *(float *)(lVar4 + 8 + lVar21 * 0x24);
                    fVar31 = SQRT(fVar32 * fVar32 + fVar31 * fVar31 + fVar30 * fVar30);
                    fVar30 = local_120.KMinMetrics[0];
                    uVar13 = local_120.KClosestGuideIndices[0];
                    if ((fVar31 < local_120.KMinMetrics[1]) &&
                       (local_120.KMinMetrics[1] = fVar31,
                       local_120.KClosestGuideIndices[1] = uVar17, fVar31 < local_120.KMinMetrics[0]
                       )) {
                      fVar30 = fVar31;
                      local_120.KMinMetrics[1] = local_120.KMinMetrics[0];
                      uVar13 = uVar17;
                      local_120.KClosestGuideIndices[1] = local_120.KClosestGuideIndices[0];
                    }
                    local_120.KClosestGuideIndices[0] = uVar13;
                    local_120.KMinMetrics[0] = fVar30;
                    ComputeAdvandedMetric(&local_78,local_a0,local_a8,local_f8,uVar17,local_b0);
                    uVar15 = (ulonglong)local_b8;
                    puVar24 = puVar24 + 1;
                  }
                  this = local_98;
                  uVar26 = (uint)local_88;
                }
              }
              if (bVar6) {
                uVar17 = (local_e8 + uVar26 * (this->GridResolution).field0_0x0._s_0.Y) *
                         (this->GridResolution).field0_0x0._s_0.X + local_104;
                if (((uint)(this->GridIndirection).ArrayNum <= uVar17) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CellIndex < uint32(GridIndirection.Num())",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                        ,0x483,L""), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  FVar14.Indices = (int  [2])(*pcVar5)();
                  return (FClosestGuides)FVar14.Indices;
                }
                uVar13 = 0;
                if ((int)uVar17 < (this->GridIndirection).ArrayNum) {
                  uVar13 = ~uVar17 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  FVar14.Indices = (int  [2])(*pcVar5)();
                  return (FClosestGuides)FVar14.Indices;
                }
                if (*(int *)((this->GridIndirection).AllocatorInstance.Data +
                            (longlong)(int)uVar17 * 4) != 0) {
                  uVar13 = 0;
                  if ((int)uVar17 < (this->GridIndirection).ArrayNum) {
                    uVar13 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    FVar14.Indices = (int  [2])(*pcVar5)();
                    return (FClosestGuides)FVar14.Indices;
                  }
                  uVar17 = *(uint *)((this->GridIndirection).AllocatorInstance.Data +
                                    (longlong)(int)uVar17 * 4);
                  lVar20 = (longlong)(int)uVar17;
                  uVar13 = 0;
                  if ((int)uVar17 < (this->RootIndices).ArrayNum) {
                    uVar13 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    FVar14.Indices = (int  [2])(*pcVar5)();
                    return (FClosestGuides)FVar14.Indices;
                  }
                  pFVar3 = (this->RootIndices).AllocatorInstance.Data;
                  puVar24 = *(uint **)(pFVar3 + lVar20 * 0x10);
                  iVar22 = *(int *)(pFVar3 + lVar20 * 0x10 + 8);
                  local_c8 = puVar24 + iVar22;
                  while( true ) {
                    puVar7 = local_c8;
                    if (*(int *)(pFVar3 + lVar20 * 0x10 + 8) != iVar22) {
                      local_fc = 0;
                      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(&local_fc);
                    }
                    this = local_98;
                    if (puVar24 == puVar7) break;
                    uVar17 = *puVar24;
                    lVar21 = (longlong)(int)uVar17;
                    uVar13 = 0;
                    if ((int)uVar17 < (int)local_d0->_padding_) {
                      uVar13 = ~uVar17 >> 0x1f;
                    }
                    if ((uVar13 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar5 = (code *)swi(3);
                      FVar14.Indices = (int  [2])(*pcVar5)();
                      return (FClosestGuides)FVar14.Indices;
                    }
                    lVar4 = local_d0->_padding_;
                    fVar31 = *(float *)(pFVar2 + lVar19 * 0x24) - *(float *)(lVar4 + lVar21 * 0x24);
                    fVar32 = *(float *)(pFVar2 + lVar19 * 0x24 + 4) -
                             *(float *)(lVar4 + 4 + lVar21 * 0x24);
                    fVar30 = *(float *)(pFVar2 + lVar19 * 0x24 + 8) -
                             *(float *)(lVar4 + 8 + lVar21 * 0x24);
                    fVar31 = SQRT(fVar32 * fVar32 + fVar31 * fVar31 + fVar30 * fVar30);
                    fVar30 = local_120.KMinMetrics[0];
                    uVar13 = local_120.KClosestGuideIndices[0];
                    if ((fVar31 < local_120.KMinMetrics[1]) &&
                       (local_120.KMinMetrics[1] = fVar31,
                       local_120.KClosestGuideIndices[1] = uVar17, fVar31 < local_120.KMinMetrics[0]
                       )) {
                      fVar30 = fVar31;
                      local_120.KMinMetrics[1] = local_120.KMinMetrics[0];
                      uVar13 = uVar17;
                      local_120.KClosestGuideIndices[1] = local_120.KClosestGuideIndices[0];
                    }
                    local_120.KClosestGuideIndices[0] = uVar13;
                    local_120.KMinMetrics[0] = fVar30;
                    ComputeAdvandedMetric(&local_78,local_a0,local_a8,local_f8,uVar17,local_b0);
                    puVar24 = puVar24 + 1;
                  }
                }
              }
              local_110 = local_110 + 1;
              local_90 = local_90 - 1;
              uVar17 = (uint)local_80;
            } while (local_90 != 0);
            local_90 = 0;
            iVar22 = local_e0;
            uVar17 = local_e4;
            iVar29 = local_108;
            iVar16 = local_d4;
          }
          uVar23 = uVar23 + 1;
          local_f0 = (uint *)((longlong)local_f0 - 1);
        } while (local_f0 != (uint *)0x0);
        local_f0 = (uint *)0x0;
      }
      if ((int)uVar17 <= iVar22) {
        local_90 = (ulonglong)((iVar22 - uVar17) + 1);
        uVar23 = local_c0 + uVar17;
        do {
          local_b8 = local_d8 + iVar29;
          local_10c = local_dc + uVar17;
          local_f0 = (uint *)(ulonglong)((iVar22 - uVar17) + 1);
          do {
            if (((((int)local_b8 < 0) || ((this->GridResolution).field0_0x0._s_0.X <= (int)local_b8)
                 ) || ((int)uVar23 < 0)) ||
               ((((this->GridResolution).field0_0x0._s_0.Y <= (int)uVar23 || ((int)local_10c < 0))
                || ((this->GridResolution).field0_0x0._s_0.Z <= (int)local_10c)))) {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            iVar22 = (this->GridResolution).field0_0x0._s_0.Z;
            iVar29 = (this->GridResolution).field0_0x0._s_0.Y;
            iVar16 = (this->GridResolution).field0_0x0._s_0.X;
            uVar17 = iVar22 - 1;
            if ((int)local_10c < (int)uVar17) {
              uVar17 = local_10c;
            }
            uVar13 = iVar29 - 1U;
            if ((int)uVar23 < (int)(iVar29 - 1U)) {
              uVar13 = uVar23;
            }
            uVar26 = iVar16 - 1;
            uVar1 = uVar26;
            if ((int)local_b8 < (int)uVar26) {
              uVar1 = local_b8;
            }
            uVar18 = 0;
            if (0 < (int)uVar1) {
              uVar18 = uVar1;
            }
            local_e8 = 0;
            if (0 < (int)uVar13) {
              local_e8 = uVar13;
            }
            uVar13 = 0;
            if (0 < (int)uVar17) {
              uVar13 = uVar17;
            }
            uVar17 = local_d8 + local_d4;
            local_88 = CONCAT44(local_88._4_4_,uVar13);
            if ((((int)uVar17 < 0) || (iVar16 <= (int)uVar17)) ||
               (((int)uVar23 < 0 ||
                (((iVar29 <= (int)uVar23 || ((int)local_10c < 0)) ||
                 (bVar6 = true, iVar22 <= (int)local_10c)))))) {
              bVar6 = false;
            }
            if ((int)uVar17 < (int)uVar26) {
              uVar26 = uVar17;
            }
            local_104 = 0;
            if (0 < (int)uVar26) {
              local_104 = uVar26;
            }
            if (bVar10) {
              uVar18 = uVar18 + (uVar13 * iVar29 + local_e8) * iVar16;
              if (((uint)(this->GridIndirection).ArrayNum <= uVar18) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CellIndex < uint32(GridIndirection.Num())",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                      ,0x483,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                FVar14.Indices = (int  [2])(*pcVar5)();
                return (FClosestGuides)FVar14.Indices;
              }
              uVar17 = 0;
              if ((int)uVar18 < (this->GridIndirection).ArrayNum) {
                uVar17 = ~uVar18 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                FVar14.Indices = (int  [2])(*pcVar5)();
                return (FClosestGuides)FVar14.Indices;
              }
              if (*(int *)((this->GridIndirection).AllocatorInstance.Data +
                          (longlong)(int)uVar18 * 4) != 0) {
                uVar17 = 0;
                if ((int)uVar18 < (this->GridIndirection).ArrayNum) {
                  uVar17 = ~uVar18 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  FVar14.Indices = (int  [2])(*pcVar5)();
                  return (FClosestGuides)FVar14.Indices;
                }
                uVar17 = *(uint *)((this->GridIndirection).AllocatorInstance.Data +
                                  (longlong)(int)uVar18 * 4);
                lVar20 = (longlong)(int)uVar17;
                uVar13 = 0;
                if ((int)uVar17 < (this->RootIndices).ArrayNum) {
                  uVar13 = ~uVar17 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  FVar14.Indices = (int  [2])(*pcVar5)();
                  return (FClosestGuides)FVar14.Indices;
                }
                pFVar8 = local_d0;
                pFVar3 = (this->RootIndices).AllocatorInstance.Data;
                uVar15 = (ulonglong)*(int *)(pFVar3 + lVar20 * 0x10 + 8);
                puVar24 = *(uint **)(pFVar3 + lVar20 * 0x10);
                local_80 = CONCAT44(local_80._4_4_,*(int *)(pFVar3 + lVar20 * 0x10 + 8));
                local_c8 = puVar24 + uVar15;
                while( true ) {
                  puVar7 = local_c8;
                  if (*(int *)(pFVar3 + lVar20 * 0x10 + 8) != (int)uVar15) {
                    local_fb = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_fb);
                  }
                  if (puVar24 == puVar7) break;
                  uVar17 = *puVar24;
                  lVar21 = (longlong)(int)uVar17;
                  uVar13 = 0;
                  if ((int)uVar17 < (int)pFVar8->_padding_) {
                    uVar13 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    FVar14.Indices = (int  [2])(*pcVar5)();
                    return (FClosestGuides)FVar14.Indices;
                  }
                  lVar4 = pFVar8->_padding_;
                  fVar31 = *(float *)(pFVar2 + lVar19 * 0x24) - *(float *)(lVar4 + lVar21 * 0x24);
                  fVar32 = *(float *)(pFVar2 + lVar19 * 0x24 + 4) -
                           *(float *)(lVar4 + 4 + lVar21 * 0x24);
                  fVar30 = *(float *)(pFVar2 + lVar19 * 0x24 + 8) -
                           *(float *)(lVar4 + 8 + lVar21 * 0x24);
                  fVar31 = SQRT(fVar32 * fVar32 + fVar31 * fVar31 + fVar30 * fVar30);
                  fVar30 = local_120.KMinMetrics[0];
                  uVar13 = local_120.KClosestGuideIndices[0];
                  if ((fVar31 < local_120.KMinMetrics[1]) &&
                     (local_120.KMinMetrics[1] = fVar31, local_120.KClosestGuideIndices[1] = uVar17,
                     fVar31 < local_120.KMinMetrics[0])) {
                    fVar30 = fVar31;
                    local_120.KMinMetrics[1] = local_120.KMinMetrics[0];
                    uVar13 = uVar17;
                    local_120.KClosestGuideIndices[1] = local_120.KClosestGuideIndices[0];
                  }
                  local_120.KClosestGuideIndices[0] = uVar13;
                  local_120.KMinMetrics[0] = fVar30;
                  ComputeAdvandedMetric(&local_78,local_a0,local_a8,local_f8,uVar17,local_b0);
                  uVar15 = local_80 & 0xffffffff;
                  puVar24 = puVar24 + 1;
                }
                this = local_98;
                uVar13 = (uint)local_88;
              }
            }
            if (bVar6) {
              uVar17 = (local_e8 + uVar13 * (this->GridResolution).field0_0x0._s_0.Y) *
                       (this->GridResolution).field0_0x0._s_0.X + local_104;
              if (((uint)(this->GridIndirection).ArrayNum <= uVar17) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CellIndex < uint32(GridIndirection.Num())",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                      ,0x483,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                FVar14.Indices = (int  [2])(*pcVar5)();
                return (FClosestGuides)FVar14.Indices;
              }
              uVar13 = 0;
              if ((int)uVar17 < (this->GridIndirection).ArrayNum) {
                uVar13 = ~uVar17 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                FVar14.Indices = (int  [2])(*pcVar5)();
                return (FClosestGuides)FVar14.Indices;
              }
              if (*(int *)((this->GridIndirection).AllocatorInstance.Data +
                          (longlong)(int)uVar17 * 4) != 0) {
                uVar13 = 0;
                if ((int)uVar17 < (this->GridIndirection).ArrayNum) {
                  uVar13 = ~uVar17 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  FVar14.Indices = (int  [2])(*pcVar5)();
                  return (FClosestGuides)FVar14.Indices;
                }
                uVar17 = *(uint *)((this->GridIndirection).AllocatorInstance.Data +
                                  (longlong)(int)uVar17 * 4);
                lVar20 = (longlong)(int)uVar17;
                uVar13 = 0;
                if ((int)uVar17 < (this->RootIndices).ArrayNum) {
                  uVar13 = ~uVar17 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  FVar14.Indices = (int  [2])(*pcVar5)();
                  return (FClosestGuides)FVar14.Indices;
                }
                pFVar3 = (this->RootIndices).AllocatorInstance.Data;
                puVar24 = *(uint **)(pFVar3 + lVar20 * 0x10);
                iVar22 = *(int *)(pFVar3 + lVar20 * 0x10 + 8);
                local_c8 = puVar24 + iVar22;
                while( true ) {
                  puVar7 = local_c8;
                  if (*(int *)(pFVar3 + lVar20 * 0x10 + 8) != iVar22) {
                    local_fa[0] = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_fa);
                  }
                  this = local_98;
                  if (puVar24 == puVar7) break;
                  uVar17 = *puVar24;
                  lVar21 = (longlong)(int)uVar17;
                  uVar13 = 0;
                  if ((int)uVar17 < (int)local_d0->_padding_) {
                    uVar13 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    FVar14.Indices = (int  [2])(*pcVar5)();
                    return (FClosestGuides)FVar14.Indices;
                  }
                  lVar4 = local_d0->_padding_;
                  fVar31 = *(float *)(pFVar2 + lVar19 * 0x24) - *(float *)(lVar4 + lVar21 * 0x24);
                  fVar32 = *(float *)(pFVar2 + lVar19 * 0x24 + 4) -
                           *(float *)(lVar4 + 4 + lVar21 * 0x24);
                  fVar30 = *(float *)(pFVar2 + lVar19 * 0x24 + 8) -
                           *(float *)(lVar4 + 8 + lVar21 * 0x24);
                  fVar31 = SQRT(fVar32 * fVar32 + fVar31 * fVar31 + fVar30 * fVar30);
                  fVar30 = local_120.KMinMetrics[0];
                  uVar13 = local_120.KClosestGuideIndices[0];
                  if ((fVar31 < local_120.KMinMetrics[1]) &&
                     (local_120.KMinMetrics[1] = fVar31, local_120.KClosestGuideIndices[1] = uVar17,
                     fVar31 < local_120.KMinMetrics[0])) {
                    fVar30 = fVar31;
                    local_120.KMinMetrics[1] = local_120.KMinMetrics[0];
                    uVar13 = uVar17;
                    local_120.KClosestGuideIndices[1] = local_120.KClosestGuideIndices[0];
                  }
                  local_120.KClosestGuideIndices[0] = uVar13;
                  local_120.KMinMetrics[0] = fVar30;
                  ComputeAdvandedMetric(&local_78,local_a0,local_a8,local_f8,uVar17,local_b0);
                  puVar24 = puVar24 + 1;
                }
              }
            }
            local_10c = local_10c + 1;
            local_f0 = (uint *)((longlong)local_f0 - 1);
          } while (local_f0 != (uint *)0x0);
          uVar23 = uVar23 + 1;
          local_90 = local_90 - 1;
          local_f0 = (uint *)0x0;
          iVar22 = local_e0;
          uVar17 = local_e4;
          iVar29 = local_108;
        } while (local_90 != 0);
      }
    } while ((((local_78.KClosestGuideIndices[1] == -1) &&
              (local_120.KClosestGuideIndices[1] == 0xffffffff)) || (local_108 < 2)) &&
            (local_108 = local_108 + 1, param_4 = local_d0,
            local_108 <= (int)this->MaxLookupDistance));
    pFVar27 = &local_78;
    if (local_78.KClosestGuideIndices[0] != -1) goto LAB_14e00eaea;
  }
  pFVar27 = &local_120;
LAB_14e00eaea:
  aiVar9 = local_60;
  SelectFinalGuides((FClosestGuides *)local_60,local_68,pFVar27,param_8,param_9._0_1_);
  if ((*(int *)aiVar9 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClosestGuides.Indices[0] >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                          ,0x57b,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    FVar14.Indices = (int  [2])(*pcVar5)();
    return (FClosestGuides)FVar14.Indices;
  }
  if ((*(int *)((longlong)aiVar9 + 4) < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClosestGuides.Indices[1] >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                          ,0x57c,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    FVar14.Indices = (int  [2])(*pcVar5)();
    return (FClosestGuides)FVar14.Indices;
  }
  local_60[0] = aiVar9[0];
  local_60[1] = aiVar9[1];
  FVar14.Indices[0] = local_60[0];
  FVar14.Indices[1] = local_60[1];
  return (FClosestGuides)FVar14.Indices;
}

// FindClosestRoots @ 14e00ee30

FClosestGuides __thiscall
HairInterpolationBuilder::FRootsGrid::FindClosestRoots
          (FRootsGrid *this,uint param_1,
          TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> *param_2,
          TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> *param_3,
          FHairStrandsDatas *param_4,FHairStrandsDatas *param_5,bool param_6,bool param_7,
          TIntVector3<int> *param_8)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FClosestGuides FVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  int in_register_00000014;
  int aiVar17 [2];
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  FRootsGrid *pFVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  TIntVector3<int> *in_stack_00000050;
  FMetrics local_f0;
  uint local_e0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  uint local_d0;
  uint *local_c8;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba [2];
  uint local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  uint *local_a0;
  int local_98;
  ulonglong local_90;
  ulonglong local_88;
  FRootsGrid *local_80;
  ulonglong local_78;
  int local_70 [2];
  TIntVector3<int> *local_68;
  
  aiVar17[1] = in_register_00000014;
  aiVar17[0] = param_1;
  local_68 = in_stack_00000050;
  uVar19 = (uint)param_2;
  lVar20 = (longlong)(int)uVar19;
  uVar18 = 0;
  if ((int)uVar19 < param_3->ArrayNum) {
    uVar18 = ~uVar19 >> 0x1f;
  }
  local_80 = this;
  local_70 = aiVar17;
  if ((uVar18 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    FVar12.Indices = (int  [2])(*pcVar6)();
    return (FClosestGuides)FVar12.Indices;
  }
  pFVar3 = (param_3->AllocatorInstance).Data;
  iVar26 = (this->GridResolution).field0_0x0._s_0.X;
  fVar29 = *(float *)(pFVar3 + lVar20 * 0x24) - (this->MinBound).field0_0x0._s_0.X;
  fVar30 = *(float *)(pFVar3 + lVar20 * 0x24 + 4) - (this->MinBound).field0_0x0._s_0.Y;
  iVar10 = (this->GridResolution).field0_0x0._s_0.Y;
  fVar31 = *(float *)(pFVar3 + lVar20 * 0x24 + 8) - (this->MinBound).field0_0x0._s_0.Z;
  iVar2 = (this->GridResolution).field0_0x0._s_0.Z;
  local_f0.KMinMetrics[0] = 3.4028235e+38;
  local_f0.KClosestGuideIndices[0] = 0xffffffff;
  local_f0.KMinMetrics[1] = 3.4028235e+38;
  iVar27 = iVar2 + -1;
  local_f0.KClosestGuideIndices[1] = 0xffffffff;
  iVar25 = (int)ROUND(((fVar29 + fVar29) /
                      ((this->MaxBound).field0_0x0._s_0.X - (this->MinBound).field0_0x0._s_0.X)) *
                      (float)iVar26 - __real_3f000000) >> 1;
  iVar15 = iVar10 + -1;
  iVar24 = (int)ROUND(((fVar30 + fVar30) /
                      ((this->MaxBound).field0_0x0._s_0.Y - (this->MinBound).field0_0x0._s_0.Y)) *
                      (float)iVar10 - __real_3f000000) >> 1;
  iVar10 = (int)ROUND(((fVar31 + fVar31) /
                      ((this->MaxBound).field0_0x0._s_0.Z - (this->MinBound).field0_0x0._s_0.Z)) *
                      (float)iVar2 - __real_3f000000) >> 1;
  if (iVar10 < iVar27) {
    iVar27 = iVar10;
  }
  iVar26 = iVar26 + -1;
  if (iVar24 < iVar15) {
    iVar15 = iVar24;
  }
  if (iVar25 < iVar26) {
    iVar26 = iVar25;
  }
  local_d8 = 1;
  local_ac = 0;
  if (0 < iVar26) {
    local_ac = iVar26;
  }
  local_b0 = 0;
  if (0 < iVar15) {
    local_b0 = iVar15;
  }
  local_b4 = 0;
  if (0 < iVar27) {
    local_b4 = iVar27;
  }
  if (0 < (int)this->MaxLookupDistance) {
    do {
      if (((((-1 < local_ac) &&
            (iVar27 = (this->GridResolution).field0_0x0._s_0.X, local_ac < iVar27)) &&
           (-1 < local_b0)) &&
          ((iVar15 = (this->GridResolution).field0_0x0._s_0.Y, local_b0 < iVar15 && (-1 < local_b4))
          )) && (local_b4 < (this->GridResolution).field0_0x0._s_0.Z)) {
        uVar18 = local_ac + (iVar15 * local_b4 + local_b0) * iVar27;
        if (((uint)(this->GridIndirection).ArrayNum <= uVar18) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CellIndex < uint32(GridIndirection.Num())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                               ,0x483,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          FVar12.Indices = (int  [2])(*pcVar6)();
          return (FClosestGuides)FVar12.Indices;
        }
        uVar19 = 0;
        if ((int)uVar18 < (this->GridIndirection).ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          FVar12.Indices = (int  [2])(*pcVar6)();
          return (FClosestGuides)FVar12.Indices;
        }
        if (*(int *)((this->GridIndirection).AllocatorInstance.Data + (longlong)(int)uVar18 * 4) !=
            0) {
          uVar19 = 0;
          if ((int)uVar18 < (this->GridIndirection).ArrayNum) {
            uVar19 = ~uVar18 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            FVar12.Indices = (int  [2])(*pcVar6)();
            return (FClosestGuides)FVar12.Indices;
          }
          uVar18 = *(uint *)((this->GridIndirection).AllocatorInstance.Data +
                            (longlong)(int)uVar18 * 4);
          lVar21 = (longlong)(int)uVar18;
          uVar19 = 0;
          if ((int)uVar18 < (this->RootIndices).ArrayNum) {
            uVar19 = ~uVar18 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            FVar12.Indices = (int  [2])(*pcVar6)();
            return (FClosestGuides)FVar12.Indices;
          }
          pFVar4 = (this->RootIndices).AllocatorInstance.Data;
          local_dc = *(uint *)(pFVar4 + lVar21 * 0x10 + 8);
          uVar14 = (ulonglong)(int)local_dc;
          puVar28 = *(uint **)(pFVar4 + lVar21 * 0x10);
          local_c8 = puVar28 + uVar14;
          while( true ) {
            puVar8 = local_c8;
            if (*(int *)(pFVar4 + lVar21 * 0x10 + 8) != (int)uVar14) {
              local_c0 = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_c0);
            }
            this = local_80;
            if (puVar28 == puVar8) break;
            uVar18 = *puVar28;
            lVar22 = (longlong)(int)uVar18;
            uVar19 = 0;
            if ((int)uVar18 < (int)param_4->_padding_) {
              uVar19 = ~uVar18 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              FVar12.Indices = (int  [2])(*pcVar6)();
              return (FClosestGuides)FVar12.Indices;
            }
            lVar5 = param_4->_padding_;
            fVar30 = *(float *)(pFVar3 + lVar20 * 0x24) - *(float *)(lVar5 + lVar22 * 0x24);
            fVar31 = *(float *)(pFVar3 + lVar20 * 0x24 + 4) - *(float *)(lVar5 + 4 + lVar22 * 0x24);
            fVar29 = *(float *)(pFVar3 + lVar20 * 0x24 + 8) - *(float *)(lVar5 + 8 + lVar22 * 0x24);
            fVar30 = SQRT(fVar31 * fVar31 + fVar30 * fVar30 + fVar29 * fVar29);
            fVar29 = local_f0.KMinMetrics[0];
            uVar19 = local_f0.KClosestGuideIndices[0];
            if ((fVar30 < local_f0.KMinMetrics[1]) &&
               (local_f0.KMinMetrics[1] = fVar30, local_f0.KClosestGuideIndices[1] = uVar18,
               fVar30 < local_f0.KMinMetrics[0])) {
              fVar29 = fVar30;
              local_f0.KMinMetrics[1] = local_f0.KMinMetrics[0];
              uVar19 = uVar18;
              local_f0.KClosestGuideIndices[1] = local_f0.KClosestGuideIndices[0];
            }
            local_f0.KClosestGuideIndices[0] = uVar19;
            local_f0.KMinMetrics[0] = fVar29;
            uVar14 = (ulonglong)local_dc;
            puVar28 = puVar28 + 1;
          }
        }
      }
      local_98 = -local_d8;
      if (local_d8 < local_98) {
        local_a4 = local_d8 + -1;
        iVar15 = -local_a4;
        iVar27 = local_d8;
        local_a8 = iVar15;
        uVar18 = local_a4;
      }
      else {
        iVar27 = local_ac + local_98;
        local_90 = (ulonglong)(local_d8 * 2 + 1);
        local_78 = local_90;
        do {
          local_d4 = local_b4 + local_98;
          local_b8 = local_b4 + local_d8;
          local_e0 = local_b0 + local_98;
          local_88 = local_78;
          do {
            if ((((iVar27 < 0) || ((this->GridResolution).field0_0x0._s_0.X <= iVar27)) ||
                ((int)local_e0 < 0)) ||
               ((((this->GridResolution).field0_0x0._s_0.Y <= (int)local_e0 || ((int)local_b8 < 0))
                || ((this->GridResolution).field0_0x0._s_0.Z <= (int)local_b8)))) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            iVar15 = (this->GridResolution).field0_0x0._s_0.Z;
            iVar26 = (this->GridResolution).field0_0x0._s_0.Y;
            iVar10 = (this->GridResolution).field0_0x0._s_0.X;
            uVar18 = iVar15 - 1;
            uVar19 = uVar18;
            if ((int)local_b8 < (int)uVar18) {
              uVar19 = local_b8;
            }
            uVar16 = iVar26 - 1U;
            if ((int)local_e0 < (int)(iVar26 - 1U)) {
              uVar16 = local_e0;
            }
            iVar2 = iVar10 + -1;
            if (iVar27 < iVar10 + -1) {
              iVar2 = iVar27;
            }
            local_a8 = 0;
            if (0 < iVar2) {
              local_a8 = iVar2;
            }
            local_d0 = 0;
            if (0 < (int)uVar16) {
              local_d0 = uVar16;
            }
            uVar16 = 0;
            if (0 < (int)uVar19) {
              uVar16 = uVar19;
            }
            if (((iVar27 < 0) || (iVar10 <= iVar27)) ||
               (((int)local_e0 < 0 ||
                (((iVar26 <= (int)local_e0 || ((int)local_d4 < 0)) || (iVar15 <= (int)local_d4))))))
            {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if ((int)local_d4 < (int)uVar18) {
              uVar18 = local_d4;
            }
            local_a4 = 0;
            if (0 < (int)uVar18) {
              local_a4 = uVar18;
            }
            if (bVar9) {
              uVar18 = (iVar26 * uVar16 + local_d0) * iVar10 + local_a8;
              if (((uint)(this->GridIndirection).ArrayNum <= uVar18) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CellIndex < uint32(GridIndirection.Num())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                     ,0x483,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                FVar12.Indices = (int  [2])(*pcVar6)();
                return (FClosestGuides)FVar12.Indices;
              }
              uVar19 = 0;
              if ((int)uVar18 < (this->GridIndirection).ArrayNum) {
                uVar19 = ~uVar18 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                FVar12.Indices = (int  [2])(*pcVar6)();
                return (FClosestGuides)FVar12.Indices;
              }
              if (*(int *)((this->GridIndirection).AllocatorInstance.Data +
                          (longlong)(int)uVar18 * 4) != 0) {
                uVar19 = 0;
                if ((int)uVar18 < (this->GridIndirection).ArrayNum) {
                  uVar19 = ~uVar18 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  FVar12.Indices = (int  [2])(*pcVar6)();
                  return (FClosestGuides)FVar12.Indices;
                }
                uVar18 = *(uint *)((this->GridIndirection).AllocatorInstance.Data +
                                  (longlong)(int)uVar18 * 4);
                lVar21 = (longlong)(int)uVar18;
                uVar19 = 0;
                if ((int)uVar18 < (this->RootIndices).ArrayNum) {
                  uVar19 = ~uVar18 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  FVar12.Indices = (int  [2])(*pcVar6)();
                  return (FClosestGuides)FVar12.Indices;
                }
                pFVar4 = (this->RootIndices).AllocatorInstance.Data;
                local_dc = *(uint *)(pFVar4 + lVar21 * 0x10 + 8);
                uVar14 = (ulonglong)(int)local_dc;
                puVar28 = *(uint **)(pFVar4 + lVar21 * 0x10);
                local_c8 = puVar28 + uVar14;
                while( true ) {
                  puVar8 = local_c8;
                  if (*(int *)(pFVar4 + lVar21 * 0x10 + 8) != (int)uVar14) {
                    local_bf = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_bf);
                  }
                  this = local_80;
                  if (puVar28 == puVar8) break;
                  uVar18 = *puVar28;
                  lVar22 = (longlong)(int)uVar18;
                  uVar19 = 0;
                  if ((int)uVar18 < (int)param_4->_padding_) {
                    uVar19 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    FVar12.Indices = (int  [2])(*pcVar6)();
                    return (FClosestGuides)FVar12.Indices;
                  }
                  lVar5 = param_4->_padding_;
                  fVar30 = *(float *)(pFVar3 + lVar20 * 0x24) - *(float *)(lVar5 + lVar22 * 0x24);
                  fVar31 = *(float *)(pFVar3 + lVar20 * 0x24 + 4) -
                           *(float *)(lVar5 + 4 + lVar22 * 0x24);
                  fVar29 = *(float *)(pFVar3 + lVar20 * 0x24 + 8) -
                           *(float *)(lVar5 + 8 + lVar22 * 0x24);
                  fVar30 = SQRT(fVar31 * fVar31 + fVar30 * fVar30 + fVar29 * fVar29);
                  fVar29 = local_f0.KMinMetrics[0];
                  uVar19 = local_f0.KClosestGuideIndices[0];
                  if ((fVar30 < local_f0.KMinMetrics[1]) &&
                     (local_f0.KMinMetrics[1] = fVar30, local_f0.KClosestGuideIndices[1] = uVar18,
                     fVar30 < local_f0.KMinMetrics[0])) {
                    fVar29 = fVar30;
                    local_f0.KMinMetrics[1] = local_f0.KMinMetrics[0];
                    uVar19 = uVar18;
                    local_f0.KClosestGuideIndices[1] = local_f0.KClosestGuideIndices[0];
                  }
                  local_f0.KClosestGuideIndices[0] = uVar19;
                  local_f0.KMinMetrics[0] = fVar29;
                  uVar14 = (ulonglong)local_dc;
                  puVar28 = puVar28 + 1;
                }
              }
            }
            if (bVar7) {
              uVar18 = (local_a4 * (this->GridResolution).field0_0x0._s_0.Y + local_d0) *
                       (this->GridResolution).field0_0x0._s_0.X + local_a8;
              if (((uint)(this->GridIndirection).ArrayNum <= uVar18) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CellIndex < uint32(GridIndirection.Num())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                     ,0x483,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                FVar12.Indices = (int  [2])(*pcVar6)();
                return (FClosestGuides)FVar12.Indices;
              }
              uVar19 = 0;
              if ((int)uVar18 < (this->GridIndirection).ArrayNum) {
                uVar19 = ~uVar18 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                FVar12.Indices = (int  [2])(*pcVar6)();
                return (FClosestGuides)FVar12.Indices;
              }
              if (*(int *)((this->GridIndirection).AllocatorInstance.Data +
                          (longlong)(int)uVar18 * 4) != 0) {
                uVar19 = 0;
                if ((int)uVar18 < (this->GridIndirection).ArrayNum) {
                  uVar19 = ~uVar18 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  FVar12.Indices = (int  [2])(*pcVar6)();
                  return (FClosestGuides)FVar12.Indices;
                }
                uVar18 = *(uint *)((this->GridIndirection).AllocatorInstance.Data +
                                  (longlong)(int)uVar18 * 4);
                lVar21 = (longlong)(int)uVar18;
                uVar19 = 0;
                if ((int)uVar18 < (this->RootIndices).ArrayNum) {
                  uVar19 = ~uVar18 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  FVar12.Indices = (int  [2])(*pcVar6)();
                  return (FClosestGuides)FVar12.Indices;
                }
                pFVar4 = (this->RootIndices).AllocatorInstance.Data;
                local_dc = *(uint *)(pFVar4 + lVar21 * 0x10 + 8);
                uVar14 = (ulonglong)(int)local_dc;
                puVar28 = *(uint **)(pFVar4 + lVar21 * 0x10);
                local_c8 = puVar28 + uVar14;
                while( true ) {
                  puVar8 = local_c8;
                  if (*(int *)(pFVar4 + lVar21 * 0x10 + 8) != (int)uVar14) {
                    local_be = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_be);
                  }
                  this = local_80;
                  if (puVar28 == puVar8) break;
                  uVar18 = *puVar28;
                  lVar22 = (longlong)(int)uVar18;
                  uVar19 = 0;
                  if ((int)uVar18 < (int)param_4->_padding_) {
                    uVar19 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    FVar12.Indices = (int  [2])(*pcVar6)();
                    return (FClosestGuides)FVar12.Indices;
                  }
                  lVar5 = param_4->_padding_;
                  fVar31 = *(float *)(pFVar3 + lVar20 * 0x24) - *(float *)(lVar5 + lVar22 * 0x24);
                  fVar29 = *(float *)(pFVar3 + lVar20 * 0x24 + 4) -
                           *(float *)(lVar5 + 4 + lVar22 * 0x24);
                  fVar30 = *(float *)(pFVar3 + lVar20 * 0x24 + 8) -
                           *(float *)(lVar5 + 8 + lVar22 * 0x24);
                  fVar30 = SQRT(fVar31 * fVar31 + fVar29 * fVar29 + fVar30 * fVar30);
                  fVar29 = local_f0.KMinMetrics[0];
                  uVar19 = local_f0.KClosestGuideIndices[0];
                  if ((fVar30 < local_f0.KMinMetrics[1]) &&
                     (local_f0.KMinMetrics[1] = fVar30, local_f0.KClosestGuideIndices[1] = uVar18,
                     fVar30 < local_f0.KMinMetrics[0])) {
                    fVar29 = fVar30;
                    local_f0.KMinMetrics[1] = local_f0.KMinMetrics[0];
                    uVar19 = uVar18;
                    local_f0.KClosestGuideIndices[1] = local_f0.KClosestGuideIndices[0];
                  }
                  local_f0.KClosestGuideIndices[0] = uVar19;
                  local_f0.KMinMetrics[0] = fVar29;
                  uVar14 = (ulonglong)local_dc;
                  puVar28 = puVar28 + 1;
                }
              }
            }
            local_e0 = local_e0 + 1;
            local_88 = local_88 - 1;
          } while (local_88 != 0);
          iVar27 = iVar27 + 1;
          local_90 = local_90 - 1;
        } while (local_90 != 0);
        local_a4 = local_d8 + -1;
        uVar19 = local_ac + local_98;
        iVar15 = -local_a4;
        local_c8 = (uint *)(ulonglong)((local_d8 - local_98) + 1);
        local_88 = 0;
        local_90 = 0;
        iVar27 = local_d8;
        iVar26 = local_98;
        local_a8 = iVar15;
        uVar18 = local_a4;
        do {
          if (iVar15 <= (int)uVar18) {
            local_e0 = local_b0 + iVar26;
            local_d4 = local_b4 + iVar15;
            local_88 = CONCAT44(local_88._4_4_,iVar27 + local_b0);
            local_78 = (ulonglong)((uVar18 - iVar15) + 1);
            uVar18 = iVar27 + local_b0;
            do {
              if ((((((int)uVar19 < 0) || ((this->GridResolution).field0_0x0._s_0.X <= (int)uVar19))
                   || ((int)uVar18 < 0)) ||
                  (((this->GridResolution).field0_0x0._s_0.Y <= (int)uVar18 || ((int)local_d4 < 0)))
                  ) || ((this->GridResolution).field0_0x0._s_0.Z <= (int)local_d4)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              iVar27 = (this->GridResolution).field0_0x0._s_0.Z;
              iVar15 = (this->GridResolution).field0_0x0._s_0.Y;
              uVar16 = iVar27 - 1;
              uVar1 = iVar15 - 1;
              if ((int)local_d4 < (int)uVar16) {
                uVar16 = local_d4;
              }
              uVar13 = uVar1;
              if ((int)uVar18 < (int)uVar1) {
                uVar13 = uVar18;
              }
              iVar26 = (this->GridResolution).field0_0x0._s_0.X;
              uVar18 = iVar26 - 1U;
              if ((int)uVar19 < (int)(iVar26 - 1U)) {
                uVar18 = uVar19;
              }
              local_dc = 0;
              if (0 < (int)uVar18) {
                local_dc = uVar18;
              }
              uVar18 = 0;
              if (0 < (int)uVar13) {
                uVar18 = uVar13;
              }
              local_d0 = 0;
              if (0 < (int)uVar16) {
                local_d0 = uVar16;
              }
              if ((((int)uVar19 < 0) || (iVar26 <= (int)uVar19)) ||
                 (((int)local_e0 < 0 ||
                  (((iVar15 <= (int)local_e0 || ((int)local_d4 < 0)) ||
                   (bVar7 = true, iVar27 <= (int)local_d4)))))) {
                bVar7 = false;
              }
              if ((int)local_e0 < (int)uVar1) {
                uVar1 = local_e0;
              }
              local_b8 = 0;
              if (0 < (int)uVar1) {
                local_b8 = uVar1;
              }
              if (bVar9) {
                uVar18 = (uVar18 + iVar15 * local_d0) * iVar26 + local_dc;
                if (((uint)(this->GridIndirection).ArrayNum <= uVar18) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("CellIndex < uint32(GridIndirection.Num())",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                       ,0x483,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  FVar12.Indices = (int  [2])(*pcVar6)();
                  return (FClosestGuides)FVar12.Indices;
                }
                uVar16 = 0;
                if ((int)uVar18 < (this->GridIndirection).ArrayNum) {
                  uVar16 = ~uVar18 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  FVar12.Indices = (int  [2])(*pcVar6)();
                  return (FClosestGuides)FVar12.Indices;
                }
                if (*(int *)((this->GridIndirection).AllocatorInstance.Data +
                            (longlong)(int)uVar18 * 4) != 0) {
                  uVar16 = 0;
                  if ((int)uVar18 < (this->GridIndirection).ArrayNum) {
                    uVar16 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    FVar12.Indices = (int  [2])(*pcVar6)();
                    return (FClosestGuides)FVar12.Indices;
                  }
                  uVar18 = *(uint *)((this->GridIndirection).AllocatorInstance.Data +
                                    (longlong)(int)uVar18 * 4);
                  lVar21 = (longlong)(int)uVar18;
                  uVar16 = 0;
                  if ((int)uVar18 < (this->RootIndices).ArrayNum) {
                    uVar16 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    FVar12.Indices = (int  [2])(*pcVar6)();
                    return (FClosestGuides)FVar12.Indices;
                  }
                  pFVar4 = (this->RootIndices).AllocatorInstance.Data;
                  uVar14 = (ulonglong)*(int *)(pFVar4 + lVar21 * 0x10 + 8);
                  puVar28 = *(uint **)(pFVar4 + lVar21 * 0x10);
                  local_90 = CONCAT44(local_90._4_4_,*(int *)(pFVar4 + lVar21 * 0x10 + 8));
                  local_a0 = puVar28 + uVar14;
                  while( true ) {
                    puVar8 = local_a0;
                    if (*(int *)(pFVar4 + lVar21 * 0x10 + 8) != (int)uVar14) {
                      local_bd = 0;
                      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(&local_bd);
                    }
                    this = local_80;
                    if (puVar28 == puVar8) break;
                    uVar18 = *puVar28;
                    lVar22 = (longlong)(int)uVar18;
                    uVar16 = 0;
                    if ((int)uVar18 < (int)param_4->_padding_) {
                      uVar16 = ~uVar18 >> 0x1f;
                    }
                    if ((uVar16 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      FVar12.Indices = (int  [2])(*pcVar6)();
                      return (FClosestGuides)FVar12.Indices;
                    }
                    lVar5 = param_4->_padding_;
                    fVar30 = *(float *)(pFVar3 + lVar20 * 0x24) - *(float *)(lVar5 + lVar22 * 0x24);
                    fVar31 = *(float *)(pFVar3 + lVar20 * 0x24 + 4) -
                             *(float *)(lVar5 + 4 + lVar22 * 0x24);
                    fVar29 = *(float *)(pFVar3 + lVar20 * 0x24 + 8) -
                             *(float *)(lVar5 + 8 + lVar22 * 0x24);
                    fVar30 = SQRT(fVar31 * fVar31 + fVar30 * fVar30 + fVar29 * fVar29);
                    fVar29 = local_f0.KMinMetrics[0];
                    uVar16 = local_f0.KClosestGuideIndices[0];
                    if ((fVar30 < local_f0.KMinMetrics[1]) &&
                       (local_f0.KMinMetrics[1] = fVar30, local_f0.KClosestGuideIndices[1] = uVar18,
                       fVar30 < local_f0.KMinMetrics[0])) {
                      fVar29 = fVar30;
                      local_f0.KMinMetrics[1] = local_f0.KMinMetrics[0];
                      uVar16 = uVar18;
                      local_f0.KClosestGuideIndices[1] = local_f0.KClosestGuideIndices[0];
                    }
                    local_f0.KClosestGuideIndices[0] = uVar16;
                    local_f0.KMinMetrics[0] = fVar29;
                    uVar14 = local_90 & 0xffffffff;
                    puVar28 = puVar28 + 1;
                  }
                }
              }
              if (bVar7) {
                uVar18 = (local_b8 + local_d0 * (this->GridResolution).field0_0x0._s_0.Y) *
                         (this->GridResolution).field0_0x0._s_0.X + local_dc;
                if (((uint)(this->GridIndirection).ArrayNum <= uVar18) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("CellIndex < uint32(GridIndirection.Num())",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                       ,0x483,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  FVar12.Indices = (int  [2])(*pcVar6)();
                  return (FClosestGuides)FVar12.Indices;
                }
                uVar16 = 0;
                if ((int)uVar18 < (this->GridIndirection).ArrayNum) {
                  uVar16 = ~uVar18 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  FVar12.Indices = (int  [2])(*pcVar6)();
                  return (FClosestGuides)FVar12.Indices;
                }
                if (*(int *)((this->GridIndirection).AllocatorInstance.Data +
                            (longlong)(int)uVar18 * 4) != 0) {
                  uVar16 = 0;
                  if ((int)uVar18 < (this->GridIndirection).ArrayNum) {
                    uVar16 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    FVar12.Indices = (int  [2])(*pcVar6)();
                    return (FClosestGuides)FVar12.Indices;
                  }
                  uVar18 = *(uint *)((this->GridIndirection).AllocatorInstance.Data +
                                    (longlong)(int)uVar18 * 4);
                  lVar21 = (longlong)(int)uVar18;
                  uVar16 = 0;
                  if ((int)uVar18 < (this->RootIndices).ArrayNum) {
                    uVar16 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    FVar12.Indices = (int  [2])(*pcVar6)();
                    return (FClosestGuides)FVar12.Indices;
                  }
                  pFVar4 = (this->RootIndices).AllocatorInstance.Data;
                  uVar14 = (ulonglong)*(int *)(pFVar4 + lVar21 * 0x10 + 8);
                  puVar28 = *(uint **)(pFVar4 + lVar21 * 0x10);
                  local_90 = CONCAT44(local_90._4_4_,*(int *)(pFVar4 + lVar21 * 0x10 + 8));
                  local_a0 = puVar28 + uVar14;
                  while( true ) {
                    puVar8 = local_a0;
                    if (*(int *)(pFVar4 + lVar21 * 0x10 + 8) != (int)uVar14) {
                      local_bc = 0;
                      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(&local_bc);
                    }
                    this = local_80;
                    if (puVar28 == puVar8) break;
                    uVar18 = *puVar28;
                    lVar22 = (longlong)(int)uVar18;
                    uVar16 = 0;
                    if ((int)uVar18 < (int)param_4->_padding_) {
                      uVar16 = ~uVar18 >> 0x1f;
                    }
                    if ((uVar16 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      FVar12.Indices = (int  [2])(*pcVar6)();
                      return (FClosestGuides)FVar12.Indices;
                    }
                    lVar5 = param_4->_padding_;
                    fVar30 = *(float *)(pFVar3 + lVar20 * 0x24) - *(float *)(lVar5 + lVar22 * 0x24);
                    fVar31 = *(float *)(pFVar3 + lVar20 * 0x24 + 4) -
                             *(float *)(lVar5 + 4 + lVar22 * 0x24);
                    fVar29 = *(float *)(pFVar3 + lVar20 * 0x24 + 8) -
                             *(float *)(lVar5 + 8 + lVar22 * 0x24);
                    fVar30 = SQRT(fVar31 * fVar31 + fVar30 * fVar30 + fVar29 * fVar29);
                    fVar29 = local_f0.KMinMetrics[0];
                    uVar16 = local_f0.KClosestGuideIndices[0];
                    if ((fVar30 < local_f0.KMinMetrics[1]) &&
                       (local_f0.KMinMetrics[1] = fVar30, local_f0.KClosestGuideIndices[1] = uVar18,
                       fVar30 < local_f0.KMinMetrics[0])) {
                      fVar29 = fVar30;
                      local_f0.KMinMetrics[1] = local_f0.KMinMetrics[0];
                      uVar16 = uVar18;
                      local_f0.KClosestGuideIndices[1] = local_f0.KClosestGuideIndices[0];
                    }
                    local_f0.KClosestGuideIndices[0] = uVar16;
                    local_f0.KMinMetrics[0] = fVar29;
                    uVar14 = local_90 & 0xffffffff;
                    puVar28 = puVar28 + 1;
                  }
                }
              }
              local_d4 = local_d4 + 1;
              local_78 = local_78 - 1;
              uVar18 = (uint)local_88;
            } while (local_78 != 0);
            local_78 = 0;
            iVar27 = local_d8;
            iVar15 = local_a8;
            iVar26 = local_98;
            uVar18 = local_a4;
          }
          uVar19 = uVar19 + 1;
          local_c8 = (uint *)((longlong)local_c8 - 1);
        } while (local_c8 != (uint *)0x0);
        local_c8 = (uint *)0x0;
      }
      if (iVar15 <= (int)uVar18) {
        local_78 = (ulonglong)((uVar18 - iVar15) + 1);
        uVar19 = local_b0 + iVar15;
        do {
          local_e0 = local_b4 + iVar15;
          local_90 = CONCAT44(local_90._4_4_,local_ac + iVar27);
          local_c8 = (uint *)(ulonglong)((uVar18 - iVar15) + 1);
          uVar18 = local_ac + iVar27;
          do {
            pFVar23 = local_80;
            if (((((int)uVar18 < 0) || ((this->GridResolution).field0_0x0._s_0.X <= (int)uVar18)) ||
                ((int)uVar19 < 0)) ||
               ((((this->GridResolution).field0_0x0._s_0.Y <= (int)uVar19 || ((int)local_e0 < 0)) ||
                ((this->GridResolution).field0_0x0._s_0.Z <= (int)local_e0)))) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            iVar27 = (this->GridResolution).field0_0x0._s_0.Z;
            iVar15 = (this->GridResolution).field0_0x0._s_0.Y;
            iVar26 = (this->GridResolution).field0_0x0._s_0.X;
            uVar16 = iVar27 - 1;
            if ((int)local_e0 < (int)uVar16) {
              uVar16 = local_e0;
            }
            uVar1 = iVar15 - 1U;
            if ((int)uVar19 < (int)(iVar15 - 1U)) {
              uVar1 = uVar19;
            }
            uVar13 = iVar26 - 1;
            uVar11 = uVar13;
            if ((int)uVar18 < (int)uVar13) {
              uVar11 = uVar18;
            }
            uVar18 = 0;
            if (0 < (int)uVar11) {
              uVar18 = uVar11;
            }
            local_d0 = 0;
            if (0 < (int)uVar1) {
              local_d0 = uVar1;
            }
            local_dc = 0;
            if (0 < (int)uVar16) {
              local_dc = uVar16;
            }
            uVar16 = local_ac + local_98;
            if ((((int)uVar16 < 0) || (iVar26 <= (int)uVar16)) ||
               (((int)uVar19 < 0 ||
                (((iVar15 <= (int)uVar19 || ((int)local_e0 < 0)) ||
                 (bVar7 = true, iVar27 <= (int)local_e0)))))) {
              bVar7 = false;
            }
            if ((int)uVar16 < (int)uVar13) {
              uVar13 = uVar16;
            }
            local_b8 = 0;
            if (0 < (int)uVar13) {
              local_b8 = uVar13;
            }
            if (bVar9) {
              uVar18 = uVar18 + (local_dc * iVar15 + local_d0) * iVar26;
              if (((uint)(local_80->GridIndirection).ArrayNum <= uVar18) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CellIndex < uint32(GridIndirection.Num())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                     ,0x483,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                FVar12.Indices = (int  [2])(*pcVar6)();
                return (FClosestGuides)FVar12.Indices;
              }
              uVar16 = 0;
              if ((int)uVar18 < (pFVar23->GridIndirection).ArrayNum) {
                uVar16 = ~uVar18 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                FVar12.Indices = (int  [2])(*pcVar6)();
                return (FClosestGuides)FVar12.Indices;
              }
              if (*(int *)((pFVar23->GridIndirection).AllocatorInstance.Data +
                          (longlong)(int)uVar18 * 4) != 0) {
                uVar16 = 0;
                if ((int)uVar18 < (pFVar23->GridIndirection).ArrayNum) {
                  uVar16 = ~uVar18 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  FVar12.Indices = (int  [2])(*pcVar6)();
                  return (FClosestGuides)FVar12.Indices;
                }
                uVar18 = *(uint *)((pFVar23->GridIndirection).AllocatorInstance.Data +
                                  (longlong)(int)uVar18 * 4);
                lVar21 = (longlong)(int)uVar18;
                uVar16 = 0;
                if ((int)uVar18 < (pFVar23->RootIndices).ArrayNum) {
                  uVar16 = ~uVar18 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  FVar12.Indices = (int  [2])(*pcVar6)();
                  return (FClosestGuides)FVar12.Indices;
                }
                pFVar4 = (pFVar23->RootIndices).AllocatorInstance.Data;
                uVar14 = (ulonglong)*(int *)(pFVar4 + lVar21 * 0x10 + 8);
                puVar28 = *(uint **)(pFVar4 + lVar21 * 0x10);
                local_88 = CONCAT44(local_88._4_4_,*(int *)(pFVar4 + lVar21 * 0x10 + 8));
                local_a0 = puVar28 + uVar14;
                while( true ) {
                  puVar8 = local_a0;
                  if (*(int *)(pFVar4 + lVar21 * 0x10 + 8) != (int)uVar14) {
                    local_bb = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_bb);
                  }
                  pFVar23 = local_80;
                  if (puVar28 == puVar8) break;
                  uVar18 = *puVar28;
                  lVar22 = (longlong)(int)uVar18;
                  uVar16 = 0;
                  if ((int)uVar18 < (int)param_4->_padding_) {
                    uVar16 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    FVar12.Indices = (int  [2])(*pcVar6)();
                    return (FClosestGuides)FVar12.Indices;
                  }
                  lVar5 = param_4->_padding_;
                  fVar30 = *(float *)(pFVar3 + lVar20 * 0x24) - *(float *)(lVar5 + lVar22 * 0x24);
                  fVar31 = *(float *)(pFVar3 + lVar20 * 0x24 + 4) -
                           *(float *)(lVar5 + 4 + lVar22 * 0x24);
                  fVar29 = *(float *)(pFVar3 + lVar20 * 0x24 + 8) -
                           *(float *)(lVar5 + 8 + lVar22 * 0x24);
                  fVar30 = SQRT(fVar31 * fVar31 + fVar30 * fVar30 + fVar29 * fVar29);
                  fVar29 = local_f0.KMinMetrics[0];
                  uVar16 = local_f0.KClosestGuideIndices[0];
                  if ((fVar30 < local_f0.KMinMetrics[1]) &&
                     (local_f0.KMinMetrics[1] = fVar30, local_f0.KClosestGuideIndices[1] = uVar18,
                     fVar30 < local_f0.KMinMetrics[0])) {
                    fVar29 = fVar30;
                    local_f0.KMinMetrics[1] = local_f0.KMinMetrics[0];
                    uVar16 = uVar18;
                    local_f0.KClosestGuideIndices[1] = local_f0.KClosestGuideIndices[0];
                  }
                  local_f0.KClosestGuideIndices[0] = uVar16;
                  local_f0.KMinMetrics[0] = fVar29;
                  uVar14 = local_88 & 0xffffffff;
                  puVar28 = puVar28 + 1;
                }
              }
            }
            this = pFVar23;
            if (bVar7) {
              uVar18 = (local_dc * (pFVar23->GridResolution).field0_0x0._s_0.Y + local_d0) *
                       (pFVar23->GridResolution).field0_0x0._s_0.X + local_b8;
              if (((uint)(pFVar23->GridIndirection).ArrayNum <= uVar18) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CellIndex < uint32(GridIndirection.Num())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                     ,0x483,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                FVar12.Indices = (int  [2])(*pcVar6)();
                return (FClosestGuides)FVar12.Indices;
              }
              uVar16 = 0;
              if ((int)uVar18 < (pFVar23->GridIndirection).ArrayNum) {
                uVar16 = ~uVar18 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                FVar12.Indices = (int  [2])(*pcVar6)();
                return (FClosestGuides)FVar12.Indices;
              }
              if (*(int *)((pFVar23->GridIndirection).AllocatorInstance.Data +
                          (longlong)(int)uVar18 * 4) != 0) {
                uVar16 = 0;
                if ((int)uVar18 < (pFVar23->GridIndirection).ArrayNum) {
                  uVar16 = ~uVar18 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  FVar12.Indices = (int  [2])(*pcVar6)();
                  return (FClosestGuides)FVar12.Indices;
                }
                uVar18 = *(uint *)((pFVar23->GridIndirection).AllocatorInstance.Data +
                                  (longlong)(int)uVar18 * 4);
                lVar21 = (longlong)(int)uVar18;
                uVar16 = 0;
                if ((int)uVar18 < (pFVar23->RootIndices).ArrayNum) {
                  uVar16 = ~uVar18 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  FVar12.Indices = (int  [2])(*pcVar6)();
                  return (FClosestGuides)FVar12.Indices;
                }
                pFVar4 = (pFVar23->RootIndices).AllocatorInstance.Data;
                uVar14 = (ulonglong)*(int *)(pFVar4 + lVar21 * 0x10 + 8);
                puVar28 = *(uint **)(pFVar4 + lVar21 * 0x10);
                local_88 = CONCAT44(local_88._4_4_,*(int *)(pFVar4 + lVar21 * 0x10 + 8));
                local_a0 = puVar28 + uVar14;
                while( true ) {
                  puVar8 = local_a0;
                  if (*(int *)(pFVar4 + lVar21 * 0x10 + 8) != (int)uVar14) {
                    local_ba[0] = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_ba);
                  }
                  this = local_80;
                  if (puVar28 == puVar8) break;
                  uVar18 = *puVar28;
                  lVar22 = (longlong)(int)uVar18;
                  uVar16 = 0;
                  if ((int)uVar18 < (int)param_4->_padding_) {
                    uVar16 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    FVar12.Indices = (int  [2])(*pcVar6)();
                    return (FClosestGuides)FVar12.Indices;
                  }
                  lVar5 = param_4->_padding_;
                  fVar30 = *(float *)(pFVar3 + lVar20 * 0x24) - *(float *)(lVar5 + lVar22 * 0x24);
                  fVar31 = *(float *)(pFVar3 + lVar20 * 0x24 + 4) -
                           *(float *)(lVar5 + 4 + lVar22 * 0x24);
                  fVar29 = *(float *)(pFVar3 + lVar20 * 0x24 + 8) -
                           *(float *)(lVar5 + 8 + lVar22 * 0x24);
                  fVar30 = SQRT(fVar31 * fVar31 + fVar30 * fVar30 + fVar29 * fVar29);
                  fVar29 = local_f0.KMinMetrics[0];
                  uVar16 = local_f0.KClosestGuideIndices[0];
                  if ((fVar30 < local_f0.KMinMetrics[1]) &&
                     (local_f0.KMinMetrics[1] = fVar30, local_f0.KClosestGuideIndices[1] = uVar18,
                     fVar30 < local_f0.KMinMetrics[0])) {
                    fVar29 = fVar30;
                    local_f0.KMinMetrics[1] = local_f0.KMinMetrics[0];
                    uVar16 = uVar18;
                    local_f0.KClosestGuideIndices[1] = local_f0.KClosestGuideIndices[0];
                  }
                  local_f0.KClosestGuideIndices[0] = uVar16;
                  local_f0.KMinMetrics[0] = fVar29;
                  uVar14 = local_88 & 0xffffffff;
                  puVar28 = puVar28 + 1;
                }
              }
            }
            local_e0 = local_e0 + 1;
            local_c8 = (uint *)((longlong)local_c8 - 1);
            uVar18 = (uint)local_90;
          } while (local_c8 != (uint *)0x0);
          uVar19 = uVar19 + 1;
          local_78 = local_78 - 1;
          local_c8 = (uint *)0x0;
          iVar27 = local_d8;
          iVar15 = local_a8;
          uVar18 = local_a4;
        } while (local_78 != 0);
      }
      aiVar17 = local_70;
    } while (((local_f0.KClosestGuideIndices[1] == 0xffffffff) || (local_d8 < 2)) &&
            (local_d8 = local_d8 + 1, local_d8 <= (int)this->MaxLookupDistance));
  }
  SelectFinalGuides((FClosestGuides *)aiVar17,local_68,&local_f0,param_7,param_8._0_1_);
  if ((*(int *)aiVar17 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClosestGuides.Indices[0] >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0x502,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    FVar12.Indices = (int  [2])(*pcVar6)();
    return (FClosestGuides)FVar12.Indices;
  }
  if ((*(int *)((longlong)aiVar17 + 4) < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClosestGuides.Indices[1] >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0x503,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    FVar12.Indices = (int  [2])(*pcVar6)();
    return (FClosestGuides)FVar12.Indices;
  }
  FVar12.Indices[0] = aiVar17[0];
  FVar12.Indices[1] = aiVar17[1];
  return (FClosestGuides)FVar12.Indices;
}

// InsertRoots @ 14e01d860

void __thiscall
HairInterpolationBuilder::FRootsGrid::InsertRoots
          (FRootsGrid *this,
          TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> *param_1,
          TVector<float> *param_2,TVector<float> *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint local_68 [12];
  
  piVar1 = &(this->GridIndirection).ArrayNum;
  iVar8 = (this->GridResolution).field0_0x0._s_0.Y;
  iVar7 = (this->GridResolution).field0_0x0._s_0.X;
  *(undefined8 *)&(this->MinBound).field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  (this->MinBound).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  uVar13 = iVar8 * iVar7 * (this->GridResolution).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->MaxBound).field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
  (this->MaxBound).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  iVar8 = *piVar1;
  if (iVar8 < (int)uVar13) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar13 - iVar8,&(this->GridIndirection).AllocatorInstance,piVar1,
                       &(this->GridIndirection).ArrayMax);
    memset((this->GridIndirection).AllocatorInstance.Data + (longlong)iVar7 * 4,0,
           (longlong)(int)(uVar13 - iVar8) << 2);
  }
  else {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if ((int)uVar13 < iVar8) {
      uVar15 = iVar8 - uVar13;
      if (((int)(uVar15 | uVar13) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar15 != 0) {
        pFVar11 = (this->GridIndirection).AllocatorInstance.Data + (longlong)(int)uVar13 * 4;
        iVar8 = (*piVar1 - uVar15) - uVar13;
        if (iVar8 != 0) {
          memmove(pFVar11,pFVar11 + (longlong)(int)uVar15 * 4,(longlong)iVar8 << 2);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&(this->GridIndirection).AllocatorInstance,*piVar1,
                   &(this->GridIndirection).ArrayMax);
      }
    }
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this->RootIndices).AllocatorInstance.Data,
             (this->RootIndices).ArrayNum);
  piVar2 = &(this->RootIndices).ArrayMax;
  (this->RootIndices).ArrayNum = 0;
  if ((this->RootIndices).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->RootIndices).AllocatorInstance,0,piVar2);
  }
  iVar8 = (this->RootIndices).ArrayNum;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RootIndices).AllocatorInstance,piVar2);
  }
  uVar15 = 0;
  pFVar11 = (this->RootIndices).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  (this->RootIndices).ArrayNum = iVar8 + 1;
  *(undefined8 *)pFVar11 = 0;
  *(undefined8 *)(pFVar11 + 8) = 0;
  fVar5 = __real_3f000000;
  uVar13 = param_1->ArrayNum;
  if (uVar13 != 0) {
    do {
      uVar18 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (this->GridResolution).field0_0x0._s_0.X;
      iVar3 = (this->GridResolution).field0_0x0._s_0.Y;
      lVar12 = (longlong)(int)uVar15;
      pFVar11 = (param_1->AllocatorInstance).Data;
      fVar19 = *(float *)(pFVar11 + lVar12 * 0x24) - (this->MinBound).field0_0x0._s_0.X;
      fVar20 = *(float *)(pFVar11 + lVar12 * 0x24 + 4) - (this->MinBound).field0_0x0._s_0.Y;
      fVar21 = *(float *)(pFVar11 + lVar12 * 0x24 + 8) - (this->MinBound).field0_0x0._s_0.Z;
      iVar9 = (this->GridResolution).field0_0x0._s_0.Z;
      iVar8 = iVar9 + -1;
      iVar17 = (int)ROUND(((fVar19 + fVar19) /
                          ((this->MaxBound).field0_0x0._s_0.X - (this->MinBound).field0_0x0._s_0.X))
                          * (float)iVar7 - fVar5) >> 1;
      iVar16 = (int)ROUND(((fVar20 + fVar20) /
                          ((this->MaxBound).field0_0x0._s_0.Y - (this->MinBound).field0_0x0._s_0.Y))
                          * (float)iVar3 - fVar5) >> 1;
      iVar9 = (int)ROUND(((fVar21 + fVar21) /
                         ((this->MaxBound).field0_0x0._s_0.Z - (this->MinBound).field0_0x0._s_0.Z))
                         * (float)iVar9 - fVar5) >> 1;
      if (iVar9 < iVar8) {
        iVar8 = iVar9;
      }
      iVar9 = iVar3 + -1;
      if (iVar16 < iVar3 + -1) {
        iVar9 = iVar16;
      }
      iVar16 = iVar7 + -1;
      if (iVar17 < iVar7 + -1) {
        iVar16 = iVar17;
      }
      iVar17 = 0;
      if (0 < iVar8) {
        iVar17 = iVar8;
      }
      iVar8 = 0;
      if (0 < iVar9) {
        iVar8 = iVar9;
      }
      iVar9 = 0;
      if (0 < iVar16) {
        iVar9 = iVar16;
      }
      uVar18 = (iVar8 + iVar17 * iVar3) * iVar7 + iVar9;
      if (((uint)(this->GridIndirection).ArrayNum <= uVar18) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CellIndex < uint32(GridIndirection.Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                             ,0x483,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar14 = ~uVar18 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar18 < *piVar1) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar12 = (longlong)(int)uVar18;
      if (*(int *)((this->GridIndirection).AllocatorInstance.Data + lVar12 * 4) == 0) {
        iVar8 = (this->RootIndices).ArrayNum;
        uVar10 = 0;
        if ((int)uVar18 < *piVar1) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(int *)((this->GridIndirection).AllocatorInstance.Data + lVar12 * 4) = iVar8;
        iVar8 = (this->RootIndices).ArrayNum;
        if (iVar8 == (this->RootIndices).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->RootIndices).AllocatorInstance,
                             &(this->RootIndices).ArrayMax);
        }
        pFVar11 = (this->RootIndices).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        (this->RootIndices).ArrayNum = iVar8 + 1;
        *(undefined8 *)pFVar11 = 0;
        *(undefined8 *)(pFVar11 + 8) = 0;
      }
      uVar10 = 0;
      if ((int)uVar18 < *piVar1) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar18 = *(uint *)((this->GridIndirection).AllocatorInstance.Data + lVar12 * 4);
      uVar10 = 0;
      if ((int)uVar18 < (this->RootIndices).ArrayNum) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (this->RootIndices).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10;
      local_68[0] = uVar15;
      if (((*(uint **)&pFVar11->field_0x0 <= local_68) &&
          (local_68 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
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
      iVar8 = *(int *)&pFVar11[8].field_0x0;
      if (iVar8 == *(int *)(pFVar11 + 0xc)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar8 + 1;
      uVar15 = uVar15 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar8 * 4) = local_68[0];
    } while (uVar15 < uVar13);
  }
  return;
}

